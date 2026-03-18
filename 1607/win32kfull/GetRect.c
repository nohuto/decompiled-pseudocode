/*
 * XREFs of GetRect @ 0x1C00AFEE8
 * Callers:
 *     UT_GetParentDCClipBox @ 0x1C00555D8 (UT_GetParentDCClipBox.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C0079810 (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 *     xxxDrawCaptionBar @ 0x1C00AD500 (xxxDrawCaptionBar.c)
 *     xxxScrollWindowEx @ 0x1C00ADA68 (xxxScrollWindowEx.c)
 *     xxxDrawWindowFrame @ 0x1C00AE488 (xxxDrawWindowFrame.c)
 *     _GetWindowPlacement @ 0x1C00AF118 (_GetWindowPlacement.c)
 *     xxxGetScrollBarInfo @ 0x1C00AF75C (xxxGetScrollBarInfo.c)
 *     CalcSBStuff @ 0x1C00AF9AC (CalcSBStuff.c)
 *     UpdateCheckpoint @ 0x1C00AFD1C (UpdateCheckpoint.c)
 *     ?xxxSendDpiChangedMessageToTopLevelWindow@@YAHPEAUtagWND@@PEAUtagRECT@@G@Z @ 0x1C00B03A4 (-xxxSendDpiChangedMessageToTopLevelWindow@@YAHPEAUtagWND@@PEAUtagRECT@@G@Z.c)
 *     xxxMinMaximizeEx @ 0x1C00B1498 (xxxMinMaximizeEx.c)
 *     ParkIcon @ 0x1C00B2AE0 (ParkIcon.c)
 *     InternalGetRealClientRect @ 0x1C01052BC (InternalGetRealClientRect.c)
 *     ?GetOrUpdateCheckPointIfNotPresent@@YAPEAUtagCHECKPOINT@@PEAU_MOVESIZEDATA@@@Z @ 0x1C01FC678 (-GetOrUpdateCheckPointIfNotPresent@@YAPEAUtagCHECKPOINT@@PEAU_MOVESIZEDATA@@@Z.c)
 *     SBCtlSetup @ 0x1C022C40C (SBCtlSetup.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetRect(__int64 a1, __int64 a2, char a3)
{
  _OWORD *v3; // rax
  __int64 result; // rax
  __int64 v8; // rcx
  int *v9; // r8
  int v10; // eax
  int v11; // ecx
  int v12; // ecx
  int v13; // edx
  int v14; // eax
  int v15; // r8d

  v3 = (_OWORD *)(a1 + 112);
  if ( (a3 & 2) == 0 )
    v3 = (_OWORD *)(a1 + 128);
  *(_OWORD *)a2 = *v3;
  result = *(_WORD *)(a1 + 66) & 0x3FFF;
  if ( (_DWORD)result != 669 )
  {
    result = a3 & 0x70;
    switch ( (_DWORD)result )
    {
      case 0x20:
        v9 = (int *)(a1 + 112);
        break;
      case 0x10:
        v9 = (int *)(a1 + 128);
        break;
      case 0x40:
        v8 = *(_QWORD *)(a1 + 88);
        result = *(_WORD *)(v8 + 66) & 0x3FFF;
        if ( (_DWORD)result == 669 )
          return result;
        v9 = (int *)(v8 + 128);
        if ( (((a3 & 2) != 0) & (*(_BYTE *)(v8 + 50) >> 6)) != 0 && (*(_BYTE *)(a1 + 55) & 0x40) != 0 )
        {
          v12 = -*(_DWORD *)(v8 + 136);
          v13 = -v9[1];
          v14 = *(_DWORD *)(a2 + 8);
          v15 = *(_DWORD *)a2 - v9[2];
          *(_DWORD *)(a2 + 12) += v13;
          *(_DWORD *)(a2 + 4) += v13;
          result = (unsigned int)-(v12 + v14);
          *(_DWORD *)a2 = result;
          *(_DWORD *)(a2 + 8) = -v15;
          return result;
        }
        break;
      default:
        return result;
    }
    v10 = *v9;
    v11 = -v9[1];
    *(_DWORD *)(a2 + 12) -= v9[1];
    result = (unsigned int)-v10;
    *(_DWORD *)a2 += result;
    *(_DWORD *)(a2 + 8) += result;
    *(_DWORD *)(a2 + 4) += v11;
  }
  return result;
}
