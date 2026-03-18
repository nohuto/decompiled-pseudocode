/*
 * XREFs of KiUpdateTimer2Flags @ 0x1400326AC
 * Callers:
 *     KeDisableTimer2 @ 0x1400319E4 (KeDisableTimer2.c)
 *     KiTimer2Expiration @ 0x1400332A0 (KiTimer2Expiration.c)
 *     KiExpireTimer2 @ 0x140033E90 (KiExpireTimer2.c)
 *     KeCancelTimer2 @ 0x1400C5258 (KeCancelTimer2.c)
 *     KiTraceSetTimer2 @ 0x1401CAF00 (KiTraceSetTimer2.c)
 * Callees:
 *     KiFinalizeTimer2Disablement @ 0x140031898 (KiFinalizeTimer2Disablement.c)
 */

char __fastcall KiUpdateTimer2Flags(volatile signed __int32 *a1, int a2, char a3)
{
  int v3; // r9d
  char v4; // r11
  volatile signed __int32 v6; // ecx
  int v7; // r9d
  int v8; // ebx
  int v9; // edx
  signed __int32 i; // eax
  signed __int32 v11; // edx

  v3 = 3968;
  v4 = 0;
  if ( (a3 & 1) != 0 )
    v3 = 3840;
  if ( (a3 & 2) != 0 )
    v3 = (unsigned __int8)v3;
  v6 = *a1;
  v7 = ~v3;
  v8 = a2 << 8;
  v9 = *a1 & v7;
  for ( i = *a1; ; v9 = i & v7 )
  {
    v11 = v8 | v9;
    i = _InterlockedCompareExchange(a1, v11, i);
    if ( v6 == i )
      break;
    v6 = i;
  }
  if ( (a3 & 4) != 0 && (v11 & 0x3F00) == 0x2000 )
  {
    KiFinalizeTimer2Disablement((unsigned __int64)a1);
    return 1;
  }
  return v4;
}
