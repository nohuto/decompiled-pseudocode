/*
 * XREFs of CmpIsHiveAlreadyLoaded @ 0x140656890
 * Callers:
 *     CmLoadKey @ 0x1404EC054 (CmLoadKey.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     CmpUnfreezeHive @ 0x1401DFB54 (CmpUnfreezeHive.c)
 *     CmpGetNextActiveHive @ 0x140445EE8 (CmpGetNextActiveHive.c)
 *     CmpIsThisSameFile @ 0x140447BEC (CmpIsThisSameFile.c)
 *     CmpConstructName @ 0x1404C5EC0 (CmpConstructName.c)
 */

bool __fastcall CmpIsHiveAlreadyLoaded(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5)
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
  unsigned __int64 v18; // rtt

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
        *(_QWORD *)a4 = v11;
        if ( !v10 && CmpIsThisSameFile(a2, *(void **)(v11 + 2664)) )
        {
          v12 = *(_QWORD *)a4;
          if ( (*(_DWORD *)(*(_QWORD *)a4 + 5360LL) & 0x40) == 0
            && (*(_DWORD *)(*(_QWORD *)(a1 + 8) + 4LL) & 0x40000) == 0 )
          {
            v5 = 1;
            if ( *(_BYTE *)(v12 + 4112) == 1 )
            {
              CmpUnfreezeHive(v12);
              *(_BYTE *)(*(_QWORD *)a4 + 4112LL) = 0;
            }
          }
        }
      }
    }
    else if ( (a3 & 0x10) != 0 )
    {
      for ( i = 0LL; ; i = (struct _EX_RUNDOWN_REF *)v15 )
      {
        NextActiveHive = CmpGetNextActiveHive(i, a2, a3, a4);
        v15 = NextActiveHive;
        if ( !NextActiveHive )
          break;
        if ( (NextActiveHive[670] & 0x20) != 0
          && CmpIsThisSameFile(a2, (void *)NextActiveHive[333])
          && (v15[670] & 0x40) == 0 )
        {
          v16 = v15[513];
          *(_QWORD *)a4 = v15;
          v17 = CmpConstructName(v16);
          *a5 = v17;
          v5 = v17 != 0LL;
          _m_prefetchw(v15 + 347);
          v18 = v15[347] & 0xFFFFFFFFFFFFFFFEuLL;
          if ( v18 != _InterlockedCompareExchange64(v15 + 347, v18 - 2, v18) )
            ExfReleaseRundownProtection((PEX_RUNDOWN_REF)v15 + 347);
          return v5;
        }
      }
    }
  }
  return v5;
}
