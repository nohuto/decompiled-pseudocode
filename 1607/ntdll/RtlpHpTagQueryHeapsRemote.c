/*
 * XREFs of RtlpHpTagQueryHeapsRemote @ 0x1800F7804
 * Callers:
 *     RtlpHpTagQueryTags @ 0x180081A70 (RtlpHpTagQueryTags.c)
 * Callees:
 *     NtClose @ 0x1800A6600 (NtClose.c)
 *     ZwMapViewOfSection @ 0x1800A6920 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x1800A6960 (NtUnmapViewOfSection.c)
 *     NtCreateSection @ 0x1800A6D60 (NtCreateSection.c)
 *     memmove @ 0x1800AC980 (memmove.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x1800EA33C (RtlpHeapPerformCrossProcessQuery.c)
 */

__int64 __fastcall RtlpHpTagQueryHeapsRemote(_OWORD *a1, unsigned __int64 a2, _QWORD *a3)
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
