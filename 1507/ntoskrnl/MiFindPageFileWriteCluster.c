/*
 * XREFs of MiFindPageFileWriteCluster @ 0x14013A5CC
 * Callers:
 *     MiGatherPagefilePages @ 0x14013D12C (MiGatherPagefilePages.c)
 * Callees:
 *     MiFindFreePageFileSpace @ 0x140062B48 (MiFindFreePageFileSpace.c)
 *     MiDerefPageFileSpaceBitmaps @ 0x140127E08 (MiDerefPageFileSpaceBitmaps.c)
 *     MiRefPageFileSpaceBitmaps @ 0x140127E6C (MiRefPageFileSpaceBitmaps.c)
 *     MiGetPteTimeStamp @ 0x140225B28 (MiGetPteTimeStamp.c)
 *     MiMakePageFilePte @ 0x140225C2C (MiMakePageFilePte.c)
 *     RtlFindLongestRunClearCapped @ 0x14024749C (RtlFindLongestRunClearCapped.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiFindPageFileWriteCluster(__int64 a1, unsigned int *a2, _DWORD *a3, int a4)
{
  __int64 PageFilePte; // rax
  unsigned int *v9; // r8
  unsigned __int64 v10; // r8
  int v11; // r9d
  int FreePageFileSpace; // r14d
  _BYTE *v13; // rdi
  int *v14; // rcx
  __int64 v15; // rdx
  _DWORD *v16; // rax
  __int64 result; // rax
  int v18; // [rsp+30h] [rbp-40h] BYREF
  __int64 v19; // [rsp+38h] [rbp-38h]
  _BYTE v20[8]; // [rsp+40h] [rbp-30h] BYREF
  char v21; // [rsp+48h] [rbp-28h] BYREF
  unsigned __int64 v22; // [rsp+A0h] [rbp+30h] BYREF
  unsigned int v23; // [rsp+B8h] [rbp+48h] BYREF

  PageFilePte = MiMakePageFilePte(*a2);
  v10 = *v9;
  v22 = ((unsigned __int64)(*(_WORD *)(a1 + 164) & 0xF) << 12) | PageFilePte & 0xFFFFFFFFFFFF0FFFuLL;
  FreePageFileSpace = MiFindFreePageFileSpace(*(_QWORD *)(a1 + 216), &v22, v10, 0LL, v11 != 0 ? 2 : 0);
  if ( FreePageFileSpace )
  {
    result = MiGetPteTimeStamp(v22);
  }
  else
  {
    if ( a4 )
    {
      v14 = &v18;
      v13 = *(_BYTE **)(a1 + 128);
      v18 = *(_DWORD *)a1;
      v19 = *((_QWORD *)v13 + 2);
    }
    else
    {
      v13 = v20;
      MiRefPageFileSpaceBitmaps(a1, (__int64)v20);
      v14 = (int *)&v21;
    }
    v15 = (unsigned int)*a3;
    v23 = *a2;
    FreePageFileSpace = RtlFindLongestRunClearCapped(v14, v15, &v23);
    if ( !a4 )
    {
      v16 = MiDerefPageFileSpaceBitmaps(a1, (_DWORD **)v13, 0);
      if ( v16 )
        ExFreePoolWithTag(v16, 0);
    }
    result = v23;
  }
  *a3 = FreePageFileSpace;
  *a2 = result;
  return result;
}
