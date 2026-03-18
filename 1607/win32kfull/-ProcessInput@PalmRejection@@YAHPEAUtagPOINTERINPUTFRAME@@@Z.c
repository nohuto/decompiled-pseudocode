/*
 * XREFs of ?ProcessInput@PalmRejection@@YAHPEAUtagPOINTERINPUTFRAME@@@Z @ 0x1C0228FC8
 * Callers:
 *     xxxGeneratePointerInputMessages @ 0x1C01F33DC (xxxGeneratePointerInputMessages.c)
 * Callees:
 *     SetRITTimer @ 0x1C005F490 (SetRITTimer.c)
 *     FindTimer @ 0x1C00ECDEC (FindTimer.c)
 *     ?IsPointerInfoNodeValid@@YAHPEBUtagPOINTERINFONODE@@@Z @ 0x1C01C0FF4 (-IsPointerInfoNodeValid@@YAHPEBUtagPOINTERINFONODE@@@Z.c)
 *     ?DispatchBufferedInputFrames@PalmRejection@@YAXXZ @ 0x1C0228E54 (-DispatchBufferedInputFrames@PalmRejection@@YAXXZ.c)
 *     ?_HitTestRejectionRegion@PalmRejection@@YAHPEAXUtagPOINT@@@Z @ 0x1C0229374 (-_HitTestRejectionRegion@PalmRejection@@YAHPEAXUtagPOINT@@@Z.c)
 *     ?_SuppressDeadzoneContacts@PalmRejection@@YAXUtagPOINT@@@Z @ 0x1C0229558 (-_SuppressDeadzoneContacts@PalmRejection@@YAXUtagPOINT@@@Z.c)
 */

