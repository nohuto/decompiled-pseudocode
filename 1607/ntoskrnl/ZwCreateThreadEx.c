/*
 * XREFs of ZwCreateThreadEx @ 0x14015B340
 * Callers:
 *     RtlpCreateUserThreadEx @ 0x14051BB24 (RtlpCreateUserThreadEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCreateThreadEx(__int64 a1, __int64 a2, __int64 a3)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2, a3);
}
