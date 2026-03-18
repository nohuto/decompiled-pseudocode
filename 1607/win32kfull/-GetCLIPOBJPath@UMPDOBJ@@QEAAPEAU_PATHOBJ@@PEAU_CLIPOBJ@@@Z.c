/*
 * XREFs of ?GetCLIPOBJPath@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU_CLIPOBJ@@@Z @ 0x1C02844FC
 * Callers:
 *     NtGdiCLIPOBJ_ppoGetPath @ 0x1C02AC710 (NtGdiCLIPOBJ_ppoGetPath.c)
 * Callees:
 *     ?ppoGetPath@XCLIPOBJ@@QEAAPEAU_PATHOBJ@@XZ @ 0x1C0258300 (-ppoGetPath@XCLIPOBJ@@QEAAPEAU_PATHOBJ@@XZ.c)
 *     EngDeletePath @ 0x1C02798F0 (EngDeletePath.c)
 *     ??$GetDDIOBJ@U_CLIPOBJ@@@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU1@@Z @ 0x1C0284144 (--$GetDDIOBJ@U_CLIPOBJ@@@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU1@@Z.c)
 *     ?ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z @ 0x1C02849D4 (-ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z.c)
 */

struct _PATHOBJ *__fastcall UMPDOBJ::GetCLIPOBJPath(UMPDOBJ *this, struct _CLIPOBJ *a2)
{
  XCLIPOBJ *v3; // rax
  struct _PATHOBJ *Path; // rbx
  void *v6; // [rsp+40h] [rbp+8h] BYREF

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
  if ( !(unsigned int)UMPDOBJ::ThunkDDIOBJ(this, (UMPDOBJ *)((char *)this + 240), &v6, 8u, 0LL) )
  {
    EngDeletePath(Path);
    return 0LL;
  }
  return (struct _PATHOBJ *)v6;
}
