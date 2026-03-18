/*
 * XREFs of ??0CDrawListPrimitiveBuilder@@QEAA@XZ @ 0x180097500
 * Callers:
 *     ??0CDrawingContext@@IEAA@PEAVCComposition@@@Z @ 0x18006C228 (--0CDrawingContext@@IEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     ?Clear@Mesh@@AEAAXXZ @ 0x1800906E0 (-Clear@Mesh@@AEAAXXZ.c)
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 */

CDrawListPrimitiveBuilder *__fastcall CDrawListPrimitiveBuilder::CDrawListPrimitiveBuilder(
        CDrawListPrimitiveBuilder *this)
{
  __int128 v2; // xmm1
  __int64 v3; // r10
  __int64 v4; // rcx
  CDrawListPrimitiveBuilder *result; // rax
  _OWORD v6[2]; // [rsp+20h] [rbp-28h] BYREF

  memset_0(v6, 0, sizeof(v6));
  v2 = v6[1];
  *(_OWORD *)this = v6[0];
  *((_OWORD *)this + 1) = v2;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 10) = (char *)this + 112;
  *((_QWORD *)this + 11) = (char *)this + 112;
  *((_DWORD *)this + 24) = 4;
  *(_QWORD *)((char *)this + 100) = 4LL;
  *((_DWORD *)this + 36) = 0;
  *((_DWORD *)this + 86) |= 4u;
  *((_QWORD *)this + 19) = 0LL;
  *((_DWORD *)this + 40) = 0;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  Mesh::Clear((CDrawListPrimitiveBuilder *)((char *)this + 152));
  *((_QWORD *)this + 44) = v3;
  v4 = (unsigned int)(v3 + 30);
  *((_DWORD *)this + 94) = v4;
  *((_QWORD *)this + 45) = (char *)this + 392;
  *((_QWORD *)this + 46) = (char *)this + 392;
  *(_QWORD *)((char *)this + 380) = v4;
  *((_QWORD *)this + 289) = (char *)this + 2344;
  *((_QWORD *)this + 290) = (char *)this + 2344;
  result = this;
  *((_DWORD *)this + 582) = v4;
  *(_QWORD *)((char *)this + 2332) = v4;
  *((_DWORD *)this + 602) = v3;
  *((_BYTE *)this + 2414) = v3;
  return result;
}
