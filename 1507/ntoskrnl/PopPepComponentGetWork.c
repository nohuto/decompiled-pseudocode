/*
 * XREFs of PopPepComponentGetWork @ 0x140027F14
 * Callers:
 *     PopPepProcessEvent @ 0x140027CF4 (PopPepProcessEvent.c)
 * Callees:
 *     PopPepStartActivity @ 0x140027C18 (PopPepStartActivity.c)
 *     PopPepGetReadyActivityType @ 0x14002855C (PopPepGetReadyActivityType.c)
 */

char __fastcall PopPepComponentGetWork(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // r10d
  __int64 v5; // r11
  volatile signed __int32 *v7; // r14
  int v8; // ebp
  volatile signed __int32 *v9; // rsi
  int v10; // eax
  __int64 v11; // r10
  __int64 v12; // r11
  char started; // al
  unsigned int v15; // edx
  __int64 v16; // rax
  unsigned int *v17; // rcx
  int v18; // eax
  __int64 v19; // r11
  __int64 v20; // r10
  int ReadyActivityType; // eax
  __int64 v22; // r8
  unsigned int v23; // edx
  unsigned int v24; // ecx
  unsigned int *v25; // rax
  __int64 v26; // r10

  v3 = 0;
  v5 = a2;
  if ( a3 )
  {
    v7 = (volatile signed __int32 *)(a1 + 120);
    v8 = *(_DWORD *)(a1 + 120);
    if ( v8 )
    {
      ReadyActivityType = PopPepGetReadyActivityType(a1 + 72, 0LL, 0LL);
      if ( ReadyActivityType != 6 )
      {
        v22 = a1 + 72;
LABEL_18:
        started = PopPepStartActivity(a1, 0LL, v22, ReadyActivityType, v7, a3);
        goto LABEL_6;
      }
    }
    if ( v5 )
    {
      v9 = (volatile signed __int32 *)(v5 + 104);
      if ( *(_DWORD *)(v5 + 104) > v3 )
      {
        v10 = PopPepGetReadyActivityType(v5 + 56, 1LL, 3LL);
        started = PopPepStartActivity(a1, v12, v11, v10, v9, a3);
LABEL_6:
        LOBYTE(v3) = started;
        return v3;
      }
    }
    if ( *(_BYTE *)(a1 + 125) == 1 )
    {
      v15 = *(_DWORD *)(a1 + 168);
      v16 = v3;
      if ( v15 )
      {
        v17 = (unsigned int *)(a1 + 280);
        while ( *v17 <= v3 )
        {
          v16 = (unsigned int)(v16 + 1);
          v17 += 50;
          if ( (unsigned int)v16 >= v15 )
            goto LABEL_13;
        }
        v18 = PopPepGetReadyActivityType(200 * v16 + a1 + 232, 1LL, 3LL);
        started = PopPepStartActivity(a1, v19 + a1 + 176, v20, v18, (volatile signed __int32 *)(v19 + a1 + 280), a3);
        goto LABEL_6;
      }
    }
LABEL_13:
    if ( !v8 )
      return v3;
    v23 = *(_DWORD *)(a1 + 168);
    v24 = v3;
    if ( !v23 )
    {
LABEL_23:
      ReadyActivityType = PopPepGetReadyActivityType(a1 + 72, 4LL, 5LL);
      v22 = v26;
      goto LABEL_18;
    }
    v25 = (unsigned int *)(a1 + 280);
    while ( *v25 <= v3 )
    {
      ++v24;
      v25 += 50;
      if ( v24 >= v23 )
        goto LABEL_23;
    }
  }
  return v3;
}
