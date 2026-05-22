/*
 * XREFs of ?Reset@ClickRecognizer@@UEAAXPEBVGestureSession@@@Z @ 0x180038C30
 * Callers:
 *     <none>
 * Callees:
 *     ?CancelTapAndHold@ClickRecognizer@@AEAAXXZ @ 0x180038BF0 (-CancelTapAndHold@ClickRecognizer@@AEAAXXZ.c)
 */

void __fastcall ClickRecognizer::Reset(ClickRecognizer *this, const struct GestureSession *a2)
{
  __int64 v2; // rcx

  ClickRecognizer::CancelTapAndHold(this);
  *(_WORD *)(v2 + 16) &= 0x80u;
  *(_WORD *)(v2 + 16) |= 2u;
  *(_QWORD *)(v2 + 112) = 0LL;
  *(_QWORD *)(v2 + 96) = 0LL;
  *(_QWORD *)(v2 + 104) = 0LL;
  *(_QWORD *)(v2 + 40) = 0LL;
  *(_DWORD *)(v2 + 48) = 0;
  *(_DWORD *)(v2 + 40) = 12;
  *(_QWORD *)(v2 + 52) = 0LL;
  *(_DWORD *)(v2 + 60) = 0;
  *(_DWORD *)(v2 + 52) = 12;
  *(_QWORD *)(v2 + 64) = 0LL;
  *(_QWORD *)(v2 + 72) = 0LL;
  *(_DWORD *)(v2 + 64) = 16;
  *(_QWORD *)(v2 + 80) = 0LL;
  *(_QWORD *)(v2 + 88) = 0LL;
  *(_DWORD *)(v2 + 80) = 16;
}
