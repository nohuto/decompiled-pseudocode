/*
 * XREFs of ?RegisterBitmapPending@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@_N@Z @ 0x180030D40
 * Callers:
 *     ?RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z @ 0x180030C0C (-RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z.c)
 *     ?IconicRepresentationDestroyed@CIconicBitmapRegistry@@QEAAXPEAVCWindowData@@@Z @ 0x180030D80 (-IconicRepresentationDestroyed@CIconicBitmapRegistry@@QEAAXPEAVCWindowData@@@Z.c)
 *     ?ProcessTick@CIconicBitmapRegistry@@QEAAJXZ @ 0x18006F138 (-ProcessTick@CIconicBitmapRegistry@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CIconicBitmapRegistry::RegisterBitmapPending(
        CIconicBitmapRegistry *this,
        struct CWindowData *a2,
        char a3)
{
  if ( !*((_QWORD *)a2 + 45) )
  {
    if ( a3 )
    {
      if ( (*((_BYTE *)a2 + 554) & 4) == 0 )
        ++*((_DWORD *)this + 21);
    }
    else if ( (*((_BYTE *)a2 + 554) & 4) != 0 )
    {
      --*((_DWORD *)this + 21);
    }
  }
  *((_BYTE *)a2 + 554) &= ~4u;
  *((_BYTE *)a2 + 554) |= 4 * (a3 & 1);
}
