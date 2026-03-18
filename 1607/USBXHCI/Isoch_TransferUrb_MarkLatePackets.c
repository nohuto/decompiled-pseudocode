/*
 * XREFs of Isoch_TransferUrb_MarkLatePackets @ 0x1C00039CC
 * Callers:
 *     Isoch_RetrieveNextStage @ 0x1C000C8B0 (Isoch_RetrieveNextStage.c)
 * Callees:
 *     Isoch_GetPacketLength @ 0x1C0001A20 (Isoch_GetPacketLength.c)
 *     Controller_GetFrameNumber @ 0x1C0001C48 (Controller_GetFrameNumber.c)
 */

__int64 __fastcall Isoch_TransferUrb_MarkLatePackets(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v5; // r13
  unsigned int v6; // ebp
  unsigned int FrameNumber; // r15d
  __int64 result; // rax
  unsigned int v9; // r12d
  unsigned int v10; // r10d
  unsigned int v11; // r11d
  unsigned int i; // esi

  v3 = (unsigned int)(*(_DWORD *)(a2 + 92) + *(_DWORD *)(a2 + 88));
  v5 = *(_QWORD *)(a2 + 32);
  v6 = *(_DWORD *)(v5 + 128) + (unsigned int)(v3 + *(_DWORD *)(a1 + 308) - 1) / *(_DWORD *)(a1 + 308);
  FrameNumber = Controller_GetFrameNumber(*(_QWORD *)(a1 + 40), 2);
  result = (unsigned int)(*(_DWORD *)(a2 + 80) - v3 + *(_DWORD *)(a1 + 308) - 1) / *(_DWORD *)(a1 + 308);
  v9 = result;
  if ( (_DWORD)result )
  {
    v10 = 0;
    v11 = v6 - FrameNumber;
    do
    {
      if ( v10 + v6 > FrameNumber )
      {
        result = v11 + v10;
        if ( (unsigned int)result < 0x7FFFFFFF )
          break;
      }
      for ( i = 0; i < *(_DWORD *)(a1 + 308); ++i )
      {
        *(_DWORD *)(v5 + 12 * v3 + 148) = -1073414144;
        result = Isoch_GetPacketLength(a2, v3);
        *(_DWORD *)(a2 + 76) += result;
        v3 = (unsigned int)(v3 + 1);
        ++*(_DWORD *)(a2 + 92);
      }
      ++v10;
    }
    while ( v10 < v9 );
  }
  return result;
}
