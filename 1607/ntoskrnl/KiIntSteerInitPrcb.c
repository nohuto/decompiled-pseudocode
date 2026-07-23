/*
 * XREFs of KiIntSteerInitPrcb @ 0x1400B3D30
 * Callers:
 *     KiInitPrcb @ 0x1403D5408 (KiInitPrcb.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiIntSteerInitPrcb(__int64 a1)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 11544) = 0;
  result = 0LL;
  *(_QWORD *)(a1 + 11536) = 1LL;
  return result;
}
