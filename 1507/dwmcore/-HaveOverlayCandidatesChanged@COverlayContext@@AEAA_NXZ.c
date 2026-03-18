/*
 * XREFs of ?HaveOverlayCandidatesChanged@COverlayContext@@AEAA_NXZ @ 0x18001279C
 * Callers:
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCMILMatrix@@IPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOcclusionContext@@PEA_N444@Z @ 0x180012F6C (-EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCMILMatrix@@IPEAV-$TMi.c)
 * Callees:
 *     memcmp_0 @ 0x180099BAE (memcmp_0.c)
 */

char __fastcall COverlayContext::HaveOverlayCandidatesChanged(COverlayContext *this)
{
  char v1; // di
  unsigned int v3; // esi
  unsigned int v4; // r9d
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8

  v1 = 0;
  if ( *((_BYTE *)this + 830) )
  {
    v1 = 1;
    *((_BYTE *)this + 830) = 0;
  }
  v3 = *((_DWORD *)this + 40);
  if ( v3 != *((_DWORD *)this + 48)
    || *((_BYTE *)this + 827) != *((_BYTE *)this + 828)
    || memcmp_0((char *)this + 232, (char *)this + 336, 0x68uLL) )
  {
    return 1;
  }
  v4 = 0;
  if ( v3 )
  {
    v6 = *((_QWORD *)this + 17);
    while ( 1 )
    {
      v7 = 240LL * v4;
      if ( *(_BYTE *)(v7 + v6 + 204) )
        break;
      v8 = *((_QWORD *)this + 21);
      if ( *(_QWORD *)(v7 + v6 + 8) != *(_QWORD *)(v7 + v8 + 8)
        || *(_QWORD *)(v7 + v6 + 24) != *(_QWORD *)(v7 + v8 + 24)
        || *(_BYTE *)(v7 + v6 + 153) != *(_BYTE *)(v7 + v8 + 153)
        || *(_BYTE *)(v7 + v6 + 154) != *(_BYTE *)(v7 + v8 + 154)
        || *(_BYTE *)(v7 + v6 + 155) != *(_BYTE *)(v7 + v8 + 155)
        || *(_BYTE *)(v7 + v6 + 157) != *(_BYTE *)(v7 + v8 + 157) )
      {
        break;
      }
      if ( ++v4 >= v3 )
        return v1;
    }
    return 1;
  }
  return v1;
}
