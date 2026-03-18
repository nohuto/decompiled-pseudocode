/*
 * XREFs of VidSchSuspendResumeDevice @ 0x1C001D320
 * Callers:
 *     VidSchiSuspendResumeDevicesForPowerTransition @ 0x1C001AFD0 (VidSchiSuspendResumeDevicesForPowerTransition.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C002F6E0 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?SuspendResumeProcess@VIDMM_PROCESS@@QEAAXI_N@Z @ 0x1C005875C (-SuspendResumeProcess@VIDMM_PROCESS@@QEAAXI_N@Z.c)
 *     ?Resume@VIDMM_DEVICE@@QEAAJ_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C005936C (-Resume@VIDMM_DEVICE@@QEAAJ_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?SuspendSchedulerDevice@VIDMM_DEVICE@@IEAAXXZ @ 0x1C00596E0 (-SuspendSchedulerDevice@VIDMM_DEVICE@@IEAAXXZ.c)
 * Callees:
 *     VidSchiUpdateContextStatus @ 0x1C0002EC0 (VidSchiUpdateContextStatus.c)
 *     VidSchiUnwaitContext @ 0x1C001B160 (VidSchiUnwaitContext.c)
 */

void __fastcall VidSchSuspendResumeDevice(__int64 a1, char a2, char a3)
{
  __int64 v3; // rdi
  char v7; // bp
  _QWORD *v8; // rbx
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // r8
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-48h] BYREF

  v3 = *(_QWORD *)(a1 + 32);
  ExAcquireResourceExclusiveLite((PERESOURCE)(v3 + 2352), 1u);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v3 + 1872), &LockHandle);
  v7 = 0;
  v8 = *(_QWORD **)(a1 + 72);
  if ( v8 != (_QWORD *)(a1 + 72) )
  {
    do
    {
      v9 = (__int64)(v8 - 3);
      v10 = *((_DWORD *)v8 + 38);
      if ( a2 )
      {
        if ( (v10 & 0x100) == 0 && (*(_DWORD *)(v9 + 112) & 0x10) != 0 )
        {
          if ( a3 )
            *(_DWORD *)(v9 + 176) |= 0x800u;
          if ( (((unsigned __int8)(*(_DWORD *)(v9 + 176) >> 9) | *(_BYTE *)(v9 + 176)) & 2) != 0 )
          {
            v11 = 9LL;
            v12 = 3030LL;
          }
          else
          {
            v11 = 10LL;
            v12 = 3034LL;
          }
          VidSchiUpdateContextStatus(v9, (_QWORD *)v11, (__int64 *)v12);
        }
      }
      else if ( (v10 & 0x100) != 0 && (!a3 || (*(_DWORD *)(v9 + 176) & 0x800) != 0) )
      {
        *(_DWORD *)(v9 + 176) &= 0xFFFFF6FF;
        v7 |= VidSchiUnwaitContext(v9, 0xBFBu);
      }
      v8 = (_QWORD *)*v8;
    }
    while ( v8 != (_QWORD *)(a1 + 72) );
    if ( v7 )
    {
      *(_QWORD *)(v3 + 1328) = MEMORY[0xFFFFF78000000320];
      KeSetEvent((PRKEVENT)(v3 + 1296), 0, 0);
    }
  }
  if ( !a2 )
    *(_BYTE *)(a1 + 864) = 0;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( *(_BYTE *)(a1 + 865) )
    KeWaitForSingleObject((PVOID)(v3 + 2456), Executive, 0, 0, 0LL);
  ExReleaseResourceLite((PERESOURCE)(v3 + 2352));
}
