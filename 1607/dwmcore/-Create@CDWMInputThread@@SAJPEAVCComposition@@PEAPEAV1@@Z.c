/*
 * XREFs of ?Create@CDWMInputThread@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800A9DE0
 * Callers:
 *     ?Initialize@CInputManager@@IEAAJXZ @ 0x1800A8230 (-Initialize@CInputManager@@IEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Initialize@CDWMInputThread@@AEAAJXZ @ 0x1800A7CD0 (-Initialize@CDWMInputThread@@AEAAJXZ.c)
 *     ??0CMmcssTask@@QEAA@XZ @ 0x1800A8014 (--0CMmcssTask@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
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
