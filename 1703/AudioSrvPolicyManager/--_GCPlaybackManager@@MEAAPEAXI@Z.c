/*
 * XREFs of ??_GCPlaybackManager@@MEAAPEAXI@Z @ 0x180015E00
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800210D4 (--3@YAXPEAX_K@Z.c)
 */

CPlaybackManager *__fastcall CPlaybackManager::`scalar deleting destructor'(CPlaybackManager *this, char a2)
{
  *((_DWORD *)this + 6) = 1;
  *((_QWORD *)this + 2) = &CPlaybackManager::`vftable'{for `ISessionInternalEvents'};
  *(_QWORD *)this = &CUnknown::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x20uLL);
  return this;
}
