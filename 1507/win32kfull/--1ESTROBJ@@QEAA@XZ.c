/*
 * XREFs of ??1ESTROBJ@@QEAA@XZ @ 0x1C015B8F8
 * Callers:
 *     GreGetTextExtentW @ 0x1C00FA610 (GreGetTextExtentW.c)
 *     GreGetTextExtentExW @ 0x1C015CBE0 (GreGetTextExtentExW.c)
 *     ?GreGetStringBitmapW@@YAIPEAUHDC__@@PEAGIPEAUSTRINGBITMAP@@I@Z @ 0x1C028AD0C (-GreGetStringBitmapW@@YAIPEAUHDC__@@PEAGIPEAUSTRINGBITMAP@@I@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ESTROBJ::~ESTROBJ(ESTROBJ *this, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // eax

  v4 = *((_DWORD *)this + 16);
  if ( (v4 & 0x801) != 0 )
  {
    if ( (v4 & 1) != 0 )
      FreeTmpBuffer(*((_QWORD *)this + 9), a2, a3, a4);
    if ( (*((_DWORD *)this + 16) & 0x800) != 0 )
      Win32FreePool(*((_QWORD *)this + 34));
  }
}
