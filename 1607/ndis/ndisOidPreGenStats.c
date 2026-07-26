/*
 * XREFs of ndisOidPreGenStats @ 0x1C009B250
 * Callers:
 *     <none>
 * Callees:
 *     ndisOidGetStatisticAllProcessors @ 0x1C00C4CE0 (ndisOidGetStatisticAllProcessors.c)
 *     ndisSSGetCachedOidValue @ 0x1C00DC3B4 (ndisSSGetCachedOidValue.c)
 */

char __fastcall ndisOidPreGenStats(__int64 *a1)
{
  __int64 v1; // rsi
  char v2; // di
  __int64 v4; // r15
  int v6; // ecx
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // [rsp+50h] [rbp+30h] BYREF

  v1 = a1[4];
  v2 = 0;
  v10 = 0LL;
  if ( (*(_DWORD *)(v1 + 4) & 0xFFFFFFFD) != 0 )
  {
    v2 = 1;
    *((_DWORD *)a1 + 10) = -1073741637;
  }
  else
  {
    v4 = *a1;
    if ( *a1 )
    {
      if ( *(_BYTE *)(v4 + 32) < 6u )
      {
        if ( *(_QWORD *)(v1 + 144) )
        {
          *((_DWORD *)a1 + 10) = 0;
          if ( *(_DWORD *)(v1 + 48) < 0x98u )
          {
            *(_DWORD *)(v1 + 56) = 152;
            *((_DWORD *)a1 + 10) = -1073676268;
          }
          v2 = 1;
          if ( !*((_DWORD *)a1 + 10) )
          {
            v6 = *(_DWORD *)(*(_QWORD *)(v1 + 144) + 56LL);
            if ( v6 )
            {
              *((_DWORD *)a1 + 10) = v6;
            }
            else
            {
              v7 = *(_QWORD *)(v1 + 40);
              *(_DWORD *)(v7 + 4) = 0;
              *(_DWORD *)v7 = 9961856;
              v8 = *(_QWORD *)(*(_QWORD *)(v1 + 144) + 40LL);
              *(_DWORD *)(v7 + 4) = 16;
              *(_QWORD *)(v7 + 8) = v8;
              *(_QWORD *)(v7 + 16) = *(_QWORD *)(*(_QWORD *)(v1 + 144) + 24LL);
              *(_DWORD *)(v7 + 4) = 48;
              ndisOidGetStatisticAllProcessors(*(_QWORD *)(v4 + 3192), 131609LL, &v10);
              *(_QWORD *)(v7 + 24) = v10;
              *(_DWORD *)(v7 + 4) = 56;
              ndisOidGetStatisticAllProcessors(*(_QWORD *)(v4 + 3192), 131592LL, &v10);
              *(_QWORD *)(v7 + 32) = v10;
              *(_DWORD *)(v7 + 4) = 57;
              ndisOidGetStatisticAllProcessors(*(_QWORD *)(v4 + 3192), 131594LL, &v10);
              *(_QWORD *)(v7 + 40) = v10;
              *(_DWORD *)(v7 + 4) = 59;
              ndisOidGetStatisticAllProcessors(*(_QWORD *)(v4 + 3192), 131596LL, &v10);
              *(_QWORD *)(v7 + 48) = v10;
              *(_DWORD *)(v7 + 4) = 63;
              ndisOidGetStatisticAllProcessors(*(_QWORD *)(v4 + 3192), 131610LL, &v10);
              *(_QWORD *)(v7 + 56) = v10;
              *(_DWORD *)(v7 + 4) = 575;
              ndisOidGetStatisticAllProcessors(*(_QWORD *)(v4 + 3192), 131586LL, &v10);
              *(_QWORD *)(v7 + 64) = v10;
              *(_DWORD *)(v7 + 4) = 639;
              ndisOidGetStatisticAllProcessors(*(_QWORD *)(v4 + 3192), 131588LL, &v10);
              *(_QWORD *)(v7 + 72) = v10;
              *(_DWORD *)(v7 + 4) = 767;
              ndisOidGetStatisticAllProcessors(*(_QWORD *)(v4 + 3192), 131590LL, &v10);
              *(_QWORD *)(v7 + 80) = v10;
              *(_DWORD *)(v7 + 4) = 1023;
              v9 = *(_QWORD *)(*(_QWORD *)(v1 + 144) + 48LL);
              *(_QWORD *)(v7 + 96) = 0LL;
              *(_QWORD *)(v7 + 88) = v9;
              *(_DWORD *)(v7 + 4) = 2047;
              ndisOidGetStatisticAllProcessors(*(_QWORD *)(v4 + 3192), 131591LL, &v10);
              *(_QWORD *)(v7 + 104) = v10;
              *(_DWORD *)(v7 + 4) = 67583;
              ndisOidGetStatisticAllProcessors(*(_QWORD *)(v4 + 3192), 131593LL, &v10);
              *(_QWORD *)(v7 + 112) = v10;
              *(_DWORD *)(v7 + 4) = 198655;
              ndisOidGetStatisticAllProcessors(*(_QWORD *)(v4 + 3192), 131595LL, &v10);
              *(_QWORD *)(v7 + 120) = v10;
              *(_DWORD *)(v7 + 4) = 460799;
              ndisOidGetStatisticAllProcessors(*(_QWORD *)(v4 + 3192), 131585LL, &v10);
              *(_QWORD *)(v7 + 128) = v10;
              *(_DWORD *)(v7 + 4) = 985087;
              ndisOidGetStatisticAllProcessors(*(_QWORD *)(v4 + 3192), 131587LL, &v10);
              *(_QWORD *)(v7 + 136) = v10;
              *(_DWORD *)(v7 + 4) = 2033663;
              ndisOidGetStatisticAllProcessors(*(_QWORD *)(v4 + 3192), 131589LL, &v10);
              *(_QWORD *)(v7 + 144) = v10;
              *(_DWORD *)(v7 + 4) = 4130815;
              *(_DWORD *)(v1 + 52) = 152;
              *((_DWORD *)a1 + 10) = 0;
            }
          }
          ExFreePoolWithTag(*(PVOID *)(v1 + 144), 0);
          *(_QWORD *)(v1 + 144) = 0LL;
        }
        else
        {
          *((_DWORD *)a1 + 10) = -1073741670;
          return 1;
        }
      }
      else if ( *(_QWORD *)(v4 + 4512) )
      {
        return ndisSSGetCachedOidValue();
      }
    }
  }
  return v2;
}
