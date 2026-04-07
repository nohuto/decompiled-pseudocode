/*
 * XREFs of ?CanAcceptBitmap@CIconicBitmapRegistry@@AEAA_NPEAVCWindowData@@@Z @ 0x180030F0C
 * Callers:
 *     ?InvalidateBitmaps@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@K@Z @ 0x180030C8C (-InvalidateBitmaps@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@K@Z.c)
 *     ?RegisterIconicRepresentation@CIconicBitmapRegistry@@QEAAJPEAVCWindowIconic@@PEAW4IconicRepresentationType@@@Z @ 0x180030E60 (-RegisterIconicRepresentation@CIconicBitmapRegistry@@QEAAJPEAVCWindowIconic@@PEAW4IconicRepresen.c)
 *     ?BitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEAX_KK@Z @ 0x18006DDD4 (-BitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEAX_KK@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CIconicBitmapRegistry::CanAcceptBitmap(CIconicBitmapRegistry *this, struct CWindowData *a2)
{
  char v2; // al
  char v3; // r8

  v2 = *((_BYTE *)a2 + 554);
  v3 = 1;
  if ( (v2 & 1) == 0
    || !*((_QWORD *)a2 + 45)
    && (v2 & 4) == 0
    && (unsigned int)(*((_DWORD *)this + 20) + *((_DWORD *)this + 21)) >= *((_DWORD *)this + 2) )
  {
    return 0;
  }
  return v3;
}
