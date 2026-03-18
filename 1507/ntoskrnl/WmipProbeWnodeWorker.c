/*
 * XREFs of WmipProbeWnodeWorker @ 0x1405816EC
 * Callers:
 *     WmipProbeWnodeSingleInstance @ 0x140581674 (WmipProbeWnodeSingleInstance.c)
 *     WmipProbeWnodeMethodItem @ 0x1406E1254 (WmipProbeWnodeMethodItem.c)
 *     WmipProbeWnodeSingleItem @ 0x1406E12C0 (WmipProbeWnodeSingleItem.c)
 * Callees:
 *     RtlULongAdd @ 0x1401E04A8 (RtlULongAdd.c)
 */

__int64 __fastcall WmipProbeWnodeWorker(
        __int64 a1,
        ULONG a2,
        ULONG a3,
        ULONG a4,
        ULONG a5,
        ULONG a6,
        ULONG a7,
        char a8,
        char a9)
{
  ULONG v9; // r10d
  NTSTATUS v11; // edx
  ULONG pulResult; // [rsp+40h] [rbp+18h] BYREF

  pulResult = a3;
  v9 = a6;
  v11 = 0;
  if ( !a3 )
  {
LABEL_12:
    if ( !a4 || a4 >= a2 )
      goto LABEL_14;
    return 3221225473LL;
  }
  if ( a3 < a2 )
    return 3221225473LL;
  if ( ((a3 + 1LL) & 0xFFFFFFFFFFFFFFFEuLL) != a3 )
    return 3221225473LL;
  if ( a3 > (unsigned __int64)a6 - 2 )
    return 3221225473LL;
  v11 = RtlULongAdd(a3, *(unsigned __int16 *)(a3 + a1) + 2, &pulResult);
  if ( v11 < 0 || pulResult > v9 || a8 && pulResult > a7 )
    return 3221225473LL;
  if ( a4 )
  {
    if ( a4 < pulResult )
      return 3221225473LL;
    goto LABEL_12;
  }
LABEL_14:
  if ( ((a4 + 7LL) & 0xFFFFFFFFFFFFFFF8uLL) != a4
    || a9 && a4 && (a5 > v9 || a4 > v9 - a5)
    || a8 && (a7 < a2 || a4 > a7 || !a4) )
  {
    return 3221225473LL;
  }
  return (unsigned int)v11;
}
