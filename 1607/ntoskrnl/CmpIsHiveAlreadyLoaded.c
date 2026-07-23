/*
 * XREFs of CmpIsHiveAlreadyLoaded @ 0x1405FF08C
 * Callers:
 *     CmpResolveHiveLoadConflict @ 0x1405FF1D4 (CmpResolveHiveLoadConflict.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x1400D1DA0 (ExReleaseRundownProtection.c)
 *     CmpUnfreezeHive @ 0x1401B46D8 (CmpUnfreezeHive.c)
 *     CmpGetNextActiveHive @ 0x1403FA590 (CmpGetNextActiveHive.c)
 *     CmpIsThisSameFile @ 0x1403FB928 (CmpIsThisSameFile.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1404382D0 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpConstructName @ 0x14051A1D8 (CmpConstructName.c)
 */

bool __fastcall CmpIsHiveAlreadyLoaded(__int64 a1, __int64 a2, char a3, __int64 *a4, __int64 *a5)
{
  bool v5; // di
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct _EX_RUNDOWN_REF *i; // rcx
  __int64 *NextActiveHive; // rax
  __int64 *v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // rax

  v5 = 0;
  if ( (a3 & 0x20) == 0 )
  {
    if ( a1 )
    {
      if ( !CmpIsKeyDeletedForKeyBody(a1, 0LL) )
      {
        v9 = *(_QWORD *)(a1 + 8);
        v10 = *(_QWORD *)(v9 + 24);
        LOBYTE(v9) = *(_BYTE *)(v9 + 178);
        *a4 = v10;
        if ( (v9 & 4) != 0 && CmpIsThisSameFile(a2, *(void **)(v10 + 2664)) )
        {
          v11 = *a4;
          if ( (*(_DWORD *)(*a4 + 5360) & 0x40) == 0 && (*(_DWORD *)(*(_QWORD *)(a1 + 8) + 4LL) & 0x40000) == 0 )
          {
            v5 = 1;
            if ( *(_BYTE *)(v11 + 4112) == 1 )
            {
              CmpUnfreezeHive(v11);
              *(_BYTE *)(*a4 + 4112) = 0;
            }
          }
        }
      }
    }
    else if ( (a3 & 0x10) != 0 )
    {
      for ( i = 0LL; ; i = (struct _EX_RUNDOWN_REF *)v14 )
      {
        NextActiveHive = CmpGetNextActiveHive(i);
        v14 = NextActiveHive;
        if ( !NextActiveHive )
          break;
        if ( (NextActiveHive[670] & 0x20) != 0
          && CmpIsThisSameFile(a2, (void *)NextActiveHive[333])
          && (v14[670] & 0x40) == 0 )
        {
          v15 = v14[513];
          *a4 = (__int64)v14;
          v16 = CmpConstructName(v15);
          *a5 = v16;
          v5 = v16 != 0;
          ExReleaseRundownProtection((PEX_RUNDOWN_REF)v14 + 347);
          return v5;
        }
      }
    }
  }
  return v5;
}
