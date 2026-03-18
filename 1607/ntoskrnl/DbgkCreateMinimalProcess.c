/*
 * XREFs of DbgkCreateMinimalProcess @ 0x14057E530
 * Callers:
 *     PsCreateMinimalProcess @ 0x14057E30C (PsCreateMinimalProcess.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     memset @ 0x1401715C0 (memset.c)
 *     DbgkpSendApiMessage @ 0x14061A30C (DbgkpSendApiMessage.c)
 */

__int64 __fastcall DbgkCreateMinimalProcess(ULONG_PTR BugCheckParameter1)
{
  __int64 result; // rax
  _BYTE v3[48]; // [rsp+50h] [rbp-F8h] BYREF

  _InterlockedOr((volatile signed __int32 *)(BugCheckParameter1 + 772), 0x400001u);
  if ( *(_QWORD *)(BugCheckParameter1 + 1056) )
  {
    memset(v3, 0, sizeof(v3));
    return DbgkpSendApiMessage(BugCheckParameter1);
  }
  return result;
}
