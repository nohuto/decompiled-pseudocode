/*
 * XREFs of ?Add@?$CArray@V?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V?$CArrayEqualHelper@V?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@@@@QEAAHAEBV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@Z @ 0x1800024EC
 * Callers:
 *     ?OnNewContact@CManipulationManager@@AEAAJPEAVCInteraction@@IK_N1@Z @ 0x180004334 (-OnNewContact@CManipulationManager@@AEAAJPEAVCInteraction@@IK_N1@Z.c)
 *     ?RevalidateMC@CManipulationContext@@AEAAXPEAUMCCollections@@PEAHHH@Z @ 0x180143E50 (-RevalidateMC@CManipulationContext@@AEAAXPEAUMCCollections@@PEAHHH@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x180002120 (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?ReallocHeap@@YAPEAXPEAX_K@Z @ 0x180027708 (-ReallocHeap@@YAPEAXPEAX_K@Z.c)
 */

__int64 __fastcall CArray<Microsoft::WRL::ComPtr<CManipulationContext>,CArrayEqualHelper<Microsoft::WRL::ComPtr<CManipulationContext>>>::Add(
        char **a1,
        _QWORD *a2)
{
  unsigned __int64 v2; // r14
  _QWORD *v3; // rax
  unsigned int v5; // r12d
  char *v6; // rcx
  char *v7; // rcx
  int v9; // ebp
  char *v10; // rax

  v2 = *((int *)a1 + 2);
  v3 = a2;
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
  v10 = (_DWORD)v2
      ? (char *)ReallocHeap(*a1, 8LL * v9)
      : (char *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                  WPF::g_pProcessHeap,
                  8LL * v9);
  if ( !v10 )
    return 0;
  *a1 = v10;
  v3 = a2;
  *((_DWORD *)a1 + 3) = v9;
LABEL_3:
  v6 = *a1;
  *((_DWORD *)a1 + 2) = v2 + 1;
  v7 = &v6[8 * v2];
  if ( v7 )
  {
    *(_QWORD *)v7 = *v3;
    Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(v7);
  }
  return v5;
}
