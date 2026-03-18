/*
 * XREFs of KiUpdateTimer2Flags @ 0x1400F5C10
 * Callers:
 *     KeCancelTimer2 @ 0x1400F436C (KeCancelTimer2.c)
 *     KeDisableTimer2 @ 0x1400F451C (KeDisableTimer2.c)
 *     KeSetTimer2 @ 0x1400F4EC0 (KeSetTimer2.c)
 *     KiTimer2Expiration @ 0x1400F5180 (KiTimer2Expiration.c)
 *     KiExpireTimer2 @ 0x1400F5400 (KiExpireTimer2.c)
 *     KiTraceSetTimer2 @ 0x140209AB0 (KiTraceSetTimer2.c)
 * Callees:
 *     KiFinalizeTimer2Disablement @ 0x1400F443C (KiFinalizeTimer2Disablement.c)
 */

char __fastcall KiUpdateTimer2Flags(volatile signed __int32 *a1, int a2, char a3)
{
  int v4; // r9d
  volatile signed __int32 v5; // ecx
  int v6; // r9d
  int v7; // r10d
  signed __int32 v8; // edx
  signed __int32 v9; // eax
  signed __int32 v11; // ecx

  v4 = 3968;
  if ( (a3 & 1) != 0 )
    v4 = 3840;
  if ( (a3 & 2) != 0 )
    v4 = (unsigned __int8)v4;
  v5 = *a1;
  v6 = ~v4;
  v7 = a2 << 8;
  v8 = (a2 << 8) | *a1 & v6;
  v9 = _InterlockedCompareExchange(a1, v8, *a1);
  if ( v5 != v9 )
  {
    do
    {
      v11 = v9;
      v8 = v7 | v9 & v6;
      v9 = _InterlockedCompareExchange(a1, v8, v9);
    }
    while ( v11 != v9 );
  }
  if ( (a3 & 4) == 0 || (v8 & 0x3F00) != 0x2000 )
    return 0;
  KiFinalizeTimer2Disablement((unsigned __int64)a1);
  return 1;
}
