/*
 * XREFs of OSNotifyCreateDevice @ 0x1C000B8EC
 * Callers:
 *     OSNotifyCreate @ 0x1C000B330 (OSNotifyCreate.c)
 *     ACPIBuildMissingChildren @ 0x1C0034B08 (ACPIBuildMissingChildren.c)
 * Callees:
 *     AMLIGetParent @ 0x1C000B88C (AMLIGetParent.c)
 *     AMLIDereferenceHandleEx @ 0x1C000C960 (AMLIDereferenceHandleEx.c)
 *     ACPIBuildDeviceExtension @ 0x1C001700C (ACPIBuildDeviceExtension.c)
 *     ACPIBuildDeviceRequest @ 0x1C0017CE8 (ACPIBuildDeviceRequest.c)
 */

__int64 __fastcall OSNotifyCreateDevice(ULONG_PTR BugCheckParameter3, unsigned __int64 a2)
{
  ULONG_PTR v4; // rax
  ULONG_PTR v5; // rdi
  __int64 v6; // rdx
  int v7; // ebx
  volatile signed __int64 *v9; // [rsp+50h] [rbp+18h] BYREF

  v9 = 0LL;
  v4 = AMLIGetParent(BugCheckParameter3);
  v5 = v4;
  v6 = *(_QWORD *)(*(_QWORD *)v4 + 96LL);
  if ( !v6 )
    v6 = RootDeviceExtension;
  if ( *(_DWORD *)(v6 + 8) != 1599293264 )
    KeBugCheckEx(0xA5u, 0x16uLL, v4, BugCheckParameter3, 0LL);
  v7 = ACPIBuildDeviceExtension(BugCheckParameter3, v6, &v9);
  if ( !v9 )
    v7 = -1073741823;
  if ( v7 >= 0 )
  {
    _InterlockedOr64(v9, a2);
    v7 = ACPIBuildDeviceRequest(v9);
  }
  AMLIDereferenceHandleEx(v5);
  return (unsigned int)v7;
}
