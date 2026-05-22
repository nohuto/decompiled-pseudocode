/*
 * XREFs of ?Add@ClickRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x180038880
 * Callers:
 *     <none>
 * Callees:
 *     ?OnTouch@ClickRecognizer@@AEAAXPEBVGestureSession@@KKPEBUTouchContactInfo@@@Z @ 0x180038A34 (-OnTouch@ClickRecognizer@@AEAAXPEBVGestureSession@@KKPEBUTouchContactInfo@@@Z.c)
 *     ?CancelTapAndHold@ClickRecognizer@@AEAAXXZ @ 0x180038BF0 (-CancelTapAndHold@ClickRecognizer@@AEAAXXZ.c)
 */

__int64 __fastcall ClickRecognizer::Add(
        ClickRecognizer *this,
        const struct GestureSession *a2,
        __int16 a3,
        unsigned int a4)
{
  char v5; // si
  unsigned int v7; // r9d
  __int64 v8; // rax
  char *v9; // rdi
  int v10; // eax
  unsigned int v11; // r8d
  __int64 v12; // r11
  __int64 v13; // rcx
  unsigned int v14; // r8d

  v5 = a3;
  if ( (a3 & 0x100) == 0 )
  {
    if ( (*((_DWORD *)a2 + 3) & 0x7880) != 0 )
    {
      v7 = *((_DWORD *)a2 + 221);
      v8 = 888LL;
    }
    else
    {
      v7 = 1;
      v8 = 1288LL;
    }
    v9 = (char *)a2 + v8;
    *((_QWORD *)this + 14) = *(_QWORD *)((char *)a2 + v8 + 4);
    if ( (a3 & 1) != 0 )
    {
      *((_WORD *)this + 8) &= ~2u;
      v10 = *((unsigned __int16 *)this + 14);
      *((_DWORD *)this + 33) = a4;
      *((_WORD *)this + 8) |= 0x200u;
      *((_DWORD *)this + 5) &= 0xFFFFFFF1;
      *((_DWORD *)this + 33) += v10;
      *((_DWORD *)this + 5) |= 1u;
      if ( (*((_DWORD *)a2 + 3) & 2) != 0
        && *((char *)this + 16) < 0
        && a4 - *((_DWORD *)this + 32) <= *((unsigned __int16 *)this + 13) )
      {
        v11 = *((unsigned __int16 *)this + 12);
        if ( abs32(*((_DWORD *)this + 30) - *((_DWORD *)v9 + 1)) <= v11
          && abs32(*((_DWORD *)this + 31) - *((_DWORD *)v9 + 2)) <= v11 )
        {
          *((_WORD *)this + 8) |= 1u;
          *((_WORD *)this + 8) |= 8u;
          *((_QWORD *)this + 7) = *(_QWORD *)(v9 + 4);
        }
      }
    }
    ClickRecognizer::OnTouch(this, a2, a4, v7, (const struct TouchContactInfo *)v9);
    if ( (v5 & 4) != 0 )
    {
      v13 = *((_QWORD *)a2 + 166);
      if ( (*(_BYTE *)(v12 + 16) & 2) != 0
        || (v14 = *(unsigned __int16 *)(v12 + 36), abs32(v13 - *((_DWORD *)v9 + 1)) > v14)
        || abs32(HIDWORD(v13) - *((_DWORD *)v9 + 2)) > v14
        || (unsigned int)(((int)(*(_DWORD *)(v12 + 20) << 28) >> 28) - 1) > 2
        || (*(_BYTE *)(v12 + 16) & 1) != 0 )
      {
        *(_WORD *)(v12 + 16) &= ~0x80u;
      }
      else
      {
        *(_WORD *)(v12 + 16) |= 4u;
        *(_QWORD *)(v12 + 44) = *(_QWORD *)(v12 + 112);
        *(_WORD *)(v12 + 16) |= 0x80u;
      }
      *(_QWORD *)(v12 + 120) = *(_QWORD *)(v12 + 112);
      ClickRecognizer::CancelTapAndHold((ClickRecognizer *)v12);
    }
  }
  return 0LL;
}
