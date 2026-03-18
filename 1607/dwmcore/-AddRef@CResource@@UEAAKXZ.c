/*
 * XREFs of ?AddRef@CResource@@UEAAKXZ @ 0x18008DE90
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18002FDA8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 *     ?DuplicateHandle@CResourceTable@@QEAAJPEAVCChannelContext@@I0I@Z @ 0x18003AC78 (-DuplicateHandle@CResourceTable@@QEAAJPEAVCChannelContext@@I0I@Z.c)
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 *     ?QueueAnimationStateChange@CExpressionManager@@QEAAJW4AnimationEventType@@PEAVCBaseExpression@@@Z @ 0x180088658 (-QueueAnimationStateChange@CExpressionManager@@QEAAJW4AnimationEventType@@PEAVCBaseExpression@@@.c)
 *     ?QueryInterface@CResource@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18008DEC0 (-QueryInterface@CResource@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18008DFE0 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?ProcessAddBinding@CBaseAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEANIMATION_ADDBINDING@@@Z @ 0x1800B01F0 (-ProcessAddBinding@CBaseAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEANIMATION_ADDBINDING@.c)
 * Callees:
 *     ?AssertW@@YAXPEBG000K@Z @ 0x1800BF324 (-AssertW@@YAXPEBG000K@Z.c)
 */

__int64 __fastcall CResource::AddRef(CResource *this)
{
  if ( *((int *)this + 2) < 0 )
    AssertW(
      L"Tried to AddRef an object which has previously been freed (refcount went to 0).",
      0LL,
      L"CMILCOMBase::InternalAddRef",
      L"onecoreuap\\windows\\dwm\\common\\shared\\milcom.cpp",
      0x1Fu);
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 2);
}
