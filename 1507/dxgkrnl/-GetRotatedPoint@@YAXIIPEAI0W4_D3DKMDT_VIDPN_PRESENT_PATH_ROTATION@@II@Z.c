/*
 * XREFs of ?GetRotatedPoint@@YAXIIPEAI0W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@II@Z @ 0x1C01462D4
 * Callers:
 *     ?RotateCursorShapeWorker@@YAXPEAU_CURSOR_INFO@@PEBU1@@Z @ 0x1C01465BC (-RotateCursorShapeWorker@@YAXPEAU_CURSOR_INFO@@PEBU1@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall GetRotatedPoint(
        __int64 a1,
        __int64 a2,
        unsigned int *a3,
        unsigned int *a4,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION a5,
        unsigned int a6,
        unsigned int a7)
{
  __int64 v7; // rax
  int v8; // eax

  switch ( a5 )
  {
    case D3DKMDT_VPPR_IDENTITY:
      *a3 = a1;
      *a4 = a2;
      return;
    case D3DKMDT_VPPR_ROTATE90:
      v8 = a6 - a1;
      *a3 = a2;
      goto LABEL_9;
    case D3DKMDT_VPPR_ROTATE180:
      *a3 = a6 - a1 - 1;
      v8 = a7 - a2;
LABEL_9:
      *a4 = v8 - 1;
      return;
    case D3DKMDT_VPPR_ROTATE270:
      *a4 = a1;
      *a3 = a7 - a2 - 1;
      break;
    default:
      v7 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
      *(_QWORD *)(v7 + 24) = a5;
      WdLogEvent5_WdAssertion(v7);
      break;
  }
}
