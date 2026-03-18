/*
 * XREFs of ?AddToMagnifierList@CComposition@@QEAAJPEAVCVisual@@@Z @ 0x180116914
 * Callers:
 *     ?Partition_SetMagnifier@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_SETMAGNIFIER@@@Z @ 0x18010FC88 (-Partition_SetMagnifier@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_P.c)
 * Callees:
 *     ?GetWeakReferenceBase@CComposition@@AEAAJPEAVCResource@@PEAPEAVCWeakReferenceBase@@@Z @ 0x18003B058 (-GetWeakReferenceBase@CComposition@@AEAAJPEAVCResource@@PEAPEAVCWeakReferenceBase@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18009A984 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?FindMagnifier@CComposition@@QEAAIPEAVCVisual@@@Z @ 0x180116A50 (-FindMagnifier@CComposition@@QEAAIPEAVCVisual@@@Z.c)
 */

__int64 __fastcall CComposition::AddToMagnifierList(CComposition *this, struct CVisual *a2)
{
  unsigned int v3; // ebx
  unsigned int Magnifier; // eax
  struct CResource *v5; // rdx
  CComposition *v6; // rcx
  int WeakReferenceBase; // eax
  unsigned int v8; // eax
  unsigned int v9; // edx
  int v10; // eax
  struct CWeakReferenceBase *v12; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  Magnifier = CComposition::FindMagnifier(this, a2);
  if ( Magnifier == *((_DWORD *)v6 + 232) )
  {
    v12 = 0LL;
    WeakReferenceBase = CComposition::GetWeakReferenceBase(v6, v5, &v12);
    v3 = WeakReferenceBase;
    if ( WeakReferenceBase < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, WeakReferenceBase, 0x120Du);
      return v3;
    }
    v8 = *((_DWORD *)this + 232);
    v9 = v8 + 1;
    if ( v8 + 1 >= v8 )
    {
      v3 = 0;
      if ( v9 <= *((_DWORD *)this + 231) )
      {
        *(_QWORD *)(*((_QWORD *)this + 113) + 8LL * *((unsigned int *)this + 232)) = v12;
        *((_DWORD *)this + 232) = v9;
        return v3;
      }
      v10 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 904, 8u, 1, &v12);
      v3 = v10;
      if ( v10 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0xC0u);
    }
    else
    {
      v3 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    }
    if ( (v3 & 0x80000000) != 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x120Eu);
  }
  return v3;
}
