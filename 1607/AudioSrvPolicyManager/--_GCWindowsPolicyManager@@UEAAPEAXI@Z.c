/*
 * XREFs of ??_GCWindowsPolicyManager@@UEAAPEAXI@Z @ 0x180003D60
 * Callers:
 *     ??_ECWindowsPolicyManager@@WBA@EAAPEAXI@Z @ 0x180005110 (--_ECWindowsPolicyManager@@WBA@EAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

CWindowsPolicyManager *__fastcall CWindowsPolicyManager::`scalar deleting destructor'(
        CWindowsPolicyManager *this,
        char a2)
{
  HANDLE ProcessHeap; // rax

  *(_QWORD *)this = &CWindowsPolicyManager::`vftable'{for `IAudioPolicyManager'};
  *((_QWORD *)this + 1) = &CWindowsPolicyManager::`vftable'{for `ISessionInternalEvents'};
  *((_QWORD *)this + 2) = &CUnknown::`vftable';
  if ( (a2 & 1) != 0 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, this);
  }
  return this;
}
