/*
 * XREFs of ??0CDrawListPrimitiveBuilder@@QEAA@XZ @ 0x180076EC4
 * Callers:
 *     ??0CDrawingContext@@IEAA@PEAVCComposition@@@Z @ 0x18002E5FC (--0CDrawingContext@@IEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     ?Clear@Mesh@@AEAAXXZ @ 0x18007416C (-Clear@Mesh@@AEAAXXZ.c)
 */

CDrawListPrimitiveBuilder *__fastcall CDrawListPrimitiveBuilder::CDrawListPrimitiveBuilder(
        CDrawListPrimitiveBuilder *this)
{
  __int64 v1; // r10
  __int64 v2; // rdx
  __int64 v3; // rcx
  CDrawListPrimitiveBuilder *result; // rax

  *((_DWORD *)this + 26) |= 4u;
  *(_QWORD *)this = 0LL;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  Mesh::Clear(this);
  v2 = (unsigned int)(v1 + 30);
  *(_DWORD *)(v3 + 128) = v2;
  *(_QWORD *)(v3 + 112) = v3 + 144;
  *(_QWORD *)(v3 + 120) = v3 + 144;
  *(_QWORD *)(v3 + 132) = v2;
  *(_QWORD *)(v3 + 2064) = v3 + 2096;
  *(_QWORD *)(v3 + 2072) = v3 + 2096;
  result = (CDrawListPrimitiveBuilder *)v3;
  *(_DWORD *)(v3 + 2080) = v2;
  *(_QWORD *)(v3 + 2084) = v2;
  *(_QWORD *)(v3 + 2160) = v1;
  return result;
}
