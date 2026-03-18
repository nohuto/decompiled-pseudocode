/*
 * XREFs of Isoch_TransferUrb_Initialize @ 0x1C0001BE0
 * Callers:
 *     Isoch_RetrieveNextStage @ 0x1C000D5E0 (Isoch_RetrieveNextStage.c)
 * Callees:
 *     Controller_GetFrameNumber @ 0x1C0001D6C (Controller_GetFrameNumber.c)
 *     WPP_RECORDER_SF_DDqDDDD @ 0x1C0029CF0 (WPP_RECORDER_SF_DDqDDDD.c)
 */

__int64 __fastcall Isoch_TransferUrb_Initialize(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rdi
  unsigned int v3; // esi
  unsigned int FrameNumber; // eax
  unsigned int v6; // edx
  unsigned int v7; // r9d
  unsigned int v8; // edx
  __int64 v9; // rax
  int v10; // r9d
  int v11; // ecx
  unsigned int v13; // eax

  v2 = *(_DWORD **)(a2 + 32);
  v3 = 0;
  if ( (v2[8] & 4) != 0 )
  {
    FrameNumber = Controller_GetFrameNumber(*(_QWORD *)(a1 + 40), 1LL);
    if ( *(_BYTE *)(a1 + 286) )
    {
      v13 = FrameNumber + 5;
      *(_BYTE *)(a1 + 285) = 1;
      v2[32] = v13;
      *(_DWORD *)(a1 + 312) = v13;
    }
    else
    {
      v6 = *(_DWORD *)(a1 + 312);
      v7 = 1024;
      v2[32] = v6;
      if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 48) + 20LL) - 2) > 1 )
        v7 = 255;
      if ( FrameNumber > v6 && FrameNumber - v6 > v7 )
      {
        *(_BYTE *)(a1 + 285) = 1;
        v2[32] = FrameNumber + 5;
        *(_DWORD *)(a1 + 312) = FrameNumber + 5;
      }
    }
  }
  else
  {
    *(_DWORD *)(a1 + 312) = v2[32];
  }
  v8 = 0;
  *(_DWORD *)(a1 + 312) += (unsigned int)(*(_DWORD *)(a1 + 308) + v2[33] - 1) / *(_DWORD *)(a1 + 308);
  v2[9] = 0;
  v2[34] = 0;
  if ( v2[33] )
  {
    do
    {
      v9 = v8++;
      v2[3 * v9 + 37] = -1;
    }
    while ( v8 < v2[33] );
  }
  v10 = Controller_GetFrameNumber(*(_QWORD *)(a1 + 40), 2LL);
  v11 = v2[32] - v10;
  if ( v11 <= 0 )
    v11 = v10 - v2[32];
  if ( v11 <= 1024 )
    *(_BYTE *)(a1 + 286) = 0;
  else
    v3 = -1073741823;
  WPP_RECORDER_SF_DDqDDDD(
    *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
    *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
    *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
    v10);
  return v3;
}
