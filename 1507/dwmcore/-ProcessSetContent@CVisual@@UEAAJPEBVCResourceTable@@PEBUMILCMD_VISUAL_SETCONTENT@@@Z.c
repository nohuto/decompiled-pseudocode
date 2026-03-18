/*
 * XREFs of ?ProcessSetContent@CVisual@@UEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETCONTENT@@@Z @ 0x1800358A0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18006A010 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?SetContent@CVisual@@IEAAJPEAVCContent@@@Z @ 0x180034514 (-SetContent@CVisual@@IEAAJPEAVCContent@@@Z.c)
 *     ?IsOfType@CRenderData@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18004F290 (-IsOfType@CRenderData@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18006CA90 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsOfType@CPrimitiveGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18006E400 (-IsOfType@CPrimitiveGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CVisual::ProcessSetContent(
        struct CResource **this,
        const struct CResourceTable *a2,
        const struct MILCMD_VISUAL_SETCONTENT *a3)
{
  struct CContent *v4; // rbx
  __int64 v5; // rdx
  __int64 Resource; // rax
  __int64 (__fastcall *v8)(__int64, __int64); // rdi
  char v9; // al
  int v10; // eax
  unsigned int v11; // ebx

  v4 = 0LL;
  v5 = *((unsigned int *)a3 + 2);
  if ( (_DWORD)v5
    && ((Resource = CResourceTable::GetResource(a2, v5, 73LL), (v4 = (struct CContent *)Resource) == 0LL)
     || ((v8 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)Resource + 48LL), v8 != CPrimitiveGroup::IsOfType)
       ? (v8 != CRenderData::IsOfType
        ? (v9 = v8(Resource, 96LL))
        : (v9 = CRenderData::IsOfType(Resource, 96LL)))
       : (v9 = CPrimitiveGroup::IsOfType(Resource, 96LL)),
         v9)) )
  {
    v11 = -2003303421;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0x862u);
  }
  else
  {
    v10 = CVisual::SetContent(this, v4);
    v11 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x866u);
  }
  return v11;
}
