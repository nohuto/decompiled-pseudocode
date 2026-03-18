/*
 * XREFs of KsepDbGetDriverShims @ 0x140577014
 * Callers:
 *     KsepGetShimsForDriver @ 0x140576F2C (KsepGetShimsForDriver.c)
 * Callees:
 *     KsepPoolAllocatePaged @ 0x14012980C (KsepPoolAllocatePaged.c)
 *     KsepPoolFreePaged @ 0x140153D50 (KsepPoolFreePaged.c)
 *     KseShimDatabaseClose @ 0x1405770FC (KseShimDatabaseClose.c)
 *     SdbGetDatabaseMatchEx @ 0x140577594 (SdbGetDatabaseMatchEx.c)
 *     SdbReadDWORDTag @ 0x1405778E0 (SdbReadDWORDTag.c)
 *     SdbFindNextTag @ 0x140577984 (SdbFindNextTag.c)
 *     SdbFindFirstTag @ 0x140577C74 (SdbFindFirstTag.c)
 *     KseShimDatabaseOpen @ 0x140578424 (KseShimDatabaseOpen.c)
 *     KsepStringFree @ 0x1405788C8 (KsepStringFree.c)
 *     SdbTagRefToTagID @ 0x1405C7044 (SdbTagRefToTagID.c)
 *     KsepDbGetSdbString @ 0x14069BFD4 (KsepDbGetSdbString.c)
 *     SdbReadGUIDTag @ 0x140703C9C (SdbReadGUIDTag.c)
 */

__int64 __fastcall KsepDbGetDriverShims(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, unsigned int *a5)
{
  char *Paged; // rdi
  unsigned int *v8; // r12
  int SdbString; // ebx
  unsigned int DatabaseMatch; // eax
  unsigned int v11; // r15d
  __int64 v13; // rsi
  unsigned int v14; // r14d
  unsigned int NextTag; // eax
  __int64 v16; // rbx
  __int64 v17; // r15
  unsigned int FirstTag; // r14d
  __int128 v19; // xmm6
  unsigned int v20; // eax
  unsigned int v21; // eax
  unsigned int v22; // eax
  unsigned int v23; // eax
  unsigned int v24; // eax
  __int64 v25; // rsi
  _QWORD *v26; // r14
  __int64 v27; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v28[3]; // [rsp+48h] [rbp-38h] BYREF
  __int128 v29; // [rsp+60h] [rbp-20h] BYREF
  unsigned int v30; // [rsp+B0h] [rbp+30h] BYREF

  v29 = 0uLL;
  v27 = 0LL;
  Paged = 0LL;
  if ( !a1 || !a4 )
    return 3221225485LL;
  v8 = a5;
  *a4 = 0LL;
  *v8 = 0;
  SdbString = KseShimDatabaseOpen(&v27);
  if ( SdbString >= 0 )
  {
    DatabaseMatch = SdbGetDatabaseMatchEx(v27, 0LL, *(_QWORD *)(a1 + 8));
    if ( DatabaseMatch
      && (unsigned int)SdbTagRefToTagID(v27, DatabaseMatch, v28, &v30)
      && (v13 = v28[0], v14 = v30, (NextTag = SdbFindFirstTag(v28[0], v30, 28710LL)) != 0) )
    {
      LODWORD(v16) = 0;
      do
      {
        NextTag = SdbFindNextTag(v13, v14, NextTag);
        v16 = (unsigned int)(v16 + 1);
      }
      while ( NextTag );
      *v8 = v16;
      Paged = (char *)KsepPoolAllocatePaged(80 * v16);
      if ( Paged )
      {
        v17 = 0LL;
        FirstTag = SdbFindFirstTag(v13, v14, 28710LL);
        if ( FirstTag )
        {
          v19 = v29;
          do
          {
            if ( (unsigned int)v17 < *v8 )
            {
              v20 = SdbFindFirstTag(v13, FirstTag, 36880LL);
              if ( v20 )
              {
                v29 = v19;
                *(_OWORD *)&Paged[80 * v17] = *(_OWORD *)SdbReadGUIDTag(v28, v13, v20, &v29);
              }
              v21 = SdbFindFirstTag(v13, FirstTag, 24577LL);
              if ( v21 )
              {
                SdbString = KsepDbGetSdbString(v13, v21, &Paged[80 * v17 + 16]);
                if ( SdbString < 0 )
                  goto LABEL_6;
              }
              v22 = SdbFindFirstTag(v13, FirstTag, 24579LL);
              if ( v22 )
              {
                SdbString = KsepDbGetSdbString(v13, v22, &Paged[80 * v17 + 32]);
                if ( SdbString < 0 )
                  goto LABEL_6;
              }
              v23 = SdbFindFirstTag(v13, FirstTag, 16407LL);
              if ( v23 )
                *(_DWORD *)&Paged[80 * v17 + 64] = SdbReadDWORDTag(v13, v23, 0LL);
              v24 = SdbFindFirstTag(v13, FirstTag, 24584LL);
              if ( v24 )
              {
                SdbString = KsepDbGetSdbString(v13, v24, &Paged[80 * v17 + 48]);
                if ( SdbString < 0 )
                  goto LABEL_6;
              }
              *(_DWORD *)&Paged[80 * v17 + 68] = 1;
            }
            v17 = (unsigned int)(v17 + 1);
            FirstTag = SdbFindNextTag(v13, v30, FirstTag);
          }
          while ( FirstTag );
        }
        SdbString = 0;
        *a4 = Paged;
        goto LABEL_7;
      }
      SdbString = -1073741801;
    }
    else
    {
      SdbString = -1073741275;
    }
  }
LABEL_6:
  v11 = *v8;
  if ( Paged )
  {
    v25 = 0LL;
    if ( v11 )
    {
      v26 = Paged + 24;
      do
      {
        if ( v26[2] )
          KsepStringFree(&Paged[80 * v25 + 32]);
        if ( *v26 )
          KsepStringFree(&Paged[80 * v25 + 16]);
        if ( v26[4] )
          KsepStringFree(&Paged[80 * v25 + 48]);
        v25 = (unsigned int)(v25 + 1);
        v26 += 10;
      }
      while ( (unsigned int)v25 < v11 );
    }
    KsepPoolFreePaged(Paged);
  }
LABEL_7:
  if ( v27 )
    KseShimDatabaseClose();
  return (unsigned int)SdbString;
}
