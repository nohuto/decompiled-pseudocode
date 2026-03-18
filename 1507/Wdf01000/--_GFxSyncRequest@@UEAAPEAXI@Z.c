/*
 * XREFs of ??_GFxSyncRequest@@UEAAPEAXI@Z @ 0x1C00A6CC0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C00102D0 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxSyncRequest@@UEAA@XZ @ 0x1C005C350 (--1FxSyncRequest@@UEAA@XZ.c)
 */

FxSyncRequest *__fastcall FxSyncRequest::`scalar deleting destructor'(FxSyncRequest *this, char a2)
{
  FxSyncRequest *v4; // rcx

  FxSyncRequest::~FxSyncRequest(this);
  if ( (a2 & 1) != 0 )
  {
    v4 = (FxSyncRequest *)((char *)this - 32);
    if ( SLOBYTE(this->m_ObjectFlags) >= 0 )
      v4 = this;
    FxPoolFree(v4);
  }
  return this;
}
