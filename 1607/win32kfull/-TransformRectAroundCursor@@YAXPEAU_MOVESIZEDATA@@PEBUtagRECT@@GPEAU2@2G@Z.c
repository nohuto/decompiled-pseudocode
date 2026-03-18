/*
 * XREFs of ?TransformRectAroundCursor@@YAXPEAU_MOVESIZEDATA@@PEBUtagRECT@@GPEAU2@2G@Z @ 0x1C01DAFE4
 * Callers:
 *     GetNewMonitor @ 0x1C0070AA8 (GetNewMonitor.c)
 *     DetectNewMonitor @ 0x1C01DB9AC (DetectNewMonitor.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     TransformRectAroundPoint @ 0x1C01DCE14 (TransformRectAroundPoint.c)
 */

void __fastcall TransformRectAroundCursor(
        struct _MOVESIZEDATA *a1,
        const struct tagRECT *a2,
        unsigned __int16 a3,
        struct tagRECT *a4,
        struct tagRECT *a5,
        unsigned __int16 a6)
{
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  INT v14; // r8d
  INT v15; // edx
  int v16; // ecx

  TransformRectAroundPoint((_DWORD)a2, a3, (_DWORD)a4, (_DWORD)a5, a6, *(_QWORD *)((char *)a1 + 284));
  if ( (W32GetCurrentThreadDpiAwarenessContext(v11, v10, v12, v13) & 0xF) == 2 )
  {
    if ( a4 )
    {
      v14 = a2->bottom - a2->top;
      v15 = a4->bottom - a4->top;
    }
    else
    {
      v14 = a3;
      v15 = a6;
    }
    v16 = *((_DWORD *)a1 + 39) - EngMulDiv(*((_DWORD *)a1 + 39), v15, v14);
    a5->bottom += v16;
    a5->top += v16;
  }
}
