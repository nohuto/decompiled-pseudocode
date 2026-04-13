/*
 * XREFs of sub_1800086C0 @ 0x1800086C0
 * Callers:
 *     sub_180008728 @ 0x180008728 (sub_180008728.c)
 * Callees:
 *     sub_180002200 @ 0x180002200 (sub_180002200.c)
 */

__int64 __fastcall sub_1800086C0(__int64 a1, int a2, __int64 a3, __int64 a4, int a5, __int64 a6, int a7, int a8)
{
  unsigned int v8; // ebx

  v8 = (unsigned __int16)a8 | 0x80070000;
  if ( a8 <= 0 )
    v8 = a8;
  sub_180002200(
    a1,
    a2,
    (__int64)"shell\\contentdeliverymanager\\utils\\inc\\contentdeliverymanagersettings.h",
    0LL,
    0LL,
    a6,
    2,
    v8,
    0LL);
  return v8;
}
