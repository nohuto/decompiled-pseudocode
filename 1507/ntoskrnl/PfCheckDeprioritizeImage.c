/*
 * XREFs of PfCheckDeprioritizeImage @ 0x140444244
 * Callers:
 *     PfProcessCreateNotification @ 0x140443FBC (PfProcessCreateNotification.c)
 *     CcUnmapVacb @ 0x1404B2D44 (CcUnmapVacb.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 */

__int64 __fastcall PfCheckDeprioritizeImage(unsigned int a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  unsigned int v5; // edi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v7; // rbx
  __int64 v8; // r9
  __int64 v9; // rdx
  unsigned __int64 i; // r9
  _QWORD *v11; // rax
  struct _KTHREAD *v12; // rdx
  __int16 v13; // ax

  v4 = a1;
  v5 = 0;
  if ( !a1 )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = KeAbPreAcquire((ULONG_PTR)&qword_1403535C0, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_1403535C0, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&qword_1403535C0, v7, (ULONG_PTR)&qword_1403535C0, v8);
  if ( v7 )
    *(_BYTE *)(v7 + 26) |= 1u;
  if ( dword_1403535B4 )
  {
    v9 = 0LL;
    for ( i = (37
             * (BYTE6(v4)
              + 37
              * (BYTE5(v4)
               + 37
               * (BYTE4(v4)
                + 37 * (BYTE3(v4) + 37 * (BYTE2(v4) + 37 * (BYTE1(v4) + 37 * ((unsigned __int8)v4 + 11623883)))))))
             + HIBYTE(v4)) & (unsigned int)(dword_1403535B4 - 1); ; i = (unsigned int)(dword_1403535B4 - 1) & (v9 + i) )
    {
      v11 = (_QWORD *)(qword_1403535A8 + (i << dword_1403535B0));
      if ( !*v11 || *v11 == v4 )
        break;
      if ( !v9 )
      {
        v9 = 2654435761LL * v4;
        if ( ((-79 * (_BYTE)v4) & 1) == 0 )
          ++v9;
      }
    }
    if ( *v11 )
      v5 = 1;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_1403535C0, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_1403535C0);
  KeAbPostRelease((ULONG_PTR)&qword_1403535C0);
  v12 = KeGetCurrentThread();
  v13 = v12->KernelApcDisable + 1;
  v12->KernelApcDisable = v13;
  if ( !v13
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v12->ApcState.ApcListHead[0].Flink != &v12->152
    && !v12->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return v5;
}
