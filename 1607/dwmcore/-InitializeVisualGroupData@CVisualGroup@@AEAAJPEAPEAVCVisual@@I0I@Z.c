/*
 * XREFs of ?InitializeVisualGroupData@CVisualGroup@@AEAAJPEAPEAVCVisual@@I0I@Z @ 0x1801411E4
 * Callers:
 *     ?ProcessUpdate@CVisualGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUALGROUP@@PEBXI@Z @ 0x18010E174 (-ProcessUpdate@CVisualGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUALGROUP@@PEBXI@Z.c)
 * Callees:
 *     ?GetWeakReferenceBase@CComposition@@AEAAJPEAVCResource@@PEAPEAVCWeakReferenceBase@@@Z @ 0x18003B058 (-GetWeakReferenceBase@CComposition@@AEAAJPEAVCResource@@PEAPEAVCWeakReferenceBase@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18009A984 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

__int64 __fastcall CVisualGroup::InitializeVisualGroupData(
        CComposition **this,
        struct CVisual **a2,
        unsigned int a3,
        struct CVisual **a4,
        unsigned int a5)
{
  int v5; // ebx
  unsigned int i; // esi
  int WeakReferenceBase; // eax
  unsigned int v12; // eax
  unsigned int v13; // edx
  int v14; // eax
  unsigned int v15; // edi
  unsigned int v16; // eax
  unsigned int v17; // edx
  int v18; // r9d
  int v19; // eax
  unsigned int v21; // [rsp+20h] [rbp-38h]
  struct CWeakReferenceBase *v22[5]; // [rsp+30h] [rbp-28h] BYREF

  v5 = 0;
  for ( i = 0; i < a3; ++i )
  {
    v22[0] = 0LL;
    if ( *a2 )
    {
      WeakReferenceBase = CComposition::GetWeakReferenceBase(this[2], *a2, v22);
      v5 = WeakReferenceBase;
      if ( WeakReferenceBase < 0 )
      {
        v21 = 230;
        goto LABEL_29;
      }
      v12 = *((_DWORD *)this + 34);
      v13 = v12 + 1;
      if ( v12 + 1 < v12 )
      {
        v5 = -2147024362;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
        goto LABEL_10;
      }
      v5 = 0;
      if ( v13 > *((_DWORD *)this + 33) )
      {
        v14 = DynArrayImpl<0>::AddMultipleAndSet((__int64)(this + 14), 8u, 1, v22);
        v5 = v14;
        if ( v14 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0xC0u);
LABEL_10:
        if ( v5 < 0 )
        {
          v21 = 232;
LABEL_18:
          v18 = v5;
          goto LABEL_30;
        }
        goto LABEL_11;
      }
      *((struct CWeakReferenceBase **)this[14] + *((unsigned int *)this + 34)) = v22[0];
      *((_DWORD *)this + 34) = v13;
    }
LABEL_11:
    ++a2;
  }
  v15 = 0;
  if ( !a5 )
    return (unsigned int)v5;
  while ( 1 )
  {
    v22[0] = 0LL;
    if ( !*a4 )
      goto LABEL_25;
    WeakReferenceBase = CComposition::GetWeakReferenceBase(this[2], *a4, v22);
    v5 = WeakReferenceBase;
    if ( WeakReferenceBase < 0 )
      break;
    v16 = *((_DWORD *)this + 42);
    v17 = v16 + 1;
    if ( v16 + 1 >= v16 )
    {
      v5 = 0;
      if ( v17 <= *((_DWORD *)this + 41) )
      {
        *((struct CWeakReferenceBase **)this[18] + *((unsigned int *)this + 42)) = v22[0];
        *((_DWORD *)this + 42) = v17;
        goto LABEL_25;
      }
      v19 = DynArrayImpl<0>::AddMultipleAndSet((__int64)(this + 18), 8u, 1, v22);
      v5 = v19;
      if ( v19 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0xC0u);
    }
    else
    {
      v5 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    }
    if ( v5 < 0 )
    {
      v21 = 244;
      goto LABEL_18;
    }
LABEL_25:
    ++v15;
    ++a4;
    if ( v15 >= a5 )
      return (unsigned int)v5;
  }
  v21 = 242;
LABEL_29:
  v18 = WeakReferenceBase;
LABEL_30:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, v21);
  return (unsigned int)v5;
}
