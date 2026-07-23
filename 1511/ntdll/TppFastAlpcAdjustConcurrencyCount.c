/*
 * XREFs of TppFastAlpcAdjustConcurrencyCount @ 0x18006BC94
 * Callers:
 *     TpAlpcRegisterCompletionList @ 0x18006BC40 (TpAlpcRegisterCompletionList.c)
 *     TppCallbackMayRunLongProlog @ 0x180072898 (TppCallbackMayRunLongProlog.c)
 * Callees:
 *     AlpcAdjustCompletionListConcurrencyCount @ 0x18006BD10 (AlpcAdjustCompletionListConcurrencyCount.c)
 */

__int64 __fastcall TppFastAlpcAdjustConcurrencyCount(__int64 a1)
{
  __int64 result; // rax
  int v3; // edx
  unsigned __int32 v4; // r8d

  result = *(_DWORD *)(a1 + 280) & 3;
  if ( (*(_BYTE *)(a1 + 280) & 3) == 3 )
  {
    while ( 1 )
    {
      result = *(unsigned int *)(a1 + 276);
      v3 = MEMORY[0x7FFE03C0] + *(_DWORD *)(*(_QWORD *)(a1 + 208) + 420LL);
      v4 = v3 + MEMORY[0x7FFE03C0];
      if ( (int)result >= v3 && (int)result <= (int)(v4 + MEMORY[0x7FFE03C0]) )
        break;
      if ( (_DWORD)result == _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 276), v4, result) )
        AlpcAdjustCompletionListConcurrencyCount(*(HANDLE *)(a1 + 264), v4);
    }
  }
  return result;
}
