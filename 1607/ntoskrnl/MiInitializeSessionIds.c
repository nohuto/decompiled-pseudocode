/*
 * XREFs of MiInitializeSessionIds @ 0x1407A66AC
 * Callers:
 *     MiInitSystem @ 0x1407A3AAC (MiInitSystem.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     ObCreateObjectType @ 0x14055257C (ObCreateObjectType.c)
 */

__int64 MiInitializeSessionIds()
{
  unsigned __int64 v0; // rbp
  _RTL_BITMAP *PoolWithTag; // rax
  char v2; // al
  __int64 result; // rax
  int v4; // [rsp+50h] [rbp+0h] BYREF

  v0 = (unsigned __int64)&v4 & 0xFFFFFFFFFFFFFFE0uLL;
  qword_140326918 = 0LL;
  *(_DWORD *)v0 = 1048590;
  *(_QWORD *)(v0 + 8) = L"Session";
  PoolWithTag = (_RTL_BITMAP *)ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x20206D4Du);
  qword_140327860 = PoolWithTag;
  if ( !PoolWithTag
    || (PoolWithTag->SizeOfBitMap = 128, PoolWithTag->Buffer = &PoolWithTag[1].SizeOfBitMap, !qword_140327860) )
  {
    KeBugCheckEx(0x7Du, qword_140324E10, qword_140324E00, BugCheckParameter3, 0x200uLL);
  }
  memset(
    qword_140327860->Buffer,
    0,
    4 * (((qword_140327860->SizeOfBitMap & 0x1F) != 0) + (qword_140327860->SizeOfBitMap >> 5)));
  qword_140326960 = 0LL;
  memset((void *)(v0 + 16), 0, 0x78uLL);
  v2 = *(_BYTE *)(((unsigned __int64)&v4 & 0xFFFFFFFFFFFFFFE0uLL) + 0x12);
  *(_DWORD *)(((unsigned __int64)&v4 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18) = 0;
  *(_QWORD *)(((unsigned __int64)&v4 & 0xFFFFFFFFFFFFFFE0uLL) + 0x58) = MiSessionObjectDelete;
  *(_WORD *)(((unsigned __int64)&v4 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = 120;
  *(_BYTE *)(((unsigned __int64)&v4 & 0xFFFFFFFFFFFFFFE0uLL) + 0x12) = v2 | 0xC;
  *(_DWORD *)(((unsigned __int64)&v4 & 0xFFFFFFFFFFFFFFE0uLL) + 0x34) = 512;
  *(_DWORD *)(((unsigned __int64)&v4 & 0xFFFFFFFFFFFFFFE0uLL) + 0x3C) = 40;
  *(_OWORD *)(((unsigned __int64)&v4 & 0xFFFFFFFFFFFFFFE0uLL) + 0x1C) = MiSessionMapping;
  *(_DWORD *)(((unsigned __int64)&v4 & 0xFFFFFFFFFFFFFFE0uLL) + 0x2C) = 983043;
  result = ObCreateObjectType(
             (const UNICODE_STRING *)((unsigned __int64)&v4 & 0xFFFFFFFFFFFFFFE0uLL),
             v0 + 16,
             0LL,
             (__int64)&MmSessionObjectType);
  if ( (int)result < 0 )
    KeBugCheckEx(0x1Au, 0x1237uLL, (int)result, v0 + 16, 0LL);
  return result;
}
