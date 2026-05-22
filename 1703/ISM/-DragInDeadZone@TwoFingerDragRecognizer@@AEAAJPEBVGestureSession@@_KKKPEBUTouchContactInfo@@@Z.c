/*
 * XREFs of ?DragInDeadZone@TwoFingerDragRecognizer@@AEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x18003AB50
 * Callers:
 *     ?Add@TwoFingerDragRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x18003A7F0 (-Add@TwoFingerDragRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z.c)
 * Callees:
 *     ?ContactsAreValid@TwoFingerDragRecognizer@@AEAA_NKPEBUTouchContactInfo@@@Z @ 0x18003AD08 (-ContactsAreValid@TwoFingerDragRecognizer@@AEAA_NKPEBUTouchContactInfo@@@Z.c)
 */

__int64 __fastcall TwoFingerDragRecognizer::DragInDeadZone(
        TwoFingerDragRecognizer *this,
        const struct GestureSession *a2,
        char a3,
        __int64 a4,
        unsigned int a5,
        const struct TouchContactInfo *a6)
{
  unsigned int v7; // r8d
  __int64 v9; // [rsp+38h] [rbp+10h]

  if ( (a3 & 4) != 0 || !TwoFingerDragRecognizer::ContactsAreValid(this, a5, a6) )
  {
    *((_WORD *)this + 8) = 0;
    *((_DWORD *)this + 5) = 4;
  }
  else
  {
    v7 = *((unsigned __int16 *)this + 39);
    if ( abs32((*((_DWORD *)a6 + 11) + *((_DWORD *)a6 + 1)) / 2 - *((_DWORD *)this + 13)) > v7
      || abs32((*((_DWORD *)a6 + 12) + *((_DWORD *)a6 + 2)) / 2 - *((_DWORD *)this + 14)) > v7
      || !*((_WORD *)this + 39) )
    {
      LODWORD(v9) = (*((_DWORD *)a6 + 11) + *((_DWORD *)a6 + 1)) / 2;
      HIDWORD(v9) = (*((_DWORD *)a6 + 12) + *((_DWORD *)a6 + 2)) / 2;
      *(_QWORD *)((char *)this + 52) = v9;
      *(_QWORD *)((char *)this + 60) = v9;
      *((_WORD *)this + 8) |= 1u;
      *((_WORD *)this + 8) &= ~4u;
      *((_DWORD *)this + 5) = 3;
    }
  }
  return 0LL;
}
