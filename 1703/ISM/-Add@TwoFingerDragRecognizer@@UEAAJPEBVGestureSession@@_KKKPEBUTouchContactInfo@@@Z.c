/*
 * XREFs of ?Add@TwoFingerDragRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x18003A7F0
 * Callers:
 *     <none>
 * Callees:
 *     ?DragInactive@TwoFingerDragRecognizer@@AEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x18003A938 (-DragInactive@TwoFingerDragRecognizer@@AEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z.c)
 *     ?DragOneFingerDown@TwoFingerDragRecognizer@@AEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x18003AA34 (-DragOneFingerDown@TwoFingerDragRecognizer@@AEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@.c)
 *     ?DragInDeadZone@TwoFingerDragRecognizer@@AEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x18003AB50 (-DragInDeadZone@TwoFingerDragRecognizer@@AEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z.c)
 *     ?ContactsAreValid@TwoFingerDragRecognizer@@AEAA_NKPEBUTouchContactInfo@@@Z @ 0x18003AD08 (-ContactsAreValid@TwoFingerDragRecognizer@@AEAA_NKPEBUTouchContactInfo@@@Z.c)
 */

__int64 __fastcall TwoFingerDragRecognizer::Add(
        TwoFingerDragRecognizer *this,
        const struct GestureSession *a2,
        unsigned __int64 a3,
        unsigned int a4,
        unsigned int a5,
        const struct TouchContactInfo *a6)
{
  unsigned int v6; // edi
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  __int64 v13; // [rsp+40h] [rbp+8h]

  v6 = 0;
  if ( (*((_BYTE *)this + 16) & 8) != 0 && a4 >= *((_DWORD *)this + 6) )
  {
    *((_WORD *)this + 8) = 0;
    *((_DWORD *)this + 5) = 4;
  }
  if ( (*((_DWORD *)a2 + 3) & *((_DWORD *)this + 2)) == 0 )
    return 0LL;
  if ( (a3 & 1) != 0 )
  {
    *((_WORD *)this + 8) &= ~8u;
    *((_DWORD *)this + 5) = 0;
  }
  v9 = *((_DWORD *)this + 5);
  if ( v9 )
  {
    v10 = v9 - 1;
    if ( v10 )
    {
      v11 = v10 - 1;
      if ( v11 )
      {
        if ( v11 == 1 )
        {
          if ( (a3 & 4) != 0 || !TwoFingerDragRecognizer::ContactsAreValid(this, a5, a6) )
          {
            *((_WORD *)this + 8) = 0;
            *((_DWORD *)this + 5) = 4;
          }
          else
          {
            LODWORD(v13) = (*((_DWORD *)a6 + 11) + *((_DWORD *)a6 + 1)) / 2;
            HIDWORD(v13) = (*((_DWORD *)a6 + 12) + *((_DWORD *)a6 + 2)) / 2;
            *(_QWORD *)((char *)this + 52) = v13;
            *((_WORD *)this + 8) |= 1u;
            *((_WORD *)this + 8) &= ~4u;
          }
        }
        return v6;
      }
      return (unsigned int)TwoFingerDragRecognizer::DragInDeadZone(this, a2, a3, a4, a5, a6);
    }
    else
    {
      return (unsigned int)TwoFingerDragRecognizer::DragOneFingerDown(this, a2, a3, a4, a5, a6);
    }
  }
  else
  {
    return (unsigned int)TwoFingerDragRecognizer::DragInactive(this, a2, a3, a4, a5, a6);
  }
}
