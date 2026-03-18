/*
 * XREFs of rimProcessAnyQueuedCompleteFrames @ 0x1C00854E4
 * Callers:
 *     rimCompleteReads @ 0x1C0075A68 (rimCompleteReads.c)
 *     RIMOnPnpNotification @ 0x1C00C22E0 (RIMOnPnpNotification.c)
 *     rimDispatchAutoRepeatCompleteFrame @ 0x1C00C7C44 (rimDispatchAutoRepeatCompleteFrame.c)
 * Callees:
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     rimFreeAutoRepeatCompleteFrame @ 0x1C0071978 (rimFreeAutoRepeatCompleteFrame.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C00766E0 (RawInputManagerDeviceObjectResolveHandle.c)
 *     WPP_RECORDER_SF_q @ 0x1C0077B00 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qi @ 0x1C00C7B80 (WPP_RECORDER_SF_qi.c)
 *     rimDispatchCompleteFrame @ 0x1C00C7D4C (rimDispatchCompleteFrame.c)
 */

__int64 **__fastcall rimProcessAnyQueuedCompleteFrames(__int64 a1)
{
  __int64 **result; // rax
  __int64 *v3; // rcx
  __int64 v4; // rdx
  __int64 *v5; // rbp
  int v6; // edx
  int v7; // r8d
  char *v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // r8
  PVOID Object; // [rsp+50h] [rbp+8h] BYREF

  result = (__int64 **)(a1 + 696);
  if ( *result != (__int64 *)result && *(_BYTE *)(a1 + 728) )
  {
    v3 = *result;
    v4 = **result;
    if ( (__int64 **)(*result)[1] != result || *(__int64 **)(v4 + 8) != v3 )
      __fastfail(3u);
    *result = (__int64 *)v4;
    v5 = v3 - 1;
    *(_QWORD *)(v4 + 8) = result;
    v3[1] = (__int64)v3;
    *v3 = (__int64)v3;
    if ( (int)RawInputManagerDeviceObjectResolveHandle((void *)v3[3], 3u, *((_DWORD *)v3 + 10) == 0, &Object) < 0 )
    {
      WPP_RECORDER_SF_q(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        5u,
        0x14u,
        (__int64)&WPP_6c94d55ff2a354cdce5d424b790ce363_Traceguids,
        v5[4]);
      return (__int64 **)Win32FreePool();
    }
    else
    {
      v8 = (char *)Object;
      --*((_QWORD *)Object + 32);
      WPP_RECORDER_SF_qi(WPP_GLOBAL_Control->DeviceExtension, v6, v7, 19);
      rimFreeAutoRepeatCompleteFrame(a1, v9, v10);
      *(_BYTE *)(a1 + 728) = 0;
      rimDispatchCompleteFrame(a1, v8 + 64, v5);
      return (__int64 **)ObfDereferenceObject(v8);
    }
  }
  return result;
}
