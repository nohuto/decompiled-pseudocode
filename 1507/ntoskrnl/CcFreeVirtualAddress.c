/*
 * XREFs of CcFreeVirtualAddress @ 0x140053740
 * Callers:
 *     CcMdlRead @ 0x1404774E8 (CcMdlRead.c)
 *     CcMapAndCopyFromCache @ 0x14049D020 (CcMapAndCopyFromCache.c)
 *     CcPinMappedData @ 0x14049D270 (CcPinMappedData.c)
 * Callees:
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 */

int __fastcall CcFreeVirtualAddress(__int64 a1)
{
  __int64 v1; // rax
  struct _KEVENT *v2; // rcx

  v1 = *(_QWORD *)(a1 + 8);
  if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(a1 + 16)) )
  {
    v2 = *(struct _KEVENT **)(v1 + 184);
    if ( v2 )
      LODWORD(v1) = KeSetEvent(v2, 0, 0);
  }
  return v1;
}
