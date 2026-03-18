/*
 * XREFs of PATHOBJ_bEnum @ 0x1C0077280
 * Callers:
 *     ?bFastFillWrapper@RGNMEMOBJ@@AEAAHAEAVEPATHOBJ@@@Z @ 0x1C0030F94 (-bFastFillWrapper@RGNMEMOBJ@@AEAAHAEAVEPATHOBJ@@@Z.c)
 *     ?bEnum@EPATHOBJ@@QEAAHPEAU_PATHDATA@@@Z @ 0x1C0046E80 (-bEnum@EPATHOBJ@@QEAAHPEAU_PATHDATA@@@Z.c)
 * Callees:
 *     <none>
 */

BOOL __stdcall PATHOBJ_bEnum(PATHOBJ *ppo, PATHDATA *ppd)
{
  PATHOBJ v2; // r9
  int v3; // r8d
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 *i; // rax
  int v8; // edx
  _DWORD *j; // rcx

  v2 = ppo[1];
  v3 = 0;
  if ( !*(_QWORD *)(*(_QWORD *)&v2 + 80LL) )
  {
    v6 = *(_QWORD *)(*(_QWORD *)&v2 + 32LL);
    if ( !v6 )
    {
      *(_QWORD *)&ppd->flags = 0LL;
      ppd->pptfx = 0LL;
      return v6;
    }
    *(_QWORD *)(*(_QWORD *)&v2 + 80LL) = v6;
  }
  v5 = *(_QWORD *)(*(_QWORD *)&v2 + 80LL);
  ppd->count = *(_DWORD *)(v5 + 20);
  ppd->flags = *(_DWORD *)(v5 + 16);
  ppd->pptfx = (POINTFIX *)(v5 + 24);
  *(_QWORD *)(*(_QWORD *)&v2 + 80LL) = *(_QWORD *)v5;
  if ( (ppo->fl & 0xC) == 4 )
  {
    ppo->fl &= ~4u;
    for ( i = *(__int64 **)(*(_QWORD *)&v2 + 32LL); i; i = (__int64 *)*i )
    {
      v8 = *((_DWORD *)i + 5);
      for ( j = i + 3; v8; --v8 )
      {
        *j *= 16;
        j[1] *= 16;
        j += 2;
      }
    }
  }
  LOBYTE(v3) = *(_QWORD *)(*(_QWORD *)&v2 + 80LL) != 0LL;
  LODWORD(v6) = v3;
  return v6;
}
