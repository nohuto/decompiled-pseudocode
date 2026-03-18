/*
 * XREFs of ?ProcessSetContent@CVisual@@UEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETCONTENT@@@Z @ 0x18004F4E0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18003ABA0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsOfType@CPrimitiveGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18004DA60 (-IsOfType@CPrimitiveGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CRenderData@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18004E820 (-IsOfType@CRenderData@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?SetContent@CVisual@@MEAAJPEAVCContent@@@Z @ 0x180053710 (-SetContent@CVisual@@MEAAJPEAVCContent@@@Z.c)
 *     ?IsOfType@CPrimitiveGroupLayerClip@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800AD870 (-IsOfType@CPrimitiveGroupLayerClip@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::ProcessSetContent(
        CVisual *this,
        const struct CResourceTable *a2,
        const struct MILCMD_VISUAL_SETCONTENT *a3)
{
  struct CContent *v4; // rbx
  unsigned int v5; // edx
  __int64 Resource; // rax
  bool (__fastcall *v8)(__int64, int); // rax
  char v9; // al
  __int64 (__fastcall *v10)(CVisual *__hidden, struct CContent *); // rax
  int v11; // eax
  unsigned int v12; // ebx

  v4 = 0LL;
  v5 = *((_DWORD *)a3 + 2);
  if ( v5
    && ((Resource = CResourceTable::GetResource((__int64)a2, v5, 0x56u), (v4 = (struct CContent *)Resource) == 0LL)
     || ((v8 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)Resource + 48LL), v8 != CRenderData::IsOfType)
       ? ((char *)v8 != (char *)CPrimitiveGroup::IsOfType
        ? ((char *)v8 != (char *)CPrimitiveGroupLayerClip::IsOfType
         ? (v9 = v8((__int64)v4, 113))
         : (v9 = CPrimitiveGroupLayerClip::IsOfType(v4, 113LL)))
        : (v9 = CPrimitiveGroup::IsOfType((__int64)v4, 113)))
       : (v9 = CRenderData::IsOfType((__int64)v4, 113)),
         v9)) )
  {
    v12 = -2003303421;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0x96Fu);
  }
  else
  {
    v10 = *(__int64 (__fastcall **)(CVisual *__hidden, struct CContent *))(*(_QWORD *)this + 232LL);
    if ( v10 == CVisual::SetContent )
      v11 = CVisual::SetContent(this, v4);
    else
      v11 = v10(this, v4);
    v12 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x973u);
  }
  return v12;
}
