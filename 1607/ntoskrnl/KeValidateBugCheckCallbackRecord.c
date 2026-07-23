/*
 * XREFs of KeValidateBugCheckCallbackRecord @ 0x1401D4CF8
 * Callers:
 *     IopDumpCallAddPagesCallbacks @ 0x1401C7004 (IopDumpCallAddPagesCallbacks.c)
 *     IopDumpCallRemovePagesCallbacks @ 0x1401C7128 (IopDumpCallRemovePagesCallbacks.c)
 *     KiInvokeBugCheckEntryCallbacks @ 0x1401D543C (KiInvokeBugCheckEntryCallbacks.c)
 *     IopLiveDumpCallRemovePagesCallbacks @ 0x1403DA4D0 (IopLiveDumpCallRemovePagesCallbacks.c)
 * Callees:
 *     MiIsAddressValid @ 0x1400370C0 (MiIsAddressValid.c)
 */

bool __fastcall KeValidateBugCheckCallbackRecord(__int64 a1, int a2, _QWORD *a3)
{
  bool IsAddressValid; // si
  __int64 v7; // r14
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rdi
  __int64 v10; // r8
  __int64 v11; // rcx
  bool result; // al

  IsAddressValid = 0;
  v7 = 0LL;
  if ( (a1 & 7) == 0 )
  {
    v8 = a1 & 0xFFFFFFFFFFFFF000uLL;
    v9 = ((unsigned __int64)(a1 & 0xFFF) + 4143) >> 12;
    if ( v9 )
    {
      while ( MiIsAddressValid(v8) )
      {
        v8 += 4096LL;
        if ( !--v9 )
          goto LABEL_5;
      }
    }
    else
    {
LABEL_5:
      if ( *(_QWORD *)(a1 + 8) == *a3 )
      {
        v7 = a1;
        if ( *(_BYTE *)(a1 + 44) == 1 )
        {
          v10 = *(int *)(a1 + 40);
          v11 = *(_QWORD *)(a1 + 16);
          if ( *(_QWORD *)(a1 + 32) == v11 + v10 + *(_QWORD *)(a1 + 24) && (_DWORD)v10 == a2 )
            IsAddressValid = MiIsAddressValid(v11);
        }
      }
    }
  }
  result = IsAddressValid;
  *a3 = v7;
  return result;
}
