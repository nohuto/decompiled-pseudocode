/*
 * XREFs of ?AddBufferedOutput@CInteractionContextWrapper@@AEAAJII_KPEBUINTERACTION_CONTEXT_OUTPUT@@@Z @ 0x18016FB44
 * Callers:
 *     ?InteractionContextCallback@CInteractionContextWrapper@@AEAAXPEBUINTERACTION_CONTEXT_OUTPUT@@@Z @ 0x180110170 (-InteractionContextCallback@CInteractionContextWrapper@@AEAAXPEBUINTERACTION_CONTEXT_OUTPUT@@@Z.c)
 * Callees:
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?Add@?$CArray@PEAVCBufferedOutputPointer@@V?$CArrayEqualHelper@PEAVCBufferedOutputPointer@@@@@@QEAAHAEBQEAVCBufferedOutputPointer@@@Z @ 0x18016FA70 (-Add@-$CArray@PEAVCBufferedOutputPointer@@V-$CArrayEqualHelper@PEAVCBufferedOutputPointer@@@@@@Q.c)
 *     ?BoundBufferedOutput@CInteractionContextWrapper@@AEAAX_K@Z @ 0x18016FCAC (-BoundBufferedOutput@CInteractionContextWrapper@@AEAAX_K@Z.c)
 *     ?FindBufferedOutputPointer@CInteractionContextWrapper@@AEBAPEAVCBufferedOutputPointer@@I@Z @ 0x18016FE30 (-FindBufferedOutputPointer@CInteractionContextWrapper@@AEBAPEAVCBufferedOutputPointer@@I@Z.c)
 *     ?Insert@?$CQueue@PEAVCBufferedInteractionOutput@@@@AEAAJ_NPEAVCBufferedInteractionOutput@@@Z @ 0x1801703AC (-Insert@-$CQueue@PEAVCBufferedInteractionOutput@@@@AEAAJ_NPEAVCBufferedInteractionOutput@@@Z.c)
 */

__int64 __fastcall CInteractionContextWrapper::AddBufferedOutput(
        char **this,
        unsigned int a2,
        int a3,
        unsigned __int64 a4,
        const struct INTERACTION_CONTEXT_OUTPUT *a5)
{
  unsigned int v9; // ebp
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rbx
  const struct INTERACTION_CONTEXT_OUTPUT *v13; // rax
  __int64 v14; // rax

  CInteractionContextWrapper::BoundBufferedOutput((CInteractionContextWrapper *)this, a4);
  v9 = -2147024882;
  v10 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
          WPF::g_pProcessHeap,
          96LL);
  v12 = v10;
  if ( v10 )
  {
    *(_QWORD *)v10 = 0LL;
    *(_DWORD *)(v10 + 8) = 0;
    memset_0((void *)(v10 + 12), 0, 0x50uLL);
  }
  else
  {
    v12 = 0LL;
  }
  v13 = a5;
  if ( a5 )
  {
    *(_QWORD *)v12 = a4;
    *(_DWORD *)(v12 + 8) = a3;
    *(_OWORD *)(v12 + 12) = *(_OWORD *)v13;
    *(_OWORD *)(v12 + 28) = *((_OWORD *)v13 + 1);
    *(_OWORD *)(v12 + 44) = *((_OWORD *)v13 + 2);
    *(_OWORD *)(v12 + 60) = *((_OWORD *)v13 + 3);
    *(_OWORD *)(v12 + 76) = *((_OWORD *)v13 + 4);
    v9 = CQueue<CBufferedInteractionOutput *>::Insert(this + 60, v11, v12);
  }
  if ( !CInteractionContextWrapper::FindBufferedOutputPointer((CInteractionContextWrapper *)this, a2) )
  {
    v14 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
            WPF::g_pProcessHeap,
            8LL);
    if ( v14 )
    {
      *(_DWORD *)v14 = 0;
      *(_BYTE *)(v14 + 4) = 0;
    }
    a5 = (const struct INTERACTION_CONTEXT_OUTPUT *)v14;
    if ( v14 )
    {
      *(_DWORD *)v14 = a2;
      CArray<CBufferedOutputPointer *,CArrayEqualHelper<CBufferedOutputPointer *>>::Add(this + 68, &a5);
    }
  }
  return v9;
}
