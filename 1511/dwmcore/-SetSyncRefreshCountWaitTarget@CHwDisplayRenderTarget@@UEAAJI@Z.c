/*
 * XREFs of ?SetSyncRefreshCountWaitTarget@CHwDisplayRenderTarget@@UEAAJI@Z @ 0x180081520
 * Callers:
 *     ?SetSyncRefreshCountWaitTarget@CHwndRenderTarget@@UEAAJI@Z @ 0x18007CAF0 (-SetSyncRefreshCountWaitTarget@CHwndRenderTarget@@UEAAJI@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?SetSyncRefreshCountWaitTarget@CDWMSwapChain@@UEAAJI@Z @ 0x180073310 (-SetSyncRefreshCountWaitTarget@CDWMSwapChain@@UEAAJI@Z.c)
 *     ?IsValid@CHwDisplayRenderTarget@@MEBA_NXZ @ 0x180080700 (-IsValid@CHwDisplayRenderTarget@@MEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$CGuard@VCD3DDeviceLevel1@@@@QEAA@XZ @ 0x1800AF990 (--1-$CGuard@VCD3DDeviceLevel1@@@@QEAA@XZ.c)
 */

__int64 __fastcall CHwDisplayRenderTarget::SetSyncRefreshCountWaitTarget(CHwDisplayRenderTarget *this, unsigned int a2)
{
  char *v2; // rdi
  int v4; // ebx
  __int64 v6; // rax
  __int64 (__fastcall *v7)(CHwDisplayRenderTarget *); // rbp
  char IsValid; // al
  __int64 v9; // rdi
  __int64 (__fastcall *v10)(CDWMSwapChain *, unsigned int); // rbp
  int refreshed; // eax
  __int64 v14; // [rsp+50h] [rbp+8h] BYREF

  v2 = (char *)this - 176;
  v4 = *((_DWORD *)this + 31);
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_180170788, 2u, v4, 0x6ACu);
    goto LABEL_9;
  }
  v6 = *((_QWORD *)v2 + 20);
  if ( !v6 )
  {
    v4 = -2003304307;
    MilInstrumentationCheckHR(0x14u, &dword_180170788, 2u, -2003304307, 0x6B7u);
LABEL_23:
    *((_DWORD *)v2 + 75) = v4;
    MilInstrumentationCheckHR(0x14u, &dword_18016FE48, 1u, v4, 0x4A6u);
    return (unsigned int)v4;
  }
  v4 = *(_DWORD *)(v6 + 800);
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_180170788, 2u, v4, 0x6B3u);
    goto LABEL_9;
  }
  if ( v2[184] )
  {
    if ( !*((_QWORD *)v2 + 26)
      || ((v7 = *(__int64 (__fastcall **)(CHwDisplayRenderTarget *))(*(_QWORD *)v2 + 192LL),
           v7 != CHwDisplayRenderTarget::IsValid)
        ? (IsValid = v7((CHwDisplayRenderTarget *)((char *)this - 176)))
        : (IsValid = CHwDisplayRenderTarget::IsValid((CHwDisplayRenderTarget *)((char *)this - 176))),
          !IsValid) )
    {
      v4 = -2003304442;
      MilInstrumentationCheckHR(0x14u, &dword_180170788, 2u, -2003304442, 0x6C0u);
      goto LABEL_23;
    }
  }
LABEL_9:
  if ( v4 < 0 )
    goto LABEL_23;
  v9 = *((_QWORD *)this - 2);
  v14 = v9;
  ++*(_DWORD *)(v9 + 504);
  *(_DWORD *)(v9 + 508) = GetCurrentThreadId();
  v10 = *(__int64 (__fastcall **)(CDWMSwapChain *, unsigned int))(**((_QWORD **)this + 4) + 56LL);
  if ( v10 == CDWMSwapChain::SetSyncRefreshCountWaitTarget )
    refreshed = CDWMSwapChain::SetSyncRefreshCountWaitTarget(*((CDWMSwapChain **)this + 4), a2);
  else
    refreshed = v10(*((CDWMSwapChain **)this + 4), a2);
  v4 = refreshed;
  if ( refreshed < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_18016FE48, 1u, refreshed, 0x4ABu);
    CGuard<CD3DDeviceLevel1>::~CGuard<CD3DDeviceLevel1>(&v14);
  }
  else if ( (*(_DWORD *)(v9 + 504))-- == 1 )
  {
    *(_DWORD *)(v9 + 508) = 0;
  }
  return (unsigned int)v4;
}
