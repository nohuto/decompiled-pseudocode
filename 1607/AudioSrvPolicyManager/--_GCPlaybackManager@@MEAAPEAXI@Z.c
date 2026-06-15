/*
 * XREFs of ??_GCPlaybackManager@@MEAAPEAXI@Z @ 0x180017D80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

CPlaybackManager *__fastcall CPlaybackManager::`scalar deleting destructor'(CPlaybackManager *this, char a2)
{
  HANDLE ProcessHeap; // rax

  *((_DWORD *)this + 6) = 1;
  *((_QWORD *)this + 2) = &CPlaybackManager::`vftable'{for `ISessionInternalEvents'};
  *(_QWORD *)this = &CUnknown::`vftable';
  if ( (a2 & 1) != 0 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, this);
  }
  return this;
}
