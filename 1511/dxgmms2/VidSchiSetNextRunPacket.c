/*
 * XREFs of VidSchiSetNextRunPacket @ 0x1C000E548
 * Callers:
 *     VidSchiCompleteRewindPacket @ 0x1C000E330 (VidSchiCompleteRewindPacket.c)
 *     VidSchiReadCommandFromContextQueue @ 0x1C00211F4 (VidSchiReadCommandFromContextQueue.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiSetNextRunPacket(__int64 a1, __int64 a2)
{
  int v4; // edx
  int v5; // ecx
  __int64 result; // rax

  *(_QWORD *)(a1 + 648) = a2;
  if ( a2 )
  {
    *(_DWORD *)(a1 + 644) ^= (((unsigned int)(*(_DWORD *)(a2 + 48) - 4) <= 1) ^ (unsigned __int8)*(_DWORD *)(a1 + 644)) & 1;
    v4 = *(_DWORD *)(a1 + 644) ^ ((unsigned __int8)*(_DWORD *)(a1 + 644) ^ (unsigned __int8)(2
                                                                                           * (*(_DWORD *)(a2 + 48) == 3))) & 2;
    *(_DWORD *)(a1 + 644) = v4;
    v5 = v4 ^ ((unsigned __int8)v4 ^ (unsigned __int8)(4 * (*(_DWORD *)(a2 + 48) == 7))) & 4;
    *(_DWORD *)(a1 + 644) = v5;
    result = v5 ^ ((unsigned __int8)v5 ^ (unsigned __int8)(8 * (*(_DWORD *)(a2 + 48) == 6))) & 8u;
    *(_DWORD *)(a1 + 644) = result;
  }
  else
  {
    *(_DWORD *)(a1 + 644) &= 0xFFFFFFF0;
  }
  return result;
}
