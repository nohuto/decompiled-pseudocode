/*
 * XREFs of ?ChangeTapAndHoldState@ClickRecognizer@@AEAAJPEAK@Z @ 0x180038B14
 * Callers:
 *     ?OnTouch@ClickRecognizer@@AEAAXPEBVGestureSession@@KKPEBUTouchContactInfo@@@Z @ 0x180038A34 (-OnTouch@ClickRecognizer@@AEAAXPEBVGestureSession@@KKPEBUTouchContactInfo@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ClickRecognizer::ChangeTapAndHoldState(ClickRecognizer *this, unsigned int *a2)
{
  int v3; // eax
  int v5; // edx
  int v6; // edx
  int v7; // eax
  int v8; // edx
  __int64 v9; // rax
  int v10; // edx
  int v11; // edx

  v3 = (int)(*((_DWORD *)this + 5) << 28) >> 28;
  if ( v3 == 5 )
    return 2147942487LL;
  if ( v3 != 1
    || (*((_DWORD *)this + 5) = *((_DWORD *)this + 5) & 0xFFFFFFF0 | 2,
        *((_WORD *)this + 8) |= 0x40u,
        v5 = *((unsigned __int16 *)this + 15),
        *((_QWORD *)this + 12) = *((_QWORD *)this + 14),
        v6 = v5 - *((unsigned __int16 *)this + 14),
        v6 <= 0) )
  {
    v7 = *((_DWORD *)this + 5);
    v8 = v7 << 28 >> 28;
    if ( v8 == 2 )
    {
      *((_DWORD *)this + 5) = v7 & 0xFFFFFFF0 | 3;
      *((_WORD *)this + 8) |= 0x10u;
      v9 = *((_QWORD *)this + 14);
      *((_DWORD *)this + 19) = 0;
      *(_QWORD *)((char *)this + 68) = v9;
      *a2 = *((unsigned __int16 *)this + 16);
      return 0LL;
    }
    if ( v8 != 3
      || (*((_DWORD *)this + 5) = v7 & 0xFFFFFFF0 | 4,
          *((_WORD *)this + 8) |= 0x20u,
          v10 = *((unsigned __int16 *)this + 17),
          *(_QWORD *)((char *)this + 84) = *((_QWORD *)this + 14),
          v11 = v10 - *((unsigned __int16 *)this + 16),
          *((_DWORD *)this + 23) = 1,
          v6 = v11 - *((unsigned __int16 *)this + 15),
          v6 <= 0) )
    {
      if ( (*((_DWORD *)this + 5) & 0xF) == 4 )
      {
        *((_DWORD *)this + 5) = *((_DWORD *)this + 5) & 0xFFFFFFF0 | 5;
        *((_WORD *)this + 8) |= 0x100u;
        *((_QWORD *)this + 13) = *((_QWORD *)this + 14);
      }
      return 0LL;
    }
  }
  *a2 = v6;
  return 0LL;
}
