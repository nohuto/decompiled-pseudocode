/*
 * XREFs of ?DxgkOpenAdapter@@YAJPEAU_D3DKMT_OPENADAPTER@@@Z @ 0x1C00B9380
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C0003184 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreateHandle@DXGADAPTER@@QEAAJPEAI@Z @ 0x1C007A1E4 (-CreateHandle@DXGADAPTER@@QEAAJPEAI@Z.c)
 *     DpiGetDxgAdapterSafe @ 0x1C00B9580 (DpiGetDxgAdapterSafe.c)
 */

__int64 __fastcall DxgkOpenAdapter(struct _D3DKMT_OPENADAPTER *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  struct DXGPROCESS *Current; // rdi
  __int64 v6; // rax
  int v7; // edi
  __int64 v8; // rcx
  __int64 v9; // r8
  int DxgAdapterSafe; // eax
  __int64 v11; // rax
  DXGADAPTER *v12; // rbx
  char *v13; // r15
  __int64 v14; // rcx
  int v15; // eax
  DXGADAPTER *v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rbp
  __int64 v19; // r12
  __int64 v20; // r14
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rax
  unsigned int v28; // [rsp+58h] [rbp+10h] BYREF
  DXGADAPTER *v29; // [rsp+60h] [rbp+18h] BYREF

  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 2001);
  Current = DXGPROCESS::GetCurrent();
  if ( Current )
  {
    DxgAdapterSafe = DpiGetDxgAdapterSafe(*(_QWORD *)a1, &v29);
    if ( DxgAdapterSafe >= 0 )
    {
      if ( _InterlockedAdd64((volatile signed __int64 *)v29 + 3, 1uLL) <= 0 )
      {
        v11 = WdLogNewEntry5_WdAssertion(v8);
        *(_QWORD *)(v11 + 24) = 1141LL;
        WdLogEvent5_WdAssertion(v11);
      }
      KeEnterCriticalRegion();
      v12 = v29;
      v13 = (char *)v29 + 104;
      ExAcquirePushLockSharedEx((char *)v29 + 104, 0LL);
      v15 = *((_DWORD *)v12 + 40);
      v16 = v29;
      if ( v15 != 1 )
        goto LABEL_19;
      if ( *((_BYTE *)v29 + 1917) )
        goto LABEL_19;
      v17 = *((_QWORD *)v29 + 249);
      if ( !v17 )
        goto LABEL_19;
      v18 = *((_QWORD *)Current + 9);
      v19 = *(_QWORD *)(v17 + 408);
      v20 = *(_QWORD *)(v17 + 400);
      if ( v18 )
        v18 = *(_QWORD *)(v18 + 8LL * (unsigned int)(*(_DWORD *)v20 - 1) + 16);
      if ( !v18 )
      {
        v21 = WdLogNewEntry5_WdAssertion(v14);
        *(_QWORD *)(v21 + 24) = 825LL;
        WdLogEvent5_WdAssertion(v21);
      }
      if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)(v20 + 8) + 728LL))(v19, v18) )
      {
        v26 = WdLogNewEntry5_WdEvent(v23, v22, v24, v25);
        *(_QWORD *)(v26 + 24) = v16;
        *(_QWORD *)(v26 + 32) = Current;
        WdLogEvent5_WdEvent(v26);
        DXGADAPTER::ReleaseReference(v16);
        v7 = -1073741790;
      }
      else
      {
LABEL_19:
        v7 = DXGADAPTER::CreateHandle(v16, &v28);
        DXGADAPTER::ReleaseReference(v16);
        if ( v7 >= 0 )
        {
          v7 = 0;
          *((_DWORD *)a1 + 2) = v28;
          *(_QWORD *)((char *)a1 + 12) = *(_QWORD *)((char *)v16 + 252);
        }
      }
      ExReleasePushLockSharedEx(v13, 0LL);
      KeLeaveCriticalRegion();
      DXGADAPTER::ReleaseReference(v16);
    }
    else
    {
      v7 = DxgAdapterSafe;
    }
  }
  else
  {
    v6 = WdLogNewEntry5_WdError(v4);
    v7 = -1073741811;
    *(_QWORD *)(v6 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v6);
  }
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v8, &EventProfilerExit, v9, 2001);
  return (unsigned int)v7;
}
