/*
 * XREFs of VidSchSuspendResumeDevice @ 0x1C000F0F0
 * Callers:
 *     VidSchiSuspendResumeDevicesForPowerTransition @ 0x1C000EF98 (VidSchiSuspendResumeDevicesForPowerTransition.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0052D60 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?SuspendSchedulerDevice@VIDMM_DEVICE@@QEAAX_NI@Z @ 0x1C005BF6C (-SuspendSchedulerDevice@VIDMM_DEVICE@@QEAAX_NI@Z.c)
 *     ?ResumeSchedulerDevice@VIDMM_DEVICE@@QEAAX_N@Z @ 0x1C005C074 (-ResumeSchedulerDevice@VIDMM_DEVICE@@QEAAX_N@Z.c)
 *     ?SuspendResumeProcessGpuMmuContexts@VIDMM_PROCESS@@QEAAXI_N@Z @ 0x1C0090AF0 (-SuspendResumeProcessGpuMmuContexts@VIDMM_PROCESS@@QEAAXI_N@Z.c)
 * Callees:
 *     VidSchiUpdateContextStatus @ 0x1C000ABF0 (VidSchiUpdateContextStatus.c)
 *     VidSchiUnwaitContext @ 0x1C000D158 (VidSchiUnwaitContext.c)
 *     _guard_dispatch_icall_nop @ 0x1C0014AE0 (_guard_dispatch_icall_nop.c)
 *     VidSchSwitchFromDevice @ 0x1C0040FC0 (VidSchSwitchFromDevice.c)
 */

void __fastcall VidSchSuspendResumeDevice(__int64 a1, char a2, char a3, char a4)
{
  __int64 v4; // rdi
  __int64 v6; // rsi
  char v7; // r13
  struct _ERESOURCE *v8; // rbx
  __int64 v9; // r8
  __int64 v10; // r9
  char v11; // r15
  _QWORD *v12; // r14
  _QWORD *v13; // rbx
  int v14; // eax
  int v15; // eax
  __int64 v16; // rcx
  unsigned int v17; // r13d
  __int64 *v18; // r15
  __int64 *i; // rbx
  void (__fastcall *v20)(_QWORD, _QWORD); // rax
  char v21; // [rsp+30h] [rbp-58h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-50h] BYREF

  v4 = *(_QWORD *)(a1 + 32);
  v6 = a1;
  v7 = a3;
  v8 = (struct _ERESOURCE *)(v4 + 2672);
  ExAcquireResourceExclusiveLite((PERESOURCE)(v4 + 2672), 1u);
  if ( !*(_DWORD *)(v6 + 1240) )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 1856), &LockHandle);
    v11 = 0;
    v12 = *(_QWORD **)(v6 + 64);
    v21 = 0;
    if ( v12 != (_QWORD *)(v6 + 64) )
    {
      do
      {
        v13 = v12 - 3;
        v14 = *((_DWORD *)v12 + 38);
        if ( a2 )
        {
          if ( (v14 & 0x100) == 0 )
          {
            v15 = *((_DWORD *)v13 + 28);
            if ( (v15 & 0x10) != 0 && (!a4 || (v15 & 0x80u) != 0) )
            {
              if ( v7 )
                *((_DWORD *)v13 + 44) |= 0x800u;
              v16 = (__int64)(v12 - 3);
              if ( (((unsigned __int8)(*((_DWORD *)v13 + 44) >> 9) | *((_BYTE *)v13 + 176)) & 2) != 0 )
              {
                VidSchiUpdateContextStatus(v16, (_QWORD *)9, 3182LL, v10);
              }
              else
              {
                VidSchiUpdateContextStatus(v16, (_QWORD *)0xA, 3186LL, v10);
                v17 = *(_DWORD *)(v13[12] + 2788LL);
                if ( v17 != -1 )
                {
                  v18 = v13 + 83;
                  for ( i = (__int64 *)v13[83]; i != v18; i = (__int64 *)*i )
                  {
                    if ( (i[6] & 0x10) != 0 )
                    {
                      v20 = *(void (__fastcall **)(_QWORD, _QWORD))(v4 + 2864);
                      if ( v20 )
                        v20(*(_QWORD *)(v4 + 2896), v17);
                      *((_DWORD *)i + 12) &= ~0x10u;
                    }
                  }
                  v11 = v21;
                }
                v7 = a3;
              }
            }
          }
        }
        else if ( (v14 & 0x100) != 0 && (!v7 || (v13[22] & 0x800) != 0) )
        {
          *((_DWORD *)v13 + 44) &= 0xFFFFF6FF;
          v11 |= VidSchiUnwaitContext((__int64)(v12 - 3), 0xCACu, v9, v10);
          v21 = v11;
        }
        v12 = (_QWORD *)*v12;
      }
      while ( v12 != (_QWORD *)(v6 + 64) );
      v6 = a1;
      if ( v11 )
      {
        *(_QWORD *)(v4 + 1368) = MEMORY[0xFFFFF78000000320];
        KeSetEvent((PRKEVENT)(v4 + 1336), 0, 0);
      }
      v8 = (struct _ERESOURCE *)(v4 + 2672);
    }
    if ( !a2 )
      *(_BYTE *)(v6 + 988) = 0;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( *(_BYTE *)(v6 + 989) )
      KeWaitForSingleObject((PVOID)(v4 + 2776), Executive, 0, 0, 0LL);
    if ( a2 && *(_BYTE *)(v4 + 52) )
      VidSchSwitchFromDevice(v6);
  }
  ExReleaseResourceLite(v8);
}
