/*
 * XREFs of ?SetSyncRefreshCountWaitTarget@CHwDisplayRenderTarget@@UEAAJI@Z @ 0x180045490
 * Callers:
 *     ?SetSyncRefreshCountWaitTarget@CHwndRenderTarget@@UEAAJI@Z @ 0x18004B440 (-SetSyncRefreshCountWaitTarget@CHwndRenderTarget@@UEAAJI@Z.c)
 * Callees:
 *     ?SetSyncRefreshCountWaitTarget@CDWMSwapChain@@UEAAJI@Z @ 0x180042730 (-SetSyncRefreshCountWaitTarget@CDWMSwapChain@@UEAAJI@Z.c)
 *     ?IsValid@CHwDisplayRenderTarget@@MEBA_NXZ @ 0x180044CE0 (-IsValid@CHwDisplayRenderTarget@@MEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$CGuard@VCD3DDeviceLevel1@@@@QEAA@XZ @ 0x180083270 (--1-$CGuard@VCD3DDeviceLevel1@@@@QEAA@XZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
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
    MilInstrumentationCheckHR(0x14u, &dword_180164678, 2u, v4, 0x687u);
    goto LABEL_9;
  }
  v6 = *((_QWORD *)v2 + 20);
  if ( !v6 )
  {
    v4 = -2003304307;
    MilInstrumentationCheckHR(0x14u, &dword_180164678, 2u, -2003304307, 0x692u);
LABEL_22:
    *((_DWORD *)v2 + 75) = v4;
    MilInstrumentationCheckHR(0x14u, &dword_1801663C8, 1u, v4, 0x481u);
    return (unsigned int)v4;
  }
  v4 = *(_DWORD *)(v6 + 836);
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_180164678, 2u, v4, 0x68Eu);
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
      MilInstrumentationCheckHR(0x14u, &dword_180164678, 2u, -2003304442, 0x69Bu);
      goto LABEL_22;
    }
  }
LABEL_9:
  if ( v4 < 0 )
    goto LABEL_22;
  v9 = *((_QWORD *)this - 2);
  v14 = v9;
  ++*(_DWORD *)(v9 + 512);
  *(_DWORD *)(v9 + 516) = GetCurrentThreadId();
  v10 = *(__int64 (__fastcall **)(CDWMSwapChain *, unsigned int))(**((_QWORD **)this + 4) + 56LL);
  if ( v10 == CDWMSwapChain::SetSyncRefreshCountWaitTarget )
    refreshed = CDWMSwapChain::SetSyncRefreshCountWaitTarget(*((CDWMSwapChain **)this + 4), a2);
  else
    refreshed = v10(*((CDWMSwapChain **)this + 4), a2);
  v4 = refreshed;
  if ( refreshed < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_1801663C8, 1u, refreshed, 0x486u);
    CGuard<CD3DDeviceLevel1>::~CGuard<CD3DDeviceLevel1>(&v14);
  }
  else if ( (*(_DWORD *)(v9 + 512))-- == 1 )
  {
    *(_DWORD *)(v9 + 516) = 0;
  }
  return (unsigned int)v4;
}
