/*
 * XREFs of ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x18006CEEC
 * Callers:
 *     ?ProcessAddBinding@CBaseAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEANIMATION_ADDBINDING@@@Z @ 0x18005CD58 (-ProcessAddBinding@CBaseAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEANIMATION_ADDBINDING@.c)
 *     ?ProcessRemoveBinding@CBaseAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEANIMATION_REMOVEBINDING@@@Z @ 0x18005CE68 (-ProcessRemoveBinding@CBaseAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEANIMATION_REMOVEBI.c)
 *     ?ProcessAddSurfaceResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_ADDSURFACERESOURCES@@PEBXI@Z @ 0x18006EF34 (-ProcessAddSurfaceResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_.c)
 *     ?ResolveExpressionSourceReference@CComposition@@QEAAJIIPEAPEAUIExpressionSource@@@Z @ 0x1800E3B2C (-ResolveExpressionSourceReference@CComposition@@QEAAJIIPEAPEAUIExpressionSource@@@Z.c)
 *     ?ResolveExpressionTargetReference@CComposition@@QEAAJIIPEAPEAVCResource@@@Z @ 0x1800E3BF8 (-ResolveExpressionTargetReference@CComposition@@QEAAJIIPEAPEAVCResource@@@Z.c)
 *     ?ProcessAddColorResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_ADDCOLORRESOURCES@@PEBXI@Z @ 0x18010C6FC (-ProcessAddColorResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_AD.c)
 *     ?ProcessAddExpressionResources@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATION_ADDEXPRESSIONRESOURCES@@PEBXI@Z @ 0x180110C20 (-ProcessAddExpressionResources@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEA.c)
 *     ?ProcessUpdateInputs@CFilterEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FILTEREFFECT_UPDATEINPUTS@@PEBXI@Z @ 0x180111E50 (-ProcessUpdateInputs@CFilterEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FILTEREFFECT_UPDATEINPUT.c)
 *     ?ProcessUpdateInputs@CCompiledEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPILEDEFFECT_UPDATEINPUTS@@PEBXI@Z @ 0x180113574 (-ProcessUpdateInputs@CCompiledEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPILEDEFFECT_UPDATEI.c)
 *     ?ProcessSetSwapChain@CAnalogRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANALOGRENDERTARGET_SETSWAPCHAIN@@@Z @ 0x180126AD4 (-ProcessSetSwapChain@CAnalogRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANALOGRENDERTARGET.c)
 * Callees:
 *     ?ValidEntry@HANDLE_TABLE@@QEBAHI@Z @ 0x180050D34 (-ValidEntry@HANDLE_TABLE@@QEBAHI@Z.c)
 */

struct CResource *__fastcall CResourceTable::GetResourceWithoutType(CResourceTable *this, unsigned int a2)
{
  __int64 v2; // r8
  int v3; // r9d

  if ( HANDLE_TABLE::ValidEntry((CResourceTable *)((char *)this + 16), a2) )
    return *(struct CResource **)((unsigned int)(v3 * *(_DWORD *)(v2 + 24)) + *(_QWORD *)(v2 + 40) + 8LL);
  else
    return 0LL;
}
