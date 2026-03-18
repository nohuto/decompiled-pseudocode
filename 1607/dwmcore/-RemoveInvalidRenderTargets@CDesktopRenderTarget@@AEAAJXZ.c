/*
 * XREFs of ?RemoveInvalidRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x18011E054
 * Callers:
 *     ?ReleaseResourcesForDisplayChange@CDesktopRenderTarget@@UEAAXXZ @ 0x18011E000 (-ReleaseResourcesForDisplayChange@CDesktopRenderTarget@@UEAAXXZ.c)
 * Callees:
 *     ?IsRenderTargetEquivalentTo@CDisplay@@QEBA_NPEBV1@@Z @ 0x180034634 (-IsRenderTargetEquivalentTo@CDisplay@@QEBA_NPEBV1@@Z.c)
 *     ?Release@CDisplaySet@@QEBAXXZ @ 0x18003653C (-Release@CDisplaySet@@QEBAXXZ.c)
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x180038AF8 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?RemoveRenderTarget@CDesktopRenderTarget@@AEAAXPEAVCHwndRenderTarget@@@Z @ 0x180076D08 (-RemoveRenderTarget@CDesktopRenderTarget@@AEAAXPEAVCHwndRenderTarget@@@Z.c)
 *     ?FindDDAHwndRenderTargetByDisplay@CDesktopRenderTarget@@AEAAPEAVCHwndRenderTarget@@PEBVCDisplay@@@Z @ 0x18011D8F0 (-FindDDAHwndRenderTargetByDisplay@CDesktopRenderTarget@@AEAAPEAVCHwndRenderTarget@@PEBVCDisplay@.c)
 */

__int64 __fastcall CDesktopRenderTarget::RemoveInvalidRenderTargets(CDesktopRenderTarget *this, __int64 a2, __int64 a3)
{
  const struct CDisplaySet **v3; // rdi
  CDisplaySet *v5; // rcx
  int CurrentDisplaySet; // eax
  unsigned int v7; // esi
  unsigned __int64 v8; // xmm1_8
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rbp
  __int64 v12; // r9
  __int64 v13; // r8
  __int64 v14; // r11
  const struct CDisplay *v15; // rdx
  int v16; // r9d
  unsigned int v17; // r10d
  struct CHwndRenderTarget *DDAHwndRenderTargetByDisplay; // rax

  v3 = (const struct CDisplaySet **)((char *)this + 360);
  v5 = (CDisplaySet *)*((_QWORD *)this + 45);
  if ( v5 )
  {
    CDisplaySet::Release(v5, a2, a3);
    *v3 = 0LL;
  }
  CurrentDisplaySet = CDisplayManager::GetCurrentDisplaySet(v5, v3);
  v7 = CurrentDisplaySet;
  if ( CurrentDisplaySet < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_1801C7290, 2u, CurrentDisplaySet, 0x16Fu);
  }
  else
  {
    v8 = _mm_srli_si128(*(__m128i *)((char *)*v3 + 24), 8).m128i_u64[0];
    v9 = HIDWORD(*((_QWORD *)*v3 + 3));
    *((float *)this + 92) = (float)(int)*((_QWORD *)*v3 + 3);
    *((float *)this + 93) = (float)(int)v9;
    *((float *)this + 94) = (float)(int)v8;
    v10 = *((_DWORD *)this + 46) - 1;
    v11 = v10;
    for ( *((float *)this + 95) = (float)SHIDWORD(v8); v11 >= 0; --v11 )
    {
      v12 = 0LL;
      v13 = *(_QWORD *)(*((_QWORD *)this + 20) + 8 * v11);
      if ( *((_DWORD *)*v3 + 18) )
      {
        v14 = *((_QWORD *)*v3 + 6);
        while ( !CDisplay::IsRenderTargetEquivalentTo(
                   *(CDisplay **)(v14 + 8 * v12),
                   *(const struct CDisplay **)(v13 + 152)) )
        {
          v12 = (unsigned int)(v16 + 1);
          if ( (unsigned int)v12 >= v17 )
            goto LABEL_9;
        }
        *(_BYTE *)(v13 + 761) = 1;
        DDAHwndRenderTargetByDisplay = CDesktopRenderTarget::FindDDAHwndRenderTargetByDisplay(this, v15);
        if ( DDAHwndRenderTargetByDisplay )
          *((_BYTE *)DDAHwndRenderTargetByDisplay + 761) = 1;
      }
      else
      {
LABEL_9:
        CDesktopRenderTarget::RemoveRenderTarget(this, (struct CHwndRenderTarget *)v13);
      }
    }
  }
  return v7;
}
