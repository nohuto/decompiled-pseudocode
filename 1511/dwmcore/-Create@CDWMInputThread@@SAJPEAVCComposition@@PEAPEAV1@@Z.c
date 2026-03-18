/*
 * XREFs of ?Create@CDWMInputThread@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800A8B74
 * Callers:
 *     ?Initialize@CInputManager@@IEAAJXZ @ 0x1800A6F18 (-Initialize@CInputManager@@IEAAJXZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??0CMmcssTask@@QEAA@XZ @ 0x1800A4E04 (--0CMmcssTask@@QEAA@XZ.c)
 *     ?Initialize@CDWMInputThread@@AEAAJXZ @ 0x1800A6394 (-Initialize@CDWMInputThread@@AEAAJXZ.c)
 */

__int64 __fastcall CDWMInputThread::Create(struct CComposition *a1, struct CDWMInputThread **a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  int v6; // eax
  unsigned int v7; // edi

  v4 = (_QWORD *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                   WPF::g_pProcessHeap,
                   128LL);
  v5 = v4;
  if ( v4 )
  {
    *v4 = a1;
    CMmcssTask::CMmcssTask((CMmcssTask *)(v4 + 4));
    v5[1] = 0LL;
    *((_BYTE *)v5 + 24) = 0;
    v5[2] = -1LL;
    v5[15] = -1LL;
  }
  else
  {
    v5 = 0LL;
  }
  if ( v5 )
  {
    v6 = CDWMInputThread::Initialize((CDWMInputThread *)v5);
    v7 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x35u);
    else
      *a2 = (struct CDWMInputThread *)v5;
  }
  else
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x33u);
  }
  return v7;
}
