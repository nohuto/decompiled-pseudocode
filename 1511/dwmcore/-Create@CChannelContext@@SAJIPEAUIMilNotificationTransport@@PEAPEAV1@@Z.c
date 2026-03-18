/*
 * XREFs of ?Create@CChannelContext@@SAJIPEAUIMilNotificationTransport@@PEAPEAV1@@Z @ 0x1800A4700
 * Callers:
 *     ?OpenChannel@CComposition@@IEAAJI@Z @ 0x180095134 (-OpenChannel@CComposition@@IEAAJI@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??0CChannelContext@@IEAA@IPEAUIMilNotificationTransport@@@Z @ 0x1800A4338 (--0CChannelContext@@IEAA@IPEAUIMilNotificationTransport@@@Z.c)
 *     ??_ECChannelContext@@UEAAPEAXI@Z @ 0x1800A43C0 (--_ECChannelContext@@UEAAPEAXI@Z.c)
 */

__int64 __fastcall CChannelContext::Create(int a1, struct IMilNotificationTransport *a2, struct CChannelContext **a3)
{
  unsigned int v6; // ebp
  CChannelContext *v7; // rax
  CChannelContext *v8; // rsi
  __int64 v9; // rax
  void (__fastcall ***v10)(_QWORD); // rdi

  v6 = 0;
  v7 = (CChannelContext *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                     + 16LL))(
                            WPF::g_pProcessHeap,
                            72LL);
  if ( v7 )
    v8 = CChannelContext::CChannelContext(v7, a1, a2);
  else
    v8 = 0LL;
  if ( v8 )
  {
    v9 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
           WPF::g_pProcessHeap,
           72LL);
    v10 = (void (__fastcall ***)(_QWORD))v9;
    if ( v9 )
    {
      *(_QWORD *)v9 = &CMILRefCountBase::`vftable';
      *(_QWORD *)v9 = &CResourceTable::`vftable';
      *(_DWORD *)(v9 + 8) = 0;
      *(_DWORD *)(v9 + 28) = 0;
      *(_QWORD *)(v9 + 40) = 0LL;
      *(_QWORD *)(v9 + 16) = &HANDLE_TABLE::`vftable';
      *(_DWORD *)(v9 + 32) = 1;
      *(_DWORD *)(v9 + 24) = 16;
      *(_DWORD *)(v9 + 48) = a1;
      *(_QWORD *)(v9 + 64) = v9 + 56;
      *(_QWORD *)(v9 + 56) = v9 + 56;
    }
    else
    {
      v10 = 0LL;
    }
    if ( v10 )
    {
      (**v10)(v10);
      *((_QWORD *)v8 + 3) = v10;
      *a3 = v8;
      v8 = 0LL;
    }
    else
    {
      v6 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x27u);
    }
    if ( v8 )
      CChannelContext::`vector deleting destructor'(v8, 1);
  }
  else
  {
    v6 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x24u);
  }
  return v6;
}
