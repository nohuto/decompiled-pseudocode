/*
 * XREFs of ACPIDetectCouldExtensionBeInRelation @ 0x1C0086A04
 * Callers:
 *     ACPIDetectEjectDevices @ 0x1C0048368 (ACPIDetectEjectDevices.c)
 *     ACPIDetectPdoMatch @ 0x1C008691C (ACPIDetectPdoMatch.c)
 *     ACPIDetectFilterMatch @ 0x1C008697C (ACPIDetectFilterMatch.c)
 * Callees:
 *     ACPIGet @ 0x1C00015D0 (ACPIGet.c)
 *     ACPIDeviceHasFirmwareDependencies @ 0x1C00097B4 (ACPIDeviceHasFirmwareDependencies.c)
 *     ACPIMatchHardwareAddress @ 0x1C0086BCC (ACPIMatchHardwareAddress.c)
 *     ACPIMatchHardwareId @ 0x1C008F6BC (ACPIMatchHardwareId.c)
 */

__int64 __fastcall ACPIDetectCouldExtensionBeInRelation(__int64 *a1, unsigned int *a2, char a3, char a4, _QWORD *a5)
{
  __int64 result; // rax
  char v8; // si
  char v9; // r14
  unsigned int i; // ebx
  __int64 *v11; // rcx
  __int64 v12; // [rsp+50h] [rbp-20h] BYREF
  UNICODE_STRING String2; // [rsp+58h] [rbp-18h] BYREF

  result = 0LL;
  v12 = 0LL;
  *(_QWORD *)&String2.Length = 0LL;
  String2.Buffer = 0LL;
  *a5 = 0LL;
  v8 = 0;
  v9 = 0;
  if ( a3 && (a1[1] & 0x100000000000LL) == 0 || a4 && (a1[1] & 0x200000000000LL) == 0 )
    return 3221225524LL;
  if ( a2 && *a2 )
  {
    if ( (a1[1] & 0x2000100000000000LL) != 0 )
    {
      v8 = 1;
      ACPIGet(a1, 1380204895, -1878785022, 0LL, 0, 0LL, 0LL, (__int64)&v12, 0LL);
    }
    if ( (a1[1] & 0xA00000000000LL) != 0 && !ACPIDeviceHasFirmwareDependencies((__int64)a1) )
    {
      result = ACPIGet(v11, 1145653343, 268960278, 0LL, 0, 0LL, 0LL, (__int64)&String2.Buffer, (__int64)&String2);
      if ( (int)result < 0 )
        return result;
      v9 = 1;
      String2.MaximumLength = String2.Length;
    }
    for ( i = 0; i < *a2; ++i )
    {
      if ( !v9 || (int)ACPIMatchHardwareId(*(PDEVICE_OBJECT *)&a2[2 * i + 2], &String2) >= 0 )
      {
        if ( v8 )
          ACPIMatchHardwareAddress(*(PDEVICE_OBJECT *)&a2[2 * i + 2]);
      }
    }
    return 0LL;
  }
  return result;
}
