/*
 * XREFs of StorUnmapSenseInfo @ 0x1C0007040
 * Callers:
 *     RaidUnitCompleteRequest @ 0x1C0006180 (RaidUnitCompleteRequest.c)
 *     RaidUnitReleaseIrp @ 0x1C000C880 (RaidUnitReleaseIrp.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C000245C (RaidAllocatePool.c)
 *     memmove @ 0x1C001AA40 (memmove.c)
 */

void *__fastcall StorUnmapSenseInfo(__int64 a1, __int64 a2)
{
  void *result; // rax
  const void *v3; // rsi
  unsigned __int8 v4; // bp
  __int64 v7; // r12
  const void **v8; // r14
  unsigned __int8 *v9; // r15
  __int64 v10; // rbx
  int v11; // edx
  char v12; // al
  unsigned int v13; // r13d
  unsigned int i; // r8d
  __int64 v15; // rcx
  unsigned __int64 v16; // r10
  __int64 v17; // r11
  int v18; // ecx
  int v19; // ecx
  unsigned int v20; // r13d
  PVOID Pool; // rax
  PVOID v22; // rbp

  result = (void *)*(unsigned __int8 *)(a1 + 16);
  v3 = 0LL;
  v4 = 0;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  if ( ((unsigned __int8)result & 0x20) != 0 )
  {
    v10 = *(_QWORD *)(a1 + 168);
    if ( v10 )
    {
      if ( *(_BYTE *)(v10 + 2) != 40 )
      {
        v11 = *(_DWORD *)(v10 + 12);
        v8 = (const void **)(v10 + 32);
        v9 = (unsigned __int8 *)(v10 + 11);
        goto LABEL_5;
      }
      v7 = *(_QWORD *)(a1 + 168);
      v11 = *(_DWORD *)(v10 + 24);
      if ( !*(_DWORD *)(v10 + 20) )
      {
        v13 = *(_DWORD *)(v10 + 56);
        for ( i = 0; i < v13; ++i )
        {
          v15 = *(unsigned int *)(v10 + 4LL * i + 120);
          if ( (unsigned int)v15 >= 0x80 )
          {
            v16 = *(unsigned int *)(v10 + 16);
            if ( (unsigned int)v15 <= (unsigned int)v16 )
            {
              v17 = (unsigned int)v15;
              v18 = *(_DWORD *)(v15 + v10);
              if ( v18 == 64 )
              {
                if ( v17 + 40 <= v16 )
                  goto LABEL_15;
              }
              else
              {
                v19 = v18 - 65;
                if ( v19 )
                {
                  if ( v19 == 1 && v17 + 40 <= v16 )
                  {
                    v8 = (const void **)(v17 + v10 + 24);
                    v9 = (unsigned __int8 *)(v17 + v10 + 9);
LABEL_5:
                    v4 = *v9;
                    v3 = *v8;
                    break;
                  }
                }
                else if ( v17 + 56 <= v16 )
                {
LABEL_15:
                  v8 = (const void **)(v17 + v10 + 16);
                  v9 = (unsigned __int8 *)(v17 + v10 + 9);
                  goto LABEL_5;
                }
              }
            }
          }
        }
      }
      v12 = *(_BYTE *)(v10 + 3);
      if ( v12 < 0 )
      {
        if ( (v11 & 0x200000) != 0 && v4 )
        {
          v20 = v4;
          Pool = RaidAllocatePool(NonPagedPoolNx, v4, 0x49536152u, a2);
          v22 = Pool;
          if ( Pool )
          {
            result = memmove(Pool, v3, v20);
            *v8 = v22;
            if ( *(_BYTE *)(v10 + 2) == 40 )
              *(_DWORD *)(v7 + 24) |= 0x400u;
            else
              *(_DWORD *)(v10 + 12) |= 0x400u;
          }
          else
          {
            *v8 = *(const void **)(a1 + 200);
            result = (void *)*(unsigned __int8 *)(a1 + 208);
            *v9 = (unsigned __int8)result;
            *(_BYTE *)(v10 + 3) &= ~0x80u;
          }
        }
        else
        {
          if ( v4 >= *(_BYTE *)(a1 + 208) )
            v4 = *(_BYTE *)(a1 + 208);
          if ( v4 )
            memmove(*(void **)(a1 + 200), v3, v4);
          else
            *(_BYTE *)(v10 + 3) = v12 & 0x7F;
          result = *(void **)(a1 + 200);
          *v8 = result;
          *v9 = v4;
        }
      }
      else
      {
        *v8 = *(const void **)(a1 + 200);
        result = (void *)*(unsigned __int8 *)(a1 + 208);
        *v9 = (unsigned __int8)result;
      }
    }
  }
  return result;
}
