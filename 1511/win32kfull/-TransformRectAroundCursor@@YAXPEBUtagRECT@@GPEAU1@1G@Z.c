/*
 * XREFs of ?TransformRectAroundCursor@@YAXPEBUtagRECT@@GPEAU1@1G@Z @ 0x1C01E4700
 * Callers:
 *     GetNewMonitor @ 0x1C006DEC0 (GetNewMonitor.c)
 *     DetectNewMonitor @ 0x1C01E5118 (DetectNewMonitor.c)
 * Callees:
 *     TransformRectAroundPoint @ 0x1C01E6678 (TransformRectAroundPoint.c)
 */

void __fastcall TransformRectAroundCursor(
        const struct tagRECT *a1,
        int a2,
        struct tagRECT *a3,
        struct tagRECT *a4,
        unsigned __int16 a5)
{
  unsigned __int16 v7; // r14
  __int64 v9; // rcx
  __int64 v10; // rdi
  INT v11; // r8d
  INT v12; // edx
  int v13; // ecx

  v7 = a2;
  TransformRectAroundPoint((_DWORD)a1, a2, (_DWORD)a3, (_DWORD)a4, a5, *(_QWORD *)(gpsi + 3976LL));
  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v9) + 776) & 0x4000) != 0 )
  {
    v10 = *(_QWORD *)(gptiCurrent + 592LL);
    if ( v10 )
    {
      if ( a3 )
      {
        v11 = a1->bottom - a1->top;
        v12 = a3->bottom - a3->top;
      }
      else
      {
        v11 = v7;
        v12 = a5;
      }
      v13 = *(_DWORD *)(v10 + 156) - EngMulDiv(*(_DWORD *)(v10 + 156), v12, v11);
      a4->bottom += v13;
      a4->top += v13;
    }
  }
}
