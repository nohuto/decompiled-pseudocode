/*
 * XREFs of ?ProcessSetContent@CVisual@@UEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETCONTENT@@@Z @ 0x180048240
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x180096A00 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?SetContent@CVisual@@MEAAJPEAVCContent@@@Z @ 0x18004BA50 (-SetContent@CVisual@@MEAAJPEAVCContent@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsOfType@CPrimitiveGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180091E00 (-IsOfType@CPrimitiveGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x180094250 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CRenderData@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18009EAE0 (-IsOfType@CRenderData@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 */

__int64 __fastcall CVisual::ProcessSetContent(
        CVisual *this,
        const struct CResourceTable *a2,
        const struct MILCMD_VISUAL_SETCONTENT *a3)
{
  struct CContent *v4; // rbx
  __int64 v5; // rdx
  __int64 Resource; // rax
  __int64 (__fastcall *v8)(__int64, __int64); // rdi
  char v9; // al
  __int64 (__fastcall *v10)(CVisual *__hidden, struct CContent *); // rdi
  int v11; // eax
  unsigned int v12; // ebx

  v4 = 0LL;
  v5 = *((unsigned int *)a3 + 2);
  if ( (_DWORD)v5
    && ((Resource = CResourceTable::GetResource(a2, v5, 81LL), (v4 = (struct CContent *)Resource) == 0LL)
     || ((v8 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)Resource + 48LL), v8 == CPrimitiveGroup::IsOfType)
       ? (v9 = CPrimitiveGroup::IsOfType(Resource, 104LL))
       : v8 != CRenderData::IsOfType
       ? (v9 = v8(Resource, 104LL))
       : (v9 = CRenderData::IsOfType(Resource, 104LL)),
         v9)) )
  {
    v12 = -2003303421;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0x878u);
  }
  else
  {
    v10 = *(__int64 (__fastcall **)(CVisual *__hidden, struct CContent *))(*(_QWORD *)this + 224LL);
    if ( v10 == CVisual::SetContent )
      v11 = CVisual::SetContent(this, v4);
    else
      v11 = v10(this, v4);
    v12 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x87Cu);
  }
  return v12;
}
