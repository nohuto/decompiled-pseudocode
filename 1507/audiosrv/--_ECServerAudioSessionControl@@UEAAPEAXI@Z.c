/*
 * XREFs of ??_ECServerAudioSessionControl@@UEAAPEAXI@Z @ 0x180018C54
 * Callers:
 *     ??_ECServerAudioSessionControl@@W7EAAPEAXI@Z @ 0x180044D30 (--_ECServerAudioSessionControl@@W7EAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

CServerAudioSessionControl *__fastcall CServerAudioSessionControl::`vector deleting destructor'(
        CServerAudioSessionControl *this,
        char a2)
{
  HANDLE ProcessHeap; // rax

  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  *((_QWORD *)this + 1) = &CUnknown::`vftable';
  if ( (a2 & 1) != 0 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, this);
  }
  return this;
}
