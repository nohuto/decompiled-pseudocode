/*
 * XREFs of EtwpCheckCurrentUserGuidAccess @ 0x140667720
 * Callers:
 *     EtwTraceRaw @ 0x14020D7A8 (EtwTraceRaw.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpCheckCurrentUserGuidAccess(unsigned int *a1, ACCESS_MASK a2)
{
  return EtwpCheckGuidAccess(a1, a2, 0LL);
}
