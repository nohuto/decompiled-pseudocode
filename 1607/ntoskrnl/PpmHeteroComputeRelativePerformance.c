/*
 * XREFs of PpmHeteroComputeRelativePerformance @ 0x14056AF18
 * Callers:
 *     PopInitializeHeteroProcessors @ 0x14056AAC4 (PopInitializeHeteroProcessors.c)
 * Callees:
 *     KeIsEmptyAffinityEx @ 0x1400D26B0 (KeIsEmptyAffinityEx.c)
 *     KeIsEqualAffinityEx @ 0x140144778 (KeIsEqualAffinityEx.c)
 */

unsigned __int64 PpmHeteroComputeRelativePerformance()
{
  unsigned __int64 result; // rax
  int v1; // r11d
  __int64 v2; // r8
  unsigned __int64 v3; // r9
  __int64 *v4; // rcx
  char v5; // r10
  unsigned int v6; // r10d
  unsigned __int64 v7; // r9
  unsigned int v8; // ebx
  __int64 v9; // rax
  unsigned __int64 v10; // rcx
  __int64 i; // rdx
  __int64 v12; // rdi
  char v13; // r10
  unsigned __int64 v14; // rbx
  int j; // edx
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // r9
  char v18; // r9
  unsigned __int64 v19; // r10
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rdx

  result = KeIsEmptyAffinityEx(PpmCheckRegistered);
  if ( !(_DWORD)result )
  {
    result = KeIsEqualAffinityEx(PpmPerfStatesRegistered, (unsigned __int16 *)PpmCheckRegistered);
    if ( (_DWORD)result )
    {
      v1 = PpmPerfDomainCount;
      if ( PpmPerfDomainCount != 1 )
      {
        v2 = PpmPerfDomainHead;
        v3 = 0LL;
        v4 = (__int64 *)PpmPerfDomainHead;
        if ( (__int64 *)PpmPerfDomainHead != &PpmPerfDomainHead )
        {
          do
          {
            result = v4[41];
            v4 = (__int64 *)*v4;
            if ( v3 <= result )
              v3 = result;
          }
          while ( v4 != &PpmPerfDomainHead );
          if ( v3 )
          {
            v5 = 0;
            result = 0x7FFFFFFFFFFFLL;
            if ( v3 >= 0x7FFFFFFFFFFFLL )
            {
              result = (unsigned int)(HIDWORD(v3) + 0xFFFF);
              _BitScanReverse(&v6, result);
              v5 = v6 - 14;
            }
            v7 = v3 >> v5;
            v8 = -1;
            if ( (__int64 *)PpmPerfDomainHead != &PpmPerfDomainHead )
            {
              do
              {
                v9 = *(_QWORD *)(v2 + 328) >> v5;
                if ( v9 == v7 )
                {
                  v10 = 0x10000LL;
                }
                else
                {
                  v10 = ((v7 >> 1) + (v9 << 16)) / v7;
                  if ( v10 <= 1 )
                    v10 = 1LL;
                }
                for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v2 + 192); i = (unsigned int)(i + 1) )
                {
                  v12 = *(_QWORD *)(v2 + 200);
                  if ( !*(_BYTE *)(96 * i + v12 + 16) )
                    *(_DWORD *)(*(_QWORD *)(96 * i + v12) + 24232LL) = v10;
                }
                v2 = *(_QWORD *)v2;
                result = v8;
                if ( v8 >= v10 )
                  v8 = v10;
              }
              while ( (__int64 *)v2 != &PpmPerfDomainHead );
              v2 = PpmPerfDomainHead;
            }
            PpmHeteroMinRelativePerformance = v8;
            v13 = 0;
            v14 = 0LL;
            for ( j = v1; j; v14 = v16 )
            {
              v16 = -1LL;
              result = v2;
              if ( (__int64 *)v2 != &PpmPerfDomainHead )
              {
                do
                {
                  v17 = *(_QWORD *)(result + 328);
                  if ( v17 > v14 && v16 >= v17 )
                    v16 = *(_QWORD *)(result + 328);
                  result = *(_QWORD *)result;
                }
                while ( (__int64 *)result != &PpmPerfDomainHead );
                if ( (__int64 *)v2 != &PpmPerfDomainHead )
                {
                  do
                  {
                    if ( *(_QWORD *)(v2 + 328) == v16 )
                    {
                      *(_BYTE *)(v2 + 197) = v13;
                      --j;
                    }
                    v2 = *(_QWORD *)v2;
                  }
                  while ( (__int64 *)v2 != &PpmPerfDomainHead );
                  v2 = PpmPerfDomainHead;
                }
              }
              ++v13;
            }
            v18 = 0;
            v19 = 0LL;
            while ( v1 )
            {
              v20 = 0xFFFFFFFFLL;
              result = v2;
              if ( (__int64 *)v2 != &PpmPerfDomainHead )
              {
                do
                {
                  v21 = *(_QWORD *)(result + 328) * *(unsigned int *)(result + 304);
                  if ( v21 > v19 && v20 >= v21 )
                    v20 = *(_QWORD *)(result + 328) * *(unsigned int *)(result + 304);
                  result = *(_QWORD *)result;
                }
                while ( (__int64 *)result != &PpmPerfDomainHead );
                if ( (__int64 *)v2 != &PpmPerfDomainHead )
                {
                  do
                  {
                    result = *(_QWORD *)(v2 + 328) * *(unsigned int *)(v2 + 304);
                    if ( result == v20 )
                    {
                      *(_BYTE *)(v2 + 198) = v18;
                      --v1;
                    }
                    v2 = *(_QWORD *)v2;
                  }
                  while ( (__int64 *)v2 != &PpmPerfDomainHead );
                  v2 = PpmPerfDomainHead;
                }
              }
              v19 = v20;
              ++v18;
            }
          }
        }
      }
    }
  }
  return result;
}
