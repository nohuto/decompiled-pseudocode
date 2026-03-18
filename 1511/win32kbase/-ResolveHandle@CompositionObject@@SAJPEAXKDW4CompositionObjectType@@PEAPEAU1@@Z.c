/*
 * XREFs of ?ResolveHandle@CompositionObject@@SAJPEAXKDW4CompositionObjectType@@PEAPEAU1@@Z @ 0x1C0039408
 * Callers:
 *     ?NotifyPendingFlipPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C0039070 (-NotifyPendingFlipPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?CreateFromCompletedFlipToken@CToken@@SAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEAPEAV1@@Z @ 0x1C00392F0 (-CreateFromCompletedFlipToken@CToken@@SAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEAPEAV1@@.c)
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C00393C8 (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     ?ResolveCompositionHandleToken@CTokenManager@@IEAAJAEBU_D3DKMT_COMPOSITION_PRESENTHISTORYTOKEN@@@Z @ 0x1C003CBA8 (-ResolveCompositionHandleToken@CTokenManager@@IEAAJAEBU_D3DKMT_COMPOSITION_PRESENTHISTORYTOKEN@@.c)
 *     ?NotifyPendingCompositionBuffersPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C0045CF0 (-NotifyPendingCompositionBuffersPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C00763A0 (-ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     ?ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z @ 0x1C007700C (-ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z.c)
 *     ?NotifyCompositionBuffersOfSkippedToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C00E0ABC (-NotifyCompositionBuffersOfSkippedToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
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
