/*
 * XREFs of ?DestroyTable@MULTIFONT@@QEAAXXZ @ 0x1C0294664
 * Callers:
 *     ??1MULTIFONT@@QEAA@XZ @ 0x1C029455C (--1MULTIFONT@@QEAA@XZ.c)
 *     ?MulDestroyFont@@YAXPEAU_FONTOBJ@@@Z @ 0x1C0296020 (-MulDestroyFont@@YAXPEAU_FONTOBJ@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall MULTIFONT::DestroyTable(MULTIFONT *this)
{
  void *v2; // rcx

  if ( *(_QWORD *)this )
  {
    v2 = (void *)*((_QWORD *)this + 1);
    if ( v2 )
    {
      EngFreeMem(v2);
      *((_QWORD *)this + 1) = 0LL;
    }
  }
}
