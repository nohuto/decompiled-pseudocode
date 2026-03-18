/*
 * XREFs of KeFreeCalloutStack @ 0x14055CCCC
 * Callers:
 *     <none>
 * Callees:
 *     MmDeleteKernelStack @ 0x140022520 (MmDeleteKernelStack.c)
 */

void __fastcall KeFreeCalloutStack(_BYTE *a1)
{
  __int64 v1; // rsi
  BOOL i; // ebp

  v1 = 0LL;
  for ( i = a1[4] != 0; (unsigned int)v1 < (unsigned __int8)a1[5]; v1 = (unsigned int)(v1 + 1) )
  {
    MmDeleteKernelStack(*(_QWORD *)&a1[8 * v1 + 64], i);
    *(_QWORD *)&a1[8 * v1 + 64] = (char *)MmBadPointer + 4096;
  }
  ExFreePoolWithTag(a1, 0);
}
