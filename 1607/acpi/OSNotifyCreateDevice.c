/*
 * XREFs of OSNotifyCreateDevice @ 0x1C000CC5C
 * Callers:
 *     OSNotifyCreate @ 0x1C000C8D0 (OSNotifyCreate.c)
 *     ACPIBuildMissingChildren @ 0x1C0044404 (ACPIBuildMissingChildren.c)
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x1C0007348 (WPP_RECORDER_SF_qD.c)
 *     ACPIBuildDeviceRequest @ 0x1C000CD08 (ACPIBuildDeviceRequest.c)
 *     ACPIBuildDeviceExtension @ 0x1C000CDE8 (ACPIBuildDeviceExtension.c)
 *     AMLIGetParent @ 0x1C000D028 (AMLIGetParent.c)
 *     AMLIDereferenceHandleEx @ 0x1C0013578 (AMLIDereferenceHandleEx.c)
 */

__int64 __fastcall OSNotifyCreateDevice(ULONG_PTR BugCheckParameter3, unsigned __int64 a2)
{
  ULONG_PTR v3; // rdi
  ULONG_PTR v4; // rax
  ULONG_PTR v5; // rsi
  __int64 v6; // rdx
  int v7; // edx
  int v8; // ebx
  int v9; // eax
  int v11; // r9d
  char v12; // [rsp+30h] [rbp-18h]
  __int64 v13; // [rsp+60h] [rbp+18h] BYREF

  v13 = 0LL;
  v3 = BugCheckParameter3;
  v4 = AMLIGetParent(BugCheckParameter3);
  v5 = v4;
  v6 = *(_QWORD *)(*(_QWORD *)v4 + 104LL);
  if ( !v6 )
    v6 = RootDeviceExtension;
  if ( *(_DWORD *)(v6 + 16) != 1599293264 )
    KeBugCheckEx(0xA5u, 0x16uLL, v4, v3, 0LL);
  v8 = ACPIBuildDeviceExtension(v3, v6, &v13);
  if ( !v13 )
    v8 = -1073741823;
  if ( v8 < 0 )
  {
    v11 = 12;
    v12 = v8;
LABEL_12:
    LOBYTE(v7) = 2;
    WPP_RECORDER_SF_qD(
      WPP_GLOBAL_Control->DeviceExtension,
      v7,
      22,
      v11,
      (__int64)&WPP_d1586059086e37ef10da2d60ebfd83de_Traceguids,
      v3,
      v12);
    goto LABEL_8;
  }
  _InterlockedOr64((volatile signed __int64 *)(v13 + 8), a2);
  LOBYTE(v3) = v13;
  v9 = ACPIBuildDeviceRequest(v13);
  v8 = v9;
  if ( v9 < 0 )
  {
    v11 = 13;
    v12 = v9;
    goto LABEL_12;
  }
LABEL_8:
  AMLIDereferenceHandleEx(v5, 0LL);
  return (unsigned int)v8;
}
