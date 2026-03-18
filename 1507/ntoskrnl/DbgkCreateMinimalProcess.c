/*
 * XREFs of DbgkCreateMinimalProcess @ 0x140669460
 * Callers:
 *     PspCreateMinimalProcess @ 0x1406C58D4 (PspCreateMinimalProcess.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     DbgkpSendApiMessage @ 0x140669324 (DbgkpSendApiMessage.c)
 */

__int64 __fastcall DbgkCreateMinimalProcess(PVOID Object)
{
  __int64 result; // rax
  _DWORD v3[68]; // [rsp+20h] [rbp-128h] BYREF

  _InterlockedOr((volatile signed __int32 *)Object + 193, 0x400001u);
  if ( *((_QWORD *)Object + 132) )
  {
    memset(&v3[12], 0, 0x30uLL);
    v3[0] = 6291512;
    v3[1] = 8;
    v3[10] = 2;
    return DbgkpSendApiMessage((_KPROCESS *)Object, 0, (__int64)v3);
  }
  return result;
}
