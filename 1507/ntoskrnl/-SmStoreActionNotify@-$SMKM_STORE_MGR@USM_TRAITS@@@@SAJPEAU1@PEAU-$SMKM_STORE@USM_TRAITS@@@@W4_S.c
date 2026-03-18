/*
 * XREFs of ?SmStoreActionNotify@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_SM_STORE_ACTION_TYPE@@PEAX@Z @ 0x14014A2B8
 * Callers:
 *     ?StDmDeviceError@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@W4_ST_DEVICE_FAIL_TYPE@1@J@Z @ 0x140253A44 (-StDmDeviceError@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@W4_ST_DEVICE_FAIL_TYPE@1@J@Z.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     ?SmEmptyStore@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@KK@Z @ 0x140251834 (-SmEmptyStore@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@KK@Z.c)
 *     ?SmStoreTerminate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_ST_ETW_TERMINATION_REASON@@J@Z @ 0x14025987C (-SmStoreTerminate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@W4_ST_E.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmStoreActionNotify(__int64 a1, __int64 a2, int a3)
{
  struct _EX_RUNDOWN_REF v3; // rbx
  unsigned int v4; // esi
  struct _EX_RUNDOWN_REF *v5; // r14
  struct _EX_RUNDOWN_REF *v6; // rdi
  unsigned __int64 v7; // rtt
  unsigned int v8; // eax
  struct _EX_RUNDOWN_REF *v10; // rcx
  unsigned __int64 v11; // rtt
  unsigned __int64 v12; // rtt

  v3.Count = 0LL;
  if ( !a3 )
  {
    SMKM_STORE_MGR<SM_TRAITS>::SmEmptyStore(SmGlobals, *(_DWORD *)(a2 + 4480) & 0x1F, 1LL);
    return LODWORD(v3.Count);
  }
  if ( a3 == 1 )
  {
    v4 = *(_DWORD *)(a2 + 4480);
    v5 = (struct _EX_RUNDOWN_REF *)&SmGlobals[22 * (v4 & 0x1F)];
    v6 = v5 + 1;
    _m_prefetchw(&v5[1]);
    v7 = v5[1].Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v7 == _InterlockedCompareExchange64((volatile signed __int64 *)&v5[1], v7 + 2, v7)
      || ExfAcquireRundownProtection(v5 + 1) )
    {
      if ( (v5[3].Count & 0x7FF) == v4 >> 5 )
      {
        v3.Count = v5->Count;
      }
      else
      {
        _m_prefetchw(v6);
        v12 = v6->Count & 0xFFFFFFFFFFFFFFFEuLL;
        if ( v12 != _InterlockedCompareExchange64((volatile signed __int64 *)v6, v12 - 2, v12) )
          ExfReleaseRundownProtection(v5 + 1);
      }
    }
    v8 = v3.Count == 0 ? 0xC0000189 : 0;
LABEL_7:
    LODWORD(v3.Count) = v8;
    return LODWORD(v3.Count);
  }
  if ( a3 != 2 )
  {
    if ( (unsigned int)(a3 - 3) > 1 )
    {
      LODWORD(v3.Count) = -1073741811;
      return LODWORD(v3.Count);
    }
    LOBYTE(v3.Count) = a3 != 3;
    v8 = SMKM_STORE_MGR<SM_TRAITS>::SmStoreTerminate(SmGlobals, a2, LODWORD(v3.Count));
    goto LABEL_7;
  }
  v10 = (struct _EX_RUNDOWN_REF *)((char *)&unk_140350548 + 176 * (*(_DWORD *)(a2 + 4480) & 0x1F));
  _m_prefetchw(v10);
  v11 = v10->Count & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v11 != _InterlockedCompareExchange64((volatile signed __int64 *)v10, v11 - 2, v11) )
    ExfReleaseRundownProtection(v10);
  return LODWORD(v3.Count);
}
