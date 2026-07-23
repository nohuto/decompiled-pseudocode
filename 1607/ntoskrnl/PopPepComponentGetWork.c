/*
 * XREFs of PopPepComponentGetWork @ 0x1400C02EC
 * Callers:
 *     PopPepProcessEvent @ 0x1400C00D8 (PopPepProcessEvent.c)
 * Callees:
 *     PopPepStartActivity @ 0x1400C0088 (PopPepStartActivity.c)
 *     PopPepGetReadyActivityType @ 0x1400C09A4 (PopPepGetReadyActivityType.c)
 */

char __fastcall PopPepComponentGetWork(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // r10d
  __int64 v5; // r11
  volatile signed __int32 *v8; // r14
  int v9; // ebp
  unsigned int v10; // edx
  __int64 v11; // rax
  unsigned int *v12; // rcx
  int v13; // eax
  __int64 v14; // r11
  __int64 v15; // r10
  char started; // al
  int ReadyActivityType; // eax
  __int64 v18; // r8
  volatile signed __int32 *v19; // rsi
  int v20; // eax
  __int64 v21; // r10
  __int64 v22; // r11
  unsigned int v23; // edx
  unsigned int v24; // ecx
  unsigned int *v25; // rax
  __int64 v26; // r10

  v3 = 0;
  v5 = a2;
  if ( !a3 )
    return v3;
  v8 = (volatile signed __int32 *)(a1 + 120);
  v9 = *(_DWORD *)(a1 + 120);
  if ( v9 )
  {
    ReadyActivityType = PopPepGetReadyActivityType(a1 + 72, 0LL, 0LL);
    if ( ReadyActivityType != 6 )
    {
      v18 = a1 + 72;
LABEL_13:
      started = PopPepStartActivity(a1, 0LL, v18, ReadyActivityType, v8, a3);
LABEL_10:
      LOBYTE(v3) = started;
      return v3;
    }
  }
  if ( v5 )
  {
    v19 = (volatile signed __int32 *)(v5 + 104);
    if ( *(_DWORD *)(v5 + 104) > v3 )
    {
      v20 = PopPepGetReadyActivityType(v5 + 56, 1LL, 3LL);
      started = PopPepStartActivity(a1, v22, v21, v20, v19, a3);
      goto LABEL_10;
    }
  }
  if ( *(_BYTE *)(a1 + 125) == 1 )
  {
    v10 = *(_DWORD *)(a1 + 168);
    v11 = v3;
    if ( v10 )
    {
      v12 = (unsigned int *)(a1 + 280);
      while ( *v12 <= v3 )
      {
        v11 = (unsigned int)(v11 + 1);
        v12 += 50;
        if ( (unsigned int)v11 >= v10 )
          goto LABEL_17;
      }
      v13 = PopPepGetReadyActivityType(200 * v11 + a1 + 232, 1LL, 3LL);
      started = PopPepStartActivity(a1, v14 + a1 + 176, v15, v13, (volatile signed __int32 *)(v14 + a1 + 280), a3);
      goto LABEL_10;
    }
  }
LABEL_17:
  if ( !v9 )
    return v3;
  v23 = *(_DWORD *)(a1 + 168);
  v24 = v3;
  if ( !v23 )
  {
LABEL_22:
    ReadyActivityType = PopPepGetReadyActivityType(a1 + 72, 4LL, 5LL);
    v18 = v26;
    goto LABEL_13;
  }
  v25 = (unsigned int *)(a1 + 280);
  while ( *v25 <= v3 )
  {
    ++v24;
    v25 += 50;
    if ( v24 >= v23 )
      goto LABEL_22;
  }
  return v3;
}
