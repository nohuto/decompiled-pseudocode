/*
 * XREFs of ?vMirror@BLTRECORD@@QEAAXPEAVERECTL@@@Z @ 0x1C0047ED4
 * Callers:
 *     ?bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C004868C (-bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     ?bStretch@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z @ 0x1C0281F84 (-bStretch@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall BLTRECORD::vMirror(BLTRECORD *this, struct ERECTL *a2)
{
  int v2; // r8d
  int v3; // ecx

  if ( (*((_DWORD *)this + 55) & 8) != 0 )
  {
    v2 = *(_DWORD *)a2;
    *(_DWORD *)a2 = *((_DWORD *)a2 + 2);
    *((_DWORD *)a2 + 2) = v2;
  }
  if ( (*((_DWORD *)this + 55) & 0x10) != 0 )
  {
    v3 = *((_DWORD *)a2 + 1);
    *((_DWORD *)a2 + 1) = *((_DWORD *)a2 + 3);
    *((_DWORD *)a2 + 3) = v3;
  }
}
