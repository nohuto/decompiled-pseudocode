/*
 * XREFs of XEPATHOBJ_vConstructHPATHWrap @ 0x1C027B740
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall XEPATHOBJ_vConstructHPATHWrap(EPATHOBJ *this, struct HPATH__ *a2)
{
  *((_QWORD *)this + 1) = 0LL;
  if ( !*((_DWORD *)this + 30) && XEPATHOBJ_vDestructWrap )
  {
    PushThreadGuardedObject((char *)this + 88, this, XEPATHOBJ_vDestructWrap);
    *((_DWORD *)this + 30) = 1;
  }
  EPATHOBJ::vLock(this, a2);
}
