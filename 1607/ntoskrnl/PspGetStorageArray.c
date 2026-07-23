/*
 * XREFs of PspGetStorageArray @ 0x140560098
 * Callers:
 *     PspStorageInsertObject @ 0x14055FFD0 (PspStorageInsertObject.c)
 *     PspStorageMakeSlotReadOnly @ 0x140682C20 (PspStorageMakeSlotReadOnly.c)
 *     PspStorageReplaceObject @ 0x140682DCC (PspStorageReplaceObject.c)
 * Callees:
 *     PspGetStorageArrayIfPossible @ 0x14013E758 (PspGetStorageArrayIfPossible.c)
 *     PspLazyInitializeStorageExpansion @ 0x140682A1C (PspLazyInitializeStorageExpansion.c)
 */

__int64 __fastcall PspGetStorageArray(__int64 a1, unsigned int a2, unsigned int *a3, _QWORD *a4)
{
  __int64 result; // rax
  __int64 v9; // rcx
  _RTL_BITMAP *v10; // rdx

  result = PspGetStorageArrayIfPossible(a1, a2, a3, a4);
  if ( (_DWORD)result == -1073741275 )
  {
    if ( *(_QWORD *)(v9 + 512) )
      return result;
    result = PspLazyInitializeStorageExpansion();
    if ( (int)result < 0 )
      return result;
    result = PspGetStorageArrayIfPossible(a1, a2, a3, a4);
  }
  if ( (int)result >= 0 )
  {
    v10 = &PspStorageBitmap;
    if ( a2 >= 0x20 )
      v10 = &PspStorageExpansionBitmap;
    if ( !_bittest64((const signed __int64 *)v10->Buffer, *a3) )
      __fastfail(5u);
    return 0LL;
  }
  return result;
}
