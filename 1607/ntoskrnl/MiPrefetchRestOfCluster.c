/*
 * XREFs of MiPrefetchRestOfCluster @ 0x1400B05A4
 * Callers:
 *     MiWaitForInPageComplete @ 0x140024D30 (MiWaitForInPageComplete.c)
 * Callees:
 *     MiGetEffectivePagePriorityThread @ 0x140026934 (MiGetEffectivePagePriorityThread.c)
 *     MiPrefetchVirtualMemory @ 0x1400BDB30 (MiPrefetchVirtualMemory.c)
 */

void __fastcall MiPrefetchRestOfCluster(__int64 a1, _QWORD *a2)
{
  unsigned __int64 v2; // r9
  unsigned __int64 *v3; // r9
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // rdx
  char EffectivePagePriorityThread; // al
  __int64 v8; // r11
  _QWORD v9[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = a2[3];
  if ( v2 < a2[2] )
  {
    v3 = (unsigned __int64 *)(a2[1] + 16 * v2);
    v4 = (*(unsigned int *)(a1 + 180) + *(_QWORD *)(a1 + 216) + 4095LL) & 0xFFFFFFFFFFFFF000uLL;
    v5 = *v3;
    if ( v4 >= *v3 )
    {
      v6 = v3[1];
      if ( v4 < v6 + v5 )
      {
        v9[0] = v4;
        v9[1] = v5 + v6 - v4;
        EffectivePagePriorityThread = MiGetEffectivePagePriorityThread((__int64)KeGetCurrentThread());
        MiPrefetchVirtualMemory(
          1LL,
          v9,
          v8,
          EffectivePagePriorityThread & 7 | (8 * (EffectivePagePriorityThread & 7 | 0x800u)));
      }
    }
  }
}
