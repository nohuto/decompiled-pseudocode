/*
 * XREFs of ?GetSize@CSecondarySysmemBitmap@@UEBAXPEAI0@Z @ 0x1800B7190
 * Callers:
 *     ?GetSize@CSecondarySysmemBitmap@@WFA@EBAXPEAI0@Z @ 0x1800C0050 (-GetSize@CSecondarySysmemBitmap@@WFA@EBAXPEAI0@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CSecondarySysmemBitmap::GetSize(CSecondarySysmemBitmap *this, unsigned int *a2, unsigned int *a3)
{
  *a2 = *((_DWORD *)this + 24);
  *a3 = *((_DWORD *)this + 25);
}
