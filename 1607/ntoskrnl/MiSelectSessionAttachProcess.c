/*
 * XREFs of MiSelectSessionAttachProcess @ 0x1400767C8
 * Callers:
 *     MmGetSessionById @ 0x140076640 (MmGetSessionById.c)
 *     MiGetNextSession @ 0x140087F18 (MiGetNextSession.c)
 *     MiAttachToOwningSession @ 0x14010A1DC (MiAttachToOwningSession.c)
 *     MiLockAndSelectSessionAttachProcess @ 0x1401E858C (MiLockAndSelectSessionAttachProcess.c)
 * Callees:
 *     ObReferenceObjectSafeWithTag @ 0x14006A940 (ObReferenceObjectSafeWithTag.c)
 */

_QWORD *__fastcall MiSelectSessionAttachProcess(__int64 a1)
{
  _QWORD *v1; // rsi
  _QWORD *i; // rbx
  _QWORD *v3; // rdi

  if ( *(_QWORD *)(a1 + 3360) && (*(_DWORD *)(a1 + 4) & 2) == 0 )
  {
    v1 = (_QWORD *)(a1 + 16);
    for ( i = *(_QWORD **)(a1 + 16); i != v1; i = (_QWORD *)*i )
    {
      v3 = i - 104;
      if ( (*((_BYTE *)i + 633) & 1) == 0
        && (*((_DWORD *)v3 + 193) & 0xC00u) >= 0xC00
        && (*((_BYTE *)v3 + 1467) & 0xC0) != 0x80
        && ObReferenceObjectSafeWithTag((__int64)(i - 104)) )
      {
        return i - 104;
      }
    }
  }
  return 0LL;
}
