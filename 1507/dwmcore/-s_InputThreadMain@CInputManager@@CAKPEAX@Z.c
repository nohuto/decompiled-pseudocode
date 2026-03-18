/*
 * XREFs of ?s_InputThreadMain@CInputManager@@CAKPEAX@Z @ 0x1800921E0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?UseDesktopInputStack@CInputManager@@AEAAHXZ @ 0x18008A750 (-UseDesktopInputStack@CInputManager@@AEAAHXZ.c)
 *     ?ProcessInput@CInputManager@@AEAAJXZ @ 0x180092C1C (-ProcessInput@CInputManager@@AEAAJXZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CInputManager::s_InputThreadMain(CInputManager *Parameter)
{
  unsigned int v2; // esi
  int SystemInputHost; // eax
  _QWORD *v4; // rax
  unsigned int v6; // [rsp+20h] [rbp-18h]

  v2 = 0;
  if ( CInputManager::UseDesktopInputStack(Parameter) )
  {
    SystemInputHost = CInputManager::ProcessInput(Parameter);
    v2 = SystemInputHost;
    if ( SystemInputHost >= 0 )
      goto LABEL_16;
    v6 = 416;
    goto LABEL_13;
  }
  if ( *((_QWORD *)Parameter + 51) )
    goto LABEL_15;
  v4 = (_QWORD *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                   WPF::g_pProcessHeap,
                   8LL);
  if ( v4 )
    *v4 = &CInputProxy::`vftable';
  *((_QWORD *)Parameter + 49) = v4;
  if ( !v4 )
  {
    v2 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x1A7u);
    goto LABEL_16;
  }
  SystemInputHost = CoreUICreate((char *)Parameter + 408);
  v2 = SystemInputHost;
  if ( SystemInputHost >= 0 )
  {
    SystemInputHost = CreateSystemInputHost(*((_QWORD *)Parameter + 49), (char *)Parameter + 400);
    v2 = SystemInputHost;
    if ( SystemInputHost < 0 )
    {
      v6 = 426;
      goto LABEL_13;
    }
LABEL_15:
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)Parameter + 51) + 224LL))(*((_QWORD *)Parameter + 51));
    goto LABEL_16;
  }
  v6 = 425;
LABEL_13:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, SystemInputHost, v6);
LABEL_16:
  if ( (v2 & 0x1FFF0000) == 0x70000 )
    return (unsigned __int16)v2;
  return v2;
}
