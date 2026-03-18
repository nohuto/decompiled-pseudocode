/*
 * XREFs of ?GetSize@CSystemMemoryBitmap@@UEBAXPEAI0@Z @ 0x1801821C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CSystemMemoryBitmap::GetSize(CSystemMemoryBitmap *this, unsigned int *a2, unsigned int *a3)
{
  char *v3; // rax
  char *v5; // rcx

  v3 = (char *)this - 256;
  v5 = 0LL;
  if ( v3 )
    v5 = (char *)this - 240;
  (*(void (__fastcall **)(char *, unsigned int *, unsigned int *, CSystemMemoryBitmap *))(*(_QWORD *)v5 + 56LL))(
    v5,
    a2,
    a3,
    this);
}
