/*
 * XREFs of ?UpdateTPStateIndicator@@YAXPEAUtagTPCONTACTSTATE@@PEAUtagTPSTATE@@PEAUtagPOINTER_INFO@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAH@Z @ 0x1C01F2F3C
 * Callers:
 *     ?xxxInternalTPProcessing@@YA?AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEBUtagPOINTERINPUTFRAME@@PEAX@Z @ 0x1C01F4EA4 (-xxxInternalTPProcessing@@YA-AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVIC.c)
 * Callees:
 *     PtInRect @ 0x1C008D7D8 (PtInRect.c)
 *     ?CrossedGestureDragThreshold@@YAHUtagPOINT@@0@Z @ 0x1C01F11DC (-CrossedGestureDragThreshold@@YAHUtagPOINT@@0@Z.c)
 *     ?PassedCurtainMoveThresholds@@YAH_K0PEAUtagTPSTATE@@PEAUtagTPCONTACTSTATE@@@Z @ 0x1C01F1D0C (-PassedCurtainMoveThresholds@@YAH_K0PEAUtagTPSTATE@@PEAUtagTPCONTACTSTATE@@@Z.c)
 *     ?PassedTapThresholdTime@@YAH_K0PEAUtagTPSTATE@@PEAUtagTPCONTACTSTATE@@@Z @ 0x1C01F1D98 (-PassedTapThresholdTime@@YAH_K0PEAUtagTPSTATE@@PEAUtagTPCONTACTSTATE@@@Z.c)
 *     ?TPAAPSetCurtainState@@YAXPEAUtagTPSTATE@@H@Z @ 0x1C01F2258 (-TPAAPSetCurtainState@@YAXPEAUtagTPSTATE@@H@Z.c)
 *     ?UpdateContactRestingState@@YAXUtagPOINT@@_KPEAUtagTPCONTACTSTATE@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C01F28F4 (-UpdateContactRestingState@@YAXUtagPOINT@@_KPEAUtagTPCONTACTSTATE@@PEAUtagTPSTATE@@PEAUtagHID_PO.c)
 */

void __fastcall UpdateTPStateIndicator(
        struct tagTPCONTACTSTATE *a1,
        struct tagTPSTATE *a2,
        struct tagPOINTER_INFO *a3,
        struct tagHID_POINTER_DEVICE_INFO *a4,
        int *a5)
{
  unsigned __int64 v6; // rbx
  __int64 v8; // r12
  int v11; // r8d
  int v12; // eax
  __int16 v13; // si
  unsigned __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdx
  int v17; // eax
  unsigned int v18; // r10d
  int v19; // r9d
  int v20; // r11d

  v6 = *((_QWORD *)a3 + 5);
  v8 = *((_QWORD *)a3 + 10);
  if ( *((_DWORD *)a3 + 3) )
  {
    if ( !DWORD2(gTouchPadParameters)
      || !*((_DWORD *)a4 + 58)
      || *((_DWORD *)a3 + 11) >= *((_DWORD *)a4 + 55)
      && (int)v6 >= *((_DWORD *)a4 + 56)
      && (int)v6 <= *((_DWORD *)a4 + 57) )
    {
      *((_DWORD *)a1 + 42) |= 0x800u;
      TPAAPSetCurtainState(a2, 0);
    }
    if ( (*((_DWORD *)a1 + 42) & 0x20) == 0 && !PtInRect((_DWORD *)a2 + 310, v6) )
      *((_DWORD *)a1 + 42) = v11 | 0x20;
    v12 = *((_DWORD *)a1 + 42);
    v13 = 1;
    if ( (v12 & 1) != 0 )
    {
      UpdateContactRestingState((struct tagPOINT)v6, v8, a1, a2, a4);
      v18 = *((_DWORD *)a1 + 42) & 0xFFFFFFFD;
      *((_DWORD *)a1 + 42) = v18;
      if ( (*((_DWORD *)a3 + 3) & 0x40000) == 0 )
      {
        if ( (v18 & 4) == 0
          && (unsigned int)dword_1C03236B4
           * (__int64)(int)((HIDWORD(*(_QWORD *)a1) - HIDWORD(v6)) * (HIDWORD(*(_QWORD *)a1) - HIDWORD(v6)))
           + (unsigned __int64)(unsigned int)dword_1C03236B8 * (int)((*(_QWORD *)a1 - v6) * (*(_QWORD *)a1 - v6)) > (unsigned int)dword_1C03236B4 * (unsigned __int64)(unsigned int)dword_1C03236B8 )
        {
          *((_QWORD *)a1 + 3) = v6;
          *((_DWORD *)a1 + 42) = v18 | 4;
          *a5 = 1;
        }
        if ( (*((_DWORD *)a1 + 42) & 0x40000) == 0
          && CrossedGestureDragThreshold(*(struct tagPOINT *)a1, (struct tagPOINT)v6) )
        {
          *((_DWORD *)a1 + 42) = v20 | v19;
        }
      }
      if ( (*((_DWORD *)a1 + 42) & 8) == 0 && PassedTapThresholdTime(*((_QWORD *)a1 + 5), v8, a2, a1).LowPart )
      {
        *((_DWORD *)a1 + 42) |= 8u;
        *a5 = 1;
      }
      if ( (*((_DWORD *)a1 + 42) & 0x80u) == 0
        && (*((_DWORD *)a2 + 316) & 0x2000) != 0
        && (unsigned int)PassedCurtainMoveThresholds(*((_QWORD *)a1 + 8), v8, a2, a1) )
      {
        TPAAPSetCurtainState(a2, 0);
      }
    }
    else
    {
      *((_QWORD *)a1 + 5) = v8;
      *((_QWORD *)a1 + 7) = v8;
      *((_DWORD *)a1 + 42) = v12 & 0xFFFBFFF3;
      v14 = (unsigned __int64)MEMORY[0xFFFFF78000000004] << 32;
      v15 = MEMORY[0xFFFFF78000000320];
      *((_DWORD *)a1 + 20) = 0;
      v16 = (v14 * (unsigned __int128)(unsigned __int64)(v15 << 8)) >> 64;
      LODWORD(v15) = *((_DWORD *)a1 + 42) & 0xFFFFF7FF;
      *((_QWORD *)a1 + 9) = v16;
      *(_QWORD *)a1 = v6;
      v17 = v15 & 0xFFFFEDFC | 3;
      *((_DWORD *)a1 + 42) = v17;
      if ( !*((_DWORD *)a2 + 266) || *((_DWORD *)a2 + 270) == 1 )
        v13 = 0;
      *((_DWORD *)a1 + 42) = (v17 ^ ((unsigned __int16)v17 ^ (unsigned __int16)(v13 << 13)) & 0x2000) & 0xFFFC3FFF;
      UpdateContactRestingState((struct tagPOINT)v6, v8, a1, a2, a4);
    }
  }
}
