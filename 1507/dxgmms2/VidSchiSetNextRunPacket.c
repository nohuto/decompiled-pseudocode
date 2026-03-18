/*
 * XREFs of VidSchiSetNextRunPacket @ 0x1C0003278
 * Callers:
 *     VidSchiInsertCommandToSoftwareQueue @ 0x1C0002D28 (VidSchiInsertCommandToSoftwareQueue.c)
 *     VidSchiScheduleCommandToRun @ 0x1C0004BB0 (VidSchiScheduleCommandToRun.c)
 *     VidSchiCompleteRewindPacket @ 0x1C0015EDC (VidSchiCompleteRewindPacket.c)
 *     VidSchiReadCommandFromContextQueue @ 0x1C001958C (VidSchiReadCommandFromContextQueue.c)
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
