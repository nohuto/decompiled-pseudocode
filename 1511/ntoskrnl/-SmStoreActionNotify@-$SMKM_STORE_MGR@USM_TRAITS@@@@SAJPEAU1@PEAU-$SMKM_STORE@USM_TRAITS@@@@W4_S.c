/*
 * XREFs of ?SmStoreActionNotify@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_SM_STORE_ACTION_TYPE@@PEAX@Z @ 0x14011489C
 * Callers:
 *     ?StDmDeviceError@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@W4_ST_DEVICE_FAIL_TYPE@1@J@Z @ 0x140204798 (-StDmDeviceError@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@W4_ST_DEVICE_FAIL_TYPE@1@J@Z.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 *     ?SmEmptyStore@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@KK@Z @ 0x140202784 (-SmEmptyStore@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@KK@Z.c)
 *     ?SmStoreTerminate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_ST_ETW_TERMINATION_REASON@@J@Z @ 0x14020A408 (-SmStoreTerminate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@W4_ST_E.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmStoreActionNotify(__int64 a1, __int64 a2, int a3)
{
  unsigned __int64 Count; // rbx
  unsigned int v4; // esi
  struct _EX_RUNDOWN_REF *v5; // rdi
  unsigned int v6; // eax

  Count = 0LL;
  switch ( a3 )
  {
    case 0:
      SMKM_STORE_MGR<SM_TRAITS>::SmEmptyStore(&SmGlobals, *(_DWORD *)(a2 + 4480) & 0x1F, 1LL);
      return (unsigned int)Count;
    case 1:
      v4 = *(_DWORD *)(a2 + 4480);
      v5 = (struct _EX_RUNDOWN_REF *)((char *)&SmGlobals + 176 * (v4 & 0x1F));
      if ( ExAcquireRundownProtection(v5 + 1) )
      {
        if ( (v5[3].Count & 0x7FF) == v4 >> 5 )
          Count = v5->Count;
        else
          ExReleaseRundownProtection_0(v5 + 1);
      }
      v6 = Count == 0 ? 0xC0000189 : 0;
      break;
    case 2:
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&unk_1403027C8 + 22 * (*(_DWORD *)(a2 + 4480) & 0x1F));
      return (unsigned int)Count;
    default:
      if ( (unsigned int)(a3 - 3) > 1 )
      {
        LODWORD(Count) = -1073741811;
        return (unsigned int)Count;
      }
      LOBYTE(Count) = a3 != 3;
      v6 = SMKM_STORE_MGR<SM_TRAITS>::SmStoreTerminate(&SmGlobals, a2, (unsigned int)Count);
      break;
  }
  LODWORD(Count) = v6;
  return (unsigned int)Count;
}
