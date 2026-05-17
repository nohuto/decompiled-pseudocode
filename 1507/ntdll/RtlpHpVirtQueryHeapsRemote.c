/*
 * XREFs of RtlpHpVirtQueryHeapsRemote @ 0x1800EB900
 * Callers:
 *     RtlpHpVirtQueryHeaps @ 0x1800EB6B4 (RtlpHpVirtQueryHeaps.c)
 * Callees:
 *     NtClose @ 0x1800939F0 (NtClose.c)
 *     ZwMapViewOfSection @ 0x180093B80 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x180093BA0 (NtUnmapViewOfSection.c)
 *     NtCreateSection @ 0x180093DA0 (NtCreateSection.c)
 *     memmove @ 0x180098200 (memmove.c)
 *     memset @ 0x180098540 (memset.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x1800D92B4 (RtlpHeapPerformCrossProcessQuery.c)
 */

__int64 __fastcall RtlpHpVirtQueryHeapsRemote(_OWORD *a1, unsigned __int64 a2, _QWORD *a3)
{
  int Section; // edi
  __int64 v7; // rcx
  size_t v8; // r8
  bool v9; // cc
  unsigned __int64 v11; // [rsp+50h] [rbp-19h]
  _QWORD v12[10]; // [rsp+60h] [rbp-9h] BYREF

  v11 = (a2 + 0xFFFF) & 0xFFFFFFFFFFFF0000uLL;
  Section = NtCreateSection();
  if ( Section >= 0 )
  {
    Section = ZwMapViewOfSection();
    if ( Section >= 0 )
    {
      MEMORY[0] = *a1;
      MEMORY[0x10] = a1[1];
      MEMORY[0x20] = a1[2];
      MEMORY[0x30] = *((_QWORD *)a1 + 6);
      memset(v12, 0, sizeof(v12));
      v7 = *((_QWORD *)a1 + 1);
      v12[0] = 0LL;
      v12[1] = v11;
      LODWORD(v12[3]) = 0x40000000;
      Section = RtlpHeapPerformCrossProcessQuery(v7, (__int64)v12);
      if ( Section >= 0 )
      {
        v8 = v12[4];
        v9 = v12[4] <= a2;
        *a3 = v12[4];
        if ( v9 )
        {
          memmove(a1, 0LL, v8);
          return 0;
        }
        else
        {
          return (unsigned int)-1073741789;
        }
      }
    }
  }
  return (unsigned int)Section;
}
