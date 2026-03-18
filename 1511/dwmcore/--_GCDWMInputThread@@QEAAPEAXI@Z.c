/*
 * XREFs of ??_GCDWMInputThread@@QEAAPEAXI@Z @ 0x18013F134
 * Callers:
 *     ??1CInputManager@@MEAA@XZ @ 0x18013F07C (--1CInputManager@@MEAA@XZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1CMmcssTask@@QEAA@XZ @ 0x1801045A0 (--1CMmcssTask@@QEAA@XZ.c)
 *     ?Stop@CDWMInputThread@@QEAAXXZ @ 0x180143480 (-Stop@CDWMInputThread@@QEAAXXZ.c)
 */

CDWMInputThread *__fastcall CDWMInputThread::`scalar deleting destructor'(CDWMInputThread *this)
{
  void *v2; // rcx
  void *v3; // rcx

  CDWMInputThread::Stop(this);
  v2 = (void *)*((_QWORD *)this + 2);
  if ( v2 != (void *)-1LL )
    CloseHandle(v2);
  v3 = (void *)*((_QWORD *)this + 15);
  if ( v3 != (void *)-1LL )
    CloseHandle(v3);
  *(_QWORD *)this = 0LL;
  CMmcssTask::~CMmcssTask((CDWMInputThread *)((char *)this + 32));
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CDWMInputThread *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    this);
  return this;
}
