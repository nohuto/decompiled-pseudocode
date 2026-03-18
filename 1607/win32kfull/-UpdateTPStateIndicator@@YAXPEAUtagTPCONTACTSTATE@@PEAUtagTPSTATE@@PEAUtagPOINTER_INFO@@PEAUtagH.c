/*
 * XREFs of ?UpdateTPStateIndicator@@YAXPEAUtagTPCONTACTSTATE@@PEAUtagTPSTATE@@PEAUtagPOINTER_INFO@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAH@Z @ 0x1C01E96E4
 * Callers:
 *     ?xxxInternalTPProcessing@@YA?AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEBUtagPOINTERINPUTFRAME@@PEAX@Z @ 0x1C01EC198 (-xxxInternalTPProcessing@@YA-AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVIC.c)
 * Callees:
 *     PtInRect @ 0x1C0059530 (PtInRect.c)
 *     ?SetupDragRectsForContact@@YAXPEAUtagTPCONTACTSTATE@@@Z @ 0x1C015A618 (-SetupDragRectsForContact@@YAXPEAUtagTPCONTACTSTATE@@@Z.c)
 *     ?CrossedTPDragThreshold@@YAHPEAUtagTPCONTACTSTATE@@PEAUtagTPSTATE@@UtagPOINT@@PEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C01E729C (-CrossedTPDragThreshold@@YAHPEAUtagTPCONTACTSTATE@@PEAUtagTPSTATE@@UtagPOINT@@PEAUtagHID_POINTER.c)
 *     ?CrossedTPTapWarpBackThreshold@@YAHPEAUtagTPCONTACTSTATE@@UtagPOINT@@@Z @ 0x1C01E7464 (-CrossedTPTapWarpBackThreshold@@YAHPEAUtagTPCONTACTSTATE@@UtagPOINT@@@Z.c)
 *     ?PassedCurtainMoveThresholds@@YAH_K0PEAUtagTPSTATE@@PEAUtagTPCONTACTSTATE@@@Z @ 0x1C01E81F0 (-PassedCurtainMoveThresholds@@YAH_K0PEAUtagTPSTATE@@PEAUtagTPCONTACTSTATE@@@Z.c)
 *     ?PassedMultiFingerRestingTapThresholdTime@@YAH_K0PEAUtagTPSTATE@@PEAUtagTPCONTACTSTATE@@@Z @ 0x1C01E827C (-PassedMultiFingerRestingTapThresholdTime@@YAH_K0PEAUtagTPSTATE@@PEAUtagTPCONTACTSTATE@@@Z.c)
 *     ?PointInsideNonCurtainRegion@@YAHPEAUtagTPSTATE@@PEAUtagPOINTER_INFO@@PEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C01E831C (-PointInsideNonCurtainRegion@@YAHPEAUtagTPSTATE@@PEAUtagPOINTER_INFO@@PEAUtagHID_POINTER_DEVICE_.c)
 *     ?SetupQpcThresholdTimes@@YAHPEAUtagTPSTATE@@@Z @ 0x1C01E8544 (-SetupQpcThresholdTimes@@YAHPEAUtagTPSTATE@@@Z.c)
 *     ?TPAAPSetCurtainState@@YAXPEAUtagTPSTATE@@H@Z @ 0x1C01E8868 (-TPAAPSetCurtainState@@YAXPEAUtagTPSTATE@@H@Z.c)
 *     ?UpdateContactRestingState@@YAXUtagPOINT@@_KPEAUtagTPCONTACTSTATE@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C01E8EE0 (-UpdateContactRestingState@@YAXUtagPOINT@@_KPEAUtagTPCONTACTSTATE@@PEAUtagTPSTATE@@PEAUtagHID_PO.c)
 */

