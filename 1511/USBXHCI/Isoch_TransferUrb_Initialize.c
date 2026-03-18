/*
 * XREFs of Isoch_TransferUrb_Initialize @ 0x1C0002B30
 * Callers:
 *     Isoch_RetrieveNextStage @ 0x1C000CC00 (Isoch_RetrieveNextStage.c)
 * Callees:
 *     Controller_GetFrameNumber @ 0x1C0002CD8 (Controller_GetFrameNumber.c)
 *     WPP_RECORDER_SF_DDqDDDD @ 0x1C002CD60 (WPP_RECORDER_SF_DDqDDDD.c)
 */

__int64 __fastcall Isoch_TransferUrb_Initialize(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rbx
  unsigned int v3; // esi
  unsigned int FrameNumber; // eax
  unsigned int v6; // eax
  unsigned int v7; // edx
  unsigned int v8; // r9d
  unsigned int v9; // edx
  __int64 v10; // rax
  int v11; // r9d
  int v12; // eax

  v2 = *(_DWORD **)(a2 + 32);
  v3 = 0;
  if ( (v2[8] & 4) != 0 )
  {
    FrameNumber = Controller_GetFrameNumber(*(_QWORD *)(a1 + 40), 1LL);
    if ( *(_BYTE *)(a1 + 286) )
    {
      v6 = FrameNumber + 5;
      *(_BYTE *)(a1 + 285) = 1;
      v2[32] = v6;
      *(_DWORD *)(a1 + 312) = v6;
    }
    else
    {
      v7 = *(_DWORD *)(a1 + 312);
      v8 = 1024;
      v2[32] = v7;
      if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 48) + 20LL) - 2) > 1 )
        v8 = 255;
      if ( FrameNumber > v7 && FrameNumber - v7 > v8 )
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
  v9 = 0;
  *(_DWORD *)(a1 + 312) += (unsigned int)(*(_DWORD *)(a1 + 308) + v2[33] - 1) / *(_DWORD *)(a1 + 308);
  v2[9] = 0;
  v2[34] = 0;
  if ( v2[33] )
  {
    do
    {
      v10 = v9++;
      v2[3 * v10 + 37] = -1;
    }
    while ( v9 < v2[33] );
  }
  v11 = Controller_GetFrameNumber(*(_QWORD *)(a1 + 40), 2LL);
  v12 = v2[32] - v11;
  if ( v12 <= 0 )
    v12 = v11 - v2[32];
  if ( v12 <= 1024 )
    *(_BYTE *)(a1 + 286) = 0;
  else
    v3 = -1073741823;
  WPP_RECORDER_SF_DDqDDDD(
    *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
    *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
    *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
    v11);
  return v3;
}
