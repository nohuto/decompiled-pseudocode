/*
 * XREFs of MiDisablePagingOfDriver @ 0x1403CE89C
 * Callers:
 *     MiHandleDriverNonPagedSections @ 0x1403CD42C (MiHandleDriverNonPagedSections.c)
 * Callees:
 *     MiGetPdeAddress @ 0x14001A3B4 (MiGetPdeAddress.c)
 *     MiLockCode @ 0x1400B7B30 (MiLockCode.c)
 *     MiSnapDriverRange @ 0x1403CEF0C (MiSnapDriverRange.c)
 */

_BYTE *__fastcall MiDisablePagingOfDriver(__int64 a1)
{
  unsigned __int64 v2; // rcx
  _BYTE *result; // rax
  int v4; // esi
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int64 v9; // [rsp+58h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(a1 + 48);
  if ( (*(_BYTE *)(8 * ((v2 >> 39) & 0x1FF) - 0x90482413000LL) & 1) == 0
    || (*(_BYTE *)(((v2 >> 27) & 0x1FFFF8) - 0x90482600000LL) & 1) == 0
    || (result = (_BYTE *)MiGetPdeAddress(v2), (*result & 0x81) != 0x81) )
  {
    v4 = 0;
    v5 = 0LL;
    do
    {
      result = (_BYTE *)MiSnapDriverRange(a1, v4, 4, 0, (__int64)&v8, (__int64)&v9);
      v6 = v8;
      v4 = (int)result;
      if ( v8 )
      {
        if ( v5 )
        {
          if ( v8 < v5 )
            v6 = v5;
          v8 = v6;
        }
        v7 = v9;
        if ( v6 <= v9 )
        {
          result = (_BYTE *)MiLockCode(a1, v6, v9, 2);
          v5 = v7 + 8;
        }
      }
    }
    while ( v4 );
  }
  return result;
}
