/*
 * XREFs of MiCheckReservePageFileSpace @ 0x1400AE5D0
 * Callers:
 *     MiFreeWsleList @ 0x1400AE6D0 (MiFreeWsleList.c)
 * Callees:
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MI_IS_RESET_PTE @ 0x1402259E8 (MI_IS_RESET_PTE.c)
 */

unsigned __int64 __fastcall MiCheckReservePageFileSpace(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 result; // rax
  __int64 v4; // r11
  __int64 v5; // rcx
  unsigned __int16 v7; // cx
  __int16 *v8; // r9
  __int64 v9; // r9
  _BYTE *v10; // r10
  __int64 v11; // r11

  result = *(_QWORD *)(a1 + 16);
  v4 = a1;
  v5 = a1 + 16;
  if ( (unsigned __int64)(v5 + 0x90482413000LL) <= 0x7F8 )
    result = MiReadPteShadow(v5, result);
  v7 = ((unsigned int)HIDWORD(*(_QWORD *)(v4 + 40)) >> 8) & 0x3FF;
  if ( v7 == 1023 )
    v8 = MiSystemPartition;
  else
    v8 = *(__int16 **)(qword_14034F0E8 + 8LL * v7);
  if ( *((_DWORD *)v8 + 230) )
  {
    if ( (result & 2) == 0 && !*(_QWORD *)(a3 + 232) )
    {
      result = MI_IS_RESET_PTE(result);
      if ( !(_DWORD)result || (*(_BYTE *)(v11 + 34) & 0x10) != 0 || (*v10 & 0x42) != 0 )
      {
        result = (((unsigned __int64)MmHighestUserAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        if ( (unsigned __int64)v10 <= result )
        {
          result = 0xFFFFF68000000000uLL;
          if ( (unsigned __int64)v10 >= 0xFFFFF68000000000uLL )
          {
            result = 0xFFFFF6FFFFFFFFFFuLL;
            if ( (unsigned __int64)v10 <= 0xFFFFF6FFFFFFFFFFuLL )
              return MiReservePageFileSpace(v9, v10, a3);
          }
        }
      }
    }
  }
  return result;
}
