/*
 * XREFs of CcFreeVirtualAddress @ 0x1400A3560
 * Callers:
 *     CcPinMappedData @ 0x14047A470 (CcPinMappedData.c)
 *     CcMapAndCopyFromCache @ 0x14047A640 (CcMapAndCopyFromCache.c)
 *     CcMdlRead @ 0x1404D83FC (CcMdlRead.c)
 * Callees:
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 */

LONG __fastcall CcFreeVirtualAddress(__int64 a1)
{
  __int64 v1; // rdx
  LONG result; // eax
  struct _KEVENT *v3; // rcx

  v1 = *(_QWORD *)(a1 + 8);
  result = _InterlockedDecrement((volatile signed __int32 *)(a1 + 16));
  if ( !(_WORD)result )
  {
    v3 = *(struct _KEVENT **)(v1 + 184);
    if ( v3 )
      return KeSetEvent(v3, 0, 0);
  }
  return result;
}
