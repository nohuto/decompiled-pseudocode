/*
 * XREFs of ??_ECGainStage@@MEAAPEAXI@Z @ 0x18000A1F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

CGainStage *__fastcall CGainStage::`vector deleting destructor'(CGainStage *this, char a2)
{
  HANDLE ProcessHeap; // rax

  *(_QWORD *)this = &CRefCountedObject::`vftable';
  if ( (a2 & 1) != 0 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, this);
  }
  return this;
}
