/*
 * XREFs of KeFreeCalloutStack @ 0x140533370
 * Callers:
 *     <none>
 * Callees:
 *     MmDeleteKernelStack @ 0x1400EF9D0 (MmDeleteKernelStack.c)
 */

void __fastcall KeFreeCalloutStack(_BYTE *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  unsigned int i; // ebp

  v4 = 0LL;
  for ( i = a1[4] != 0; (unsigned int)v4 < (unsigned __int8)a1[5]; v4 = (unsigned int)(v4 + 1) )
  {
    MmDeleteKernelStack(*(_QWORD *)&a1[8 * v4 + 64], i, a3, a4);
    *(_QWORD *)&a1[8 * v4 + 64] = (char *)MmBadPointer + 4096;
  }
  ExFreePoolWithTag(a1, 0);
}
