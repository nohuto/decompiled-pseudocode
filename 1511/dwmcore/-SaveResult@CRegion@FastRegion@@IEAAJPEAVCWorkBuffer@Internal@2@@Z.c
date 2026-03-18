/*
 * XREFs of ?SaveResult@CRegion@FastRegion@@IEAAJPEAVCWorkBuffer@Internal@2@@Z @ 0x18006D9FC
 * Callers:
 *     ?Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800193EC (-Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18006DCA4 (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 * Callees:
 *     ?CopyData@CRegion@FastRegion@@IEAAJPEBVCRgnData@Internal@2@@Z @ 0x18006DE10 (-CopyData@CRegion@FastRegion@@IEAAJPEBVCRgnData@Internal@2@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x18006DF1C (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 */

__int64 __fastcall FastRegion::CRegion::SaveResult(
        FastRegion::CRegion *this,
        struct FastRegion::Internal::CWorkBuffer *a2)
{
  struct FastRegion::Internal::CWorkBuffer *v2; // rbp
  unsigned int v3; // edi
  int v6; // ebx

  v2 = (struct FastRegion::Internal::CWorkBuffer *)*((_QWORD *)a2 + 1);
  v3 = 0;
  if ( *(_DWORD *)v2 )
  {
    if ( (struct FastRegion::Internal::CWorkBuffer *)((char *)a2 + 16) == v2 )
    {
      return (unsigned int)FastRegion::CRegion::CopyData(
                             this,
                             *((const struct FastRegion::Internal::CRgnData **)a2 + 1));
    }
    else
    {
      v6 = *(_DWORD *)a2;
      *(_DWORD *)a2 = 0;
      *((_QWORD *)a2 + 1) = (char *)a2 + 16;
      FastRegion::CRegion::FreeMemory(this);
      *(_QWORD *)this = v2;
      *((_DWORD *)this + 2) = v6;
    }
  }
  else
  {
    **(_DWORD **)this = 0;
  }
  return v3;
}
