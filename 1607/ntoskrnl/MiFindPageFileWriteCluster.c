/*
 * XREFs of MiFindPageFileWriteCluster @ 0x140125FB0
 * Callers:
 *     MiGatherPagefilePages @ 0x1401199B4 (MiGatherPagefilePages.c)
 * Callees:
 *     MiFindFreePageFileSpace @ 0x1400B4424 (MiFindFreePageFileSpace.c)
 *     MiSetPageFileAllocationBits @ 0x140111E2C (MiSetPageFileAllocationBits.c)
 *     MiRefPageFileSpaceBitmaps @ 0x140117458 (MiRefPageFileSpaceBitmaps.c)
 *     MiDerefPageFileSpaceBitmaps @ 0x1401174C4 (MiDerefPageFileSpaceBitmaps.c)
 *     MiGetPteTimeStamp @ 0x1401F24C8 (MiGetPteTimeStamp.c)
 *     MiMakePageFilePte @ 0x1401F2578 (MiMakePageFilePte.c)
 *     RtlFindLongestRunClearCapped @ 0x1402126DC (RtlFindLongestRunClearCapped.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

ULONG *__fastcall MiFindPageFileWriteCluster(__int64 a1, ULONG *a2, _DWORD *a3, int a4)
{
  unsigned int v4; // r14d
  __int64 PageFilePte; // rax
  __int64 v8; // rcx
  unsigned int v9; // r9d
  __int64 v10; // rdx
  int FreePageFileSpace; // esi
  __int64 v12; // r8
  ULONG PteTimeStamp; // r14d
  int v14; // r15d
  unsigned int v15; // ebx
  unsigned int v16; // ecx
  char *v17; // r13
  ULONG v18; // eax
  int *v19; // rcx
  ULONG LongestRunClearCapped; // eax
  _DWORD *v21; // rax
  ULONG *result; // rax
  int v23; // [rsp+20h] [rbp-48h] BYREF
  __int64 v24; // [rsp+28h] [rbp-40h]
  char v25[8]; // [rsp+30h] [rbp-38h] BYREF
  char v26; // [rsp+38h] [rbp-30h] BYREF
  unsigned __int64 v27; // [rsp+B0h] [rbp+48h] BYREF
  ULONG *v28; // [rsp+B8h] [rbp+50h]
  _DWORD *v29; // [rsp+C0h] [rbp+58h]
  ULONG v30; // [rsp+C8h] [rbp+60h] BYREF

  v29 = a3;
  v28 = a2;
  v4 = *a3;
  PageFilePte = MiMakePageFilePte(*a2);
  v8 = *(_QWORD *)(a1 + 256);
  v27 = ((unsigned __int64)(*(_WORD *)(a1 + 204) & 0xF) << 12) | PageFilePte & 0xFFFFFFFFFFFF0FFFuLL;
  v9 = 32;
  if ( a4 )
    v9 = 38;
  FreePageFileSpace = MiFindFreePageFileSpace(v8, &v27, v4, v9);
  if ( FreePageFileSpace )
  {
    PteTimeStamp = MiGetPteTimeStamp(v27, v10, v12);
  }
  else
  {
    if ( a4 )
    {
      v19 = &v23;
      v17 = *(char **)(a1 + 112);
      v14 = 0;
      v23 = *(_DWORD *)a1;
      v15 = v4;
      v24 = *((_QWORD *)v17 + 2);
      v18 = *v28;
    }
    else
    {
      v14 = *(_DWORD *)(a1 + 128);
      v15 = *(_DWORD *)(a1 + 124);
      if ( v15 < dword_1403A9150 && *(_DWORD *)(a1 + 132) != v14 )
      {
        if ( v15 >= (unsigned int)dword_1403A9150 >> 3 )
        {
          v16 = v15 + (v15 >> 1);
          v15 = dword_1403A9150;
          if ( v16 < dword_1403A9150 )
            v15 = v16;
        }
        else
        {
          v15 *= 2;
        }
        *(_DWORD *)(a1 + 124) = v15;
      }
      v17 = v25;
      if ( v4 < v15 )
        v15 = v4;
      MiRefPageFileSpaceBitmaps(a1, (__int64)v25);
      v18 = *(_DWORD *)(a1 + 120);
      v19 = (int *)&v26;
    }
    v30 = v18;
    LongestRunClearCapped = RtlFindLongestRunClearCapped(v19, v15, &v30);
    PteTimeStamp = v30;
    FreePageFileSpace = LongestRunClearCapped;
    if ( a4 )
    {
      MiSetPageFileAllocationBits(a1, v30, LongestRunClearCapped);
    }
    else
    {
      if ( LongestRunClearCapped )
      {
        if ( LongestRunClearCapped < v15 )
        {
          *(_DWORD *)(a1 + 124) = LongestRunClearCapped;
          *(_DWORD *)(a1 + 132) = v14;
        }
        *(_DWORD *)(a1 + 120) = PteTimeStamp + LongestRunClearCapped;
      }
      v21 = MiDerefPageFileSpaceBitmaps(a1, (_DWORD **)v17, 0);
      if ( v21 )
        ExFreePoolWithTag(v21, 0);
    }
  }
  *v29 = FreePageFileSpace;
  result = v28;
  *v28 = PteTimeStamp;
  return result;
}
