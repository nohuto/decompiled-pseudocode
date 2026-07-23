/*
 * XREFs of CmpLightWeightCreateSetValueData @ 0x14053BA28
 * Callers:
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x14053B5C0 (CmpLightWeightPrepareSetValueKeyUoW.c)
 *     CmpLightWeightPrepareDeleteValueKeyUoW @ 0x14060F140 (CmpLightWeightPrepareDeleteValueKeyUoW.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     HvFreeCell @ 0x1404005AC (HvFreeCell.c)
 *     CmpCopyCell @ 0x1404CE184 (CmpCopyCell.c)
 *     HvpMarkCellDirty @ 0x1404F6AE0 (HvpMarkCellDirty.c)
 */

__int64 __fastcall CmpLightWeightCreateSetValueData(__int64 a1, _QWORD *a2)
{
  ULONG_PTR v4; // rsi
  _DWORD *PoolWithTag; // rax
  _DWORD *v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rbx
  int v9; // eax
  int v10; // eax
  unsigned int v11; // ebx
  ULONG_PTR v13; // rdx
  int v14; // [rsp+40h] [rbp+8h] BYREF
  int v15; // [rsp+44h] [rbp+Ch]

  v14 = -1;
  v15 = 0;
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 24LL);
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0xCuLL, 0x77554D43u);
  v6 = PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741670;
  *(_QWORD *)PoolWithTag = 0LL;
  PoolWithTag[2] = 0;
  *PoolWithTag = 1;
  v7 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v4 + 8))(
         v4,
         *(unsigned int *)(*(_QWORD *)(a1 + 48) + 32LL),
         &v14);
  v8 = v7;
  if ( v7 )
  {
    v6[2] = -1;
    v6[1] = 0;
    v9 = *(_DWORD *)(v7 + 36);
    if ( v9 )
    {
      v6[1] = v9;
      v10 = CmpCopyCell(v4, *(unsigned int *)(v8 + 40), v4, *(_DWORD *)(v8 + 40) >> 31);
      v6[2] = v10;
      if ( v10 == -1 )
      {
        v11 = -1073741670;
        goto LABEL_7;
      }
      if ( !HvpMarkCellDirty(v4, *(unsigned int *)(v8 + 40), 0) )
      {
        v11 = -1073741443;
        goto LABEL_7;
      }
    }
    *a2 = v6;
    v11 = 0;
    v6 = 0LL;
LABEL_7:
    (*(void (__fastcall **)(ULONG_PTR, int *))(v4 + 16))(v4, &v14);
    goto LABEL_8;
  }
  v11 = -1073741670;
LABEL_8:
  if ( v6 )
  {
    v13 = (unsigned int)v6[2];
    if ( (_DWORD)v13 != -1 )
      HvFreeCell(v4, v13);
    ExFreePoolWithTag(v6, 0x77554D43u);
  }
  return v11;
}
