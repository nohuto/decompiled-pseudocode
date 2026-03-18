/*
 * XREFs of KeValidateBugCheckCallbackRecord @ 0x1401C5D88
 * Callers:
 *     IopDumpCallAddPagesCallbacks @ 0x1401B9374 (IopDumpCallAddPagesCallbacks.c)
 *     IopDumpCallRemovePagesCallbacks @ 0x1401B949C (IopDumpCallRemovePagesCallbacks.c)
 *     KiInvokeBugCheckEntryCallbacks @ 0x1401C64C0 (KiInvokeBugCheckEntryCallbacks.c)
 *     IopLiveDumpCallRemovePagesCallbacks @ 0x1403AE450 (IopLiveDumpCallRemovePagesCallbacks.c)
 * Callees:
 *     MiIsAddressValid @ 0x1400795B0 (MiIsAddressValid.c)
 */

char __fastcall KeValidateBugCheckCallbackRecord(__int64 a1, int a2, _QWORD *a3)
{
  char v3; // r11
  __int64 v5; // r9
  __int64 v6; // rdi
  unsigned __int64 v7; // rbx
  __int64 v8; // r10
  __int64 v9; // r10
  __int64 v10; // rcx
  char result; // al

  v3 = 0;
  v5 = a1;
  v6 = 0LL;
  if ( (a1 & 7) == 0 )
  {
    v7 = a1 & 0xFFFFFFFFFFFFF000uLL;
    if ( ((unsigned __int64)(a1 & 0xFFF) + 4143) >> 12 )
    {
      while ( MiIsAddressValid(v7) )
      {
        v7 += 4096LL;
        if ( v8 == 1 )
          goto LABEL_5;
      }
    }
    else
    {
LABEL_5:
      if ( *(_QWORD *)(v5 + 8) == *a3 )
      {
        v6 = v5;
        if ( *(_BYTE *)(v5 + 44) == 1 )
        {
          v9 = *(int *)(v5 + 40);
          v10 = *(_QWORD *)(v5 + 16);
          if ( *(_QWORD *)(v5 + 32) == v10 + v9 + *(_QWORD *)(v5 + 24) && (_DWORD)v9 == a2 && MiIsAddressValid(v10) )
            v3 = 1;
        }
      }
    }
  }
  result = v3;
  *a3 = v6;
  return result;
}
