/*
 * XREFs of ?GetRotatedPoint@@YAXIIPEAI0W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@II@Z @ 0x1C016F62C
 * Callers:
 *     ?RotateCursorShapeWorker@@YAXPEAUCURSOR_INFO@@PEBU1@@Z @ 0x1C016F938 (-RotateCursorShapeWorker@@YAXPEAUCURSOR_INFO@@PEBU1@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall GetRotatedPoint(
        unsigned int a1,
        unsigned int a2,
        unsigned int *a3,
        unsigned int *a4,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION a5,
        unsigned int a6,
        unsigned int a7)
{
  __int64 v11; // rax
  int v12; // eax

  switch ( a5 )
  {
    case D3DKMDT_VPPR_ROTATE90:
      v12 = a6 - a1;
      *a3 = a2;
      goto LABEL_10;
    case D3DKMDT_VPPR_ROTATE180:
      *a3 = a6 - a1 - 1;
      v12 = a7 - a2;
LABEL_10:
      *a4 = v12 - 1;
      return;
    case D3DKMDT_VPPR_ROTATE270:
      *a4 = a1;
      *a3 = a7 - a2 - 1;
      break;
    default:
      if ( a5 != D3DKMDT_VPPR_IDENTITY )
      {
        v11 = WdLogNewEntry5_WdAssertion((unsigned int)a5);
        *(_QWORD *)(v11 + 24) = 358LL;
        WdLogEvent5_WdAssertion(v11);
      }
      *a3 = a1;
      *a4 = a2;
      break;
  }
}
