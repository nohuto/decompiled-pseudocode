/*
 * XREFs of ?RemoveInvalidRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x18008DA98
 * Callers:
 *     ?ReleaseResourcesForDisplayChange@CDesktopRenderTarget@@UEAAXXZ @ 0x18008DBD0 (-ReleaseResourcesForDisplayChange@CDesktopRenderTarget@@UEAAXXZ.c)
 * Callees:
 *     ?RemoveRenderTarget@CDesktopRenderTarget@@AEAAXPEAVCHwndRenderTarget@@@Z @ 0x18004967C (-RemoveRenderTarget@CDesktopRenderTarget@@AEAAXPEAVCHwndRenderTarget@@@Z.c)
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x180054C34 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ?Release@CDisplaySet@@QEBAXXZ @ 0x1800557B8 (-Release@CDisplaySet@@QEBAXXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?FindDDAHwndRenderTargetByDisplay@CDesktopRenderTarget@@AEAAPEAVCHwndRenderTarget@@PEBVCDisplay@@@Z @ 0x1800EB508 (-FindDDAHwndRenderTargetByDisplay@CDesktopRenderTarget@@AEAAPEAVCHwndRenderTarget@@PEBVCDisplay@.c)
 *     ?IsRenderTargetEquivalentTo@CDisplay@@QEBA_NPEBV1@@Z @ 0x180124B28 (-IsRenderTargetEquivalentTo@CDisplay@@QEBA_NPEBV1@@Z.c)
 */

__int64 __fastcall CDesktopRenderTarget::RemoveInvalidRenderTargets(CDesktopRenderTarget *this)
{
  const struct CDisplaySet **v1; // rdi
  CDisplaySet *v3; // rcx
  int CurrentDisplaySet; // eax
  unsigned int v5; // esi
  __int64 v6; // rax
  unsigned __int64 v7; // xmm1_8
  __int64 v8; // rbp
  __int64 v9; // r8
  __int64 v10; // r9
  const struct CDisplay *v11; // rdx
  __int64 v13; // r11
  int v14; // r8d
  unsigned int v15; // r10d
  struct CHwndRenderTarget *DDAHwndRenderTargetByDisplay; // rax

  v1 = (const struct CDisplaySet **)((char *)this + 192);
  v3 = (CDisplaySet *)*((_QWORD *)this + 24);
  if ( v3 )
  {
    CDisplaySet::Release(v3);
    *v1 = 0LL;
  }
  CurrentDisplaySet = CDisplayManager::GetCurrentDisplaySet(v3, v1);
  v5 = CurrentDisplaySet;
  if ( CurrentDisplaySet < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_180164678, 2u, CurrentDisplaySet, 0x141u);
  }
  else
  {
    v6 = *((_QWORD *)*v1 + 3);
    v7 = _mm_srli_si128(*(__m128i *)((char *)*v1 + 24), 8).m128i_u64[0];
    *((float *)this + 50) = (float)(int)v6;
    *((float *)this + 51) = (float)SHIDWORD(v6);
    *((float *)this + 52) = (float)(int)v7;
    LODWORD(v6) = *((_DWORD *)this + 28) - 1;
    v8 = (int)v6;
    for ( *((float *)this + 53) = (float)SHIDWORD(v7); v8 >= 0; --v8 )
    {
      v9 = 0LL;
      v10 = *(_QWORD *)(*((_QWORD *)this + 11) + 8 * v8);
      v11 = *(const struct CDisplay **)(v10 + 80);
      if ( *((_DWORD *)*v1 + 18) )
      {
        v13 = *((_QWORD *)*v1 + 6);
        while ( !CDisplay::IsRenderTargetEquivalentTo(*(CDisplay **)(v13 + 8 * v9), v11) )
        {
          v9 = (unsigned int)(v14 + 1);
          if ( (unsigned int)v9 >= v15 )
            goto LABEL_6;
        }
        *(_BYTE *)(v10 + 575) = 1;
        DDAHwndRenderTargetByDisplay = CDesktopRenderTarget::FindDDAHwndRenderTargetByDisplay(this, v11);
        if ( DDAHwndRenderTargetByDisplay )
          *((_BYTE *)DDAHwndRenderTargetByDisplay + 575) = 1;
      }
      else
      {
LABEL_6:
        CDesktopRenderTarget::RemoveRenderTarget(this, (struct CHwndRenderTarget *)v10);
      }
    }
  }
  return v5;
}
