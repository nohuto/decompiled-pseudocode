/*
 * XREFs of EtwpCheckGuidAccessAndDoRundown @ 0x1406A6CD4
 * Callers:
 *     EtwpEnableDisableSpecialGuids @ 0x140491978 (EtwpEnableDisableSpecialGuids.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     EtwpCheckGuidAccess @ 0x140491D18 (EtwpCheckGuidAccess.c)
 *     EtwpCheckLoggerAccessAndDoRundown @ 0x1406A6DB8 (EtwpCheckLoggerAccessAndDoRundown.c)
 *     EtwpLogKernelTraceRundown @ 0x1406A7070 (EtwpLogKernelTraceRundown.c)
 */

__int64 __fastcall EtwpCheckGuidAccessAndDoRundown(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned __int16 **a4,
        char a5)
{
  __int64 result; // rax
  __int64 v9; // r9
  unsigned int v10; // ebx
  int v11; // eax
  unsigned int v12; // esi
  __int64 v13; // r8
  _BYTE v14[32]; // [rsp+20h] [rbp-48h] BYREF

  result = EtwpCheckGuidAccess(&SystemTraceControlGuid.Data1, 0x80u, 0LL);
  v10 = result;
  if ( (int)result >= 0 )
  {
    v11 = *((_DWORD *)a4 + 3);
    if ( v11 == -2147483647 )
    {
      v12 = *((_DWORD *)a4 + 2);
      if ( v12 <= 0x20 && (v12 & 3) == 0 )
      {
        memset(v14, 0, sizeof(v14));
        memmove(v14, *a4, v12);
        LOBYTE(v13) = a5;
        EtwpLogKernelTraceRundown(a3, v14, v13);
        return v10;
      }
    }
    else
    {
      if ( v11 != -2147483646 )
        return (unsigned int)-1073741811;
      if ( *((_DWORD *)a4 + 2) == 8 )
      {
        LOBYTE(v9) = a5;
        return (unsigned int)EtwpCheckLoggerAccessAndDoRundown(a1, **a4, a3, v9);
      }
    }
    return 3221225485LL;
  }
  return result;
}
