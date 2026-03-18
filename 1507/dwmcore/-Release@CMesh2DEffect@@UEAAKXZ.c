/*
 * XREFs of ?Release@CMesh2DEffect@@UEAAKXZ @ 0x18015B740
 * Callers:
 *     ?Release@CMesh2DEffect@@W7EAAKXZ @ 0x18009C2E0 (-Release@CMesh2DEffect@@W7EAAKXZ.c)
 *     ?Release@CMesh2DEffect@@WBA@EAAKXZ @ 0x18009C2F0 (-Release@CMesh2DEffect@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CMesh2DEffect::Release(CMesh2DEffect *this)
{
  return CMILRefCountBase::Release((CMesh2DEffect *)((char *)this + 16));
}