void __fastcall UpdateTPStateIndicator(
        struct tagTPCONTACTSTATE *a1,
        struct tagTPSTATE *a2,
        struct tagPOINTER_INFO *a3,
        struct tagHID_POINTER_DEVICE_INFO *a4,
        int *a5)
{
  unsigned __int64 v5; // rbx
  __int64 v7; // r12
  unsigned int *v11; // r9
  _QWORD *v12; // r10
  int v13; // r8d
  int v14; // eax
  __int16 v15; // si
  unsigned int v16; // eax
  unsigned int v17; // eax
  struct tagHID_POINTER_DEVICE_INFO *v18; // r9
  unsigned int v19; // r14d
  int v20; // r9d
  int v21; // r14d
  union _LARGE_INTEGER v22; // r9
  unsigned __int64 v23; // r8
  unsigned __int64 v24; // rdx
  int v25; // ecx
  int v26; // eax
  int v27; // ecx

  v5 = *((_QWORD *)a3 + 5);
  v7 = *((_QWORD *)a3 + 10);
  if ( *((_DWORD *)a3 + 3) )
  {
    if ( (unsigned int)PointInsideNonCurtainRegion(a2, a3, a4) )
    {
      *((_DWORD *)a1 + 66) |= 0x800u;
      TPAAPSetCurtainState(a2, 0);
    }
    v11 = (unsigned int *)0xFFFFF78000000004LL;
    v12 = (_QWORD *)0xFFFFF78000000320LL;
    if ( (*((_DWORD *)a2 + 480) & 0x4000000) != 0
      && (unsigned __int64)(((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                            * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
                          - *((_QWORD *)a2 + 222)) > 0x7D )
    {
      *((_DWORD *)a2 + 480) &= ~0x4000000u;
    }
    if ( (*((_DWORD *)a1 + 66) & 0x20) == 0 && !PtInRect((_DWORD *)a2 + 470, v5) )
      *((_DWORD *)a1 + 66) = v13 | 0x20;
    v14 = *((_DWORD *)a1 + 66);
    v15 = 1;
    if ( (v14 & 1) != 0 )
    {
      if ( ++*((_DWORD *)a1 + 33) == 2
        && (unsigned __int64)(((((unsigned __int64)*v11 << 32) * (unsigned __int128)(unsigned __int64)(*v12 << 8)) >> 64)
                            - *((_QWORD *)a1 + 14)) <= 0x32 )
      {
        *(_QWORD *)a1 = *((_QWORD *)a1 + 1);
        SetupDragRectsForContact(a1);
      }
      UpdateContactRestingState((struct tagPOINT)v5, v7, a1, a2, a4);
      v19 = *((_DWORD *)a1 + 66) & 0xFFFFFFFD;
      *((_DWORD *)a1 + 66) = v19;
      if ( (*((_DWORD *)a3 + 3) & 0x40000) == 0 )
      {
        if ( (v19 & 4) == 0 && (unsigned int)CrossedTPDragThreshold(a1, a2, (struct tagPOINT)v5, v18) )
        {
          *((_QWORD *)a1 + 5) = v5;
          *((_DWORD *)a1 + 66) = v19 | 4;
          *a5 = 1;
        }
        v20 = *((_DWORD *)a1 + 66);
        if ( (v20 & 0x40000) == 0
          && (unsigned __int64)(40000LL * (int)((*(_QWORD *)a1 - v5) * (*(_QWORD *)a1 - v5))
                              + 90000LL
                              * (int)((HIDWORD(*(_QWORD *)a1) - HIDWORD(v5)) * (HIDWORD(*(_QWORD *)a1) - HIDWORD(v5)))) >= 0xD693A400 )
        {
          *((_DWORD *)a1 + 66) = v20 | 0x40000;
        }
        v21 = *((_DWORD *)a1 + 66);
        if ( (v21 & 0x400000) == 0 && CrossedTPTapWarpBackThreshold(a1, (struct tagPOINT)v5) )
          *((_DWORD *)a1 + 66) = v21 | 0x400000;
        if ( !*((_DWORD *)a1 + 67)
          && (unsigned int)(dword_1C032817C * dword_1C032817C)
           * (__int64)(int)((*(_QWORD *)a1 - v5) * (*(_QWORD *)a1 - v5))
           + (unsigned __int64)(unsigned int)(dword_1C0328178 * dword_1C0328178)
           * (int)((HIDWORD(*(_QWORD *)a1) - HIDWORD(v5)) * (HIDWORD(*(_QWORD *)a1) - HIDWORD(v5))) >= (unsigned int)(dword_1C032817C * dword_1C032817C) * (unsigned __int64)(unsigned int)(dword_1C0328178 * dword_1C0328178) )
        {
          *((_DWORD *)a1 + 67) = 1;
        }
      }
      if ( SetupQpcThresholdTimes(a2).LowPart )
      {
        v23 = v7 - *((_QWORD *)a1 + 7);
        v24 = v7 - *((_QWORD *)a2 + 224);
        *((_DWORD *)a1 + 66) ^= (*((_DWORD *)a1 + 66) ^ (16 * (v23 > *((_QWORD *)a2 + 226)))) & 0x10;
        v25 = *((_DWORD *)a1 + 66) ^ (*((_DWORD *)a1 + 66) ^ ((v23 > *((_QWORD *)a2 + 227)) << 19)) & 0x80000;
        *((_DWORD *)a1 + 66) = v25;
        v26 = v25 ^ (v25 ^ ((v23 > *((_QWORD *)a2 + 228)) << 20)) & 0x100000;
        *((_DWORD *)a1 + 66) = v26;
        v27 = v26 ^ (v26 ^ ((v24 > *((_QWORD *)a2 + 227)) << 21)) & 0x200000;
        *((_DWORD *)a1 + 66) = v27;
        if ( (v27 & 8) == 0 && v23 > *((_QWORD *)a2 + 225) )
        {
          *a5 = 1;
          *((_DWORD *)a1 + 66) = v27 | 8;
        }
      }
      if ( (*((_DWORD *)a1 + 66) & 0x800000) == 0
        && PassedMultiFingerRestingTapThresholdTime(
             *((_QWORD *)a1 + 7),
             v7,
             a2,
             (struct tagTPCONTACTSTATE *)v22.QuadPart).LowPart )
      {
        *((_DWORD *)a1 + 66) |= 0x800000u;
      }
      if ( (*((_DWORD *)a1 + 66) & 0x80u) == 0
        && (*((_DWORD *)a2 + 480) & 0x2000) != 0
        && (unsigned int)PassedCurtainMoveThresholds(*((_QWORD *)a1 + 10), v7, a2, a1) )
      {
        TPAAPSetCurtainState(a2, 0);
      }
    }
    else
    {
      *((_QWORD *)a1 + 7) = v7;
      *((_QWORD *)a1 + 9) = v7;
      *((_QWORD *)a1 + 11) = v7;
      *((_DWORD *)a1 + 66) = v14 & 0xFFE3FFF3;
      *((_QWORD *)a1 + 13) = UpconvertTime(*((unsigned int *)a3 + 16));
      *((_DWORD *)a1 + 33) = 1;
      *(_QWORD *)a1 = v5;
      *((_QWORD *)a1 + 2) = v5;
      *((struct tagPOINT *)a1 + 3) = gptCursorAsync;
      v16 = *((_DWORD *)a1 + 66) & 0xFEFFFFFF;
      *((_DWORD *)a1 + 67) = 0;
      *((_DWORD *)a1 + 30) = 0;
      v17 = v16 & 0xFDFFE5FC | 3;
      *((_DWORD *)a1 + 66) = v17;
      if ( !*((_DWORD *)a2 + 410) || *((_DWORD *)a2 + 416) == 1 )
        v15 = 0;
      *((_DWORD *)a1 + 66) = (v17 ^ ((unsigned __int16)v17 ^ (unsigned __int16)(v15 << 13)) & 0x2000) & 0xFF3C3BFF;
      SetupDragRectsForContact(a1);
      UpdateContactRestingState((struct tagPOINT)v5, v7, a1, a2, a4);
    }
  }
}
