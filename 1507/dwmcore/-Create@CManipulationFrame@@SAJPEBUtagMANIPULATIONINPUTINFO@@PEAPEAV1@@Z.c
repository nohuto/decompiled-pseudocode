/*
 * XREFs of ?Create@CManipulationFrame@@SAJPEBUtagMANIPULATIONINPUTINFO@@PEAPEAV1@@Z @ 0x180131E10
 * Callers:
 *     ?ManipulationThreadCallback@CManipulationManager@@CAHPEAUtagMANIPULATIONINPUTINFO@@@Z @ 0x18012A360 (-ManipulationThreadCallback@CManipulationManager@@CAHPEAUtagMANIPULATIONINPUTINFO@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x180059558 (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     memset_0 @ 0x180099BC6 (memset_0.c)
 *     ?InternalRelease@?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@IEAAKXZ @ 0x18012A2B4 (-InternalRelease@-$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall CManipulationFrame::Create(
        const struct tagMANIPULATIONINPUTINFO *a1,
        struct CManipulationFrame **a2)
{
  unsigned int v4; // ebp
  __int64 v5; // r8
  unsigned int v6; // eax
  unsigned int v7; // ecx
  _DWORD *v8; // rbx
  struct CManipulationFrame *v9; // rdi
  int v10; // eax
  int v11; // ecx
  unsigned int i; // r9d
  __int64 v13; // rax
  __int64 v14; // r8
  char *v15; // rax
  _OWORD *v16; // rdx
  struct CManipulationFrame *v18; // [rsp+50h] [rbp+8h] BYREF

  v4 = 0;
  if ( !*(_DWORD *)a1
    || (v5 = (unsigned int)(*(_DWORD *)a1 - 1), v6 = 152 * v5, (unsigned __int64)(152 * v5) > 0xFFFFFFFF)
    || (v7 = v6 + 184, v6 >= 0xFFFFFF48) )
  {
    v7 = 0;
  }
  v8 = (_DWORD *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                   WPF::g_pProcessHeap,
                   v7);
  *a2 = 0LL;
  memset_0(v8, 0, 0xB8uLL);
  v9 = (struct CManipulationFrame *)v8;
  if ( v8 )
  {
    v10 = *(_DWORD *)a1;
    v11 = *((_DWORD *)a1 + 4);
    *(_QWORD *)v8 = &CMILRefCountBase::`vftable';
    *(_QWORD *)v8 = &CManipulationFrame::`vftable';
    v8[2] = 0;
    v8[4] = v10;
    v8[6] = v11;
  }
  else
  {
    v9 = 0LL;
  }
  v18 = v9;
  Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v18);
  if ( v9 )
  {
    for ( i = 0; i < *(_DWORD *)a1; *((_BYTE *)v9 + v14 + 180) &= ~1u )
    {
      v13 = i++;
      v14 = 152 * v13;
      v15 = (char *)a1 + 144 * v13;
      v16 = (_OWORD *)((char *)v9 + v14);
      v16[2] = *(_OWORD *)(v15 + 8);
      v16[3] = *(_OWORD *)(v15 + 24);
      v16[4] = *(_OWORD *)(v15 + 40);
      v16[5] = *(_OWORD *)(v15 + 56);
      v16[6] = *(_OWORD *)(v15 + 72);
      v16[7] = *(_OWORD *)(v15 + 88);
      v16[8] = *(_OWORD *)(v15 + 104);
      v16[9] = *(_OWORD *)(v15 + 120);
      v16[10] = *(_OWORD *)(v15 + 136);
    }
    Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v18);
    *a2 = v9;
  }
  else
  {
    v4 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x2Cu);
  }
  Microsoft::WRL::ComPtr<CManipulationFrame>::InternalRelease((__int64 *)&v18);
  return v4;
}
