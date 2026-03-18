/*
 * XREFs of ?Create@CManipulationFrame@@SAJPEBUtagMANIPULATIONINPUTINFO@@PEAPEAV1@@Z @ 0x180008294
 * Callers:
 *     ?ManipulationThreadCallback@CManipulationManager@@CAHPEAUtagMANIPULATIONINPUTINFO@@@Z @ 0x1800B5BD0 (-ManipulationThreadCallback@CManipulationManager@@CAHPEAUtagMANIPULATIONINPUTINFO@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAccelerator@@@WRL@Microsoft@@IEAAKXZ @ 0x180007904 (-InternalRelease@-$ComPtr@UIAccelerator@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x1800A5868 (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CManipulationFrame::Create(
        const struct tagMANIPULATIONINPUTINFO *a1,
        struct CManipulationFrame **a2)
{
  unsigned int v4; // edi
  _DWORD *v5; // rbx
  struct CManipulationFrame *v6; // rsi
  int v7; // eax
  int v8; // ecx
  unsigned int i; // r9d
  __int64 v10; // rax
  __int64 v11; // r8
  char *v12; // rax
  _OWORD *v13; // rdx
  struct CManipulationFrame *v15; // [rsp+50h] [rbp+8h] BYREF

  v4 = 0;
  v5 = (_DWORD *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(WPF::g_pProcessHeap);
  *a2 = 0LL;
  memset_0(v5, 0, 0xB8uLL);
  v6 = (struct CManipulationFrame *)v5;
  if ( v5 )
  {
    v7 = *(_DWORD *)a1;
    v8 = *((_DWORD *)a1 + 4);
    *(_QWORD *)v5 = &CMILRefCountBase::`vftable';
    *(_QWORD *)v5 = &CManipulationFrame::`vftable';
    v5[2] = 0;
    v5[4] = v7;
    v5[6] = v8;
  }
  else
  {
    v6 = 0LL;
  }
  v15 = v6;
  Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v15);
  if ( v6 )
  {
    for ( i = 0; i < *(_DWORD *)a1; *((_BYTE *)v6 + v11 + 180) &= ~1u )
    {
      v10 = i++;
      v11 = 152 * v10;
      v12 = (char *)a1 + 144 * v10;
      v13 = (_OWORD *)((char *)v6 + v11);
      v13[2] = *(_OWORD *)(v12 + 8);
      v13[3] = *(_OWORD *)(v12 + 24);
      v13[4] = *(_OWORD *)(v12 + 40);
      v13[5] = *(_OWORD *)(v12 + 56);
      v13[6] = *(_OWORD *)(v12 + 72);
      v13[7] = *(_OWORD *)(v12 + 88);
      v13[8] = *(_OWORD *)(v12 + 104);
      v13[9] = *(_OWORD *)(v12 + 120);
      v13[10] = *(_OWORD *)(v12 + 136);
    }
    Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v15);
    *a2 = v6;
  }
  else
  {
    v4 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x30u);
  }
  Microsoft::WRL::ComPtr<IAccelerator>::InternalRelease((__int64 *)&v15);
  return v4;
}
