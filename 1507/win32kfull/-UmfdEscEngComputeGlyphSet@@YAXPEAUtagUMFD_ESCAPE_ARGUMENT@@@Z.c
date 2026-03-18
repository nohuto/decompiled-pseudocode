/*
 * XREFs of ?UmfdEscEngComputeGlyphSet@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C02A3B6C
 * Callers:
 *     UmfdDispatchEscape @ 0x1C02A47DC (UmfdDispatchEscape.c)
 * Callees:
 *     EngComputeGlyphSet @ 0x1C0124D00 (EngComputeGlyphSet.c)
 *     ?WriteFD_GLYPHSET@@YAHPEAU_FD_GLYPHSET@@0K@Z @ 0x1C02AA3F0 (-WriteFD_GLYPHSET@@YAHPEAU_FD_GLYPHSET@@0K@Z.c)
 */

void __fastcall UmfdEscEngComputeGlyphSet(struct tagUMFD_ESCAPE_ARGUMENT *a1)
{
  char *v1; // rbx
  FD_GLYPHSET *v2; // rax
  FD_GLYPHSET *v3; // rdi
  struct _FD_GLYPHSET *v4; // rcx

  v1 = (char *)a1 + 8;
  ProbeForWrite(*((volatile void **)a1 + 3), *((_QWORD *)a1 + 4), 4u);
  v2 = EngComputeGlyphSet(*(_DWORD *)v1, *((_DWORD *)v1 + 1), *((_DWORD *)v1 + 2));
  v3 = v2;
  if ( !v2 )
    goto LABEL_2;
  *(_DWORD *)v1 = v2->cjThis;
  v4 = (struct _FD_GLYPHSET *)*((_QWORD *)v1 + 2);
  if ( v4 )
  {
    if ( (unsigned __int64)v2->cjThis > *((_QWORD *)v1 + 3) )
    {
      EngFreeMem(v2);
LABEL_2:
      *(_DWORD *)v1 = 0;
      return;
    }
    if ( !WriteFD_GLYPHSET(v4, v2, v2->cjThis) )
      *(_DWORD *)v1 = 0;
  }
  EngFreeMem(v3);
}
