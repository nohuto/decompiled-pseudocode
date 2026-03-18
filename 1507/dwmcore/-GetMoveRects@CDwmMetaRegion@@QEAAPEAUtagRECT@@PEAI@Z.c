/*
 * XREFs of ?GetMoveRects@CDwmMetaRegion@@QEAAPEAUtagRECT@@PEAI@Z @ 0x1800FE618
 * Callers:
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAU_MARGINS@@H_N77PEAU_D3DCOLORVALUE@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x180079EF0 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z @ 0x180087A10 (-HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

struct tagRECT *__fastcall CDwmMetaRegion::GetMoveRects(CDwmMetaRegion *this, unsigned int *a2, unsigned int *a3)
{
  char *Buffer; // rsi
  struct _RGNDATA **v4; // r14
  __int64 v5; // r12
  int v8; // eax
  struct _RGNDATA *v9; // rax
  unsigned int nCount; // ecx

  Buffer = 0LL;
  v4 = (struct _RGNDATA **)((char *)this + 32);
  v5 = *((_QWORD *)this + 4);
  *a2 = 0;
  if ( v5 )
  {
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      v5);
    *v4 = 0LL;
  }
  v8 = HrgnToRgnData(*((HRGN *)this + 3), v4, a3);
  if ( v8 >= 0 )
  {
    v9 = *v4;
    if ( *v4 )
    {
      nCount = v9->rdh.nCount;
      if ( nCount )
      {
        Buffer = v9->Buffer;
        *a2 = nCount;
      }
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x20Bu);
  }
  return (struct tagRECT *)Buffer;
}
