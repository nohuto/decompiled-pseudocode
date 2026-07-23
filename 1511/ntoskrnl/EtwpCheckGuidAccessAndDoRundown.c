/*
 * XREFs of EtwpCheckGuidAccessAndDoRundown @ 0x1406651C8
 * Callers:
 *     EtwpEnableDisableSpecialGuids @ 0x1404CE8C8 (EtwpEnableDisableSpecialGuids.c)
 * Callees:
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     EtwpCheckGuidAccess @ 0x1404CEC4C (EtwpCheckGuidAccess.c)
 *     EtwpCheckLoggerAccessAndDoRundown @ 0x140665298 (EtwpCheckLoggerAccessAndDoRundown.c)
 *     EtwpLogKernelTraceRundown @ 0x140665544 (EtwpLogKernelTraceRundown.c)
 */

__int64 __fastcall EtwpCheckGuidAccessAndDoRundown(__int64 a1, unsigned int a2, unsigned __int16 **a3, char a4)
{
  __int64 result; // rax
  __int64 v8; // r8
  unsigned int v9; // ebx
  int v10; // eax
  unsigned int v11; // esi
  __int64 v12; // r8
  _BYTE v13[32]; // [rsp+20h] [rbp-58h] BYREF

  result = EtwpCheckGuidAccess(&SystemTraceControlGuid.Data1, 0x80u, 0LL);
  v9 = result;
  if ( (int)result >= 0 )
  {
    v10 = *((_DWORD *)a3 + 3);
    if ( v10 == -2147483647 )
    {
      v11 = *((_DWORD *)a3 + 2);
      if ( v11 <= 0x20 && (v11 & 3) == 0 )
      {
        memset(v13, 0, sizeof(v13));
        memmove(v13, *a3, v11);
        LOBYTE(v12) = a4;
        EtwpLogKernelTraceRundown(a2, v13, v12);
        return v9;
      }
    }
    else
    {
      if ( v10 != -2147483646 )
        return (unsigned int)-1073741811;
      if ( *((_DWORD *)a3 + 2) == 8 )
      {
        LOBYTE(v8) = a4;
        return (unsigned int)EtwpCheckLoggerAccessAndDoRundown(**a3, a2, v8);
      }
    }
    return 3221225485LL;
  }
  return result;
}
