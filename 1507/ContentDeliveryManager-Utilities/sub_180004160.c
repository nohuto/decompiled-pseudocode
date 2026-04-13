/*
 * XREFs of sub_180004160 @ 0x180004160
 * Callers:
 *     sub_180004630 @ 0x180004630 (sub_180004630.c)
 *     sub_180004F50 @ 0x180004F50 (sub_180004F50.c)
 *     sub_180005740 @ 0x180005740 (sub_180005740.c)
 *     sub_180006810 @ 0x180006810 (sub_180006810.c)
 *     sub_180006930 @ 0x180006930 (sub_180006930.c)
 *     sub_1800073D0 @ 0x1800073D0 (sub_1800073D0.c)
 *     sub_180008180 @ 0x180008180 (sub_180008180.c)
 *     sub_18001AA40 @ 0x18001AA40 (sub_18001AA40.c)
 *     sub_18001C970 @ 0x18001C970 (sub_18001C970.c)
 *     sub_18001CAC8 @ 0x18001CAC8 (sub_18001CAC8.c)
 *     sub_18001CB68 @ 0x18001CB68 (sub_18001CB68.c)
 *     sub_18001CCC0 @ 0x18001CCC0 (sub_18001CCC0.c)
 *     sub_18001CD68 @ 0x18001CD68 (sub_18001CD68.c)
 *     sub_18001CEC0 @ 0x18001CEC0 (sub_18001CEC0.c)
 *     sub_18001CF68 @ 0x18001CF68 (sub_18001CF68.c)
 *     sub_18001D0C0 @ 0x18001D0C0 (sub_18001D0C0.c)
 *     sub_18001D168 @ 0x18001D168 (sub_18001D168.c)
 *     sub_18001D2C0 @ 0x18001D2C0 (sub_18001D2C0.c)
 *     sub_18001F2E0 @ 0x18001F2E0 (sub_18001F2E0.c)
 *     sub_18001F370 @ 0x18001F370 (sub_18001F370.c)
 *     sub_18001F400 @ 0x18001F400 (sub_18001F400.c)
 *     sub_18001F490 @ 0x18001F490 (sub_18001F490.c)
 *     sub_18001F520 @ 0x18001F520 (sub_18001F520.c)
 * Callees:
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 */

__int64 __fastcall sub_180004160(volatile signed __int32 *a1)
{
  signed __int32 i; // r8d
  unsigned __int32 v2; // esi

  for ( i = *((_DWORD *)a1 + 3);
        i != 0x7FFFFFFF && i != _InterlockedCompareExchange(a1 + 3, i - 1, i);
        i = *((_DWORD *)a1 + 3) )
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
