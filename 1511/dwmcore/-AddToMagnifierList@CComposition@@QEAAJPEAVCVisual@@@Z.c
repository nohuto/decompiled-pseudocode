/*
 * XREFs of ?AddToMagnifierList@CComposition@@QEAAJPEAVCVisual@@@Z @ 0x180100C28
 * Callers:
 *     ?Partition_SetMagnifier@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_SETMAGNIFIER@@@Z @ 0x1800FB274 (-Partition_SetMagnifier@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_P.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180076E18 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetWeakReferenceBase@CComposition@@AEAAJPEAVCResource@@PEAPEAVCWeakReferenceBase@@@Z @ 0x1800948C4 (-GetWeakReferenceBase@CComposition@@AEAAJPEAVCResource@@PEAPEAVCWeakReferenceBase@@@Z.c)
 *     ?FindMagnifier@CComposition@@QEAAIPEAVCVisual@@@Z @ 0x180100D6C (-FindMagnifier@CComposition@@QEAAIPEAVCVisual@@@Z.c)
 */

__int64 __fastcall CComposition::AddToMagnifierList(CComposition *this, struct CVisual *a2)
{
  unsigned int v3; // edi
  unsigned int Magnifier; // eax
  struct CResource *v5; // rdx
  CComposition *v6; // rcx
  int WeakReferenceBase; // eax
  unsigned int v8; // eax
  unsigned int v9; // edx
  int v10; // ebx
  int v11; // eax
  struct CWeakReferenceBase *v13; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  Magnifier = CComposition::FindMagnifier(this, a2);
  if ( Magnifier == *((_DWORD *)v6 + 230) )
  {
    v13 = 0LL;
    WeakReferenceBase = CComposition::GetWeakReferenceBase(v6, v5, &v13);
    v3 = WeakReferenceBase;
    if ( WeakReferenceBase < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, WeakReferenceBase, 0x13F3u);
      return v3;
    }
    v8 = *((_DWORD *)this + 230);
    v9 = v8 + 1;
    if ( v8 + 1 < v8 )
    {
      v10 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      v3 = -2147024362;
      goto LABEL_11;
    }
    v3 = 0;
    if ( v9 <= *((_DWORD *)this + 229) )
    {
      *(_QWORD *)(*((_QWORD *)this + 112) + 8LL * *((unsigned int *)this + 230)) = v13;
      *((_DWORD *)this + 230) = v9;
      return v3;
    }
    v11 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 896, 8, 1, &v13);
    v10 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0xC0u);
    v3 = v10;
    if ( v10 < 0 )
LABEL_11:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x13F4u);
  }
  return v3;
}
