/*
 * XREFs of ??_ECDuckingManager@@UEAAPEAXI@Z @ 0x180005940
 * Callers:
 *     <none>
 * Callees:
 *     ??1CDuckingManager@@UEAA@XZ @ 0x180005984 (--1CDuckingManager@@UEAA@XZ.c)
 */

CDuckingManager *__fastcall CDuckingManager::`vector deleting destructor'(CDuckingManager *this, char a2)
{
  HANDLE ProcessHeap; // rax

  CDuckingManager::~CDuckingManager(this);
  if ( (a2 & 1) != 0 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, this);
  }
  return this;
}
