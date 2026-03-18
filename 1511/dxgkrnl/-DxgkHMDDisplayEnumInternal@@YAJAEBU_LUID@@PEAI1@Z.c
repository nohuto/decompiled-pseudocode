/*
 * XREFs of ?DxgkHMDDisplayEnumInternal@@YAJAEBU_LUID@@PEAI1@Z @ 0x1C008B3C4
 * Callers:
 *     ?DxgkHmdDisplayEnum@@YAJPEAU_D3DKMT_HMD_DISPLAY_ENUM@@@Z @ 0x1C008B4A0 (-DxgkHmdDisplayEnum@@YAJPEAU_D3DKMT_HMD_DISPLAY_ENUM@@@Z.c)
 * Callees:
 *     ?AcquireReference@DXGADAPTER@@QEAAXXZ @ 0x1C0002428 (-AcquireReference@DXGADAPTER@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C0003184 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003E1C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DmmGetAllHMDTargetIdForAdapter @ 0x1C008D904 (DmmGetAllHMDTargetIdForAdapter.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@@Z @ 0x1C00971C0 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@@Z.c)
 */

__int64 __fastcall DxgkHMDDisplayEnumInternal(const struct _LUID *a1, unsigned int *a2, unsigned int *a3)
{
  DXGGLOBAL *Global; // rax
  DXGADAPTER *v7; // rax
  __int64 v8; // rcx
  unsigned int AllHMDTargetIdForAdapter; // ebx
  DXGADAPTER *v10; // rdi
  __int64 v11; // rcx
  _QWORD *v13; // rax
  _QWORD *v14; // rax
  __int64 v15; // rax
  DXGADAPTER *v16; // [rsp+20h] [rbp-18h] BYREF
  char v17; // [rsp+28h] [rbp-10h]

  Global = DXGGLOBAL::GetGlobal((__int64)a1);
  v7 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a1);
  AllHMDTargetIdForAdapter = 0;
  v10 = v7;
  if ( v7 )
  {
    v16 = v7;
    DXGADAPTER::AcquireReference(v7);
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx((char *)v10 + 104, 0LL);
    v17 = 1;
    DXGADAPTER::ReleaseReference(v10);
    if ( *((_DWORD *)v10 + 40) == 1 )
    {
      if ( *((_QWORD *)v10 + 248) )
      {
        AllHMDTargetIdForAdapter = DmmGetAllHMDTargetIdForAdapter(v10, a2, a3);
        if ( AllHMDTargetIdForAdapter == -1073741789 )
        {
          v14 = (_QWORD *)WdLogNewEntry5_WdError(v11);
          v14[3] = a1->HighPart;
          v14[4] = a1->LowPart;
          v14[5] = -1073741789LL;
          WdLogEvent5_WdError(v14);
        }
        if ( *a2 > 0x10 )
        {
          v15 = WdLogNewEntry5_WdAssertion(v11);
          *(_QWORD *)(v15 + 24) = 7054LL;
          WdLogEvent5_WdAssertion(v15);
        }
      }
      else
      {
        *a2 = 0;
      }
    }
    else
    {
      AllHMDTargetIdForAdapter = -1073741130;
    }
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v16);
  }
  else
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdError(v8);
    AllHMDTargetIdForAdapter = -1073741811;
    v13[3] = a1->HighPart;
    v13[4] = a1->LowPart;
    v13[5] = -1073741811LL;
    WdLogEvent5_WdError(v13);
  }
  return AllHMDTargetIdForAdapter;
}
