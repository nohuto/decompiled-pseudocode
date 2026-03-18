/*
 * XREFs of ?GetAlphaMode@CSystemMemoryBitmap@@UEBA?AW4D2D1_ALPHA_MODE@@XZ @ 0x180182190
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSystemMemoryBitmap::GetAlphaMode(CSystemMemoryBitmap *this)
{
  char *v1; // rax
  char *v3; // rcx

  v1 = (char *)this - 256;
  v3 = 0LL;
  if ( v1 )
    v3 = (char *)this - 240;
  return (*(__int64 (__fastcall **)(char *, CSystemMemoryBitmap *))(*(_QWORD *)v3 + 32LL))(v3, this);
}
