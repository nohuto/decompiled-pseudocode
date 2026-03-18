/*
 * XREFs of ?GetMoveRects@CDwmMetaRegion@@QEAAPEAUtagRECT@@PEAI@Z @ 0x1801318CC
 * Callers:
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAU_MARGINS@@H_N77PEAU_D3DCOLORVALUE@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x180026AF0 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z @ 0x18009BAEC (-HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

struct tagRECT *__fastcall CDwmMetaRegion::GetMoveRects(CDwmMetaRegion *this, unsigned int *a2, unsigned int *a3)
{
  char *Buffer; // rbx
  struct _RGNDATA **v4; // rdi
  int v7; // eax
  struct _RGNDATA *v8; // rax
  unsigned int nCount; // ecx

  Buffer = 0LL;
  v4 = (struct _RGNDATA **)((char *)this + 32);
  *a2 = 0;
  if ( *((_QWORD *)this + 4) )
  {
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, struct _RGNDATA *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      *v4);
    *v4 = 0LL;
  }
  v7 = HrgnToRgnData(*((HRGN *)this + 3), v4, a3);
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x20Bu);
  }
  else
  {
    v8 = *v4;
    if ( *v4 )
    {
      nCount = v8->rdh.nCount;
      if ( nCount )
      {
        Buffer = v8->Buffer;
        *a2 = nCount;
      }
    }
  }
  return (struct tagRECT *)Buffer;
}
