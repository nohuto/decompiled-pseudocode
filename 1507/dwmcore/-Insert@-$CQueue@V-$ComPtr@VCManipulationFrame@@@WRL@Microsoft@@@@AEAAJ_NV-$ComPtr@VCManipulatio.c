/*
 * XREFs of ?Insert@?$CQueue@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@AEAAJ_NV?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@Z @ 0x18012A1AC
 * Callers:
 *     ?ManipulationThreadCallback@CManipulationManager@@CAHPEAUtagMANIPULATIONINPUTINFO@@@Z @ 0x18012A360 (-ManipulationThreadCallback@CManipulationManager@@CAHPEAUtagMANIPULATIONINPUTINFO@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ??4?$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1801298EC (--4-$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@IEAAKXZ @ 0x18012A2B4 (-InternalRelease@-$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall CQueue<Microsoft::WRL::ComPtr<CManipulationFrame>>::Insert(__int64 a1, __int64 a2, __int64 *a3)
{
  unsigned int v4; // esi
  int v5; // r9d
  __int64 v6; // rax
  __int64 *v7; // rbx
  __int64 **v8; // rax
  unsigned int v10; // [rsp+20h] [rbp-18h]

  v4 = 0;
  EnterCriticalSection(&stru_180195D18);
  if ( byte_180195D14 )
  {
    v5 = -2147023781;
    v10 = 93;
LABEL_3:
    v4 = v5;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, v10);
    goto LABEL_12;
  }
  v6 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
         WPF::g_pProcessHeap,
         24LL);
  v7 = (__int64 *)v6;
  if ( v6 )
    *(_QWORD *)(v6 + 16) = 0LL;
  else
    v7 = 0LL;
  if ( !v7 )
  {
    v5 = -2147024882;
    v10 = 96;
    goto LABEL_3;
  }
  Microsoft::WRL::ComPtr<IInteractionResource>::operator=(v7 + 2, a3);
  v8 = (__int64 **)qword_180195D08;
  *v7 = (__int64)&CManipulationManager::s_InputQueue;
  v7[1] = (__int64)v8;
  if ( *v8 != &CManipulationManager::s_InputQueue )
    __fastfail(3u);
  *v8 = v7;
  ++dword_180195D10;
  qword_180195D08 = (__int64)v7;
LABEL_12:
  LeaveCriticalSection(&stru_180195D18);
  Microsoft::WRL::ComPtr<CManipulationFrame>::InternalRelease(a3);
  return v4;
}
