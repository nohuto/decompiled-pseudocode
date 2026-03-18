/*
 * XREFs of ?AddRef@CMesh2DEffect@@UEAAKXZ @ 0x1800C2A40
 * Callers:
 *     ?AddRef@CMesh2DEffect@@W7EAAKXZ @ 0x1800C2A50 (-AddRef@CMesh2DEffect@@W7EAAKXZ.c)
 *     ?AddRef@CMesh2DEffect@@WBA@EAAKXZ @ 0x1800C2A60 (-AddRef@CMesh2DEffect@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CMesh2DEffect::AddRef(CMesh2DEffect *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 6);
}
