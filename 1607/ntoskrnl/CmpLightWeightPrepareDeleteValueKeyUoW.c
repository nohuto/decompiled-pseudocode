/*
 * XREFs of CmpLightWeightPrepareDeleteValueKeyUoW @ 0x14060F140
 * Callers:
 *     CmpProcessLightWeightUOW @ 0x14053B24C (CmpProcessLightWeightUOW.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     CmpMarkValueDataDirty @ 0x1403FF334 (CmpMarkValueDataDirty.c)
 *     CmpFindNameInList @ 0x140401914 (CmpFindNameInList.c)
 *     CmpRemoveValueFromList @ 0x1404BFE84 (CmpRemoveValueFromList.c)
 *     HvpMarkCellDirty @ 0x1404F6AE0 (HvpMarkCellDirty.c)
 *     CmpInitializeValueNameString @ 0x14053B954 (CmpInitializeValueNameString.c)
 *     CmpLightWeightUpdateSharedSetValueData @ 0x14053B9E0 (CmpLightWeightUpdateSharedSetValueData.c)
 *     CmpLightWeightCreateSetValueData @ 0x14053BA28 (CmpLightWeightCreateSetValueData.c)
 */

__int64 __fastcall CmpLightWeightPrepareDeleteValueKeyUoW(__int64 a1)
{
  _DWORD *v1; // rbx
  __int64 v2; // rax
  ULONG_PTR v4; // rdi
  int v5; // ebx
  _QWORD *PoolWithTag; // rsi
  ULONG_PTR v7; // r12
  _WORD *v8; // rax
  void *v9; // r15
  unsigned int v10; // r12d
  __int64 v11; // r13
  _BYTE v13[24]; // [rsp+30h] [rbp-18h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+90h] [rbp+48h] BYREF
  unsigned int v15; // [rsp+98h] [rbp+50h] BYREF
  int v16; // [rsp+A0h] [rbp+58h] BYREF
  int v17; // [rsp+A4h] [rbp+5Ch]
  int v18; // [rsp+A8h] [rbp+60h] BYREF
  int v19; // [rsp+ACh] [rbp+64h]

  v1 = *(_DWORD **)(a1 + 104);
  v2 = *(_QWORD *)(a1 + 48);
  v18 = -1;
  v19 = 0;
  v16 = -1;
  v17 = 0;
  v4 = *(_QWORD *)(v2 + 24);
  BugCheckParameter3 = (ULONG_PTR)v1;
  if ( !v1 )
  {
    v5 = CmpLightWeightCreateSetValueData(a1, &BugCheckParameter3);
    if ( v5 < 0 )
      return (unsigned int)v5;
    v1 = (_DWORD *)BugCheckParameter3;
    CmpLightWeightUpdateSharedSetValueData(BugCheckParameter3, *(_QWORD *)(a1 + 48));
    --*v1;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x77554D43u);
  if ( PoolWithTag )
  {
    *PoolWithTag = 0LL;
    PoolWithTag[1] = 0LL;
    *(_DWORD *)PoolWithTag = -1;
    *((_DWORD *)PoolWithTag + 1) = -1;
    v7 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v4 + 8))(v4, *(unsigned int *)(a1 + 88), &v18);
    if ( v7 )
    {
      v8 = ExAllocatePoolWithTag(PagedPool, 0x8000uLL, 0x62534D43u);
      v9 = v8;
      if ( v8
        && (CmpInitializeValueNameString(v7, (__int64)v13, v8),
            CmpFindNameInList(v4, (int)v1 + 4, (int)v13, 0, (__int64)&v15, (__int64)&BugCheckParameter3)) )
      {
        v10 = BugCheckParameter3;
        v11 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v4 + 8))(v4, (unsigned int)BugCheckParameter3, &v16);
        if ( CmpMarkValueDataDirty(v4, v11) && HvpMarkCellDirty(v4, v10, 0) )
        {
          v5 = CmpRemoveValueFromList(v4, v15, v1 + 1);
          if ( v5 >= 0 )
          {
            *((_DWORD *)PoolWithTag + 1) = v10;
            v5 = 0;
            *(_QWORD *)(a1 + 112) = PoolWithTag;
            PoolWithTag = 0LL;
          }
        }
        else
        {
          v5 = -1073741443;
        }
        if ( v11 )
          (*(void (__fastcall **)(ULONG_PTR, int *))(v4 + 16))(v4, &v16);
      }
      else
      {
        v5 = -1073741670;
      }
      (*(void (__fastcall **)(ULONG_PTR, int *))(v4 + 16))(v4, &v18);
      if ( v9 )
        ExFreePoolWithTag(v9, 0);
    }
    else
    {
      v5 = -1073741670;
    }
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0x77554D43u);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v5;
}
