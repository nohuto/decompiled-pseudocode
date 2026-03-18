/*
 * XREFs of TouchTargetChildTree @ 0x140087E8C
 * Callers:
 *     EditionPostDwmSpeedHitTest @ 0x14008C7D0 (EditionPostDwmSpeedHitTest.c)
 *     EditionNonDwmTouchHitTest @ 0x1402C2960 (EditionNonDwmTouchHitTest.c)
 * Callees:
 *     ?DoesPointSnapToTopLevelWindow@@YAHPEAUtagWND@@0PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@@Z @ 0x1400863FC (-DoesPointSnapToTopLevelWindow@@YAHPEAUtagWND@@0PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@@Z.c)
 *     ?ClassicChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@@Z @ 0x14008645C (-ClassicChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@@Z.c)
 *     ?TraceLoggingHitTestWindowTargeting@@YAXHHHHHHH@Z @ 0x14008650C (-TraceLoggingHitTestWindowTargeting@@YAXHHHHHHH@Z.c)
 *     _TTPixelsToHm @ 0x140088148 (_TTPixelsToHm.c)
 *     PtInRect @ 0x14008C1B0 (PtInRect.c)
 */

struct tagWND *__fastcall TouchTargetChildTree(
        struct tagWND *a1,
        struct tagTOUCHTARGETINGCONTACT *a2,
        struct tagPOINT a3,
        _DWORD *a4)
{
  struct tagWND *v6; // rdi
  _DWORD *v7; // r10
  unsigned __int64 v8; // r8
  int v9; // r15d
  int v10; // r14d
  __int64 v11; // rcx
  unsigned int v12; // r13d
  unsigned int v13; // r11d
  unsigned int v14; // r10d
  int v15; // r14d
  unsigned int v16; // r10d
  int v17; // r11d
  int v18; // r15d
  int v19; // eax
  int v20; // r10d
  unsigned int v21; // r11d
  __int64 v22; // rcx
  struct tagWND *v24; // rax
  struct tagWND *v25; // rbp
  unsigned int v26; // r13d
  __int64 v27; // r10
  unsigned int v28; // r15d
  __int64 v29; // r10
  __int64 v30; // r10
  int v31; // r11d
  unsigned int v32; // [rsp+80h] [rbp+8h]
  struct tagPOINT v33; // [rsp+90h] [rbp+18h]
  int v36; // [rsp+A0h] [rbp+28h]

  v33 = a3;
  v6 = a1;
  if ( !a1 )
    return v6;
  v7 = (_DWORD *)*((_QWORD *)a1 + 5);
  v8 = HIDWORD(*(unsigned __int64 *)&a3);
  v9 = v7[29] - v8;
  v10 = v8 - v7[27];
  v11 = (unsigned int)(v7[28] - v33.x);
  if ( (int)v11 < 0 || v33.x - v7[26] < 0 || v10 < 0 || v9 < 0 )
  {
    v26 = *((_DWORD *)a2 + 46);
    v36 = TTPixelsToHm((unsigned int)(v7[24] - v33.x), v26);
    TTPixelsToHm((unsigned int)(v33.x - *(_DWORD *)(v27 + 88)), v26);
    v28 = *((_DWORD *)a2 + 47);
    v32 = v28;
    v15 = TTPixelsToHm((unsigned int)(v33.y - *(_DWORD *)(v29 + 92)), v28);
    v18 = TTPixelsToHm((unsigned int)(*(_DWORD *)(v30 + 100) - v33.y), v28);
    if ( v36 < 500 || v31 < 500 || v15 < 500 || v18 < 500 )
    {
      TTPixelsToHm((unsigned int)(*((_DWORD *)a2 + 7) - *((_DWORD *)a2 + 5)), v32);
      v19 = TTPixelsToHm((unsigned int)(*((_DWORD *)a2 + 6) - *((_DWORD *)a2 + 4)), v26);
      v22 = 0LL;
      goto LABEL_8;
    }
  }
  else
  {
    v12 = *((_DWORD *)a2 + 46);
    v36 = TTPixelsToHm(v11, v12);
    TTPixelsToHm(v13, v12);
    v15 = TTPixelsToHm((unsigned int)v10, *((unsigned int *)a2 + 47));
    v18 = TTPixelsToHm((unsigned int)v9, v14);
    if ( v36 < 500 || v17 < 500 || v15 < 500 || v18 < 500 )
    {
      TTPixelsToHm((unsigned int)(*((_DWORD *)a2 + 7) - *((_DWORD *)a2 + 5)), v16);
      v19 = TTPixelsToHm((unsigned int)(*((_DWORD *)a2 + 6) - *((_DWORD *)a2 + 4)), v12);
      v22 = 1LL;
LABEL_8:
      TraceLoggingHitTestWindowTargeting(v22, v36, v21, (unsigned int)v15, v18, v19, v20);
    }
  }
  v33.x += *a4;
  v33.y += a4[1];
  if ( *((_QWORD *)v6 + 14) )
  {
    if ( (unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD))PtInRect)(*((_QWORD *)v6 + 5) + 104LL, v33) )
    {
      v24 = ClassicChildTreeSpeedHitTest(v6, v33);
      v25 = v24;
      if ( v24 )
      {
        if ( !(unsigned int)DoesPointSnapToTopLevelWindow(v6, v24, a2, v33) )
          return v25;
      }
    }
  }
  return v6;
}
