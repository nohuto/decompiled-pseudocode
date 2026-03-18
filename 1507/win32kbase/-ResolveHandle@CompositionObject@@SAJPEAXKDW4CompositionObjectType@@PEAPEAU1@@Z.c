/*
 * XREFs of ?ResolveHandle@CompositionObject@@SAJPEAXKDW4CompositionObjectType@@PEAPEAU1@@Z @ 0x1C004872C
 * Callers:
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C00106E0 (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     ?ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C0013050 (-ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     ?ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z @ 0x1C001485C (-ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z.c)
 *     ?NotifyPendingCompositionBuffersPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C00208B4 (-NotifyPendingCompositionBuffersPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?NotifyPendingFlipPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C0045288 (-NotifyPendingFlipPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?ResolveCompositionHandleToken@CTokenManager@@IEAAJAEBU_D3DKMT_COMPOSITION_PRESENTHISTORYTOKEN@@@Z @ 0x1C0046F24 (-ResolveCompositionHandleToken@CTokenManager@@IEAAJAEBU_D3DKMT_COMPOSITION_PRESENTHISTORYTOKEN@@.c)
 *     ?CreateFromCompletedFlipToken@CToken@@SAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEAPEAV1@PEA_N@Z @ 0x1C0047824 (-CreateFromCompletedFlipToken@CToken@@SAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEAPEAV1@P.c)
 *     NtQueryCompositionSurfaceStatistics @ 0x1C0048600 (NtQueryCompositionSurfaceStatistics.c)
 *     ?NotifyCompositionBuffersOfSkippedToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C0070800 (-NotifyCompositionBuffersOfSkippedToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CompositionObject::ResolveHandle(void *a1, ACCESS_MASK a2, KPROCESSOR_MODE a3, int a4, PVOID Object)
{
  _QWORD *v6; // rsi
  NTSTATUS v7; // ebx
  _QWORD **v8; // rdi

  v6 = Object;
  *(_QWORD *)Object = 0LL;
  v7 = ObReferenceObjectByHandle(a1, a2, ExCompositionObjectType, a3, &Object, 0LL);
  if ( v7 >= 0 )
  {
    v8 = (_QWORD **)Object;
    if ( (***((unsigned __int8 (__fastcall ****)(_QWORD))Object + 1))(*((_QWORD *)Object + 1)) )
    {
      if ( (*(unsigned int (__fastcall **)(_QWORD *))(*v8[1] + 16LL))(v8[1]) == a4 )
        *v6 = v8;
      else
        v7 = -1073741788;
    }
    else
    {
      v7 = -1073741816;
    }
    if ( v7 < 0 )
      ObfDereferenceObject(v8);
  }
  return (unsigned int)v7;
}
