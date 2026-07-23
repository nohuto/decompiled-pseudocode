/*
 * XREFs of DbgkCreateMinimalProcess @ 0x14057E9DC
 * Callers:
 *     PsCreateMinimalProcess @ 0x14057E7B8 (PsCreateMinimalProcess.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     DbgkpSendApiMessage @ 0x14061A3C0 (DbgkpSendApiMessage.c)
 */

__int64 __fastcall DbgkCreateMinimalProcess(volatile signed __int32 *Object)
{
  __int64 result; // rax
  _BYTE v3[48]; // [rsp+50h] [rbp-F8h] BYREF

  _InterlockedOr(Object + 193, 0x400001u);
  if ( *((_QWORD *)Object + 132) )
  {
    memset(v3, 0, sizeof(v3));
    return DbgkpSendApiMessage((PVOID)Object);
  }
  return result;
}
