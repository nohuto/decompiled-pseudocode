/*
 * XREFs of ?GetCLIPOBJPath@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU_CLIPOBJ@@@Z @ 0x1C0286564
 * Callers:
 *     NtGdiCLIPOBJ_ppoGetPath @ 0x1C02AA810 (NtGdiCLIPOBJ_ppoGetPath.c)
 * Callees:
 *     ?ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXK@Z @ 0x1C01469A0 (-ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXK@Z.c)
 *     ?ppoGetPath@XCLIPOBJ@@QEAAPEAU_PATHOBJ@@XZ @ 0x1C025AEEC (-ppoGetPath@XCLIPOBJ@@QEAAPEAU_PATHOBJ@@XZ.c)
 *     EngDeletePath @ 0x1C027B710 (EngDeletePath.c)
 *     ??$GetDDIOBJ@U_CLIPOBJ@@@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU1@@Z @ 0x1C02862FC (--$GetDDIOBJ@U_CLIPOBJ@@@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU1@@Z.c)
 */

struct _PATHOBJ *__fastcall UMPDOBJ::GetCLIPOBJPath(UMPDOBJ *this, struct _CLIPOBJ *a2)
{
  XCLIPOBJ *v3; // rax
  struct _PATHOBJ *Path; // rbx
  void *v6; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_QWORD *)this + 31) )
    return 0LL;
  v3 = (XCLIPOBJ *)UMPDOBJ::GetDDIOBJ<_CLIPOBJ>((__int64)this, (__int64)a2);
  if ( v3 )
  {
    Path = XCLIPOBJ::ppoGetPath(v3);
    v6 = Path;
  }
  else
  {
    Path = 0LL;
    v6 = 0LL;
  }
  if ( !Path )
    return 0LL;
  if ( !(unsigned int)UMPDOBJ::ThunkDDIOBJ(this, (UMPDOBJ *)((char *)this + 240), (const void **)&v6, 8u) )
  {
    EngDeletePath(Path);
    return 0LL;
  }
  return (struct _PATHOBJ *)v6;
}
