/*
 * XREFs of ?vExtrema@BLTRECORD@@QEAAXXZ @ 0x1C000B3B0
 * Callers:
 *     ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C000B448 (-bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     GrePlgBlt @ 0x1C028000C (GrePlgBlt.c)
 * Callees:
 *     <none>
 */

void __fastcall BLTRECORD::vExtrema(BLTRECORD *this)
{
  int v1; // edi
  int v2; // r10d
  int v3; // ebx
  int v4; // r9d
  bool v5; // zf
  bool v6; // sf
  bool v7; // of
  BOOL v8; // edx

  v1 = *((_DWORD *)this + 33);
  v2 = *((_DWORD *)this + 32);
  v3 = v1 + *((_DWORD *)this + 35) - *((_DWORD *)this + 31);
  v4 = v2 + *((_DWORD *)this + 34) - *((_DWORD *)this + 30);
  *((_DWORD *)this + 37) = v3;
  v7 = __OFSUB__(v2, *((_DWORD *)this + 30));
  v5 = v2 == *((_DWORD *)this + 30);
  v6 = v2 - *((_DWORD *)this + 30) < 0;
  *((_DWORD *)this + 36) = v4;
  v8 = !(v6 ^ v7 | v5);
  v7 = __OFSUB__(v1, *((_DWORD *)this + 31));
  v5 = v1 == *((_DWORD *)this + 31);
  v6 = v1 - *((_DWORD *)this + 31) < 0;
  *((_DWORD *)this + 56) = v8 == v2 > v4;
  *((_DWORD *)this + 57) = !(v6 ^ v7 | v5) == v1 > v3;
}
