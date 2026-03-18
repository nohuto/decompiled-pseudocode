/*
 * XREFs of ?bIsLinkedGlyph@RFONTOBJ@@QEAAHG@Z @ 0x1C002DD7C
 * Callers:
 *     ?bGetWidthTable@RFONTOBJ@@QEAAHAEAVXDCOBJ@@KPEAGK1@Z @ 0x1C002A200 (-bGetWidthTable@RFONTOBJ@@QEAAHAEAVXDCOBJ@@KPEAGK1@Z.c)
 *     ?vXlatGlyphArray@RFONTOBJ@@QEAAXPEAGIPEAKKH@Z @ 0x1C002BF60 (-vXlatGlyphArray@RFONTOBJ@@QEAAXPEAGIPEAKKH@Z.c)
 *     ?wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEAG2KPEAHH@Z @ 0x1C002E94C (-wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEAG2KPEAHH@Z.c)
 *     GreGetGlyphOutlineInternal @ 0x1C014EFE4 (GreGetGlyphOutlineInternal.c)
 * Callees:
 *     ?pGetLinkedFontList@PFEOBJ@@QEAAPEAU_LIST_ENTRY@@XZ @ 0x1C0031A4C (-pGetLinkedFontList@PFEOBJ@@QEAAPEAU_LIST_ENTRY@@XZ.c)
 *     ?pql@PFEOBJ@@QEAAPEAU_QUICKLOOKUP@@XZ @ 0x1C01153DC (-pql@PFEOBJ@@QEAAPEAU_QUICKLOOKUP@@XZ.c)
 */

__int64 __fastcall RFONTOBJ::bIsLinkedGlyph(RFONTOBJ *this, unsigned __int16 a2)
{
  unsigned int v4; // r13d
  unsigned int v5; // r14d
  int v6; // ebx
  struct _LIST_ENTRY *i; // r12
  unsigned int v9; // edi
  __int64 v10; // rbx
  BOOL v11; // r8d
  unsigned int v12; // edx
  __int64 v13; // rcx
  unsigned int v14; // edi
  __int64 v15; // rbx
  unsigned int v16; // edi
  __int64 v17; // rbx
  struct PFE *v18; // [rsp+70h] [rbp+50h] BYREF
  __int64 v19; // [rsp+78h] [rbp+58h] BYREF

  GreAcquireSemaphore(ghsemEUDC1);
  v4 = 0;
  v5 = 0;
  if ( (unsigned __int16)(a2 + 0x2000) <= 0x18FFu
    || *(_OWORD *)&gappfeSysEUDC != 0LL
    && a2 >= gqlEUDC
    && a2 <= *(&gqlEUDC + 1)
    && ((0x80000000 >> (a2 % 32)) & *(_DWORD *)(qword_1C0323480 + 4 * ((unsigned __int64)a2 >> 5))) != 0 )
  {
    v5 = 1;
    goto LABEL_4;
  }
  if ( !bFinallyInitializeFontAssocDefault )
  {
LABEL_4:
    if ( gbSystemDBCSFontEnabled )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 112LL) + 12LL) & 0x10) != 0 )
      {
        v18 = gappfeSystemDBCS;
        if ( *((_QWORD *)PFEOBJ::pql((PFEOBJ *)&v18) + 1) )
        {
          if ( a2 >= *(_WORD *)PFEOBJ::pql((PFEOBJ *)&v18) && a2 <= *((_WORD *)PFEOBJ::pql((PFEOBJ *)&v18) + 1) )
          {
            v16 = 0x80000000 >> ((a2 - *(unsigned __int16 *)PFEOBJ::pql((PFEOBJ *)&v18)) % 32);
            v17 = (a2 - *(unsigned __int16 *)PFEOBJ::pql((PFEOBJ *)&v18)) / 32;
            if ( (v16 & *(_DWORD *)(*((_QWORD *)PFEOBJ::pql((PFEOBJ *)&v18) + 1) + 4 * v17)) != 0 )
              v5 = 1;
          }
        }
      }
    }
    if ( v5 )
      goto LABEL_8;
    goto LABEL_6;
  }
  v11 = *(_DWORD *)(*(_QWORD *)this + 852LL) != 0;
  v12 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 112LL) + 32LL) + 45LL) >> 4;
  if ( v12 >= 7 || !*((_DWORD *)&FontAssocDefaultTable + 166 * v12) )
    v12 = 6;
  if ( v11 )
  {
    v13 = 664LL * v12;
    if ( !*(_QWORD *)((char *)&FontAssocDefaultTable + v13 + 656) )
      v11 = *(_QWORD *)((char *)&FontAssocDefaultTable + v13 + 648) == 0LL;
  }
  v18 = (struct PFE *)*((_QWORD *)&FontAssocDefaultTable + 83 * v12 + v11 + 81);
  if ( v18 )
  {
    if ( *((_QWORD *)PFEOBJ::pql((PFEOBJ *)&v18) + 1) )
    {
      if ( a2 >= *(_WORD *)PFEOBJ::pql((PFEOBJ *)&v18) && a2 <= *((_WORD *)PFEOBJ::pql((PFEOBJ *)&v18) + 1) )
      {
        v14 = 0x80000000 >> ((a2 - *(unsigned __int16 *)PFEOBJ::pql((PFEOBJ *)&v18)) % 32);
        v15 = (a2 - *(unsigned __int16 *)PFEOBJ::pql((PFEOBJ *)&v18)) / 32;
        if ( (v14 & *(_DWORD *)(*((_QWORD *)PFEOBJ::pql((PFEOBJ *)&v18) + 1) + 4 * v15)) != 0 )
        {
LABEL_15:
          v5 = 1;
          goto LABEL_8;
        }
      }
    }
  }
LABEL_6:
  LOBYTE(v4) = *(_DWORD *)(*(_QWORD *)this + 852LL) != 0;
  v19 = *(_QWORD *)(*(_QWORD *)this + 112LL);
  v6 = a2;
  for ( i = PFEOBJ::pGetLinkedFontList((PFEOBJ *)&v19)->Flink; i != PFEOBJ::pGetLinkedFontList((PFEOBJ *)&v19); i = i->Flink )
  {
    v18 = (struct PFE *)*((_QWORD *)&i[2].Flink + (*((_QWORD *)&i[2].Flink + v4) != 0LL ? v4 : 0));
    if ( *((_QWORD *)PFEOBJ::pql((PFEOBJ *)&v18) + 1)
      && a2 >= *(_WORD *)PFEOBJ::pql((PFEOBJ *)&v18)
      && a2 <= *((_WORD *)PFEOBJ::pql((PFEOBJ *)&v18) + 1) )
    {
      v9 = 0x80000000 >> ((v6 - *(unsigned __int16 *)PFEOBJ::pql((PFEOBJ *)&v18)) % 32);
      v10 = (v6 - *(unsigned __int16 *)PFEOBJ::pql((PFEOBJ *)&v18)) / 32;
      if ( (v9 & *(_DWORD *)(*((_QWORD *)PFEOBJ::pql((PFEOBJ *)&v18) + 1) + 4 * v10)) != 0 )
        goto LABEL_15;
      v6 = a2;
    }
  }
LABEL_8:
  EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
  GreReleaseSemaphoreInternal(ghsemEUDC1);
  return v5;
}
