/*
 * XREFs of ?PopCpuClip@CDrawingContext@@AEAAXXZ @ 0x18010740C
 * Callers:
 *     ?Pop@CDrawingContext@@UEAAJXZ @ 0x180067D80 (-Pop@CDrawingContext@@UEAAJXZ.c)
 * Callees:
 *     ?Pop@?$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAAHPEAUStackStateEntry@CDrawingContext@@@Z @ 0x180022168 (-Pop@-$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAAHPEAUStackStateEntry@C.c)
 *     ?DoesContain@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18004B848 (-DoesContain@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?GetTopGpuClipInScope@CScopedClipStack@@QEAAX_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180098510 (-GetTopGpuClipInScope@CScopedClipStack@@QEAAX_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UN.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     ?FreeCpuClipStackState@CScopedClipStack@@AEAAXPEAUCpuClipStackState@1@@Z @ 0x180111F44 (-FreeCpuClipStackState@CScopedClipStack@@AEAAXPEAUCpuClipStackState@1@@Z.c)
 *     ?HasAnyWorldAxisAlignedRectangleCpuClipsInScope@CScopedClipStack@@QEBA_NXZ @ 0x180111F7C (-HasAnyWorldAxisAlignedRectangleCpuClipsInScope@CScopedClipStack@@QEBA_NXZ.c)
 */

void __fastcall CDrawingContext::PopCpuClip(CDrawingContext *this)
{
  __int64 v2; // rcx
  char v3; // bl
  __int64 v4; // rcx
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF

  CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Pop((int *)this + 126, &v5);
  v2 = 120LL * (unsigned int)(*((_DWORD *)this + 442) - 1);
  v3 = *(_BYTE *)(v2 + *((_QWORD *)this + 218) + 112);
  CScopedClipStack::FreeCpuClipStackState(
    (CScopedClipStack *)v2,
    (struct CScopedClipStack::CpuClipStackState *)(*((_QWORD *)this + 218) + v2));
  --*((_DWORD *)this + 442);
  v4 = 10LL * (unsigned int)(*((_DWORD *)this + 234) - 1);
  --*(_DWORD *)(*((_QWORD *)this + 114) + 8 * v4 + 8);
  if ( v3 )
  {
    if ( *((_BYTE *)this + 6530)
      && !CScopedClipStack::HasAnyWorldAxisAlignedRectangleCpuClipsInScope((CDrawingContext *)((char *)this + 912)) )
    {
      *((_BYTE *)this + 6530) = 0;
    }
    CScopedClipStack::GetTopGpuClipInScope((__int64 *)this + 114, 1, (__int64)&v5);
    if ( !TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesContain((__int64)this + 220, (float *)&v5) )
      *((_BYTE *)this + 6529) = 1;
  }
}
