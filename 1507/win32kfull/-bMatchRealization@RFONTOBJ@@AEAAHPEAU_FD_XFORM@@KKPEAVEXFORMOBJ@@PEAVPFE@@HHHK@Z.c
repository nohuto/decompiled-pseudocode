/*
 * XREFs of ?bMatchRealization@RFONTOBJ@@AEAAHPEAU_FD_XFORM@@KKPEAVEXFORMOBJ@@PEAVPFE@@HHHK@Z @ 0x1C010F830
 * Callers:
 *     ?bFindRFONT@RFONTOBJ@@QEAAHPEAU_FD_XFORM@@KKAEAVPDEVOBJ@@PEAVEXFORMOBJ@@PEAVPFE@@HHHK@Z @ 0x1C010F958 (-bFindRFONT@RFONTOBJ@@QEAAHPEAU_FD_XFORM@@KKAEAVPDEVOBJ@@PEAVEXFORMOBJ@@PEAVPFE@@HHHK@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RFONTOBJ::bMatchRealization(
        RFONTOBJ *this,
        struct _FD_XFORM *a2,
        int a3,
        int a4,
        struct EXFORMOBJ *a5,
        struct PFE *a6,
        int a7,
        int a8,
        int a9,
        unsigned int a10)
{
  __int64 v11; // rdx
  int v16; // r9d
  int v17; // r8d
  int v18; // r8d
  __int64 v19; // rcx

  v11 = *(_QWORD *)this;
  if ( *(struct PFE **)(*(_QWORD *)this + 112LL) != a6 )
    return 0LL;
  if ( a10 != (*(_DWORD *)(v11 + 68) & 6) )
    return 0LL;
  v16 = *(_DWORD *)(v11 + 12);
  v17 = a3 ^ v16;
  if ( (v17 & 0xE000) != 0 )
    return 0LL;
  v18 = v17 & 0x50010000;
  if ( v18 )
  {
    if ( (v16 & 0x20000) != 0 && (a3 & 0x10000) != 0 )
      v18 &= 0x50000000u;
    if ( (a3 & 0x10000000) != 0 && (v16 & 0x12000000) == 0x2000000 )
      v18 = 0;
    if ( v18 )
      return 0LL;
  }
  if ( *(_DWORD *)(v11 + 40) != a4 )
    return 0LL;
  v19 = *(_QWORD *)&a2->eXX - *(_QWORD *)(v11 + 128);
  if ( *(_QWORD *)&a2->eXX == *(_QWORD *)(v11 + 128) )
    v19 = *(_QWORD *)&a2->eYX - *(_QWORD *)(v11 + 136);
  return !v19
      && a7 == *(_DWORD *)(v11 + 680)
      && (!a5 || EXFORMOBJ::bEqualExceptTranslations(a5, (struct MATRIX *)(v11 + 164)))
      && *(_DWORD *)(*(_QWORD *)this + 200LL) == a8
      && (a9 || !*(_DWORD *)(*(_QWORD *)this + 652LL));
}
