/*
 * XREFs of ?SetSyncRefreshCountWaitTarget@CHwDisplayRenderTarget@@UEAAJI@Z @ 0x18008F730
 * Callers:
 *     ?SetSyncRefreshCountWaitTarget@CHwndRenderTarget@@UEAAJI@Z @ 0x1800748E0 (-SetSyncRefreshCountWaitTarget@CHwndRenderTarget@@UEAAJI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetSyncRefreshCountWaitTarget@CDWMSwapChain@@UEAAJI@Z @ 0x18007A600 (-SetSyncRefreshCountWaitTarget@CDWMSwapChain@@UEAAJI@Z.c)
 *     ?IsValid@CHwDisplayRenderTarget@@MEBA_NXZ @ 0x18008EE30 (-IsValid@CHwDisplayRenderTarget@@MEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwDisplayRenderTarget::SetSyncRefreshCountWaitTarget(CHwDisplayRenderTarget *this, unsigned int a2)
{
  char *v2; // rdi
  int v4; // ebx
  __int64 v6; // rax
  __int64 (__fastcall *v7)(CHwDisplayRenderTarget *); // rax
  CHwDisplayRenderTarget *v8; // rcx
  char IsValid; // al
  CDWMSwapChain *v10; // rcx
  __int64 (__fastcall *v11)(CDWMSwapChain *); // rax
  int refreshed; // eax

  v2 = (char *)this - 176;
  v4 = *((_DWORD *)this + 33);
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_1801AD850, 2u, v4, 0x55Du);
    goto LABEL_9;
  }
  v6 = *((_QWORD *)v2 + 23);
  if ( !v6 )
  {
    v4 = -2003304307;
    MilInstrumentationCheckHR(0x14u, &dword_1801AD850, 2u, -2003304307, 0x568u);
LABEL_19:
    *((_DWORD *)v2 + 77) = v4;
    MilInstrumentationCheckHR(0x14u, &dword_1801ACAC0, 1u, v4, 0x42Fu);
    return (unsigned int)v4;
  }
  v4 = *(_DWORD *)(v6 + 824);
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_1801AD850, 2u, v4, 0x564u);
    goto LABEL_9;
  }
  if ( v2[192] )
  {
    if ( !*((_QWORD *)v2 + 27)
      || ((v7 = *(__int64 (__fastcall **)(CHwDisplayRenderTarget *))(*(_QWORD *)v2 + 208LL),
           v8 = (CHwDisplayRenderTarget *)((char *)this - 176),
           v7 != CHwDisplayRenderTarget::IsValid)
        ? (IsValid = v7(v8))
        : (IsValid = CHwDisplayRenderTarget::IsValid(v8)),
          !IsValid) )
    {
      v4 = -2003304442;
      MilInstrumentationCheckHR(0x14u, &dword_1801AD850, 2u, -2003304442, 0x571u);
      goto LABEL_19;
    }
  }
LABEL_9:
  if ( v4 < 0 )
    goto LABEL_19;
  v10 = (CDWMSwapChain *)*((_QWORD *)this + 5);
  v11 = *(__int64 (__fastcall **)(CDWMSwapChain *))(*(_QWORD *)v10 + 56LL);
  if ( v11 == CDWMSwapChain::SetSyncRefreshCountWaitTarget )
    refreshed = CDWMSwapChain::SetSyncRefreshCountWaitTarget(v10);
  else
    refreshed = ((__int64 (__fastcall *)(CDWMSwapChain *, _QWORD))v11)(v10, a2);
  v4 = refreshed;
  if ( refreshed < 0 )
    MilInstrumentationCheckHR(0x14u, &dword_1801ACAC0, 1u, refreshed, 0x431u);
  return (unsigned int)v4;
}
