/*
 * XREFs of ?GetSize@CSystemMemoryBitmap@@UEBAXPEAI0@Z @ 0x180151C00
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

void __fastcall CSystemMemoryBitmap::GetSize(CSystemMemoryBitmap *this, unsigned int *a2, unsigned int *a3)
{
  char *v3; // rdi

  v3 = 0LL;
  if ( this != (CSystemMemoryBitmap *)256 )
    v3 = (char *)this - 240;
  (*(void (__fastcall **)(char *, unsigned int *, unsigned int *))(*(_QWORD *)v3 + 56LL))(v3, a2, a3);
}
