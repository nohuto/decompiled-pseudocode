/*
 * XREFs of ?CreateHandle@DXGADAPTER@@QEAAJPEAI@Z @ 0x1C007A1E4
 * Callers:
 *     ?EnumAdaptersCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C009DC20 (-EnumAdaptersCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?DxgkOpenAdapter@@YAJPEAU_D3DKMT_OPENADAPTER@@@Z @ 0x1C00B9380 (-DxgkOpenAdapter@@YAJPEAU_D3DKMT_OPENADAPTER@@@Z.c)
 *     ?DxgkOpenAdapterFromLuid@@YAJPEAU_D3DKMT_OPENADAPTERFROMLUID@@@Z @ 0x1C00B9FD0 (-DxgkOpenAdapterFromLuid@@YAJPEAU_D3DKMT_OPENADAPTERFROMLUID@@@Z.c)
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C0003184 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@I@Z @ 0x1C0094450 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@I@Z.c)
 */

__int64 __fastcall DXGADAPTER::CreateHandle(DXGADAPTER *this, unsigned int *a2)
{
  __int64 CurrentProcess; // rbx
  __int64 ProcessWin32Process; // rax
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // r8
  unsigned int v10; // eax
  __int64 v11; // rcx
  unsigned int v12; // ebx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  int v17; // r9d

  CurrentProcess = PsGetCurrentProcess();
  ProcessWin32Process = PsGetProcessWin32Process(CurrentProcess);
  if ( ProcessWin32Process )
  {
    v7 = *(_QWORD *)(ProcessWin32Process + 248);
  }
  else
  {
    v14 = WdLogNewEntry5_WdEvent();
    *(_QWORD *)(v14 + 24) = CurrentProcess;
    WdLogEvent5_WdEvent(v14);
    v7 = 0LL;
  }
  if ( !v7 )
  {
    v15 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v15 + 24) = 10196LL;
    WdLogEvent5_WdAssertion(v15);
  }
  if ( !a2 )
    return 3221225485LL;
  if ( _InterlockedAdd64((volatile signed __int64 *)this + 3, 1uLL) <= 0 )
  {
    v16 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v16 + 24) = 1141LL;
    WdLogEvent5_WdAssertion(v16);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v7 + 192, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v17 = *(_DWORD *)(v7 + 208);
      if ( v17 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
        Template_q(v8, &EventBlockThread, v9, v17);
    }
    ExAcquirePushLockExclusiveEx(v7 + 192, 0LL);
  }
  *(_QWORD *)(v7 + 200) = KeGetCurrentThread();
  v10 = HMGRTABLE::AllocHandle(v7 + 216, this, 1LL);
  *(_QWORD *)(v7 + 200) = 0LL;
  v11 = v7 + 192;
  v12 = v10;
  ExReleasePushLockExclusiveEx(v11, 0LL);
  KeLeaveCriticalRegion();
  *a2 = v12;
  if ( v12 )
    return 0LL;
  DXGADAPTER::ReleaseReference(this);
  return 3221225495LL;
}
