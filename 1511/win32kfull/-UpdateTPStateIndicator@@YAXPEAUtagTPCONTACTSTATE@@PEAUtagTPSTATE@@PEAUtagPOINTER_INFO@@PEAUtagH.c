/*
 * XREFs of ?UpdateTPStateIndicator@@YAXPEAUtagTPCONTACTSTATE@@PEAUtagTPSTATE@@PEAUtagPOINTER_INFO@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAH@Z @ 0x1C01F3264
 * Callers:
 *     ?xxxInternalTPProcessing@@YA?AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEBUtagPOINTERINPUTFRAME@@PEAX@Z @ 0x1C01F52B4 (-xxxInternalTPProcessing@@YA-AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVIC.c)
 * Callees:
 *     PtInRect @ 0x1C0066AB8 (PtInRect.c)
 *     ?SetupDragRectsForContact@@YAXPEAUtagTPCONTACTSTATE@@@Z @ 0x1C0152F88 (-SetupDragRectsForContact@@YAXPEAUtagTPCONTACTSTATE@@@Z.c)
 *     ?CrossedTPDragThreshold@@YAHPEAUtagTPCONTACTSTATE@@PEAUtagTPSTATE@@UtagPOINT@@@Z @ 0x1C01F113C (-CrossedTPDragThreshold@@YAHPEAUtagTPCONTACTSTATE@@PEAUtagTPSTATE@@UtagPOINT@@@Z.c)
 *     ?PassedCurtainMoveThresholds@@YAH_K0PEAUtagTPSTATE@@PEAUtagTPCONTACTSTATE@@@Z @ 0x1C01F1EC4 (-PassedCurtainMoveThresholds@@YAH_K0PEAUtagTPSTATE@@PEAUtagTPCONTACTSTATE@@@Z.c)
 *     ?PassedTapThresholdTime@@YAH_K0PEAUtagTPSTATE@@PEAUtagTPCONTACTSTATE@@@Z @ 0x1C01F1F50 (-PassedTapThresholdTime@@YAH_K0PEAUtagTPSTATE@@PEAUtagTPCONTACTSTATE@@@Z.c)
 *     ?PointInsideNonCurtainRegion@@YAHPEAUtagTPSTATE@@PEAUtagPOINTER_INFO@@PEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C01F2104 (-PointInsideNonCurtainRegion@@YAHPEAUtagTPSTATE@@PEAUtagPOINTER_INFO@@PEAUtagHID_POINTER_DEVICE_.c)
 *     ?TPAAPSetCurtainState@@YAXPEAUtagTPSTATE@@H@Z @ 0x1C01F25A4 (-TPAAPSetCurtainState@@YAXPEAUtagTPSTATE@@H@Z.c)
 *     ?UpdateContactRestingState@@YAXUtagPOINT@@_KPEAUtagTPCONTACTSTATE@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C01F2BD8 (-UpdateContactRestingState@@YAXUtagPOINT@@_KPEAUtagTPCONTACTSTATE@@PEAUtagTPSTATE@@PEAUtagHID_PO.c)
 */

