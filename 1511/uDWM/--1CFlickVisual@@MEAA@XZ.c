/*
 * XREFs of ??1CFlickVisual@@MEAA@XZ @ 0x18008B548
 * Callers:
 *     ??_GCFlickVisual@@MEAAPEAXI@Z @ 0x18008B5D0 (--_GCFlickVisual@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?PostFlickFeedbackUpdate@CContactManager@@QEAAJIW4FLICK_TYPE@@PEBUtagPOINT@@_N@Z @ 0x1800879D4 (-PostFlickFeedbackUpdate@CContactManager@@QEAAJIW4FLICK_TYPE@@PEBUtagPOINT@@_N@Z.c)
 *     ?StopTimer@CFlickVisual@@MEAAJXZ @ 0x18008BBD0 (-StopTimer@CFlickVisual@@MEAAJXZ.c)
 */

void __fastcall CFlickVisual::~CFlickVisual(CFlickVisual *this)
{
  CBaseObject *v2; // rcx
  CBaseObject *v3; // rcx

  *(_QWORD *)this = &CFlickVisual::`vftable';
  CFlickVisual::StopTimer(this);
  CContactManager::PostFlickFeedbackUpdate(
    *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 20),
    *((_DWORD *)this + 70),
    *((_DWORD *)this + 71),
    (_QWORD *)this + 37,
    0);
  v2 = (CBaseObject *)*((_QWORD *)this + 38);
  if ( v2 )
    CBaseObject::Release(v2);
  v3 = (CBaseObject *)*((_QWORD *)this + 39);
  if ( v3 )
    CBaseObject::Release(v3);
  *(_QWORD *)this = &CTouchVisual::`vftable';
  CVisual::~CVisual(this);
}
