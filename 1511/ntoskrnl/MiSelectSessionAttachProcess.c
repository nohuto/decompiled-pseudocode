/*
 * XREFs of MiSelectSessionAttachProcess @ 0x140091AC8
 * Callers:
 *     MmGetSessionById @ 0x140091A20 (MmGetSessionById.c)
 *     MiAttachToOwningSession @ 0x1400D55A4 (MiAttachToOwningSession.c)
 *     MiGetNextSession @ 0x1400E6E30 (MiGetNextSession.c)
 *     sub_1401D6A98 @ 0x1401D6A98 (sub_1401D6A98.c)
 * Callees:
 *     ObReferenceObjectSafeWithTag @ 0x140042340 (ObReferenceObjectSafeWithTag.c)
 */

_QWORD *__fastcall MiSelectSessionAttachProcess(__int64 a1)
{
  _QWORD *v1; // rsi
  _QWORD *i; // rbx
  _QWORD *v3; // rdi

  if ( *(_QWORD *)(a1 + 3232) && (*(_DWORD *)(a1 + 4) & 2) == 0 )
  {
    v1 = (_QWORD *)(a1 + 16);
    for ( i = *(_QWORD **)(a1 + 16); i != v1; i = (_QWORD *)*i )
    {
      v3 = i - 104;
      if ( (*((_BYTE *)i + 665) & 1) == 0
        && (*((_DWORD *)v3 + 193) & 0xC00u) >= 0xC00
        && (*((_BYTE *)v3 + 1499) & 0xC0) != 0x80
        && ObReferenceObjectSafeWithTag((__int64)(i - 104)) )
      {
        return i - 104;
      }
    }
  }
  return 0LL;
}
