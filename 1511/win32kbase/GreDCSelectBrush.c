/*
 * XREFs of GreDCSelectBrush @ 0x1C006E4B0
 * Callers:
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C0030F10 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     GreRestoreDC @ 0x1C0032D00 (GreRestoreDC.c)
 *     GreSelectBrush @ 0x1C006E460 (GreSelectBrush.c)
 * Callees:
 *     HmgShareLockCheck @ 0x1C0049310 (HmgShareLockCheck.c)
 *     GreSetSolidBrushLight @ 0x1C006E5F0 (GreSetSolidBrushLight.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x1C00B58C0 (-DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z.c)
 */

__int64 __fastcall GreDCSelectBrush(__int64 a1, __int64 a2)
{
  __int64 v4; // rsi
  _QWORD *v5; // rdi
  _DWORD *v6; // r14
  __int64 v7; // rdx

  v4 = 0LL;
  if ( a1 )
  {
    v5 = *(_QWORD **)(a1 + 144);
    v4 = *(_QWORD *)(*(_QWORD *)(a1 + 80) + 16LL);
    if ( a2 != *v5 )
    {
      v5 = (_QWORD *)HmgShareLockCheck(a2, 16);
      if ( v5 )
      {
        DEC_SHARE_REF_CNT_LAZY0(*(struct BRUSH **)(a1 + 144));
        *(_DWORD *)(*(_QWORD *)(a1 + 80) + 8LL) |= 1u;
        *(_QWORD *)(a1 + 144) = v5;
      }
      else
      {
        v4 = 0LL;
      }
    }
    if ( v5 )
    {
      if ( v4 )
      {
        v6 = (_DWORD *)v5[7];
        if ( v6 != (_DWORD *)(v5 + 10) )
        {
          v7 = (unsigned int)v6[1];
          if ( (*v6 & 4) != 0 )
          {
            *(_DWORD *)(*(_QWORD *)(a1 + 80) + 8LL) |= 1u;
            GreSetSolidBrushLight(v5, v7, 0LL);
            *v6 &= ~4u;
          }
        }
      }
      *(_QWORD *)(*(_QWORD *)(a1 + 80) + 16LL) = a2;
      *(_DWORD *)(*(_QWORD *)(a1 + 80) + 8LL) &= ~0x1000u;
    }
  }
  return v4;
}
