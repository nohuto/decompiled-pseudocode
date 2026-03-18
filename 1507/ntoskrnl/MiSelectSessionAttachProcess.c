/*
 * XREFs of MiSelectSessionAttachProcess @ 0x1400FD6CC
 * Callers:
 *     MiAttachToOwningSession @ 0x1400FD2E0 (MiAttachToOwningSession.c)
 *     MiGetNextSession @ 0x1400FD468 (MiGetNextSession.c)
 *     MmGetSessionById @ 0x1400FD644 (MmGetSessionById.c)
 *     MiLockAndSelectSessionAttachProcess @ 0x140218F78 (MiLockAndSelectSessionAttachProcess.c)
 * Callees:
 *     ObReferenceObjectSafeWithTag @ 0x14004FCE0 (ObReferenceObjectSafeWithTag.c)
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
      if ( (*((_BYTE *)i + 657) & 1) == 0
        && (*((_DWORD *)v3 + 193) & 0xC00u) >= 0xC00
        && (*((_BYTE *)v3 + 1491) & 0xC0) != 0x80
        && ObReferenceObjectSafeWithTag((__int64)(i - 104)) )
      {
        return i - 104;
      }
    }
  }
  return 0LL;
}
