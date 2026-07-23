/*
 * XREFs of CmpMergeKeyValues @ 0x14060903C
 * Callers:
 *     CmpCopySyncTree2 @ 0x1406082F4 (CmpCopySyncTree2.c)
 *     CmSaveMergedKeys @ 0x14060CF28 (CmSaveMergedKeys.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     CmpAddValueToListEx @ 0x1403FEB9C (CmpAddValueToListEx.c)
 *     CmpFindNameInList @ 0x140401914 (CmpFindNameInList.c)
 *     CmpInitializeValueNameString @ 0x14053B954 (CmpInitializeValueNameString.c)
 *     CmpCopyValue @ 0x140608A14 (CmpCopyValue.c)
 *     CmpSyncKeyValues @ 0x14060990C (CmpSyncKeyValues.c)
 */

char __fastcall CmpMergeKeyValues(__int64 a1, __int64 a2, _DWORD *a3, ULONG_PTR a4, unsigned int a5, __int64 a6)
{
  char v6; // bl
  __int64 v9; // rax
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  unsigned int *v12; // r13
  _WORD *PoolWithTag; // rax
  unsigned int v14; // r14d
  _WORD *v15; // r12
  unsigned int *v16; // rsi
  unsigned int v17; // r15d
  ULONG_PTR v18; // rax
  int v19; // eax
  _DWORD v21[2]; // [rsp+40h] [rbp-20h] BYREF
  _DWORD v22[2]; // [rsp+48h] [rbp-18h] BYREF
  __int16 v23; // [rsp+50h] [rbp-10h] BYREF
  __int64 v24; // [rsp+52h] [rbp-Eh]
  int v25; // [rsp+5Ah] [rbp-6h]
  __int16 v26; // [rsp+5Eh] [rbp-2h]
  unsigned int v27; // [rsp+A8h] [rbp+48h]
  unsigned int v28; // [rsp+B0h] [rbp+50h] BYREF
  ULONG_PTR v29; // [rsp+B8h] [rbp+58h]

  v29 = a4;
  v6 = 0;
  v24 = 0LL;
  v25 = 0;
  v26 = 0;
  v9 = a6;
  v22[0] = -1;
  v21[0] = -1;
  v10 = a3[15];
  v22[1] = 0;
  v21[1] = 0;
  v23 = 0;
  if ( *(_DWORD *)(a6 + 60) < v10 )
    *(_DWORD *)(a6 + 60) = v10;
  v11 = a3[16];
  if ( *(_DWORD *)(v9 + 64) < v11 )
    *(_DWORD *)(v9 + 64) = v11;
  v12 = (unsigned int *)(v9 + 36);
  if ( *(_DWORD *)(v9 + 36) )
  {
    v14 = a3[9];
    if ( v14 )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x7FFFuLL, 0x20204D43u);
      v15 = PoolWithTag;
      if ( !PoolWithTag )
        return (char)PoolWithTag;
      v27 = a5 >> 31;
      v16 = (unsigned int *)(*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(a1 + 8))(
                              a1,
                              (unsigned int)a3[10],
                              v22);
      if ( v16 )
      {
        v17 = 0;
        while ( 1 )
        {
          v18 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(a1 + 8))(a1, *v16, v21);
          if ( !v18 )
            break;
          CmpInitializeValueNameString(v18, (__int64)&v23, v15);
          if ( !CmpFindNameInList(v29, (int)v12, (int)&v23, 0, (__int64)&v28, (__int64)&a6) )
          {
            (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v21);
            break;
          }
          (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v21);
          if ( (_DWORD)a6 == -1 )
          {
            v19 = CmpCopyValue(a1, *v16, v29, v27);
            if ( v19 == -1 || (int)CmpAddValueToListEx(v29, v19, v28, v27, v12, 1) < 0 )
              break;
          }
          ++v17;
          ++v16;
          if ( v17 >= v14 )
          {
            v6 = 1;
            break;
          }
        }
        (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v22);
      }
      ExFreePoolWithTag(v15, 0);
    }
    else
    {
      v6 = 1;
    }
    LOBYTE(PoolWithTag) = v6;
    return (char)PoolWithTag;
  }
  LOBYTE(PoolWithTag) = CmpSyncKeyValues(a1, a2, a3, a4, a5);
  return (char)PoolWithTag;
}
