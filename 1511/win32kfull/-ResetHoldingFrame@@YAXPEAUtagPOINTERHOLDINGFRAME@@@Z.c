/*
 * XREFs of ?ResetHoldingFrame@@YAXPEAUtagPOINTERHOLDINGFRAME@@@Z @ 0x1C02302B4
 * Callers:
 *     ?xxxDoTouchpadProcessing@@YAHPEAXH@Z @ 0x1C01F4F58 (-xxxDoTouchpadProcessing@@YAHPEAXH@Z.c)
 *     ?AbandonHoldingFrame@@YAXPEAUtagPOINTERHOLDINGFRAME@@@Z @ 0x1C022E398 (-AbandonHoldingFrame@@YAXPEAUtagPOINTERHOLDINGFRAME@@@Z.c)
 *     ?CommitHoldingFrame@@YAPEAUtagPOINTERINPUTFRAME@@PEAX@Z @ 0x1C022ECE8 (-CommitHoldingFrame@@YAPEAUtagPOINTERINPUTFRAME@@PEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ResetHoldingFrame(struct tagPOINTERHOLDINGFRAME *a1)
{
  _QWORD *v1; // rbx

  *((_QWORD *)a1 + 3) = 0LL;
  v1 = (_QWORD *)((char *)a1 + 80);
  *((_DWORD *)a1 + 8) = 0;
  *((_DWORD *)a1 + 9) = 0;
  *((_DWORD *)a1 + 10) = 0;
  *((_QWORD *)a1 + 6) = 0LL;
  *((_QWORD *)a1 + 7) = 0LL;
  *((_QWORD *)a1 + 8) = 0LL;
  *((_QWORD *)a1 + 9) = 0LL;
  if ( *((_QWORD *)a1 + 10) )
  {
    HMAssignmentUnlock((char *)a1 + 80);
    *v1 = 0LL;
  }
}
