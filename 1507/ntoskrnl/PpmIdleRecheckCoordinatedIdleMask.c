/*
 * XREFs of PpmIdleRecheckCoordinatedIdleMask @ 0x140234E9C
 * Callers:
 *     PpmIdleExecuteTransition @ 0x1400A7C10 (PpmIdleExecuteTransition.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 */

char __fastcall PpmIdleRecheckCoordinatedIdleMask(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  __int64 v3; // r14
  char v4; // bl
  unsigned int v8; // r10d
  __int64 v9; // rsi
  unsigned int v10; // edi
  __int64 v11; // r11
  unsigned __int16 v12; // r8
  unsigned __int16 v13; // ax
  unsigned __int16 i; // dx
  __int64 v15; // rcx
  __int64 v16; // rax
  unsigned __int16 *v17; // r9
  unsigned __int16 v18; // dx
  unsigned __int16 v20; // [rsp+28h] [rbp-E0h]
  _QWORD v21[21]; // [rsp+30h] [rbp-D8h] BYREF
  unsigned __int16 v22; // [rsp+D8h] [rbp-30h] BYREF
  unsigned __int16 v23; // [rsp+DAh] [rbp-2Eh]
  int v24; // [rsp+DCh] [rbp-2Ch]
  _QWORD v25[21]; // [rsp+E0h] [rbp-28h]

  v3 = PpmPlatformStates;
  v4 = 0;
  if ( !PpmPlatformStates )
    return v4;
  v20 = 1;
  memset(v21, 0, 0xA0uLL);
  if ( a2 )
    v20 = a2 + 1;
  v8 = 0;
  v21[a2] |= a3;
  v9 = *(_QWORD *)(a1 + 736);
  v10 = *(_DWORD *)(v9 + 4);
  if ( !v10 )
    return v4;
  while ( *(_DWORD *)(v9 + 4LL * v8 + 8) != -1 )
  {
LABEL_25:
    if ( ++v8 >= v10 )
      return v4;
  }
  v11 = v3 + 384LL * *(unsigned int *)(*(_QWORD *)(a1 + 768) + 24LL * v8 + 4);
  v12 = *(_WORD *)(v11 + 120);
  v13 = v12;
  if ( v12 >= v20 )
    v13 = v20;
  v22 = v13;
  for ( i = 0; i < v22; v13 = v22 )
  {
    v15 = i++;
    v25[v15] = v21[v15] & *(_QWORD *)(v11 + 8 * v15 + 128);
  }
  v23 = 20;
  v24 = 0;
  if ( i < 0x14u )
  {
    do
    {
      v16 = i++;
      v25[v16] = 0LL;
    }
    while ( i < v23 );
    v13 = v22;
  }
  if ( v12 >= v13 )
  {
    v17 = (unsigned __int16 *)(v11 + 120);
    v12 = v13;
  }
  else
  {
    v17 = &v22;
  }
  v18 = 0;
  if ( v12 )
  {
    while ( *(_QWORD *)(v11 + 8LL * v18 + 128) == v25[v18] )
    {
      if ( ++v18 >= v12 )
        goto LABEL_22;
    }
    goto LABEL_25;
  }
LABEL_22:
  while ( v18 < *v17 )
  {
    if ( *(_QWORD *)&v17[4 * v18 + 4] )
      goto LABEL_25;
    ++v18;
  }
  return 1;
}
