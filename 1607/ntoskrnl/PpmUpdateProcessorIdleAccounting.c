/*
 * XREFs of PpmUpdateProcessorIdleAccounting @ 0x140146334
 * Callers:
 *     PpmInstallNewIdleStates @ 0x140145C68 (PpmInstallNewIdleStates.c)
 *     PpmTranslateIdleAccounting @ 0x14020A6F0 (PpmTranslateIdleAccounting.c)
 * Callees:
 *     <none>
 */

void __fastcall PpmUpdateProcessorIdleAccounting(_QWORD *a1)
{
  __int64 v1; // r9
  unsigned __int64 v3; // r8
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx
  unsigned __int64 *v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rax

  v1 = *a1;
  if ( *(_BYTE *)(*a1 + 5LL) )
  {
    v3 = a1[2];
    a1[2] = 0LL;
    v4 = *(unsigned int *)(v1 + 16);
    v5 = a1[1];
    a1[3] += v3;
    v6 = 992 * v4 + v5 + 40;
    *(_QWORD *)v6 += v3;
    if ( *(_DWORD *)(v1 + 52) == 3 )
    {
      if ( *(int *)(v1 + 48) < 0 )
      {
        ++*(_DWORD *)(v6 + 12);
      }
      else
      {
        ++*(_DWORD *)(v6 + 16);
        v7 = (unsigned __int64 *)&PpmIdleIntervalLimits;
        v8 = 0LL;
        do
        {
          if ( v3 < *v7 )
            break;
          v8 = (unsigned int)(v8 + 1);
          v7 += 3;
        }
        while ( (unsigned int)v8 < 0x1A );
        if ( (unsigned int)v8 >= 0x1A )
        {
          ++*(_DWORD *)(v6 + 20);
        }
        else
        {
          v9 = v6 + 32 * (v8 + 5);
          *(_QWORD *)v9 += v3;
          ++*(_DWORD *)(v9 + 24);
          if ( v3 < *(_QWORD *)(v9 + 8) )
            *(_QWORD *)(v9 + 8) = v3;
          if ( v3 > *(_QWORD *)(v9 + 16) )
            *(_QWORD *)(v9 + 16) = v3;
        }
        if ( v3 < *(_QWORD *)(v6 + 24) )
          *(_QWORD *)(v6 + 24) = v3;
        if ( v3 > *(_QWORD *)(v6 + 32) )
          *(_QWORD *)(v6 + 32) = v3;
      }
    }
    else
    {
      ++*(_DWORD *)(v6 + 8);
    }
  }
  *(_DWORD *)(v1 + 48) = 0;
  *(_DWORD *)(v1 + 52) = 3;
  *(_BYTE *)(v1 + 5) = 0;
}
