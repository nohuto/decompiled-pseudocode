/*
 * XREFs of ?ProcessAddExpressionResources@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATION_ADDEXPRESSIONRESOURCES@@PEBXI@Z @ 0x18010A764
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x18003AAC4 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18009A984 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?RegisterSourcesForAnimation@CExpression@@QEAAJPEAVCBaseExpression@@@Z @ 0x1801486F4 (-RegisterSourcesForAnimation@CExpression@@QEAAJPEAVCBaseExpression@@@Z.c)
 */

__int64 __fastcall CKeyframeAnimation::ProcessAddExpressionResources(
        CKeyframeAnimation *this,
        struct CResourceTable *a2,
        const struct MILCMD_KEYFRAMEANIMATION_ADDEXPRESSIONRESOURCES *a3,
        unsigned int *a4)
{
  int v4; // edi
  struct CResource *ResourceWithoutType; // rax
  CExpression *v10; // rbx
  unsigned int v11; // eax
  unsigned int v12; // edx
  int v13; // ebx
  int v14; // eax
  unsigned int v15; // eax
  CExpression *v16; // rcx
  int v17; // eax
  unsigned int v19; // [rsp+20h] [rbp-38h]
  CExpression *v20; // [rsp+70h] [rbp+18h] BYREF

  v4 = 0;
  if ( !*((_DWORD *)a3 + 2) )
    return 0;
  while ( 1 )
  {
    ResourceWithoutType = CResourceTable::GetResourceWithoutType(a2, *a4);
    v10 = ResourceWithoutType;
    if ( !ResourceWithoutType
      || !(*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)ResourceWithoutType + 48LL))(
            ResourceWithoutType,
            104LL) )
    {
      break;
    }
    v20 = v10;
    v11 = *((_DWORD *)this + 90);
    v12 = v11 + 1;
    if ( v11 + 1 >= v11 )
    {
      if ( v12 <= *((_DWORD *)this + 89) )
      {
        *(_QWORD *)(*((_QWORD *)this + 42) + 8LL * *((unsigned int *)this + 90)) = v20;
        *((_DWORD *)this + 90) = v12;
        goto LABEL_11;
      }
      v14 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 336, 8u, 1, &v20);
      v13 = v14;
      if ( v14 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0xC0u);
    }
    else
    {
      v13 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    }
    if ( v13 < 0 )
    {
      v19 = 663;
      goto LABEL_20;
    }
LABEL_11:
    (*(void (__fastcall **)(CExpression *))(*(_QWORD *)v20 + 8LL))(v20);
    v15 = (*(__int64 (__fastcall **)(CExpression *))(*(_QWORD *)v20 + 120LL))(v20);
    if ( *((_DWORD *)this + 110) > v15 )
      v15 = *((_DWORD *)this + 110);
    v16 = v20;
    *((_DWORD *)this + 110) = v15;
    v17 = CExpression::RegisterSourcesForAnimation(v16, this);
    v13 = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0x29Fu);
      return (unsigned int)v13;
    }
    ++a4;
    *((_BYTE *)this + 276) = 1;
    if ( (unsigned int)++v4 >= *((_DWORD *)a3 + 2) )
      return 0;
  }
  v13 = -2003303421;
  v19 = 659;
LABEL_20:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, v19);
  return (unsigned int)v13;
}