void __fastcall UpdateTPStateIndicator(
        struct tagTPCONTACTSTATE *a1,
        struct tagTPSTATE *a2,
        struct tagPOINTER_INFO *a3,
        struct tagHID_POINTER_DEVICE_INFO *a4,
        int *a5)
{
  unsigned __int64 v6; // rbx
  __int64 v8; // r15
  __int64 *v11; // r9
  unsigned int *v12; // r10
  int v13; // r8d
  int v14; // eax
  __int16 v15; // si
  __int64 v16; // rax
  __int64 v17; // rcx
  unsigned __int64 v18; // rcx
  int v19; // eax
  unsigned int v20; // r11d
  int v21; // r11d
  int v22; // r8d

  v6 = *((_QWORD *)a3 + 5);
  v8 = *((_QWORD *)a3 + 10);
  if ( *((_DWORD *)a3 + 3) )
  {
    if ( (unsigned int)PointInsideNonCurtainRegion(a2, a3, a4) )
    {
      *((_DWORD *)a1 + 53) |= 0x800u;
      TPAAPSetCurtainState(a2, 0);
    }
    v11 = (__int64 *)0xFFFFF78000000320LL;
    v12 = (unsigned int *)0xFFFFF78000000004LL;
    if ( (*((_DWORD *)a2 + 386) & 0x10000000) != 0
      && (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
       - *((_DWORD *)a2 + 356) > 0x7D )
    {
      *((_DWORD *)a2 + 386) &= ~0x10000000u;
    }
    if ( (*((_DWORD *)a1 + 53) & 0x20) == 0 && !PtInRect((_DWORD *)a2 + 376, v6) )
      *((_DWORD *)a1 + 53) = v13 | 0x20;
    v14 = *((_DWORD *)a1 + 53);
    v15 = 1;
    if ( (v14 & 1) != 0 )
    {
      UpdateContactRestingState((struct tagPOINT)v6, v8, a1, a2, a4);
      v20 = *((_DWORD *)a1 + 53) & 0xFFFFFFFD;
      *((_DWORD *)a1 + 53) = v20;
      if ( (*((_DWORD *)a3 + 3) & 0x40000) == 0 )
      {
        if ( (v20 & 4) == 0 && CrossedTPDragThreshold(a1, a2, (struct tagPOINT)v6) )
        {
          *((_QWORD *)a1 + 3) = v6;
          *((_DWORD *)a1 + 53) = v21 | 4;
          *a5 = 1;
        }
        v22 = *((_DWORD *)a1 + 53);
        if ( (v22 & 0x40000) == 0
          && (unsigned __int64)(40000
                              * ((int)((HIDWORD(*(_QWORD *)a1) - HIDWORD(v6)) * (HIDWORD(*(_QWORD *)a1) - HIDWORD(v6)))
                               + (__int64)(int)((*(_QWORD *)a1 - v6) * (*(_QWORD *)a1 - v6)))) > 0x5F5E1000 )
        {
          *((_DWORD *)a1 + 53) = v22 | 0x40000;
        }
      }
      if ( (*((_DWORD *)a1 + 53) & 8) == 0 && PassedTapThresholdTime(*((_QWORD *)a1 + 5), v8, a2, a1).LowPart )
      {
        *((_DWORD *)a1 + 53) |= 8u;
        *a5 = 1;
      }
      if ( (*((_DWORD *)a1 + 53) & 0x80u) == 0
        && (*((_DWORD *)a2 + 386) & 0x2000) != 0
        && (unsigned int)PassedCurtainMoveThresholds(*((_QWORD *)a1 + 8), v8, a2, a1) )
      {
        TPAAPSetCurtainState(a2, 0);
      }
    }
    else
    {
      *((_QWORD *)a1 + 5) = v8;
      *((_QWORD *)a1 + 7) = v8;
      *((_DWORD *)a1 + 53) = v14 & 0xFFE3FFF3;
      v16 = *v11;
      v17 = *v12;
      *((_DWORD *)a1 + 19) = 0;
      v18 = (unsigned __int64)(v16 * v17) >> 24;
      LODWORD(v16) = *((_DWORD *)a1 + 53) & 0xFFFFE7FF;
      *((_DWORD *)a1 + 18) = v18;
      *(_QWORD *)a1 = v6;
      v19 = v16 & 0xFFFFFDFC | 3;
      *((_DWORD *)a1 + 53) = v19;
      if ( !*((_DWORD *)a2 + 326) || *((_DWORD *)a2 + 330) == 1 )
        v15 = 0;
      *((_DWORD *)a1 + 53) = (v19 ^ ((unsigned __int16)v19 ^ (unsigned __int16)(v15 << 13)) & 0x2000) & 0xFFFC3FFF;
      SetupDragRectsForContact(a1);
      UpdateContactRestingState((struct tagPOINT)v6, v8, a1, a2, a4);
    }
  }
}
