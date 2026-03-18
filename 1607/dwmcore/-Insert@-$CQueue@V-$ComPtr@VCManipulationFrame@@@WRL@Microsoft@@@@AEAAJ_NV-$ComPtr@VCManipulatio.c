/*
 * XREFs of ?Insert@?$CQueue@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@AEAAJ_NV?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@Z @ 0x1800084FC
 * Callers:
 *     ?ManipulationThreadCallback@CManipulationManager@@CAHPEAUtagMANIPULATIONINPUTINFO@@@Z @ 0x1800B5BD0 (-ManipulationThreadCallback@CManipulationManager@@CAHPEAUtagMANIPULATIONINPUTINFO@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAccelerator@@@WRL@Microsoft@@IEAAKXZ @ 0x180007904 (-InternalRelease@-$ComPtr@UIAccelerator@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180106C20 (--4-$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 */

__int64 __fastcall CQueue<Microsoft::WRL::ComPtr<CManipulationFrame>>::Insert(__int64 a1, __int64 a2, __int64 *a3)
{
  unsigned int v4; // edi
  _QWORD *v5; // rbx
  __int64 v6; // r8
  __int64 v7; // r9
  _QWORD *v8; // rax
  int v10; // r9d
  unsigned int v11; // [rsp+20h] [rbp-18h]

  v4 = 0;
  EnterCriticalSection(&CriticalSection);
  if ( byte_1801EFFA4 )
  {
    v10 = -2147023781;
    v11 = 152;
LABEL_11:
    v4 = v10;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, v11);
    goto LABEL_7;
  }
  v5 = (_QWORD *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                   WPF::g_pProcessHeap,
                   24LL);
  if ( v5 )
  {
    *v5 = 0LL;
    v5[1] = 0LL;
    v5[2] = 0LL;
  }
  else
  {
    v5 = 0LL;
  }
  if ( !v5 )
  {
    v10 = -2147024882;
    v11 = 155;
    goto LABEL_11;
  }
  Microsoft::WRL::ComPtr<CManipulationFrame>::operator=(v5 + 2, a3, v6, v7);
  v8 = (_QWORD *)qword_1801EFF98;
  if ( *(__int64 **)qword_1801EFF98 != &CManipulationManager::s_InputQueue )
    __fastfail(3u);
  *v5 = &CManipulationManager::s_InputQueue;
  v5[1] = v8;
  *v8 = v5;
  ++dword_1801EFFA0;
  qword_1801EFF98 = (__int64)v5;
LABEL_7:
  LeaveCriticalSection(&CriticalSection);
  Microsoft::WRL::ComPtr<IAccelerator>::InternalRelease(a3);
  return v4;
}
