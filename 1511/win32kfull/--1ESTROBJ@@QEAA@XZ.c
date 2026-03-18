/*
 * XREFs of ??1ESTROBJ@@QEAA@XZ @ 0x1C0151048
 * Callers:
 *     GreGetTextExtentW @ 0x1C01027C0 (GreGetTextExtentW.c)
 *     GreGetTextExtentExW @ 0x1C01523C4 (GreGetTextExtentExW.c)
 *     ?GreGetStringBitmapW@@YAIPEAUHDC__@@PEAGIPEAUSTRINGBITMAP@@I@Z @ 0x1C028AD38 (-GreGetStringBitmapW@@YAIPEAUHDC__@@PEAGIPEAUSTRINGBITMAP@@I@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ESTROBJ::~ESTROBJ(ESTROBJ *this)
{
  int v1; // eax

  v1 = *((_DWORD *)this + 16);
  if ( (v1 & 0x801) != 0 )
  {
    if ( (v1 & 1) != 0 )
      FreeTmpBuffer(*((_QWORD *)this + 9));
    if ( (*((_DWORD *)this + 16) & 0x800) != 0 )
      Win32FreePool(*((_QWORD *)this + 34));
  }
}
