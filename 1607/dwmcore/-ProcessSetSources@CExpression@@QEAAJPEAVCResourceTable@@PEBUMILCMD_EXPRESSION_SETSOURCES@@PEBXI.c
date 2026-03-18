/*
 * XREFs of ?ProcessSetSources@CExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EXPRESSION_SETSOURCES@@PEBXI@Z @ 0x18008BAF4
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x18003AAC4 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?GetWeakReferenceBase@CComposition@@AEAAJPEAVCResource@@PEAPEAVCWeakReferenceBase@@@Z @ 0x18003B058 (-GetWeakReferenceBase@CComposition@@AEAAJPEAVCResource@@PEAPEAVCWeakReferenceBase@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18009A984 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

__int64 __fastcall CExpression::ProcessSetSources(
        CExpression *this,
        struct CResourceTable *a2,
        const struct MILCMD_EXPRESSION_SETSOURCES *a3,
        unsigned int *a4)
{
  int v8; // esi
  unsigned int v9; // edx
  struct CWeakReferenceBase *v10; // r9
  struct CResource *ResourceWithoutType; // rax
  int WeakReferenceBase; // eax
  int v13; // ebx
  _QWORD *v14; // rcx
  __int64 v15; // rax
  unsigned int v16; // edx
  int v18; // eax
  __int128 v19; // [rsp+30h] [rbp-28h] BYREF
  struct CWeakReferenceBase *v20; // [rsp+70h] [rbp+18h] BYREF

  if ( !*((_DWORD *)a3 + 2) )
  {
    v13 = -2003303421;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0x50u);
    goto LABEL_17;
  }
  if ( *((_BYTE *)this + 632) )
  {
    v13 = -2147467259;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0x56u);
    goto LABEL_17;
  }
  v8 = 0;
  while ( 1 )
  {
    v9 = *a4;
    v10 = 0LL;
    v20 = 0LL;
    if ( v9 )
    {
      ResourceWithoutType = CResourceTable::GetResourceWithoutType(a2, v9);
      if ( ResourceWithoutType )
        break;
    }
LABEL_8:
    v14 = (_QWORD *)((char *)this + 376);
    LODWORD(v19) = *a4;
    v15 = *((unsigned int *)this + 100);
    *((_QWORD *)&v19 + 1) = v10;
    v16 = v15 + 1;
    if ( (int)v15 + 1 < (unsigned int)v15 )
    {
      v13 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    }
    else
    {
      if ( v16 <= *((_DWORD *)this + 99) )
      {
        *(_OWORD *)(*v14 + 16 * v15) = v19;
        *((_DWORD *)this + 100) = v16;
        goto LABEL_11;
      }
      v18 = DynArrayImpl<0>::AddMultipleAndSet(v14, 16LL, 1LL, &v19);
      v13 = v18;
      if ( v18 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0xC0u);
    }
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x68u);
      goto LABEL_13;
    }
LABEL_11:
    ++a4;
    if ( (unsigned int)++v8 >= *((_DWORD *)a3 + 2) )
    {
      v13 = 0;
      goto LABEL_13;
    }
  }
  WeakReferenceBase = CComposition::GetWeakReferenceBase(*((CComposition **)this + 2), ResourceWithoutType, &v20);
  v13 = WeakReferenceBase;
  if ( WeakReferenceBase >= 0 )
  {
    v10 = v20;
    goto LABEL_8;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, WeakReferenceBase, 0x65u);
LABEL_13:
  if ( v13 < 0 )
  {
LABEL_17:
    if ( *((_DWORD *)a3 + 2) )
      *((_BYTE *)this + 632) = 1;
  }
  return (unsigned int)v13;
}
