/*
 * XREFs of GreDCSelectBrush @ 0x1C0059210
 * Callers:
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C0027340 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?GreSelectBrushInternal@@YAPEAUHBRUSH__@@AEAVXDCOBJ@@PEAU1@H@Z @ 0x1C00BCFF0 (-GreSelectBrushInternal@@YAPEAUHBRUSH__@@AEAVXDCOBJ@@PEAU1@H@Z.c)
 *     GreRestoreDCInternal @ 0x1C00CD060 (GreRestoreDCInternal.c)
 * Callees:
 *     HmgShareLockCheck @ 0x1C0029900 (HmgShareLockCheck.c)
 *     GreSetSolidBrushLight @ 0x1C0059350 (GreSetSolidBrushLight.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x1C00C0210 (-DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z.c)
 */

__int64 __fastcall GreDCSelectBrush(__int64 a1, __int64 a2)
{
  __int64 v4; // rsi
  __int64 v5; // rdi
  _DWORD *v6; // r14

  v4 = 0LL;
  if ( a1 )
  {
    v5 = *(_QWORD *)(a1 + 144);
    v4 = *(_QWORD *)(*(_QWORD *)(a1 + 80) + 16LL);
    if ( a2 != *(_QWORD *)v5 )
    {
      v5 = HmgShareLockCheck(a2, 16);
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
        v6 = *(_DWORD **)(v5 + 56);
        if ( v6 != (_DWORD *)(v5 + 80) && (*v6 & 4) != 0 )
        {
          *(_DWORD *)(*(_QWORD *)(a1 + 80) + 8LL) |= 1u;
          GreSetSolidBrushLight((struct OBJECT *)v5);
          *v6 &= ~4u;
        }
      }
      *(_QWORD *)(*(_QWORD *)(a1 + 80) + 16LL) = a2;
      *(_DWORD *)(*(_QWORD *)(a1 + 80) + 8LL) &= ~0x1000u;
    }
  }
  return v4;
}
