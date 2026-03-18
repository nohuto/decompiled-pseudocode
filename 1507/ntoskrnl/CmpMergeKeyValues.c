/*
 * XREFs of CmpMergeKeyValues @ 0x14065FFA8
 * Callers:
 *     CmpCopySyncTree2 @ 0x1405850E0 (CmpCopySyncTree2.c)
 *     CmSaveMergedKeys @ 0x140661980 (CmSaveMergedKeys.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     CmpFindNameInList @ 0x140429D40 (CmpFindNameInList.c)
 *     CmpAddValueToListEx @ 0x1404A1188 (CmpAddValueToListEx.c)
 *     CmpInitializeValueNameString @ 0x1404F1CC4 (CmpInitializeValueNameString.c)
 *     CmpSyncKeyValues @ 0x140585640 (CmpSyncKeyValues.c)
 *     CmpCopyValue @ 0x140585A20 (CmpCopyValue.c)
 */

char __fastcall CmpMergeKeyValues(
        unsigned __int64 a1,
        unsigned int a2,
        _DWORD *a3,
        unsigned __int64 a4,
        unsigned int a5,
        __int64 a6)
{
  char v6; // bl
  unsigned int v8; // ecx
  __int64 v10; // rax
  unsigned int v11; // ecx
  _WORD *PoolWithTag; // rax
  unsigned int v13; // r14d
  _WORD *v14; // r12
  unsigned int v15; // r13d
  unsigned int *v16; // rsi
  unsigned int v17; // r15d
  ULONG_PTR v18; // rax
  int v19; // edx
  char v21; // [rsp+30h] [rbp-30h]
  unsigned int v22; // [rsp+40h] [rbp-20h]
  unsigned int *v23; // [rsp+48h] [rbp-18h]
  __int16 v24; // [rsp+50h] [rbp-10h] BYREF
  __int64 v25; // [rsp+52h] [rbp-Eh]
  int v26; // [rsp+5Ah] [rbp-6h]
  __int16 v27; // [rsp+5Eh] [rbp-2h]
  int v28; // [rsp+A8h] [rbp+48h] BYREF
  int v29; // [rsp+B0h] [rbp+50h] BYREF
  ULONG_PTR v30; // [rsp+B8h] [rbp+58h]

  v30 = a4;
  v28 = a2;
  v6 = 0;
  v29 = -1;
  v8 = a3[15];
  v28 = -1;
  v25 = 0LL;
  v26 = 0;
  v27 = 0;
  v10 = a6;
  v24 = 0;
  if ( *(_DWORD *)(a6 + 60) < v8 )
    *(_DWORD *)(a6 + 60) = v8;
  v11 = a3[16];
  if ( *(_DWORD *)(v10 + 64) < v11 )
    *(_DWORD *)(v10 + 64) = v11;
  v23 = (unsigned int *)(v10 + 36);
  if ( *(_DWORD *)(v10 + 36) )
  {
    v13 = a3[9];
    if ( v13 )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x7FFFuLL, 0x20204D43u);
      v14 = PoolWithTag;
      if ( !PoolWithTag )
        return (char)PoolWithTag;
      v15 = a5 >> 31;
      v16 = (unsigned int *)(*(__int64 (__fastcall **)(unsigned __int64, _QWORD, int *))(a1 + 8))(
                              a1,
                              (unsigned int)a3[10],
                              &v29);
      if ( v16 )
      {
        v17 = 0;
        while ( 1 )
        {
          v18 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, int *))(a1 + 8))(a1, *v16, &v28);
          if ( !v18 )
            break;
          CmpInitializeValueNameString(v18, (__int64)&v24, v14);
          if ( !CmpFindNameInList(v30, (__int64)v23) )
          {
            (*(void (__fastcall **)(unsigned __int64, int *))(a1 + 16))(a1, &v28);
            break;
          }
          (*(void (__fastcall **)(unsigned __int64, int *))(a1 + 16))(a1, &v28);
          if ( (_DWORD)a6 == -1 )
          {
            v19 = CmpCopyValue(a1, *v16, v30, v15);
            if ( v19 == -1 || (int)CmpAddValueToListEx(v30, v19, v22, v15, v23, 1) < 0 )
              break;
          }
          ++v17;
          ++v16;
          if ( v17 >= v13 )
          {
            v6 = 1;
            break;
          }
        }
        (*(void (__fastcall **)(unsigned __int64, int *))(a1 + 16))(a1, &v29);
      }
      ExFreePoolWithTag(v14, 0);
    }
    else
    {
      v6 = 1;
    }
    LOBYTE(PoolWithTag) = v6;
    return (char)PoolWithTag;
  }
  LOBYTE(PoolWithTag) = CmpSyncKeyValues(a1, a2, (__int64)a3, a4, a5, v10, v21);
  return (char)PoolWithTag;
}
