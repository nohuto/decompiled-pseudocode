/*
 * XREFs of ?MKButtonSelect@@YAHG@Z @ 0x1C01ED5D0
 * Callers:
 *     <none>
 * Callees:
 *     PostEventMessageEx @ 0x1C00E79A8 (PostEventMessageEx.c)
 */

__int64 __fastcall MKButtonSelect(__int16 a1)
{
  __int64 v1; // rcx

  gwMKCurrentButton = a1;
  v1 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 24LL) + 24LL) + 16LL);
  PostEventMessageEx(v1, *(_QWORD *)(v1 + 392), 0xDu, 0LL, 0, (LARGE_INTEGER)11LL, (LARGE_INTEGER)3LL, 0LL);
  return 0LL;
}
