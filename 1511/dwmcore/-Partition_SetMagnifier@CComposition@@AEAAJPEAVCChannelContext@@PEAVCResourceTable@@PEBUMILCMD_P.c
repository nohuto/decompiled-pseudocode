/*
 * XREFs of ?Partition_SetMagnifier@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_SETMAGNIFIER@@@Z @ 0x1800FB274
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x180096A00 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x180094250 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?ReleaseWeakReference@CComposition@@QEAAXPEAVCWeakReferenceBase@@@Z @ 0x180094860 (-ReleaseWeakReference@CComposition@@QEAAXPEAVCWeakReferenceBase@@@Z.c)
 *     ?AddToMagnifierList@CComposition@@QEAAJPEAVCVisual@@@Z @ 0x180100C28 (-AddToMagnifierList@CComposition@@QEAAJPEAVCVisual@@@Z.c)
 *     ?FindMagnifier@CComposition@@QEAAIPEAVCVisual@@@Z @ 0x180100D6C (-FindMagnifier@CComposition@@QEAAIPEAVCVisual@@@Z.c)
 *     ?RemoveAtOrderNotPreserved@?$DynArray@PEAV?$CWeakReference@VCVisual@@@@$0A@@@QEAAJI@Z @ 0x1801014E8 (-RemoveAtOrderNotPreserved@-$DynArray@PEAV-$CWeakReference@VCVisual@@@@$0A@@@QEAAJI@Z.c)
 */

__int64 __fastcall CComposition::Partition_SetMagnifier(
        CComposition *this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct MILCMD_PARTITION_SETMAGNIFIER *a4)
{
  struct CVisual *Resource; // rax
  int v7; // eax
  unsigned int Magnifier; // eax
  CComposition *v9; // rcx
  unsigned int v10; // esi

  Resource = (struct CVisual *)CResourceTable::GetResource((__int64)a3, *((_DWORD *)a4 + 1), 0x1Fu);
  if ( Resource )
  {
    if ( *((_DWORD *)a4 + 2) )
    {
      v7 = CComposition::AddToMagnifierList(this, Resource);
      if ( v7 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x9AAu);
    }
    else
    {
      Magnifier = CComposition::FindMagnifier(this, Resource);
      v10 = Magnifier;
      if ( Magnifier != *((_DWORD *)this + 230) )
      {
        CComposition::ReleaseWeakReference(v9, *(struct CResource ***)(*((_QWORD *)this + 112) + 8LL * Magnifier));
        DynArray<CWeakReference<CVisual> *,0>::RemoveAtOrderNotPreserved((char *)this + 896, v10);
      }
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0x9A5u);
  }
  return 0LL;
}
