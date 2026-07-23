/*
 * XREFs of CmpLightWeightDuplicateParentLists @ 0x14060EC9C
 * Callers:
 *     CmpLightWeightCreateModificationData @ 0x14060EBD4 (CmpLightWeightCreateModificationData.c)
 * Callees:
 *     HvpGetCellContextReinitialize @ 0x14002CF68 (HvpGetCellContextReinitialize.c)
 *     CmpDuplicateIndex @ 0x140609E24 (CmpDuplicateIndex.c)
 *     CmpMarkEntireIndexDirty @ 0x14060A9A8 (CmpMarkEntireIndexDirty.c)
 */

__int64 __fastcall CmpLightWeightDuplicateParentLists(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rax
  unsigned int v7; // ebx
  signed int v8; // ebp
  _DWORD *v9; // rdi
  __int64 v10; // r14
  unsigned int v11; // r15d
  int v12; // eax
  char v14; // [rsp+40h] [rbp+8h] BYREF

  HvpGetCellContextReinitialize((__int64)&v14);
  v6 = (*(__int64 (__fastcall **)(ULONG_PTR, __int64, char *))(BugCheckParameter2 + 8))(BugCheckParameter2, v5, &v14);
  v7 = 0;
  if ( !v6 )
    return (unsigned int)-1073741670;
  v8 = 0;
  v9 = (_DWORD *)(a3 + 12);
  v10 = v6 - a3;
  while ( 1 )
  {
    v11 = *(_DWORD *)((char *)v9 + v10 + 16);
    if ( v11 == -1 )
      goto LABEL_8;
    if ( !CmpMarkEntireIndexDirty(BugCheckParameter2, v11) )
      break;
    v12 = CmpDuplicateIndex(BugCheckParameter2, v11, v8);
    *v9 = v12;
    if ( v12 == -1 )
    {
      v7 = -1073741670;
      goto LABEL_12;
    }
    *(v9 - 2) = *(_DWORD *)((char *)v9 + v10 + 8);
LABEL_8:
    ++v8;
    ++v9;
    if ( v8 >= 2 )
      goto LABEL_12;
  }
  v7 = -1073741443;
LABEL_12:
  (*(void (__fastcall **)(ULONG_PTR, char *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v14);
  return v7;
}