__int64 __fastcall PalmRejection::ProcessInput(PalmRejection *this, struct tagPOINTERINPUTFRAME *a2)
{
  struct tagPOINT v2; // r8
  unsigned int v3; // edi
  PalmRejection *v4; // rbx
  unsigned int v6; // ebp
  int v7; // r10d
  BOOL v8; // r12d
  int v9; // r15d
  unsigned int v10; // r14d
  unsigned int v11; // r9d
  unsigned int v12; // r11d
  unsigned int v13; // r13d
  __int64 v14; // rcx
  unsigned int v15; // r9d
  int v16; // eax
  int v17; // eax
  int v18; // eax
  void *v19; // rdx
  struct tagRECT *v20; // rcx
  int v21; // eax
  int v22; // edx
  PalmRejection *v24; // rcx
  struct tagPOINT v25; // rdx
  __int64 v26; // rdx
  unsigned int v27; // [rsp+70h] [rbp+8h]
  int v28; // [rsp+78h] [rbp+10h]
  unsigned int v29; // [rsp+80h] [rbp+18h]

  v2 = (struct tagPOINT)DWORD1(xmmword_1C0331C60);
  v3 = 0;
  v4 = 0LL;
  v28 = 0;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v29 = 0;
  v12 = 0;
  v27 = 0;
  v13 = 0;
  if ( *((_DWORD *)this + 10) )
  {
    while ( 1 )
    {
      if ( !(unsigned int)IsPointerInfoNodeValid((const struct tagPOINTERINFONODE *)(*((_QWORD *)this + 11) + 216LL * v13)) )
        goto LABEL_27;
      v16 = *(_DWORD *)(v14 + 56);
      if ( v16 != 3 )
      {
        if ( v16 != 2 )
          return v15;
        if ( !(_QWORD)xmmword_1C0331C50 )
          *(_QWORD *)&xmmword_1C0331C50 = *((_QWORD *)this + 7);
        if ( *((_QWORD *)this + 7) != (_QWORD)xmmword_1C0331C50 )
          return v15;
        v18 = *(_DWORD *)(v14 + 68);
        v6 = v15;
        v9 = *(_DWORD *)(v14 + 120);
        if ( (v18 & 0x10000) == 0 )
        {
          v12 = v27;
          if ( (v18 & 0x40000) != 0 )
            LODWORD(xmmword_1C0331C60) = xmmword_1C0331C60 - 1;
          goto LABEL_28;
        }
        v19 = *(void **)(v14 + 112);
        v20 = *(struct tagRECT **)(v14 + 72);
        LODWORD(xmmword_1C0331C60) = v15 + xmmword_1C0331C60;
        v21 = PalmRejection::_HitTestRejectionRegion(v20, v19, v2);
        v15 = 1;
        if ( !v8 )
          v8 = v21 != 0;
        v7 = v28;
        if ( !v28 && !v21 )
        {
          v7 = 1;
          v28 = 1;
        }
        v2 = (struct tagPOINT)DWORD1(xmmword_1C0331C60);
LABEL_27:
        v12 = v27;
        goto LABEL_28;
      }
      if ( !*((_QWORD *)&xmmword_1C0331C50 + 1) )
        *((_QWORD *)&xmmword_1C0331C50 + 1) = *((_QWORD *)this + 7);
      if ( *((_QWORD *)this + 7) != *((_QWORD *)&xmmword_1C0331C50 + 1) )
        return v15;
      v10 = v15;
      DWORD2(xmmword_1C0331C60) = *(_DWORD *)(v14 + 120);
      v17 = *(_DWORD *)(v14 + 68);
      if ( ((unsigned __int8)v17 & (unsigned __int8)v15) != 0 )
      {
        if ( !v2.x )
        {
          v4 = *(PalmRejection **)(v14 + 112);
          v29 = v15;
        }
        v2 = (struct tagPOINT)(v15 + v2.x);
      }
      else
      {
        if ( (v17 & 2) != 0 )
          goto LABEL_14;
        v2 = (struct tagPOINT)(unsigned int)(v2.x - 1);
      }
      DWORD1(xmmword_1C0331C60) = v2.x;
LABEL_14:
      if ( (v17 & 0x8000) == 0 )
        goto LABEL_27;
      v12 = v15;
      v27 = v15;
LABEL_28:
      v13 += v15;
      if ( v13 >= *((_DWORD *)this + 10) )
      {
        v11 = v29;
        break;
      }
    }
  }
  v22 = gPalmRejectData;
  if ( !gPalmRejectData )
  {
    if ( !v10 )
      goto LABEL_41;
    v22 = 1;
    goto LABEL_33;
  }
  if ( v6 && gPalmRejectDisableThr && v9 - DWORD2(xmmword_1C0331C60) > gPalmRejectDisableThr )
  {
    v22 = 0;
LABEL_33:
    gPalmRejectData = v22;
  }
LABEL_41:
  if ( !*(&gPalmRejectData + 1) )
  {
    if ( v22 && (!v10 || !v11) && v6 && v8 )
    {
      *(&gPalmRejectData + 1) = SetRITTimer(
                                  *(&gPalmRejectData + 1),
                                  gPalmRejectTimeThr,
                                  (__int64)PalmRejection::_PalmRejectTimerProc,
                                  1);
      xmmword_1C0331C70 = this;
      *(&xmmword_1C0331C70 + 1) = this;
      *(&gPalmRejectData + 1) = 1;
      return v3;
    }
    *(&gPalmRejectData + 1) = 2;
    return 1;
  }
  v24 = (PalmRejection *)(unsigned int)(*(&gPalmRejectData + 1) - 1);
  if ( *(&gPalmRejectData + 1) == 1 )
  {
    if ( v10 && v11 )
    {
      v25 = (struct tagPOINT)*(&gPalmRejectData + 1);
      if ( *(&gPalmRejectData + 1) )
      {
        FindTimer(0LL, *(&gPalmRejectData + 1), 4u, 1, 0LL);
        *(&gPalmRejectData + 1) = 0LL;
      }
      PalmRejection::_SuppressDeadzoneContacts(v4, v25);
    }
    else
    {
      if ( !v6 )
        return 1;
      if ( gPalmRejectDelayNonEdge || !v7 )
      {
        *(&xmmword_1C0331C70 + 1) = this;
        return v3;
      }
      v26 = *(&gPalmRejectData + 1);
      if ( *(&gPalmRejectData + 1) )
      {
        FindTimer(0LL, *(&gPalmRejectData + 1), 4u, 1, 0LL);
        *(&gPalmRejectData + 1) = 0LL;
      }
    }
    PalmRejection::DispatchBufferedInputFrames(v24, v26, *(struct _LIST_ENTRY **)&v2);
    return 1;
  }
  if ( *(&gPalmRejectData + 1) == 2 )
  {
    if ( !v2.x && !(_DWORD)xmmword_1C0331C60 && !v12 )
    {
      xmmword_1C0331C50 = 0uLL;
      *(&gPalmRejectData + 1) = 0;
    }
    return 1;
  }
  return v3;
}
