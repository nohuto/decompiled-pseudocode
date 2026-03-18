/*
 * XREFs of _SetDisplayMapping @ 0x1C01C89F0
 * Callers:
 *     NtUserSetDisplayMapping @ 0x1C0219950 (NtUserSetDisplayMapping.c)
 * Callees:
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C00A0A68 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memset @ 0x1C015A380 (memset.c)
 *     FindMonitorForDigitizer @ 0x1C01C7750 (FindMonitorForDigitizer.c)
 */

__int64 __fastcall SetDisplayMapping(__int64 a1, __int64 a2)
{
  unsigned int v4; // edi
  __int64 v5; // rcx
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-3B8h] BYREF
  _DWORD v8[212]; // [rsp+40h] [rbp-3A8h] BYREF
  WCHAR SourceString[32]; // [rsp+390h] [rbp-58h] BYREF

  v4 = 0;
  memset(&v8[1], 0, 0x344uLL);
  v5 = *(_QWORD *)(a2 + 168);
  v8[0] = 840;
  if ( (unsigned int)DrvGetHdevName(v5, SourceString) )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    if ( (int)DrvEnumDisplayDevices(&DestinationString, 0LL, 0LL, v8, 1, 0) >= 0
      && (int)RtlStringCchCopyW((char *)(a1 + 872), 128LL, (char *)&v8[82]) >= 0 )
    {
      FindMonitorForDigitizer((struct tagHID_POINTER_DEVICE_INFO *)a1);
      return 1;
    }
  }
  return v4;
}
