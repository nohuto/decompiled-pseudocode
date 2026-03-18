/*
 * XREFs of DbgkCreateMinimalProcess @ 0x1405F0818
 * Callers:
 *     PspCreateMinimalProcess @ 0x1406431F4 (PspCreateMinimalProcess.c)
 * Callees:
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     DbgkpSendApiMessage @ 0x1405F071C (DbgkpSendApiMessage.c)
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
