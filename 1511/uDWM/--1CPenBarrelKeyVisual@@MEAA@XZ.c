/*
 * XREFs of ??1CPenBarrelKeyVisual@@MEAA@XZ @ 0x18008AF78
 * Callers:
 *     ??_GCPenBarrelKeyVisual@@MEAAPEAXI@Z @ 0x18008B020 (--_GCPenBarrelKeyVisual@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?PostKeystateFeedbackUpdate@CContactManager@@QEAAJIKPEBUtagPOINT@@_N@Z @ 0x18003F1D8 (-PostKeystateFeedbackUpdate@CContactManager@@QEAAJIKPEBUtagPOINT@@_N@Z.c)
 *     Template_q @ 0x18007CFB4 (Template_q.c)
 */

void __fastcall CPenBarrelKeyVisual::~CPenBarrelKeyVisual(CPenBarrelKeyVisual *this)
{
  unsigned int v1; // edx
  __int64 v3; // rcx
  CBaseObject *v4; // rcx
  CBaseObject *v5; // rcx

  v1 = *((_DWORD *)this + 70);
  *(_QWORD *)this = &CPenBarrelKeyVisual::`vftable';
  CContactManager::PostKeystateFeedbackUpdate(
    *((CContactManager **)CDesktopManager::s_pDesktopManagerInstance + 20),
    v1,
    0,
    (const struct tagPOINT *)((char *)this + 284),
    0);
  if ( *((_BYTE *)this + 325) && (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    Template_q(v3, (__int64)&UdwmPenBarrel_Stop, *((_DWORD *)this + 70));
  v4 = (CBaseObject *)*((_QWORD *)this + 37);
  if ( v4 )
    CBaseObject::Release(v4);
  v5 = (CBaseObject *)*((_QWORD *)this + 38);
  if ( v5 )
    CBaseObject::Release(v5);
  *(_QWORD *)this = &CTouchVisual::`vftable';
  CVisual::~CVisual(this);
}
