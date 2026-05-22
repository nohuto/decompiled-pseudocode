/*
 * XREFs of ?SaveTapInfo@TwoFingerClickRecognizer@@AEAAXK@Z @ 0x18003B2A0
 * Callers:
 *     ?Add@TwoFingerClickRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x18003AEB0 (-Add@TwoFingerClickRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall TwoFingerClickRecognizer::SaveTapInfo(TwoFingerClickRecognizer *this, int a2)
{
  int v4; // r10d
  int v5; // edx
  unsigned int v6; // r9d
  int v7; // ecx
  __int64 v8; // [rsp+8h] [rbp+8h]

  v4 = (*((_DWORD *)this + 11) + *((_DWORD *)this + 13)) / 2;
  LODWORD(v8) = v4;
  v5 = (*((_DWORD *)this + 12) + *((_DWORD *)this + 14)) / 2;
  HIDWORD(v8) = v5;
  *((_WORD *)this + 8) &= ~0x10u;
  *((_WORD *)this + 8) &= ~8u;
  *((_WORD *)this + 8) |= 1u;
  if ( (*((_BYTE *)this + 16) & 4) != 0 )
  {
    v6 = *((unsigned __int16 *)this + 34);
    v7 = *((_DWORD *)this + 8) - v5;
    if ( abs32(*((_DWORD *)this + 7) - v4) < v6 && abs32(v7) < v6 )
      *((_WORD *)this + 8) |= 2u;
  }
  else
  {
    *((_WORD *)this + 8) |= 8u;
    *((_DWORD *)this + 6) = a2 + *((unsigned __int16 *)this + 35);
    *((_WORD *)this + 8) |= 0x10u;
  }
  if ( (*((_BYTE *)this + 16) & 2) != 0 )
    *((_WORD *)this + 8) &= ~4u;
  else
    *((_WORD *)this + 8) |= 4u;
  if ( (*((_BYTE *)this + 16) & 2) == 0 )
    *(_QWORD *)((char *)this + 28) = v8;
  *((_DWORD *)this + 5) = 0;
}
