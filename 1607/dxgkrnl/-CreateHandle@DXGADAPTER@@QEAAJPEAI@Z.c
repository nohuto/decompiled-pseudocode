/*
 * XREFs of ?CreateHandle@DXGADAPTER@@QEAAJPEAI@Z @ 0x1C009FCAC
 * Callers:
 *     ?EnumAdaptersCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C007B6B0 (-EnumAdaptersCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?DxgkOpenAdapterFromLuid@@YAJPEAU_D3DKMT_OPENADAPTERFROMLUID@@@Z @ 0x1C00D5F10 (-DxgkOpenAdapterFromLuid@@YAJPEAU_D3DKMT_OPENADAPTERFROMLUID@@@Z.c)
 * Callees:
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C0009450 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0009830 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1C016A5A0 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 */

__int64 __fastcall DXGADAPTER::CreateHandle(DXGADAPTER *this, unsigned int *a2)
{
  __int64 CurrentProcess; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 ProcessDxgProcess; // rbx
  unsigned int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // ebx
  __int64 v12; // rax

  CurrentProcess = PsGetCurrentProcess(this);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v5);
  if ( !ProcessDxgProcess )
  {
    v12 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v12 + 24) = 2797LL;
    WdLogEvent5_WdAssertion(v12);
  }
  if ( !a2 )
    return 3221225485LL;
  _InterlockedIncrement64((volatile signed __int64 *)this + 3);
  DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(ProcessDxgProcess + 184));
  v8 = HMGRTABLE::AllocHandle(ProcessDxgProcess + 208, this, 1LL);
  *(_QWORD *)(ProcessDxgProcess + 192) = 0LL;
  v9 = ProcessDxgProcess + 184;
  v10 = v8;
  ExReleasePushLockExclusiveEx(v9, 0LL);
  KeLeaveCriticalRegion();
  *a2 = v10;
  if ( v10 )
    return 0LL;
  DXGADAPTER::ReleaseReferenceNoTracking(this);
  return 3221225495LL;
}
