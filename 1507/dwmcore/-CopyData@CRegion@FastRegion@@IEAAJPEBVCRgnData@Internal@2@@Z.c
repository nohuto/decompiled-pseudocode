/*
 * XREFs of ?CopyData@CRegion@FastRegion@@IEAAJPEBVCRgnData@Internal@2@@Z @ 0x1800883B8
 * Callers:
 *     ?SaveResult@CRegion@FastRegion@@IEAAJPEAVCWorkBuffer@Internal@2@@Z @ 0x180088130 (-SaveResult@CRegion@FastRegion@@IEAAJPEAVCWorkBuffer@Internal@2@@Z.c)
 *     ?Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800DEA0C (-Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 * Callees:
 *     ?EnsureDataBufferSize@CRegion@FastRegion@@IEAAJH@Z @ 0x180088418 (-EnsureDataBufferSize@CRegion@FastRegion@@IEAAJH@Z.c)
 *     ?Copy@CRgnData@Internal@FastRegion@@QEAAXAEBV123@@Z @ 0x180088CB4 (-Copy@CRgnData@Internal@FastRegion@@QEAAXAEBV123@@Z.c)
 */

__int64 __fastcall FastRegion::CRegion::CopyData(
        FastRegion::CRegion *this,
        const struct FastRegion::Internal::CRgnData *a2)
{
  char *v4; // r10
  __int64 result; // rax

  v4 = (char *)a2 + 8 * *(_DWORD *)a2 - 8;
  result = FastRegion::CRegion::EnsureDataBufferSize(
             this,
             *((_DWORD *)v4 + 4) + 8 * *(_DWORD *)a2 - *((_DWORD *)a2 + 4) - ((int)a2 + 12) + (int)v4 + 24);
  if ( (int)result >= 0 )
  {
    FastRegion::Internal::CRgnData::Copy(*(FastRegion::Internal::CRgnData **)this, a2);
    return 0LL;
  }
  return result;
}
