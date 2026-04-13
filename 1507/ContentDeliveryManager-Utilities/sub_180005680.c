/*
 * XREFs of sub_180005680 @ 0x180005680
 * Callers:
 *     <none>
 * Callees:
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 */

__int64 __fastcall sub_180005680(__int64 a1, char a2)
{
  __int64 v3; // rsi

  *(_DWORD *)(a1 + 36) = -1073741823;
  v3 = *(_QWORD *)(a1 + 24);
  if ( v3 )
  {
    *(_QWORD *)(a1 + 24) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  if ( (a2 & 1) != 0 )
    operator delete((void *)a1);
  return a1;
}
