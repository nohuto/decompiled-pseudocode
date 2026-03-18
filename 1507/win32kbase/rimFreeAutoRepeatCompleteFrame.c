/*
 * XREFs of rimFreeAutoRepeatCompleteFrame @ 0x1C0071978
 * Callers:
 *     RIMUnregisterForInput @ 0x1C00719C0 (RIMUnregisterForInput.c)
 *     rimProcessAnyQueuedCompleteFrames @ 0x1C00854E4 (rimProcessAnyQueuedCompleteFrames.c)
 *     rimDispatchCompleteFrame @ 0x1C00C7D4C (rimDispatchCompleteFrame.c)
 *     rimProcessFrameBasedHidInput @ 0x1C00C7F10 (rimProcessFrameBasedHidInput.c)
 * Callees:
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C00766E0 (RawInputManagerDeviceObjectResolveHandle.c)
 *     WPP_RECORDER_SF_q @ 0x1C0077B00 (WPP_RECORDER_SF_q.c)
 */

void __fastcall rimFreeAutoRepeatCompleteFrame(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  int v5; // edx
  PVOID v6; // rdi
  char *v7; // rsi
  PVOID Object; // [rsp+40h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(a1 + 472);
  if ( v3 )
  {
    LOBYTE(a3) = 1;
    if ( (int)RawInputManagerDeviceObjectResolveHandle(*(_QWORD *)(v3 + 32), 3LL, a3, &Object) >= 0 )
    {
      v6 = Object;
      if ( Object )
        v7 = (char *)Object + 64;
      else
        v7 = 0LL;
      LOBYTE(v5) = 3;
      WPP_RECORDER_SF_q(
        WPP_GLOBAL_Control->DeviceExtension,
        v5,
        5,
        16,
        (__int64)&WPP_6c94d55ff2a354cdce5d424b790ce363_Traceguids,
        (char)v7);
      *((_DWORD *)v7 + 46) &= ~0x2000000u;
      ObfDereferenceObject(v6);
    }
    Win32FreePool();
    *(_QWORD *)(a1 + 472) = 0LL;
  }
}
