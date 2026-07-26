/*
 * XREFs of ndisMSendNBLToMiniport @ 0x1C000DAE0
 * Callers:
 *     <none>
 * Callees:
 *     ndisMSendNBLToMiniportInternal @ 0x1C000DB00 (ndisMSendNBLToMiniportInternal.c)
 */

__int64 __fastcall ndisMSendNBLToMiniport(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v5; // [rsp+20h] [rbp-18h]

  v5 = 0;
  return ndisMSendNBLToMiniportInternal(a1, a2, a3, a4, v5);
}
