/*
 * XREFs of ?ReleaseAllReferences@CInteractionTrackerMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C00E8CD0
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C003D870 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?ReleaseWeakReference@CApplicationChannel@DirectComposition@@QEAAXPEAVCWeakReferenceBase@2@@Z @ 0x1C003EA80 (-ReleaseWeakReference@CApplicationChannel@DirectComposition@@QEAAXPEAVCWeakReferenceBase@2@@Z.c)
 *     ?ReleaseManipulationReferences@CInteractionTrackerMarshaler@DirectComposition@@AEAAXPEAVCApplicationChannel@2@@Z @ 0x1C00E8D78 (-ReleaseManipulationReferences@CInteractionTrackerMarshaler@DirectComposition@@AEAAXPEAVCApplica.c)
 */

void __fastcall DirectComposition::CInteractionTrackerMarshaler::ReleaseAllReferences(
        struct DirectComposition::CWeakReferenceBase **this,
        struct DirectComposition::CApplicationChannel *a2)
{
  __int64 *v4; // rbx
  __int64 v5; // rbp
  __int64 v6; // rcx
  struct DirectComposition::CWeakReferenceBase *v7; // rdx
  struct DirectComposition::CWeakReferenceBase *v8; // rdx

  DirectComposition::CInteractionTrackerMarshaler::ReleaseManipulationReferences(
    (DirectComposition::CInteractionTrackerMarshaler *)this,
    a2);
  v4 = (__int64 *)(this + 28);
  v5 = 3LL;
  do
  {
    DirectComposition::CApplicationChannel::ReleaseResource(
      a2,
      (struct DirectComposition::CResourceMarshaler *)*(v4 - 3));
    v6 = *v4;
    *(v4 - 3) = 0LL;
    if ( v6 )
    {
      Win32FreePool();
      *v4 = 0LL;
    }
    v4[3] = 0LL;
    ++v4;
    --v5;
  }
  while ( v5 );
  v7 = this[23];
  if ( v7 )
  {
    DirectComposition::CApplicationChannel::ReleaseWeakReference(a2, v7);
    this[23] = 0LL;
  }
  v8 = this[24];
  if ( v8 )
  {
    DirectComposition::CApplicationChannel::ReleaseWeakReference(a2, v8);
    this[24] = 0LL;
  }
}
