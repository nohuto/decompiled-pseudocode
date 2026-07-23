/*
 * XREFs of RtlpWalkCallbackRoutine @ 0x180096180
 * Callers:
 *     <none>
 * Callees:
 *     RtlpCommitQueryDebugInfo @ 0x18006DF7C (RtlpCommitQueryDebugInfo.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 */

__int64 __fastcall RtlpWalkCallbackRoutine(__int64 a1, _QWORD **a2)
{
  char *v5; // rdi
  _QWORD *v6; // rax
  __int16 v7; // ax
  unsigned __int64 i; // rcx
  __int16 v9; // ax
  char *v10; // rdi
  _QWORD *v11; // rax
  char *DebugInfo; // rdi
  _QWORD *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rax

  switch ( *(_DWORD *)a1 )
  {
    case 2:
      v14 = *((unsigned int *)a2 + 4);
      v15 = (__int64)(a2[1] + 1);
      *((_DWORD *)a2 + 4) = v14 + 1;
      a2[3] = (_QWORD *)(v15 + 88 * v14);
      return 0LL;
    case 3:
      DebugInfo = RtlpCommitQueryDebugInfo(*a2, 0x20u);
      if ( DebugInfo )
      {
        v13 = a2[3];
        if ( !v13[10] )
          v13[10] = DebugInfo;
        memset(DebugInfo, 0, 0x20uLL);
        ++*((_DWORD *)a2[3] + 9);
        *((_WORD *)DebugInfo + 4) = 2;
        *((_QWORD *)DebugInfo + 3) = *(_QWORD *)(a1 + 16);
        *(_QWORD *)DebugInfo = *(_QWORD *)(a1 + 24);
        *((_QWORD *)DebugInfo + 2) = *(_QWORD *)(a1 + 32);
        return 0LL;
      }
      break;
    case 4:
      if ( *(_DWORD *)(a1 + 32) != 2 )
        return 0LL;
      v10 = RtlpCommitQueryDebugInfo(*a2, 0x20u);
      if ( v10 )
      {
        v11 = a2[3];
        if ( !v11[10] )
          v11[10] = v10;
        memset(v10, 0, 0x20uLL);
        ++*((_DWORD *)a2[3] + 9);
        *((_WORD *)v10 + 4) = 4096;
        *(_QWORD *)v10 = *(_QWORD *)(a1 + 24);
        return 0LL;
      }
      break;
    default:
      if ( *(_DWORD *)a1 != 5 || ((*a2)[8] & 0x10) == 0 )
        return 0LL;
      v5 = RtlpCommitQueryDebugInfo(*a2, 0x20u);
      if ( v5 )
      {
        v6 = a2[3];
        if ( !v6[10] )
          v6[10] = v5;
        memset(v5, 0, 0x20uLL);
        ++*((_DWORD *)a2[3] + 9);
        *(_QWORD *)v5 = *(_QWORD *)(a1 + 32) + *(_QWORD *)(a1 + 40);
        if ( (*(_BYTE *)(a1 + 24) & 1) != 0 )
          *((_WORD *)v5 + 4) = 1;
        if ( (*(_BYTE *)(a1 + 24) & 8) != 0 )
        {
          v7 = 0x8000;
        }
        else
        {
          if ( (*(_BYTE *)(a1 + 24) & 4) == 0 )
          {
LABEL_13:
            if ( (*(_BYTE *)(a1 + 24) & 2) != 0 )
            {
              for ( i = a1 + 56; ; i = (*(_QWORD *)(i + 8) + i + 7) & 0xFFFFFFFFFFFFFFF8uLL )
              {
                if ( *(_DWORD *)(i + 4) == 1 )
                {
                  v9 = *(_WORD *)(i + 26);
                  *((_WORD *)v5 + 4) |= 0x10u;
                  *((_WORD *)v5 + 5) = v9;
                  *((_QWORD *)v5 + 2) = *(_QWORD *)(i + 16);
                  *((_DWORD *)v5 + 6) = *(unsigned __int16 *)(i + 24);
                }
                if ( !*(_BYTE *)i )
                  break;
              }
            }
            return 0LL;
          }
          v7 = 0x4000;
        }
        *((_WORD *)v5 + 4) |= v7;
        goto LABEL_13;
      }
      break;
  }
  return 3221225495LL;
}
