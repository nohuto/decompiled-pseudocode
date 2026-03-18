/*
 * XREFs of KsepDbGetDriverShims @ 0x14048471C
 * Callers:
 *     KsepGetShimsForDriver @ 0x140484638 (KsepGetShimsForDriver.c)
 * Callees:
 *     KsepPoolAllocatePaged @ 0x140084D74 (KsepPoolAllocatePaged.c)
 *     KseShimDatabaseClose @ 0x140484800 (KseShimDatabaseClose.c)
 *     KsepDbFreeDriverShims @ 0x140484914 (KsepDbFreeDriverShims.c)
 *     SdbGetDatabaseMatchEx @ 0x140484B38 (SdbGetDatabaseMatchEx.c)
 *     KseShimDatabaseOpen @ 0x14048558C (KseShimDatabaseOpen.c)
 *     SdbFindNextTag @ 0x1404E791C (SdbFindNextTag.c)
 *     SdbReadDWORDTag @ 0x1404EA9AC (SdbReadDWORDTag.c)
 *     SdbFindFirstTag @ 0x1405049C4 (SdbFindFirstTag.c)
 *     SdbTagRefToTagID @ 0x14057F0D4 (SdbTagRefToTagID.c)
 *     KsepDbGetSdbString @ 0x1406526E8 (KsepDbGetSdbString.c)
 *     SdbReadGUIDTag @ 0x1406C3FB0 (SdbReadGUIDTag.c)
 */

__int64 __fastcall KsepDbGetDriverShims(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, _DWORD *a5)
{
  _OWORD *Paged; // rsi
  _DWORD *v7; // r13
  int SdbString; // ebx
  unsigned int DatabaseMatch; // eax
  __int64 v11; // rdi
  unsigned int v12; // r14d
  unsigned int NextTag; // eax
  __int64 v14; // rbx
  __int64 v15; // r15
  unsigned int FirstTag; // r14d
  __int128 v17; // xmm6
  unsigned int v18; // eax
  unsigned int v19; // eax
  unsigned int v20; // eax
  unsigned int v21; // eax
  unsigned int v22; // eax
  __int64 v23; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v24[3]; // [rsp+48h] [rbp-38h] BYREF
  __int128 v25; // [rsp+60h] [rbp-20h] BYREF
  unsigned int v26; // [rsp+B0h] [rbp+30h] BYREF
  _QWORD *v27; // [rsp+C8h] [rbp+48h]

  v27 = a4;
  v25 = 0uLL;
  v23 = 0LL;
  Paged = 0LL;
  if ( !a1 || !a4 )
    return 3221225485LL;
  v7 = a5;
  *a4 = 0LL;
  *v7 = 0;
  SdbString = KseShimDatabaseOpen(&v23);
  if ( SdbString >= 0 )
  {
    DatabaseMatch = SdbGetDatabaseMatchEx(v23, 0LL, *(_QWORD *)(a1 + 8));
    if ( DatabaseMatch
      && (unsigned int)SdbTagRefToTagID(v23, DatabaseMatch, v24, &v26)
      && (v11 = v24[0], v12 = v26, (NextTag = SdbFindFirstTag(v24[0], v26, 28710LL)) != 0) )
    {
      LODWORD(v14) = 0;
      do
      {
        NextTag = SdbFindNextTag(v11, v12, NextTag);
        v14 = (unsigned int)(v14 + 1);
      }
      while ( NextTag );
      *v7 = v14;
      Paged = KsepPoolAllocatePaged(80 * v14);
      if ( Paged )
      {
        v15 = 0LL;
        FirstTag = SdbFindFirstTag(v11, v12, 28710LL);
        if ( FirstTag )
        {
          v17 = v25;
          do
          {
            if ( (unsigned int)v15 < *v7 )
            {
              v18 = SdbFindFirstTag(v11, FirstTag, 36880LL);
              if ( v18 )
              {
                v25 = v17;
                Paged[5 * v15] = *(_OWORD *)SdbReadGUIDTag(v24, v11, v18, &v25);
              }
              v19 = SdbFindFirstTag(v11, FirstTag, 24577LL);
              if ( v19 )
              {
                SdbString = KsepDbGetSdbString(v11, v19, &Paged[5 * v15 + 1]);
                if ( SdbString < 0 )
                  goto LABEL_6;
              }
              v20 = SdbFindFirstTag(v11, FirstTag, 24579LL);
              if ( v20 )
              {
                SdbString = KsepDbGetSdbString(v11, v20, &Paged[5 * v15 + 2]);
                if ( SdbString < 0 )
                  goto LABEL_6;
              }
              v21 = SdbFindFirstTag(v11, FirstTag, 16407LL);
              if ( v21 )
                LODWORD(Paged[5 * v15 + 4]) = SdbReadDWORDTag(v11, v21, 0LL);
              v22 = SdbFindFirstTag(v11, FirstTag, 24584LL);
              if ( v22 )
              {
                SdbString = KsepDbGetSdbString(v11, v22, &Paged[5 * v15 + 3]);
                if ( SdbString < 0 )
                  goto LABEL_6;
              }
              DWORD1(Paged[5 * v15 + 4]) = 1;
            }
            v15 = (unsigned int)(v15 + 1);
            FirstTag = SdbFindNextTag(v11, v26, FirstTag);
          }
          while ( FirstTag );
        }
        SdbString = 0;
        *v27 = Paged;
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
  KsepDbFreeDriverShims(Paged, (unsigned int)*v7);
LABEL_7:
  if ( v23 )
    KseShimDatabaseClose(v23);
  return (unsigned int)SdbString;
}
