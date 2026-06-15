/*
 * XREFs of ??_ECProcess@@MEAAPEAXI@Z @ 0x18000DDB0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CProcess@@MEAA@XZ @ 0x18000E600 (--1CProcess@@MEAA@XZ.c)
 */

CProcess *__fastcall CProcess::`vector deleting destructor'(CProcess *this, char a2)
{
  HANDLE ProcessHeap; // rax

  CProcess::~CProcess(this);
  if ( (a2 & 1) != 0 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, this);
  }
  return this;
}
