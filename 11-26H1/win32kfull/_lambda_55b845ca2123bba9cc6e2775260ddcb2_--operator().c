/*
 * XREFs of _lambda_55b845ca2123bba9cc6e2775260ddcb2_::operator() @ 0x1402C3BD0
 * Callers:
 *     ?VerticalSizeRectFromHitTarget@@YAHPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4THRESHOLD_MARGIN_DIRECTION@@1HH@Z @ 0x1402C55A4 (-VerticalSizeRectFromHitTarget@@YAHPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4THRESHOLD_MARGIN_DIRECTIO.c)
 * Callees:
 *     ?ExtendRect@WindowMargins@@YA?AUtagRECT@@PEBUtagWND@@AEBU2@I@Z @ 0x14016320C (-ExtendRect@WindowMargins@@YA-AUtagRECT@@PEBUtagWND@@AEBU2@I@Z.c)
 *     GetMonitorWorkRectForWindow @ 0x1401EFBA4 (GetMonitorWorkRectForWindow.c)
 */

struct tagRECT *__fastcall lambda_55b845ca2123bba9cc6e2775260ddcb2_::operator()(
        __int64 *a1,
        struct tagRECT *a2,
        __int64 a3)
{
  __m128i *MonitorWorkRectForWindow; // rax
  const struct tagRECT *v7; // r9
  __int64 v8; // rcx
  struct tagRECT v9; // xmm0
  struct tagRECT *result; // rax
  unsigned int v11[4]; // [rsp+20h] [rbp-38h] BYREF
  struct tagRECT v12; // [rsp+30h] [rbp-28h] BYREF

  MonitorWorkRectForWindow = GetMonitorWorkRectForWindow(
                               (__m128i *)v11,
                               a3,
                               *(const struct tagWND **)(*(_QWORD *)*a1 + 16LL));
  v7 = (const struct tagRECT *)*(unsigned __int16 *)(*(_QWORD *)(a3 + 40) + 60LL);
  v8 = *a1;
  *(__m128i *)v11 = *MonitorWorkRectForWindow;
  v9 = *WindowMargins::ExtendRect(&v12, *(struct tagRECT **)(*(_QWORD *)v8 + 16LL), (const struct tagWND *)v11, v7);
  result = a2;
  *a2 = v9;
  return result;
}
