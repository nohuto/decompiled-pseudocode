/*
 * XREFs of ?ProcessAddConditionAnimationResources@CConditionalExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_CONDITIONALEXPRESSION_ADDCONDITIONANIMATIONRESOURCES@@PEBXI@Z @ 0x18010A904
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x18003AAC4 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$00@@IEAAJIIPEBX@Z @ 0x1800A3774 (-AddMultipleAndSet@-$DynArrayImpl@$00@@IEAAJIIPEBX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?RegisterSourcesForAnimation@CExpression@@QEAAJPEAVCBaseExpression@@@Z @ 0x1801486F4 (-RegisterSourcesForAnimation@CExpression@@QEAAJPEAVCBaseExpression@@@Z.c)
 *     ??1ConditionExpressionListEntry@CConditionalExpression@@QEAA@XZ @ 0x180148AD8 (--1ConditionExpressionListEntry@CConditionalExpression@@QEAA@XZ.c)
 *     ??4?$ComPtr@VCExpression@@@WRL@Microsoft@@QEAAAEAV012@PEAVCExpression@@@Z @ 0x180148B74 (--4-$ComPtr@VCExpression@@@WRL@Microsoft@@QEAAAEAV012@PEAVCExpression@@@Z.c)
 */

__int64 __fastcall CConditionalExpression::ProcessAddConditionAnimationResources(
        CConditionalExpression *this,
        struct CResourceTable *a2,
        const struct MILCMD_CONDITIONALEXPRESSION_ADDCONDITIONANIMATIONRESOURCES *a3,
        unsigned int *a4)
{
  int v4; // r15d
  unsigned int v9; // edx
  struct CResource *ResourceWithoutType; // rax
  struct CResource *v11; // rbx
  struct CResource *v12; // rax
  struct CResource *v13; // rbx
  __int64 v14; // r8
  _QWORD *v15; // rcx
  __int64 v16; // rax
  unsigned int v17; // edx
  int v18; // ebx
  int v19; // eax
  CExpression *v20; // rbx
  unsigned int v21; // edi
  unsigned int v22; // eax
  CExpression *v23; // rcx
  int v24; // eax
  CExpression *v25; // rcx
  int v27; // r9d
  unsigned int v28; // [rsp+20h] [rbp-20h]
  CExpression *v29[2]; // [rsp+30h] [rbp-10h] BYREF

  v4 = 0;
  if ( !*((_DWORD *)a3 + 2) )
    return 0;
  while ( 1 )
  {
    v9 = *a4;
    *(_OWORD *)v29 = 0LL;
    ResourceWithoutType = CResourceTable::GetResourceWithoutType(a2, v9);
    v11 = ResourceWithoutType;
    if ( !ResourceWithoutType
      || !(*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)ResourceWithoutType + 48LL))(
            ResourceWithoutType,
            105LL) )
    {
      break;
    }
    Microsoft::WRL::ComPtr<CExpression>::operator=(v29, v11);
    v12 = CResourceTable::GetResourceWithoutType(a2, a4[1]);
    v13 = v12;
    if ( !v12 || !(*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)v12 + 48LL))(v12, 105LL) )
    {
      v28 = 88;
      goto LABEL_28;
    }
    Microsoft::WRL::ComPtr<CExpression>::operator=(&v29[1], v13);
    v15 = (_QWORD *)((char *)this + 296);
    a4 += 2;
    v16 = *((unsigned int *)this + 80);
    v17 = v16 + 1;
    if ( (int)v16 + 1 >= (unsigned int)v16 )
    {
      if ( v17 <= *((_DWORD *)this + 79) )
      {
        *(_OWORD *)(*v15 + 16 * v16) = *(_OWORD *)v29;
        *((_DWORD *)this + 80) = v17;
        goto LABEL_13;
      }
      v19 = DynArrayImpl<1>::AddMultipleAndSet((__int64)v15, 0x10u, v14, v29);
      v18 = v19;
      if ( v19 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0xC0u);
    }
    else
    {
      v18 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    }
    if ( v18 < 0 )
    {
      v28 = 97;
      v27 = v18;
      goto LABEL_29;
    }
LABEL_13:
    v20 = v29[0];
    v21 = (*(__int64 (__fastcall **)(CExpression *))(*(_QWORD *)v29[1] + 120LL))(v29[1]);
    v22 = (*(__int64 (__fastcall **)(CExpression *))(*(_QWORD *)v20 + 120LL))(v20);
    if ( v22 > v21 )
      v21 = v22;
    if ( *((_DWORD *)this + 86) > v21 )
      v21 = *((_DWORD *)this + 86);
    v23 = v29[0];
    *((_DWORD *)this + 86) = v21;
    v24 = CExpression::RegisterSourcesForAnimation(v23, this);
    v18 = v24;
    if ( v24 < 0 )
    {
      v28 = 104;
      goto LABEL_23;
    }
    v25 = v29[1];
    *((_BYTE *)this + 276) = 1;
    v24 = CExpression::RegisterSourcesForAnimation(v25, this);
    v18 = v24;
    if ( v24 < 0 )
    {
      v28 = 106;
LABEL_23:
      v27 = v24;
      goto LABEL_29;
    }
    CConditionalExpression::ConditionExpressionListEntry::~ConditionExpressionListEntry((CConditionalExpression::ConditionExpressionListEntry *)v29);
    if ( (unsigned int)++v4 >= *((_DWORD *)a3 + 2) )
      return 0;
  }
  v28 = 78;
LABEL_28:
  v27 = -2003303421;
  v18 = -2003303421;
LABEL_29:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v27, v28);
  CConditionalExpression::ConditionExpressionListEntry::~ConditionExpressionListEntry((CConditionalExpression::ConditionExpressionListEntry *)v29);
  return (unsigned int)v18;
}
