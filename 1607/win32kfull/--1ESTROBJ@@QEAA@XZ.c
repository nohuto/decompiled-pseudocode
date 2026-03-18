/*
 * XREFs of ??1ESTROBJ@@QEAA@XZ @ 0x1C0032018
 * Callers:
 *     GreGetTextExtentExW @ 0x1C01106D0 (GreGetTextExtentExW.c)
 *     GreGetTextExtentW @ 0x1C0123640 (GreGetTextExtentW.c)
 *     ?GreGetStringBitmapW@@YAIPEAUHDC__@@PEAGIPEAUSTRINGBITMAP@@I@Z @ 0x1C02896C0 (-GreGetStringBitmapW@@YAIPEAUHDC__@@PEAGIPEAUSTRINGBITMAP@@I@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ESTROBJ::~ESTROBJ(ESTROBJ *this, __int64 a2, __int64 a3)
{
  int v3; // eax

  v3 = *((_DWORD *)this + 16);
  if ( (v3 & 0x801) != 0 )
  {
    if ( (v3 & 1) != 0 )
      FreeTmpBuffer(*((_QWORD *)this + 9));
    if ( (*((_DWORD *)this + 16) & 0x800) != 0 )
      Win32FreePool(*((_QWORD *)this + 34), a2, a3);
  }
}
