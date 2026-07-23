/*
 * XREFs of RtlpHpTagQueryTags @ 0x180081A60
 * Callers:
 *     RtlQueryHeapInformation @ 0x180081930 (RtlQueryHeapInformation.c)
 *     RtlpExtendedHeapInformationWorkerThread @ 0x1800EA100 (RtlpExtendedHeapInformationWorkerThread.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180042560 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180042640 (RtlAcquireSRWLockShared.c)
 *     RtlpHpTagContextFindMapping @ 0x180050DCC (RtlpHpTagContextFindMapping.c)
 *     RtlpHpTagQueryHeapsRemote @ 0x1800F7804 (RtlpHpTagQueryHeapsRemote.c)
 */

__int64 __fastcall RtlpHpTagQueryTags(_QWORD *a1, SIZE_T a2, _QWORD *a3)
{
  int v5; // eax
  __int64 v6; // r8
  unsigned int v7; // edi
  __int16 v9; // ax
  char *v10; // r14
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // r12
  __int64 v13; // rdx
  __int64 *v14; // rcx
  __int64 v15; // rax
  __int64 *i; // rdx
  __int64 v17; // rdx
  unsigned __int8 *v18; // r9
  __int64 v19; // r14
  __int64 v20; // rax
  __int64 Mapping; // rax
  __int64 v22; // [rsp+28h] [rbp-30h]
  __int64 v23; // [rsp+30h] [rbp-28h]

  if ( a2 < 0x18 )
    return (unsigned int)-1073741811;
  if ( *(_WORD *)a1 != 1 )
    return (unsigned int)-1073741811;
  v5 = *((unsigned __int16 *)a1 + 1);
  if ( (v5 & 0xFFFFFFFD) != 0 )
    return (unsigned int)-1073741811;
  if ( a1[1] == -1LL )
  {
    v6 = 2LL;
    if ( (v5 & 2) != 0 && a2 < 0x30 )
      return (unsigned int)-1073741811;
    if ( (RtlpHpHeapFeatures & 2) != 0 )
    {
      v7 = 0;
      v9 = v5 | 1;
      a1[2] = 0LL;
      *((_WORD *)a1 + 1) = v9;
      if ( (v9 & 2) != 0 )
      {
        v18 = (unsigned __int8 *)(a1 + 3);
        v19 = 314159LL;
        do
        {
          v20 = *v18;
          v18 += 8;
          v19 = *(v18 - 1)
              + 37
              * (*(v18 - 2)
               + 37
               * (*(v18 - 3)
                + 37 * (*(v18 - 4) + 37 * (*(v18 - 5) + 37 * (*(v18 - 6) + 37 * (*(v18 - 7) + 37 * (v20 + 37 * v19)))))));
          --v6;
        }
        while ( v6 );
        RtlAcquireSRWLockShared(&RtlpHpTagContext);
        Mapping = RtlpHpTagContextFindMapping((__int64)&RtlpHpTagContext, a1 + 3, v19);
        a1[2] = 1LL;
        if ( Mapping )
          a1[5] = *(_QWORD *)(Mapping + 32);
        else
          a1[5] = 0LL;
        RtlReleaseSRWLockShared(&RtlpHpTagContext);
        *a3 = 48LL;
      }
      else
      {
        v10 = (char *)(a1 + 3);
        v11 = (a2 - 24) / 0x18;
        v12 = (unsigned __int64)&a1[3 * v11 + 3];
        RtlAcquireSRWLockShared(&RtlpHpTagContext);
        if ( (unsigned int)dword_180150928 > v11 )
        {
          v7 = -1073741789;
          *a3 = 8 * (3LL * (unsigned int)dword_180150928 + 3);
          RtlReleaseSRWLockShared(&RtlpHpTagContext);
        }
        else
        {
          v13 = qword_180150930;
          v23 = qword_180150930;
          v14 = (__int64 *)qword_180150930;
          v22 = qword_180150930;
          if ( (unsigned __int64)v10 < v12 )
          {
            while ( 1 )
            {
              if ( !v14 )
                goto LABEL_16;
              if ( (*v14 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
              {
                v13 = v23;
                v14 = (__int64 *)v22;
              }
              v15 = *v14;
              if ( (*v14 & 1) == 0 )
              {
LABEL_21:
                v22 = v15;
              }
              else
              {
LABEL_16:
                for ( i = (__int64 *)(v13 + 8);
                      (unsigned __int64)i < qword_180150930 + 8 * ((unsigned __int64)(unsigned int)dword_18015092C >> 5);
                      ++i )
                {
                  if ( (*(_BYTE *)i & 1) == 0 )
                  {
                    v15 = *i;
                    v23 = (__int64)i;
                    goto LABEL_21;
                  }
                }
                v15 = 0LL;
              }
              if ( !v15 )
                break;
              *(_OWORD *)v10 = *(_OWORD *)(v15 + 16);
              *((_QWORD *)v10 + 2) = *(_QWORD *)(v15 + 32);
              v10 += 24;
              if ( (unsigned __int64)v10 >= v12 )
                break;
              v13 = v23;
              v14 = (__int64 *)v22;
            }
          }
          RtlReleaseSRWLockShared(&RtlpHpTagContext);
          v17 = (v10 - (char *)a1 - 24) / 24;
          a1[2] = v17;
          *a3 = 24 * (v17 + 1);
        }
      }
    }
    else
    {
      v7 = 0;
      *((_WORD *)a1 + 1) = v5 & 0xFFFE;
      a1[2] = 0LL;
      *a3 = 24LL;
    }
  }
  else
  {
    return (unsigned int)RtlpHpTagQueryHeapsRemote(a1, a2);
  }
  return v7;
}
