/*
 * XREFs of ?SendTopLevelWindowCommand@CTopLevelWindow@@QEAAJPEAUHWND__@@_N@Z @ 0x18002735C
 * Callers:
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x180031C38 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTopLevelWindow::SendTopLevelWindowCommand(CTopLevelWindow *this, HWND a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rax
  __int64 v5; // rdx
  int v6; // eax

  v2 = 0;
  if ( a2 )
  {
    v4 = *((_QWORD *)this + 2);
    if ( v4 )
      v5 = *(unsigned int *)(v4 + 24);
    else
      v5 = 0LL;
    v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, HWND, __int64))(**(_QWORD **)(v4 + 16) + 440LL))(
           *(_QWORD *)(v4 + 16),
           v5,
           a2,
           1LL);
    v2 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0xD6u);
  }
  return v2;
}
