/*
 * XREFs of CmpIsHiveAlreadyLoaded @ 0x1405E0BE0
 * Callers:
 *     CmpResolveHiveLoadConflict @ 0x1403B57A8 (CmpResolveHiveLoadConflict.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     CmpUnfreezeHive @ 0x1401A9ED0 (CmpUnfreezeHive.c)
 *     CmpIsThisSameFile @ 0x1403DCA60 (CmpIsThisSameFile.c)
 *     CmpGetNextActiveHive @ 0x1403DE2DC (CmpGetNextActiveHive.c)
 *     CmpConstructName @ 0x1403FC9B0 (CmpConstructName.c)
 */

bool __fastcall CmpIsHiveAlreadyLoaded(__int64 a1, __int64 a2, char a3, __int64 *a4, _QWORD *a5)
{
  bool v5; // di
  __int64 v9; // r8
  bool v10; // zf
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct _EX_RUNDOWN_REF *i; // rcx
  __int64 *NextActiveHive; // rax
  __int64 *v15; // rbx
  __int64 v16; // rcx
  _QWORD *v17; // rax

  v5 = 0;
  if ( (a3 & 0x20) == 0 )
  {
    if ( a1 )
    {
      v9 = *(_QWORD *)(a1 + 8);
      if ( (*(_DWORD *)(v9 + 4) & 0x20000) == 0 )
      {
        v10 = (*(_BYTE *)(v9 + 186) & 4) == 0;
        v11 = *(_QWORD *)(v9 + 32);
        *a4 = v11;
        if ( !v10 && CmpIsThisSameFile(a2, *(void **)(v11 + 2664)) )
        {
          v12 = *a4;
          if ( (*(_DWORD *)(*a4 + 5360) & 0x40) == 0 && (*(_DWORD *)(*(_QWORD *)(a1 + 8) + 4LL) & 0x40000) == 0 )
          {
            v5 = 1;
            if ( *(_BYTE *)(v12 + 4112) == 1 )
            {
              CmpUnfreezeHive(v12);
              *(_BYTE *)(*a4 + 4112) = 0;
            }
          }
        }
      }
    }
    else if ( (a3 & 0x10) != 0 )
    {
      for ( i = 0LL; ; i = (struct _EX_RUNDOWN_REF *)v15 )
      {
        NextActiveHive = CmpGetNextActiveHive(i);
        v15 = NextActiveHive;
        if ( !NextActiveHive )
          break;
        if ( (NextActiveHive[670] & 0x20) != 0
          && CmpIsThisSameFile(a2, (void *)NextActiveHive[333])
          && (v15[670] & 0x40) == 0 )
        {
          v16 = v15[513];
          *a4 = (__int64)v15;
          v17 = CmpConstructName(v16);
          *a5 = v17;
          v5 = v17 != 0LL;
          ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)v15 + 347);
          return v5;
        }
      }
    }
  }
  return v5;
}
