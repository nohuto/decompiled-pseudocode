/*
 * XREFs of ?pSurfobj@SURFREF@@QEAAPEAU_SURFOBJ@@XZ @ 0x1C0016C1C
 * Callers:
 *     ?bSpDwmUpdateSurface@@YAHPEAUHWND__@@I_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z @ 0x1C003FD1C (-bSpDwmUpdateSurface@@YAHPEAUHWND__@@I_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z.c)
 * Callees:
 *     <none>
 */

struct _SURFOBJ *__fastcall SURFREF::pSurfobj(SURFREF *this)
{
  struct _SURFOBJ *result; // rax

  result = (struct _SURFOBJ *)*((_QWORD *)this + 4);
  if ( result )
    return (struct _SURFOBJ *)((char *)result + 24);
  return result;
}
