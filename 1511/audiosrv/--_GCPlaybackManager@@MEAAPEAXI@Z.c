/*
 * XREFs of ??_GCPlaybackManager@@MEAAPEAXI@Z @ 0x1800A1290
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800301D0 (--3@YAXPEAX@Z.c)
 */

CPlaybackManager *__fastcall CPlaybackManager::`scalar deleting destructor'(CPlaybackManager *this, char a2)
{
  *((_DWORD *)this + 6) = 1;
  *((_QWORD *)this + 2) = &CPlaybackManager::`vftable'{for `ISessionInternalEvents'};
  *(_QWORD *)this = &CUnknown::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
