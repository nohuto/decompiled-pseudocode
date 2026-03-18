/*
 * XREFs of ?Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18015118C
 * Callers:
 *     ?IsValid@CSecondaryBitmap@@UEAA_NPEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x1801515A0 (-IsValid@CSecondaryBitmap@@UEAA_NPEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAV2@@.c)
 * Callees:
 *     ?SaveResult@CRegion@FastRegion@@IEAAJPEAVCWorkBuffer@Internal@2@@Z @ 0x180088130 (-SaveResult@CRegion@FastRegion@@IEAAJPEAVCWorkBuffer@Internal@2@@Z.c)
 *     ?SetupBuffer@CWorkBuffer@Internal@FastRegion@@QEAAJH@Z @ 0x180089308 (-SetupBuffer@CWorkBuffer@Internal@FastRegion@@QEAAJH@Z.c)
 *     ??1CWorkBuffer@Internal@FastRegion@@QEAA@XZ @ 0x180089388 (--1CWorkBuffer@Internal@FastRegion@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?EstimateSizeIntersect@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z @ 0x180150A58 (-EstimateSizeIntersect@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z.c)
 *     ?Intersect@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x18015124C (-Intersect@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z.c)
 */

__int64 __fastcall FastRegion::CRegion::Intersect(
        const struct FastRegion::Internal::CRgnData **this,
        const struct FastRegion::Internal::CRgnData **a2)
{
  const struct FastRegion::Internal::CRgnData *v4; // rdx
  const struct FastRegion::Internal::CRgnData *v6; // rcx
  int v7; // eax
  int v8; // edi
  int v9; // [rsp+20h] [rbp-128h] BYREF
  FastRegion::Internal::CRgnData *v10; // [rsp+28h] [rbp-120h]
  char v11; // [rsp+30h] [rbp-118h] BYREF

  v4 = *a2;
  if ( !*(_DWORD *)v4 )
  {
    *(_DWORD *)*this = 0;
    return 0LL;
  }
  v6 = *this;
  if ( !*(_DWORD *)v6 )
    return 0LL;
  v7 = FastRegion::Internal::CRgnData::EstimateSizeIntersect(v6, v4);
  v9 = 0;
  v10 = (FastRegion::Internal::CRgnData *)&v11;
  v8 = FastRegion::Internal::CWorkBuffer::SetupBuffer((FastRegion::Internal::CWorkBuffer *)&v9, v7);
  if ( v8 >= 0 )
  {
    FastRegion::Internal::CRgnData::Intersect(v10, *this, *a2);
    v8 = FastRegion::CRegion::SaveResult((FastRegion::CRegion *)this, (struct FastRegion::Internal::CWorkBuffer *)&v9);
  }
  FastRegion::Internal::CWorkBuffer::~CWorkBuffer((FastRegion::Internal::CWorkBuffer *)&v9);
  return (unsigned int)v8;
}
