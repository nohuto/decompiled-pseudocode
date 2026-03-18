/*
 * XREFs of PfSnIsHostingApplication @ 0x140444A10
 * Callers:
 *     PfSnBeginAppLaunch @ 0x14044404C (PfSnBeginAppLaunch.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     wcsstr @ 0x140173DA0 (wcsstr.c)
 */

char __fastcall PfSnIsHostingApplication(wchar_t *SubStr, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v6; // rsi
  struct _KTHREAD *CurrentThread; // rax
  char v8; // r14
  __int64 v9; // rdi
  __int64 v10; // r9
  const wchar_t *v11; // rcx
  wchar_t *v12; // rbx
  wchar_t *v13; // rax
  struct _KTHREAD *v14; // rdx
  __int16 v15; // ax
  wchar_t *v17; // rdx

  v4 = -1LL;
  v6 = -1LL;
  do
    ++v6;
  while ( SubStr[v6] );
  CurrentThread = KeGetCurrentThread();
  v8 = 0;
  --CurrentThread->KernelApcDisable;
  v9 = KeAbPreAcquire((ULONG_PTR)qword_1403534A8, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)qword_1403534A8, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(qword_1403534A8, v9, (ULONG_PTR)qword_1403534A8, v10);
  if ( v9 )
    *(_BYTE *)(v9 + 26) |= 1u;
  do
    ++v4;
  while ( Str[v4] );
  v11 = Str;
  v12 = (wchar_t *)((char *)&PfGlobals + 2 * v4 + 240);
  while ( 1 )
  {
    v13 = wcsstr(v11, SubStr);
    if ( !v13 || v13 < Str || v13 >= v12 )
      break;
    if ( v13 == Str || *(v13 - 1) == 44 )
    {
      v17 = &v13[(unsigned int)v6];
      if ( v17 == v12 || *v17 == 44 )
      {
        v8 = 1;
        break;
      }
    }
    v11 = v13 + 1;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)qword_1403534A8, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)qword_1403534A8);
  KeAbPostRelease((ULONG_PTR)qword_1403534A8);
  v14 = KeGetCurrentThread();
  v15 = v14->KernelApcDisable + 1;
  v14->KernelApcDisable = v15;
  if ( !v15
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v14->ApcState.ApcListHead[0].Flink != &v14->152
    && !v14->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return v8;
}
