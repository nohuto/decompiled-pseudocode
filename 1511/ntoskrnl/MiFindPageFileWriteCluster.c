/*
 * XREFs of MiFindPageFileWriteCluster @ 0x1401084F0
 * Callers:
 *     MiGatherPagefilePages @ 0x14010AF5C (MiGatherPagefilePages.c)
 * Callees:
 *     MiFindFreePageFileSpace @ 0x1400F4EDC (MiFindFreePageFileSpace.c)
 *     MiSetPageFileAllocationBits @ 0x140109328 (MiSetPageFileAllocationBits.c)
 *     MiRefPageFileSpaceBitmaps @ 0x140109BC8 (MiRefPageFileSpaceBitmaps.c)
 *     MiDerefPageFileSpaceBitmaps @ 0x140109C34 (MiDerefPageFileSpaceBitmaps.c)
 *     RtlFindLongestRunClearCapped @ 0x1401F8574 (RtlFindLongestRunClearCapped.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

_DWORD *__fastcall MiFindPageFileWriteCluster(int *a1, unsigned int *a2, unsigned int *a3, int a4)
{
  unsigned int v5; // esi
  unsigned __int64 v7; // r10
  unsigned __int64 v8; // r8
  __int64 v9; // rcx
  bool v10; // zf
  unsigned int v11; // r9d
  int FreePageFileSpace; // r14d
  unsigned __int64 v13; // rsi
  _DWORD *result; // rax
  int v15; // r15d
  unsigned int v16; // ebx
  unsigned int v17; // ecx
  _BYTE *v18; // r13
  int *v19; // rcx
  unsigned int LongestRunClearCapped; // eax
  void *v21; // rax
  int v22; // [rsp+20h] [rbp-48h] BYREF
  __int64 v23; // [rsp+28h] [rbp-40h]
  _BYTE v24[8]; // [rsp+30h] [rbp-38h] BYREF
  char v25; // [rsp+38h] [rbp-30h] BYREF
  unsigned __int64 v26; // [rsp+B0h] [rbp+48h] BYREF
  _DWORD *v27; // [rsp+B8h] [rbp+50h]
  _DWORD *v28; // [rsp+C0h] [rbp+58h]
  unsigned int v29; // [rsp+C8h] [rbp+60h] BYREF

  v28 = a3;
  v27 = a2;
  v5 = *a3;
  v7 = ((unsigned __int64)*a2 << 31) | a1[51] & 0xF;
  v8 = *a3;
  v9 = *((_QWORD *)a1 + 32);
  v26 = (unsigned int)v26 & 0xFFFFFFE1 | (2 * v7);
  v10 = a4 == 0;
  v11 = 32;
  if ( !v10 )
    v11 = 38;
  FreePageFileSpace = MiFindFreePageFileSpace(v9, &v26, v8, v11);
  if ( FreePageFileSpace )
  {
    v13 = HIDWORD(v26);
  }
  else
  {
    if ( a4 )
    {
      v19 = &v22;
      v18 = (_BYTE *)*((_QWORD *)a1 + 14);
      v15 = 0;
      v22 = *a1;
      v16 = v5;
      v23 = *((_QWORD *)v18 + 2);
    }
    else
    {
      v15 = a1[32];
      v16 = a1[31];
      if ( v16 < dword_140381108 && a1[33] != v15 )
      {
        if ( v16 >= (unsigned int)dword_140381108 >> 3 )
        {
          v17 = v16 + (v16 >> 1);
          v16 = dword_140381108;
          if ( v17 < dword_140381108 )
            v16 = v17;
        }
        else
        {
          v16 *= 2;
        }
        a1[31] = v16;
      }
      v18 = v24;
      if ( v5 < v16 )
        v16 = v5;
      MiRefPageFileSpaceBitmaps(a1, v24);
      v19 = (int *)&v25;
    }
    v29 = a1[30];
    LongestRunClearCapped = RtlFindLongestRunClearCapped(v19, v16, &v29);
    LODWORD(v13) = v29;
    FreePageFileSpace = LongestRunClearCapped;
    if ( a4 )
    {
      MiSetPageFileAllocationBits(a1, v29, LongestRunClearCapped);
    }
    else
    {
      if ( LongestRunClearCapped )
      {
        if ( LongestRunClearCapped < v16 )
        {
          a1[31] = LongestRunClearCapped;
          a1[33] = v15;
        }
        a1[30] = v13 + LongestRunClearCapped;
      }
      v21 = (void *)MiDerefPageFileSpaceBitmaps(a1, v18, 0LL);
      if ( v21 )
        ExFreePoolWithTag(v21, 0);
    }
  }
  *v28 = FreePageFileSpace;
  result = v27;
  *v27 = v13;
  return result;
}
