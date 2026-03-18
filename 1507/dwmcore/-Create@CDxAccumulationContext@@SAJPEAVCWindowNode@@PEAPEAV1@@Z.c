/*
 * XREFs of ?Create@CDxAccumulationContext@@SAJPEAVCWindowNode@@PEAPEAV1@@Z @ 0x180121A94
 * Callers:
 *     ?ProcessCopyCompositorOwnedResources@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_COPYCOMPOSITOROWNEDRESOURCES@@@Z @ 0x1800798A4 (-ProcessCopyCompositorOwnedResources@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE.c)
 *     ?ProcessNotifyDxImmediateUpdate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_NOTIFYDXIMMEDIATEUPDATE@@@Z @ 0x180105820 (-ProcessNotifyDxImmediateUpdate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_NOTI.c)
 *     ?ProcessNotifyDxUpdate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_NOTIFYDXUPDATE@@@Z @ 0x180105A04 (-ProcessNotifyDxUpdate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_NOTIFYDXUPDAT.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CDxAccumulationContext::Create(struct CWindowNode *a1, struct CDxAccumulationContext **a2)
{
  unsigned int v2; // esi
  int v5; // r9d
  struct CDxAccumulationContext *v6; // rax
  unsigned int v8; // [rsp+20h] [rbp-18h]

  v2 = 0;
  if ( !a1 )
  {
    v5 = -2147024809;
    v8 = 47;
LABEL_10:
    v2 = v5;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, v8);
    return v2;
  }
  if ( !a2 )
  {
    v5 = -2147024809;
    v8 = 48;
    goto LABEL_10;
  }
  v6 = (struct CDxAccumulationContext *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                                          WPF::g_pProcessHeap,
                                          40LL);
  if ( v6 )
    *(_QWORD *)v6 = a1;
  else
    v6 = 0LL;
  *a2 = v6;
  if ( !v6 )
  {
    v5 = -2147024882;
    v8 = 51;
    goto LABEL_10;
  }
  return v2;
}
