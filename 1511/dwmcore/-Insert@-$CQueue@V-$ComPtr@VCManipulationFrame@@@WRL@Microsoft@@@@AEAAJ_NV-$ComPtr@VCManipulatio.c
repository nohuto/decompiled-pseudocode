/*
 * XREFs of ?Insert@?$CQueue@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@AEAAJ_NV?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@Z @ 0x180003B1C
 * Callers:
 *     ?ManipulationThreadCallback@CManipulationManager@@CAHPEAUtagMANIPULATIONINPUTINFO@@@Z @ 0x1800B20A0 (-ManipulationThreadCallback@CManipulationManager@@CAHPEAUtagMANIPULATIONINPUTINFO@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@IEAAKXZ @ 0x180003BF4 (-InternalRelease@-$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180003C34 (--4-$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CQueue<Microsoft::WRL::ComPtr<CManipulationFrame>>::Insert(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // esi
  __int64 v5; // rax
  __int64 *v6; // rbx
  __int64 **v7; // rax
  int v9; // r9d
  unsigned int v10; // [rsp+20h] [rbp-18h]

  v4 = 0;
  EnterCriticalSection(&CriticalSection);
  if ( byte_1801A3D04 )
  {
    v9 = -2147023781;
    v10 = 93;
LABEL_11:
    v4 = v9;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, v10);
    goto LABEL_7;
  }
  v5 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
         WPF::g_pProcessHeap,
         24LL);
  v6 = (__int64 *)v5;
  if ( v5 )
    *(_QWORD *)(v5 + 16) = 0LL;
  else
    v6 = 0LL;
  if ( !v6 )
  {
    v9 = -2147024882;
    v10 = 96;
    goto LABEL_11;
  }
  Microsoft::WRL::ComPtr<CManipulationFrame>::operator=(v6 + 2, a3);
  v7 = (__int64 **)qword_1801A3CF8;
  *v6 = (__int64)&CManipulationManager::s_InputQueue;
  v6[1] = (__int64)v7;
  if ( *v7 != &CManipulationManager::s_InputQueue )
    __fastfail(3u);
  *v7 = v6;
  ++dword_1801A3D00;
  qword_1801A3CF8 = (__int64)v6;
LABEL_7:
  LeaveCriticalSection(&CriticalSection);
  Microsoft::WRL::ComPtr<CManipulationFrame>::InternalRelease(a3);
  return v4;
}
