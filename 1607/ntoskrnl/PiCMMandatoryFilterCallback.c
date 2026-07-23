/*
 * XREFs of PiCMMandatoryFilterCallback @ 0x1404DA7F4
 * Callers:
 *     <none>
 * Callees:
 *     PiPnpRtlApplyMandatoryFilters @ 0x1404DCF14 (PiPnpRtlApplyMandatoryFilters.c)
 */

char __fastcall PiCMMandatoryFilterCallback(int a1, int a2, int a3, __int64 IsServiceSession)
{
  char v4; // bl
  int v5; // eax
  char v6; // cl
  __int64 v8; // [rsp+58h] [rbp+20h] BYREF

  v4 = 0;
  LOBYTE(v8) = 0;
  if ( IsServiceSession && a3 == 1 )
  {
    v5 = PiPnpRtlApplyMandatoryFilters(a1, a2, 1, 0, IsServiceSession, (__int64)&v8);
    v6 = v8;
    if ( v5 < 0 )
      return 0;
    return v6;
  }
  return v4;
}
