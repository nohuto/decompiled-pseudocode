/*
 * XREFs of FsRtlSplitBaseMcb @ 0x1401B8638
 * Callers:
 *     FsRtlSplitLargeMcb @ 0x1401B87B0 (FsRtlSplitLargeMcb.c)
 * Callees:
 *     FsRtlAddEntry @ 0x14008CA14 (FsRtlAddEntry.c)
 *     FsRtlFindLargeIndex @ 0x14008CB18 (FsRtlFindLargeIndex.c)
 */

BOOLEAN __stdcall FsRtlSplitBaseMcb(PBASE_MCB Mcb, LONGLONG Vbn, LONGLONG Amount)
{
  int v3; // r15d
  int v4; // ebp
  int v6; // edi
  __int64 v7; // rbx
  _DWORD *Mapping; // rdx
  int v9; // eax
  __int64 v10; // r8
  int v11; // r9d
  int v12; // eax
  int v13; // eax
  __int64 v15; // r8
  __int64 v16; // r10
  int v17; // edx
  unsigned int v18; // [rsp+50h] [rbp+8h] BYREF

  v3 = Amount;
  v4 = Vbn;
  v6 = 0;
  if ( FsRtlFindLargeIndex((__int64)Mcb, Vbn, (int *)&v18) )
  {
    v7 = v18;
    Mapping = Mcb->Mapping;
    if ( Mapping[2 * v18 + 1] == -1 )
    {
LABEL_30:
      while ( (unsigned int)v7 < Mcb->PairCount )
      {
        *((_DWORD *)Mcb->Mapping + 2 * (unsigned int)v7) += v3;
LABEL_29:
        LODWORD(v7) = v7 + 1;
      }
      LOBYTE(v6) = 1;
      return v6;
    }
    if ( v18 )
      v9 = Mapping[2 * v18 - 2];
    else
      v9 = 0;
    if ( v9 == v4 )
    {
      if ( !v18 )
        goto LABEL_15;
      v10 = v18 - 1;
      v11 = Mapping[2 * v10 + 1];
      if ( v11 == -1 || (v18 != 1 ? (v12 = Mapping[2 * v18 - 4]) : (v12 = 0), v11 - v12 + Mapping[2 * v10] - 1 == -1) )
      {
        LODWORD(v7) = v18 - 1;
        goto LABEL_30;
      }
    }
    if ( v18 )
    {
      v13 = Mapping[2 * v18 - 2];
LABEL_17:
      if ( v13 == v4 )
      {
        if ( FsRtlAddEntry((__int64)Mcb, v18, 1) )
        {
          *((_DWORD *)Mcb->Mapping + 2 * v7 + 1) = -1;
          *((_DWORD *)Mcb->Mapping + 2 * v7) = v3 + v4;
          goto LABEL_29;
        }
      }
      else if ( FsRtlAddEntry((__int64)Mcb, v18, 2) )
      {
        v15 = (unsigned int)(v7 + 1);
        v16 = (unsigned int)(v7 + 2);
        *((_DWORD *)Mcb->Mapping + 2 * v7 + 1) = *((_DWORD *)Mcb->Mapping + 2 * v16 + 1);
        *((_DWORD *)Mcb->Mapping + 2 * v7) = v4;
        *((_DWORD *)Mcb->Mapping + 2 * v15 + 1) = -1;
        *((_DWORD *)Mcb->Mapping + 2 * v15) = v3 + v4;
        if ( (_DWORD)v7 == -1 )
          v17 = 0;
        else
          v17 = *((_DWORD *)Mcb->Mapping + 2 * v7);
        if ( (_DWORD)v7 )
          v6 = *((_DWORD *)Mcb->Mapping + 2 * (unsigned int)(v7 - 1));
        LODWORD(v7) = v7 + 2;
        *((_DWORD *)Mcb->Mapping + 2 * v16 + 1) += v17 - v6;
        goto LABEL_30;
      }
      return 0;
    }
LABEL_15:
    v13 = 0;
    goto LABEL_17;
  }
  return v6;
}
