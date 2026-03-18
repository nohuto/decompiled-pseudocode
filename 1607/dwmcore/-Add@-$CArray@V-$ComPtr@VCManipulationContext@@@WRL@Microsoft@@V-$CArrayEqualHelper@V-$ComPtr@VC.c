/*
 * XREFs of ?Add@?$CArray@V?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V?$CArrayEqualHelper@V?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@@@@QEAAHAEBV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@Z @ 0x180006440
 * Callers:
 *     ?OnNewContact@CManipulationManager@@AEAAJPEAVCInteraction@@IK_N1@Z @ 0x180006A00 (-OnNewContact@CManipulationManager@@AEAAJPEAVCInteraction@@IK_N1@Z.c)
 *     ?RevalidateMC@CManipulationContext@@AEAAXPEAUMCCollections@@PEAHHH@Z @ 0x180171590 (-RevalidateMC@CManipulationContext@@AEAAXPEAUMCCollections@@PEAHHH@Z.c)
 * Callees:
 *     ?ReallocHeap@@YAPEAXPEAX_K@Z @ 0x18009ED18 (-ReallocHeap@@YAPEAXPEAX_K@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x1800A5868 (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CArray<Microsoft::WRL::ComPtr<CManipulationContext>,CArrayEqualHelper<Microsoft::WRL::ComPtr<CManipulationContext>>>::Add(
        char **a1,
        _QWORD *a2)
{
  unsigned __int64 v2; // rdi
  unsigned int v5; // ebp
  char *v6; // rcx
  char *v7; // rcx
  int v9; // ebx
  unsigned __int64 v10; // rdx
  char *v11; // rax

  v2 = *((int *)a1 + 2);
  v5 = 1;
  if ( (int)v2 + 1 <= 0 )
    return 0;
  if ( (_DWORD)v2 != *((_DWORD *)a1 + 3) )
    goto LABEL_3;
  if ( (int)v2 > 0x3FFFFFFF || v2 > 0xFFFFFFFFFFFFFFFLL )
    return 0;
  v9 = 2;
  if ( *((int *)a1 + 3) >= 2 )
    v9 = v2 + ((int)v2 >> 1);
  v10 = 8LL * v9;
  v11 = (_DWORD)v2
      ? (char *)ReallocHeap(*a1, v10)
      : (char *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                    + 16LL))(
                  WPF::g_pProcessHeap,
                  v10);
  if ( !v11 )
    return 0;
  *((_DWORD *)a1 + 3) = v9;
  *a1 = v11;
LABEL_3:
  v6 = *a1;
  *((_DWORD *)a1 + 2) = v2 + 1;
  v7 = &v6[8 * v2];
  if ( v7 )
  {
    *(_QWORD *)v7 = *a2;
    Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(v7);
  }
  return v5;
}
