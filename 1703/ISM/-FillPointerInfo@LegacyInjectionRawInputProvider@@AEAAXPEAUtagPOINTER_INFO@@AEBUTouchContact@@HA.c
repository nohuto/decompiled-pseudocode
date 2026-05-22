/*
 * XREFs of ?FillPointerInfo@LegacyInjectionRawInputProvider@@AEAAXPEAUtagPOINTER_INFO@@AEBUTouchContact@@HAEAUtagLegacyISMPOSTINPUTINFO@@@Z @ 0x18006FDDC
 * Callers:
 *     ?PutTouchEvent@LegacyInjectionRawInputProvider@@UEAAJUTouchInfoInjection@@@Z @ 0x18006FA70 (-PutTouchEvent@LegacyInjectionRawInputProvider@@UEAAJUTouchInfoInjection@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall LegacyInjectionRawInputProvider::FillPointerInfo(
        LegacyInjectionRawInputProvider *this,
        struct tagPOINTER_INFO *a2,
        const struct TouchContact *a3,
        int a4,
        struct tagLegacyISMPOSTINPUTINFO *a5)
{
  int v5; // eax
  int v6; // eax
  int v7; // eax

  *(_DWORD *)a2 = 2;
  *((_DWORD *)a2 + 1) = a3->ContactID;
  *((_DWORD *)a2 + 12) = a3->ScreenX;
  *((_DWORD *)a2 + 13) = a3->ScreenY;
  *((_DWORD *)a2 + 3) = 0;
  if ( (a3->Flags & 8) != 0 )
  {
    *((_DWORD *)a2 + 3) = 2;
    v5 = 2;
    if ( (a3->Flags & 3) == 0 )
      v5 = 131074;
    *((_DWORD *)a2 + 3) = v5;
  }
  if ( (a3->Flags & 3) != 0 )
  {
    *((_DWORD *)a2 + 3) |= 0x14u;
    v6 = *((_DWORD *)a2 + 3);
    if ( (a3->Flags & 1) != 0 )
      v7 = v6 | 0x10000;
    else
      v7 = v6 | 0x20000;
    *((_DWORD *)a2 + 3) = v7;
  }
  else if ( (a3->Flags & 4) != 0 )
  {
    *((_DWORD *)a2 + 3) |= 0x40000u;
  }
  if ( a4 )
    *((_DWORD *)a2 + 3) |= 0x2000u;
  if ( (a3->Flags & 0x2000) != 0 )
    *((_DWORD *)a2 + 3) |= 0x8000u;
  if ( (a3->Flags & 0x8000u) != 0 )
    *((_DWORD *)a5 + 4) = 1;
}
