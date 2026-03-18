/*
 * XREFs of GetRect @ 0x14012B140
 * Callers:
 *     xxxScrollWindowEx @ 0x14003EEB4 (xxxScrollWindowEx.c)
 *     xxxDrawCaptionBar @ 0x140122F88 (xxxDrawCaptionBar.c)
 *     UT_GetParentDCClipBox @ 0x14012962C (UT_GetParentDCClipBox.c)
 *     xxxBeginPaint @ 0x14012A7C4 (xxxBeginPaint.c)
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x140164D34 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     CalcSBStuff @ 0x14018F8F8 (CalcSBStuff.c)
 *     ParkIcon @ 0x1401E63DC (ParkIcon.c)
 *     InternalGetRealClientRect @ 0x1401E675C (InternalGetRealClientRect.c)
 *     GetWndScrollBarInfoCrossProcess @ 0x140256448 (GetWndScrollBarInfoCrossProcess.c)
 *     xxxDrawWindowFrame @ 0x14025B5E8 (xxxDrawWindowFrame.c)
 *     ?xxxMigrateCheckpoint@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUtagMONITOR@@@Z @ 0x14025FAE8 (-xxxMigrateCheckpoint@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUtagMONITOR@@@Z.c)
 *     ?xxxSendDpiChangedMsgs@@YA_NPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z @ 0x14026CBFC (-xxxSendDpiChangedMsgs@@YA_NPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@@Z @ 0x14026F8C8 (-xxxCalcValidRects@@YAHPEAUtagSMWP@@@Z.c)
 *     ?xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOptions@1@K@Z @ 0x1402C7DC0 (-xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOption.c)
 * Callees:
 *     LogicalToPhysicalInPlaceRectWithSubpixel @ 0x14002BD18 (LogicalToPhysicalInPlaceRectWithSubpixel.c)
 *     PhysicalToLogicalInPlaceRectWithSubpixel @ 0x14002C4D4 (PhysicalToLogicalInPlaceRectWithSubpixel.c)
 */

__int64 __fastcall GetRect(const struct tagWND *a1, __int64 a2, char a3)
{
  __int64 v3; // rax
  int v6; // ebp
  __int128 *v7; // rax
  __int64 v8; // rcx
  __int64 result; // rax
  int v10; // r8d
  __int64 v11; // rsi
  __int64 v12; // r8
  unsigned int *v13; // rdx
  unsigned int v14; // ecx
  unsigned int v15; // eax
  unsigned int v16; // edx
  const struct tagWND *v17; // rcx
  __int128 v18; // [rsp+20h] [rbp-38h] BYREF
  __int128 v19; // [rsp+30h] [rbp-28h] BYREF

  v3 = *((_QWORD *)a1 + 5);
  v6 = a3 & 2;
  if ( (a3 & 2) != 0 )
    v19 = *(_OWORD *)(v3 + 88);
  else
    v18 = *(_OWORD *)(v3 + 104);
  v7 = &v18;
  if ( (a3 & 2) != 0 )
    v7 = &v19;
  *(_OWORD *)a2 = *v7;
  v8 = *((_QWORD *)a1 + 5);
  result = *(_WORD *)(v8 + 42) & 0x2FFF;
  if ( (_DWORD)result != 669 )
  {
    v10 = a3 & 0x70;
    switch ( v10 )
    {
      case 16:
        v13 = (unsigned int *)(v8 + 104);
        break;
      case 32:
        v13 = (unsigned int *)(v8 + 88);
        break;
      case 64:
        v11 = *((_QWORD *)a1 + 13);
        v12 = *(_QWORD *)(v11 + 40);
        result = *(_WORD *)(v12 + 42) & 0x2FFF;
        if ( (_DWORD)result == 669 )
          return result;
        v13 = (unsigned int *)(v12 + 104);
        if ( (((unsigned __int16)(*(_DWORD *)(v12 + 288) >> 8) ^ (unsigned __int16)(*(_DWORD *)(v8 + 288) >> 8)) & 0x1FF) != 0 )
        {
          v17 = (const struct tagWND *)*((_QWORD *)a1 + 13);
          v18 = *(_OWORD *)v13;
          LogicalToPhysicalInPlaceRectWithSubpixel(v17, (int *)&v18, 0LL);
          PhysicalToLogicalInPlaceRectWithSubpixel(a1, (int *)&v18, 0LL);
          v13 = (unsigned int *)&v18;
        }
        if ( (*(_BYTE *)(*(_QWORD *)(v11 + 40) + 26LL) & 0x40) != 0
          && v6
          && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x40) != 0 )
        {
          v15 = v13[1];
          v16 = v13[2];
          *(_DWORD *)(a2 + 12) -= v15;
          *(_DWORD *)(a2 + 4) -= v15;
          result = v16 - *(_DWORD *)(a2 + 8);
          *(_DWORD *)(a2 + 8) = v16 - *(_DWORD *)a2;
          *(_DWORD *)a2 = result;
          return result;
        }
        break;
      default:
        return result;
    }
    v14 = v13[1];
    result = *v13;
    *(_DWORD *)a2 -= result;
    *(_DWORD *)(a2 + 8) -= result;
    *(_DWORD *)(a2 + 12) -= v14;
    *(_DWORD *)(a2 + 4) -= v14;
  }
  return result;
}
