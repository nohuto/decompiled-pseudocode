/*
 * XREFs of StorUnmapSenseInfo @ 0x1C0002950
 * Callers:
 *     RaidUnitCompleteRequest @ 0x1C00016A0 (RaidUnitCompleteRequest.c)
 *     RaidUnitReleaseIrp @ 0x1C0010ED8 (RaidUnitReleaseIrp.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0004A6C (RaidAllocatePool.c)
 *     memmove @ 0x1C0015B80 (memmove.c)
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
  void *Pool; // rax
  const void *v15; // rbp
  unsigned int v16; // r13d
  unsigned int i; // r8d
  __int64 v18; // rcx
  unsigned __int64 v19; // r10
  __int64 v20; // r11
  int v21; // ecx
  int v22; // ecx

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
        v16 = *(_DWORD *)(v10 + 56);
        for ( i = 0; i < v16; ++i )
        {
          v18 = *(unsigned int *)(v10 + 4LL * i + 120);
          if ( (unsigned int)v18 >= 0x80 )
          {
            v19 = *(unsigned int *)(v10 + 16);
            if ( (unsigned int)v18 <= (unsigned int)v19 )
            {
              v20 = (unsigned int)v18;
              v21 = *(_DWORD *)(v18 + v10) - 64;
              if ( v21 )
              {
                v22 = v21 - 1;
                if ( v22 )
                {
                  if ( v22 == 1 && v20 + 40 <= v19 )
                  {
                    v8 = (const void **)(v20 + v10 + 24);
                    v9 = (unsigned __int8 *)(v20 + v10 + 9);
                    goto LABEL_5;
                  }
                }
                else if ( v20 + 56 <= v19 )
                {
                  goto LABEL_30;
                }
              }
              else if ( v20 + 40 <= v19 )
              {
LABEL_30:
                v8 = (const void **)(v20 + v10 + 16);
                v9 = (unsigned __int8 *)(v20 + v10 + 9);
LABEL_5:
                v4 = *v9;
                v3 = *v8;
                break;
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
          v13 = v4;
          Pool = (void *)RaidAllocatePool(512LL, v4, 1230201170LL, a2);
          v15 = Pool;
          if ( Pool )
          {
            result = memmove(Pool, v3, v13);
            *v8 = v15;
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
