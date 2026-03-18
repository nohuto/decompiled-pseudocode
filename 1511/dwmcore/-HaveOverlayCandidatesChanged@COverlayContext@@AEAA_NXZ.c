/*
 * XREFs of ?HaveOverlayCandidatesChanged@COverlayContext@@AEAA_NXZ @ 0x18007ECB0
 * Callers:
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCMILMatrix@@IPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOcclusionContext@@PEA_N444@Z @ 0x18007F750 (-EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCMILMatrix@@IPEAV-$TMi.c)
 * Callees:
 *     memcmp_0 @ 0x1800BC8BA (memcmp_0.c)
 *     ?IsEqualTo@CRgnData@Internal@FastRegion@@QEBA_NAEBV123@@Z @ 0x180111314 (-IsEqualTo@CRgnData@Internal@FastRegion@@QEBA_NAEBV123@@Z.c)
 */

char __fastcall COverlayContext::HaveOverlayCandidatesChanged(COverlayContext *this)
{
  char v1; // di
  unsigned int v3; // r14d
  unsigned int v4; // ebp
  __int64 v6; // rsi
  __int64 v7; // rcx
  __int64 v8; // rdx
  const struct FastRegion::Internal::CRgnData **v9; // rdx
  FastRegion::Internal::CRgnData *v10; // rcx
  const struct FastRegion::Internal::CRgnData *v11; // rdx

  v1 = 0;
  if ( *((_BYTE *)this + 846) )
  {
    v1 = 1;
    *((_BYTE *)this + 846) = 0;
  }
  v3 = *((_DWORD *)this + 40);
  if ( v3 != *((_DWORD *)this + 48)
    || *((_BYTE *)this + 843) != *((_BYTE *)this + 844)
    || memcmp_0((char *)this + 488, (char *)this + 552, 0x40uLL) )
  {
    return 1;
  }
  v4 = 0;
  if ( v3 )
  {
    v6 = *((_QWORD *)this + 17);
    while ( 1 )
    {
      v7 = 224LL * v4;
      if ( *(_BYTE *)(v7 + v6 + 200) )
        break;
      v8 = *((_QWORD *)this + 21);
      if ( *(_QWORD *)(v7 + v6 + 8) != *(_QWORD *)(v8 + v7 + 8)
        || *(_QWORD *)(v7 + v6 + 24) != *(_QWORD *)(v8 + v7 + 24)
        || *(_BYTE *)(v7 + v6 + 161) != *(_BYTE *)(v8 + v7 + 161)
        || *(_BYTE *)(v7 + v6 + 162) != *(_BYTE *)(v8 + v7 + 162)
        || *(_BYTE *)(v7 + v6 + 163) != *(_BYTE *)(v8 + v7 + 163)
        || *(_BYTE *)(v7 + v6 + 165) != *(_BYTE *)(v8 + v7 + 165) )
      {
        break;
      }
      v9 = *(const struct FastRegion::Internal::CRgnData ***)(v8 + v7 + 152);
      if ( v9 )
        v9 += 2;
      v10 = *(FastRegion::Internal::CRgnData **)(*(_QWORD *)(v7 + v6 + 152) + 16LL);
      if ( *(_DWORD *)v10 )
      {
        v11 = *v9;
        if ( !*(_DWORD *)v11 || !FastRegion::Internal::CRgnData::IsEqualTo(v10, v11) )
          return 1;
      }
      else if ( *(_DWORD *)*v9 )
      {
        return 1;
      }
      if ( ++v4 >= v3 )
        return v1;
    }
    return 1;
  }
  return v1;
}
