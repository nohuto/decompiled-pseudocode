/*
 * XREFs of ?ProcessAddRenderParameter@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_ADDRENDERPARAMETER@@@Z @ 0x180104360
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18006A010 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180040188 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?FindRenderParameter@CVisual@@AEBAPEAUMilVisualRenderParameter@@W4Enum@MilVisualRenderParameterType@@PEAI@Z @ 0x180103A78 (-FindRenderParameter@CVisual@@AEBAPEAUMilVisualRenderParameter@@W4Enum@MilVisualRenderParameterT.c)
 */

__int64 __fastcall CVisual::ProcessAddRenderParameter(
        CVisual *this,
        struct CResourceTable *a2,
        const struct MILCMD_VISUAL_ADDRENDERPARAMETER *a3)
{
  char *v3; // rbx
  unsigned int v5; // edi
  __int64 RenderParameter; // rax
  unsigned int v7; // r8d
  __int64 v8; // rax
  unsigned int v9; // edx
  int v10; // ebx
  __int64 v11; // rcx
  __int64 v12; // rax
  int v13; // eax

  v3 = (char *)a3 + 8;
  v5 = 0;
  RenderParameter = CVisual::FindRenderParameter((__int64)this, *((_DWORD *)a3 + 2), 0LL);
  if ( RenderParameter )
  {
    *(_OWORD *)RenderParameter = *(_OWORD *)v3;
    *(_QWORD *)(RenderParameter + 16) = *((_QWORD *)v3 + 2);
    return v5;
  }
  v8 = *((unsigned int *)this + 188);
  v9 = v8 + 1;
  if ( (int)v8 + 1 < (unsigned int)v8 )
  {
    v10 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, v7, -2147024362, 0xB5u);
    v5 = -2147024362;
    goto LABEL_10;
  }
  if ( v9 <= *((_DWORD *)this + 187) )
  {
    v11 = 3 * v8;
    v12 = *((_QWORD *)this + 91);
    *(_OWORD *)(v12 + 8 * v11) = *(_OWORD *)v3;
    *(_QWORD *)(v12 + 8 * v11 + 16) = *((_QWORD *)v3 + 2);
    *((_DWORD *)this + 188) = v9;
    return v5;
  }
  v13 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 728, 0x18u, 1, v3);
  v10 = v13;
  if ( v13 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0xC0u);
  v5 = v10;
  if ( v10 < 0 )
LABEL_10:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x92Au);
  return v5;
}
