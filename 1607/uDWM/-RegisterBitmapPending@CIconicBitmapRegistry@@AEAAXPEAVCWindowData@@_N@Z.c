/*
 * XREFs of ?RegisterBitmapPending@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@_N@Z @ 0x180033914
 * Callers:
 *     ?RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z @ 0x180033858 (-RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z.c)
 *     ?IconicRepresentationDestroyed@CIconicBitmapRegistry@@QEAAXPEAVCWindowData@@@Z @ 0x180033954 (-IconicRepresentationDestroyed@CIconicBitmapRegistry@@QEAAXPEAVCWindowData@@@Z.c)
 *     ?ProcessTick@CIconicBitmapRegistry@@QEAAJXZ @ 0x180078798 (-ProcessTick@CIconicBitmapRegistry@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CIconicBitmapRegistry::RegisterBitmapPending(
        CIconicBitmapRegistry *this,
        struct CWindowData *a2,
        char a3)
{
  if ( !*((_QWORD *)a2 + 47) )
  {
    if ( a3 )
    {
      if ( (*((_BYTE *)a2 + 578) & 4) == 0 )
        ++*((_DWORD *)this + 21);
    }
    else if ( (*((_BYTE *)a2 + 578) & 4) != 0 )
    {
      --*((_DWORD *)this + 21);
    }
  }
  *((_BYTE *)a2 + 578) &= ~4u;
  *((_BYTE *)a2 + 578) |= 4 * (a3 & 1);
}
