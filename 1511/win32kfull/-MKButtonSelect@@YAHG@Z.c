/*
 * XREFs of ?MKButtonSelect@@YAHG@Z @ 0x1C01EDAF0
 * Callers:
 *     <none>
 * Callees:
 *     PostEventMessageEx @ 0x1C000D614 (PostEventMessageEx.c)
 */

__int64 __fastcall MKButtonSelect(__int16 a1)
{
  __int64 v1; // rcx

  gwMKCurrentButton = a1;
  v1 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 24LL) + 24LL) + 16LL);
  PostEventMessageEx(v1, *(_QWORD *)(v1 + 384), 0xDu, 0LL, 0, 11LL, 3LL, 0LL);
  return 0LL;
}
