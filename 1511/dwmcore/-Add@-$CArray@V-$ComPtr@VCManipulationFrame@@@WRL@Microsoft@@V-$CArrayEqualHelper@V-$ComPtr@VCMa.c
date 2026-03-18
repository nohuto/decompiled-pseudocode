/*
 * XREFs of ?Add@?$CArray@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@V?$CArrayEqualHelper@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@@@QEAAHAEBV?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@Z @ 0x1800FE810
 * Callers:
 *     ?ProcessFrameInputPostTargeting@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x180004574 (-ProcessFrameInputPostTargeting@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x180002120 (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?ReallocHeap@@YAPEAXPEAX_K@Z @ 0x180027708 (-ReallocHeap@@YAPEAXPEAX_K@Z.c)
 */

__int64 __fastcall CArray<Microsoft::WRL::ComPtr<CManipulationFrame>,CArrayEqualHelper<Microsoft::WRL::ComPtr<CManipulationFrame>>>::Add(
        char **a1,
        _QWORD *a2)
{
  unsigned __int64 v2; // r14
  _QWORD *v3; // rax
  unsigned int v5; // r12d
  int v6; // ebp
  char *v7; // rax
  char *v8; // rcx
  char *v9; // rcx

  v2 = *((int *)a1 + 2);
  v3 = a2;
  v5 = 1;
  if ( (int)v2 + 1 <= 0 )
    return 0;
  if ( (_DWORD)v2 != *((_DWORD *)a1 + 3) )
    goto LABEL_12;
  if ( (int)v2 > 0x3FFFFFFF || v2 > 0xFFFFFFFFFFFFFFFLL )
    return 0;
  v6 = 2;
  if ( *((int *)a1 + 3) >= 2 )
    v6 = v2 + ((int)v2 >> 1);
  v7 = (_DWORD)v2
     ? (char *)ReallocHeap(*a1, 8LL * v6)
     : (char *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                 WPF::g_pProcessHeap,
                 8LL * v6);
  if ( !v7 )
    return 0;
  *a1 = v7;
  v3 = a2;
  *((_DWORD *)a1 + 3) = v6;
LABEL_12:
  v8 = *a1;
  *((_DWORD *)a1 + 2) = v2 + 1;
  v9 = &v8[8 * v2];
  if ( v9 )
  {
    *(_QWORD *)v9 = *v3;
    Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(v9);
  }
  return v5;
}
