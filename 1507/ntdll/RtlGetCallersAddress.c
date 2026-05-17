/*
 * XREFs of RtlGetCallersAddress @ 0x1800D3C60
 * Callers:
 *     <none>
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x180012600 (RtlCaptureStackBackTrace.c)
 */

USHORT __fastcall RtlGetCallersAddress(_QWORD *a1, _QWORD *a2)
{
  USHORT result; // ax
  PVOID v5; // r9
  PVOID v6; // r8
  PVOID BackTrace[3]; // [rsp+20h] [rbp-18h] BYREF

  result = RtlCaptureStackBackTrace(2u, 2u, BackTrace, 0LL);
  v5 = 0LL;
  v6 = 0LL;
  if ( result )
    v6 = BackTrace[0];
  if ( result >= 2u )
    v5 = BackTrace[1];
  *a1 = v6;
  *a2 = v5;
  return result;
}
