/*
 * XREFs of sub_1800055F0 @ 0x1800055F0
 * Callers:
 *     sub_180006130 @ 0x180006130 (sub_180006130.c)
 *     sub_180019130 @ 0x180019130 (sub_180019130.c)
 *     sub_180019C40 @ 0x180019C40 (sub_180019C40.c)
 * Callees:
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 */

__int64 __fastcall sub_1800055F0(volatile signed __int32 *a1)
{
  signed __int32 i; // r8d
  unsigned __int32 v2; // esi

  for ( i = *((_DWORD *)a1 + 9);
        i != 0x7FFFFFFF && i != _InterlockedCompareExchange(a1 + 9, i - 1, i);
        i = *((_DWORD *)a1 + 9) )
  {
    ;
  }
  v2 = i - 1;
  if ( i == 1 )
  {
    if ( a1 )
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)a1 + 32LL))(a1, 1LL);
    if ( qword_18003AC80 )
      _InterlockedDecrement(&dword_18003AC88);
  }
  return v2;
}
