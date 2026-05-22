/*
 * XREFs of ?Int16_ToString@Input@@YAJPEBXKPEAGK@Z @ 0x18002B2D0
 * Callers:
 *     <none>
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180001D40 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?NullValue_ToString@Input@@YA_NPEBXPEAGK@Z @ 0x18002B0B4 (-NullValue_ToString@Input@@YA_NPEBXPEAGK@Z.c)
 */

__int64 __fastcall Input::Int16_ToString(Input *this, const void *a2, char *a3, unsigned __int16 *a4)
{
  __int64 v4; // rbx

  v4 = (unsigned int)a4;
  if ( (_DWORD)a2 != 2 )
    return 2205630475LL;
  if ( Input::NullValue_ToString(this, a3, (unsigned __int16 *)(unsigned int)a4) )
    return 0LL;
  return StringCchPrintfW((wchar_t *)a3, v4, L"%d", (unsigned int)*(__int16 *)this);
}
