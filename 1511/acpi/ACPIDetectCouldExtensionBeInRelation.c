/*
 * XREFs of ACPIDetectCouldExtensionBeInRelation @ 0x1C0067FBC
 * Callers:
 *     ACPIDetectEjectDevices @ 0x1C00378E8 (ACPIDetectEjectDevices.c)
 *     ACPIDetectPdoMatch @ 0x1C0067D98 (ACPIDetectPdoMatch.c)
 *     ACPIDetectFilterMatch @ 0x1C0067DF8 (ACPIDetectFilterMatch.c)
 * Callees:
 *     ACPIGet @ 0x1C0001B00 (ACPIGet.c)
 *     ACPIDeviceHasFirmwareDependencies @ 0x1C001A6EC (ACPIDeviceHasFirmwareDependencies.c)
 *     __security_check_cookie @ 0x1C0024C50 (__security_check_cookie.c)
 *     memset @ 0x1C00251C0 (memset.c)
 *     ACPIInternalGetDeviceCapabilities @ 0x1C00681C0 (ACPIInternalGetDeviceCapabilities.c)
 *     ACPIMatchHardwareId @ 0x1C0071E58 (ACPIMatchHardwareId.c)
 */

__int64 __fastcall ACPIDetectCouldExtensionBeInRelation(_QWORD *a1, _DWORD *a2, char a3, char a4, _QWORD *a5)
{
  __int64 result; // rax
  char v8; // r14
  char v9; // r12
  int v10; // edi
  int v11; // r15d
  struct _DEVICE_OBJECT *v12; // rbx
  _QWORD *v13; // rcx
  UNICODE_STRING String2; // [rsp+58h] [rbp-49h] BYREF
  __int64 v15; // [rsp+68h] [rbp-39h] BYREF
  _DWORD v16[16]; // [rsp+70h] [rbp-31h] BYREF

  result = 0LL;
  v15 = 0LL;
  *(_QWORD *)&String2.Length = 0LL;
  String2.Buffer = 0LL;
  *a5 = 0LL;
  v8 = 0;
  v9 = 0;
  if ( a3 && (*a1 & 0x100000000000LL) == 0 || a4 && (*a1 & 0x200000000000LL) == 0 )
    return 3221225524LL;
  if ( a2 && *a2 )
  {
    if ( (*a1 & 0x2000100000000000LL) != 0 )
    {
      v8 = 1;
      ACPIGet(a1, 1380204895, -1878785022, 0LL, 0, 0LL, 0LL, (__int64)&v15, 0LL);
    }
    if ( (*a1 & 0xA00000000000LL) != 0 && !ACPIDeviceHasFirmwareDependencies((__int64)a1) )
    {
      result = ACPIGet(v13, 1145653343, 268960278, 0LL, 0, 0LL, 0LL, (__int64)&String2.Buffer, (__int64)&String2);
      if ( (int)result < 0 )
        return result;
      v9 = 1;
      String2.MaximumLength = String2.Length;
    }
    v10 = 0;
    if ( *a2 )
    {
      while ( 1 )
      {
        if ( !v9 || (int)ACPIMatchHardwareId(*(PDEVICE_OBJECT *)&a2[2 * v10 + 2], &String2) >= 0 )
        {
          if ( v8 )
          {
            v11 = v15;
            v12 = *(struct _DEVICE_OBJECT **)&a2[2 * v10 + 2];
            memset(v16, 0, sizeof(v16));
            if ( (int)ACPIInternalGetDeviceCapabilities(v12, v16) >= 0 && v11 == v16[2] )
              break;
          }
        }
        if ( (unsigned int)++v10 >= *a2 )
          return 0LL;
      }
      *a5 = *(_QWORD *)&a2[2 * v10 + 2];
    }
    return 0LL;
  }
  return result;
}
