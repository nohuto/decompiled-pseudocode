/*
 * XREFs of ?vOrderStupid@BLTRECORD@@QEAAXPEAVERECTL@@@Z @ 0x1C004CBF0
 * Callers:
 *     ?bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C004D800 (-bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall BLTRECORD::vOrderStupid(BLTRECORD *this, struct ERECTL *a2)
{
  int v2; // r8d
  int v3; // r8d

  v2 = *(_DWORD *)a2;
  if ( *(_DWORD *)a2 > *((_DWORD *)a2 + 2) )
  {
    *(_DWORD *)a2 = *((_DWORD *)a2 + 2);
    ++*(_DWORD *)a2;
    *((_DWORD *)a2 + 2) = v2 + 1;
    *((_DWORD *)this + 55) ^= 8u;
  }
  v3 = *((_DWORD *)a2 + 1);
  if ( v3 > *((_DWORD *)a2 + 3) )
  {
    *((_DWORD *)a2 + 1) = *((_DWORD *)a2 + 3);
    ++*((_DWORD *)a2 + 1);
    *((_DWORD *)a2 + 3) = v3 + 1;
    *((_DWORD *)this + 55) ^= 0x10u;
  }
}
