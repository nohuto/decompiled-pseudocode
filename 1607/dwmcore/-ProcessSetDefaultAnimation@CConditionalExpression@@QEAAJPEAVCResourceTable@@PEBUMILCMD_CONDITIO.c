/*
 * XREFs of ?ProcessSetDefaultAnimation@CConditionalExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_CONDITIONALEXPRESSION_SETDEFAULTANIMATION@@@Z @ 0x18010AB3C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x18003AAC4 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@VCExpression@@@WRL@Microsoft@@QEAAAEAV012@PEAVCExpression@@@Z @ 0x180148B74 (--4-$ComPtr@VCExpression@@@WRL@Microsoft@@QEAAAEAV012@PEAVCExpression@@@Z.c)
 */

__int64 __fastcall CConditionalExpression::ProcessSetDefaultAnimation(
        CConditionalExpression *this,
        struct CResourceTable *a2,
        const struct MILCMD_CONDITIONALEXPRESSION_SETDEFAULTANIMATION *a3)
{
  struct CResource *ResourceWithoutType; // rax
  unsigned int v5; // ebx
  struct CResource *v6; // rdi

  ResourceWithoutType = CResourceTable::GetResourceWithoutType(a2, *((_DWORD *)a3 + 2));
  v5 = 0;
  v6 = ResourceWithoutType;
  if ( !ResourceWithoutType
    || (*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)ResourceWithoutType + 48LL))(
         ResourceWithoutType,
         105LL) )
  {
    Microsoft::WRL::ComPtr<CExpression>::operator=((char *)this + 328, v6);
  }
  else
  {
    v5 = -2003303421;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0x88u);
  }
  return v5;
}
