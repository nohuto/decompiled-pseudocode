/*
 * XREFs of OSNotifyCreateDevice @ 0x1C000BCD0
 * Callers:
 *     OSNotifyCreate @ 0x1C000B400 (OSNotifyCreate.c)
 *     ACPIBuildMissingChildren @ 0x1C0035788 (ACPIBuildMissingChildren.c)
 * Callees:
 *     AMLIGetParent @ 0x1C000B95C (AMLIGetParent.c)
 *     ACPIBuildDeviceRequest @ 0x1C000B9BC (ACPIBuildDeviceRequest.c)
 *     ACPIBuildDeviceExtension @ 0x1C000BA9C (ACPIBuildDeviceExtension.c)
 *     AMLIDereferenceHandleEx @ 0x1C000CE88 (AMLIDereferenceHandleEx.c)
 */

__int64 __fastcall OSNotifyCreateDevice(volatile signed __int32 *BugCheckParameter3, unsigned __int64 a2)
{
  ULONG_PTR v4; // rax
  ULONG_PTR v5; // rdi
  __int64 v6; // rdx
  int v7; // ebx
  volatile signed __int64 *v9; // [rsp+50h] [rbp+18h] BYREF

  v9 = 0LL;
  v4 = AMLIGetParent((__int64)BugCheckParameter3);
  v5 = v4;
  v6 = *(_QWORD *)(*(_QWORD *)v4 + 96LL);
  if ( !v6 )
    v6 = RootDeviceExtension;
  if ( *(_DWORD *)(v6 + 8) != 1599293264 )
    KeBugCheckEx(0xA5u, 0x16uLL, v4, (ULONG_PTR)BugCheckParameter3, 0LL);
  v7 = ACPIBuildDeviceExtension(BugCheckParameter3, v6, &v9);
  if ( !v9 )
    v7 = -1073741823;
  if ( v7 >= 0 )
  {
    _InterlockedOr64(v9, a2);
    v7 = ACPIBuildDeviceRequest((__int64)v9);
  }
  AMLIDereferenceHandleEx(v5);
  return (unsigned int)v7;
}
