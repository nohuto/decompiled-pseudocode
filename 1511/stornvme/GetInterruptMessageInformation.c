/*
 * XREFs of GetInterruptMessageInformation @ 0x1C000373C
 * Callers:
 *     NVMeControllerInitPart2 @ 0x1C00044F0 (NVMeControllerInitPart2.c)
 * Callees:
 *     __security_check_cookie @ 0x1C000EAF0 (__security_check_cookie.c)
 *     memset @ 0x1C000EF40 (memset.c)
 */

char __fastcall GetInterruptMessageInformation(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int16 v4; // di
  void **v7; // r12
  __int64 v8; // r8
  void **v9; // r15
  __int64 v10; // r8
  unsigned int v11; // eax
  unsigned __int16 v12; // r13
  __int64 v13; // rbx
  __int64 v14; // r9
  unsigned int v15; // edx
  unsigned int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // r8
  int v19; // [rsp+38h] [rbp-28h] BYREF
  __int128 v20; // [rsp+3Ch] [rbp-24h]
  __int64 v21; // [rsp+4Ch] [rbp-14h]
  int v22; // [rsp+54h] [rbp-Ch]

  v4 = 0;
  v19 = 0;
  v20 = 0uLL;
  v21 = 0LL;
  v22 = 0;
  if ( *(_BYTE *)(a1 + 16) )
    return 1;
  v7 = (void **)(a1 + 208);
  v8 = *(_QWORD *)(a1 + 208);
  if ( v8 )
  {
    StorPortExtendedFunction(1LL, a1, v8, a4);
    *v7 = 0LL;
  }
  v9 = (void **)(a1 + 200);
  v10 = *(_QWORD *)(a1 + 200);
  if ( v10 )
  {
    StorPortExtendedFunction(1LL, a1, v10, a4);
    *v9 = 0LL;
  }
  v11 = *(_DWORD *)(a1 + 12) - 2;
  *(_WORD *)(a1 + 192) = 0;
  if ( v11 <= 1 )
  {
    v12 = 0;
    if ( (unsigned int)StorPortExtendedFunction(13LL, a1, 0LL, &v19) )
      goto LABEL_18;
    v13 = 0LL;
    do
    {
      if ( v12 )
      {
        if ( v13 == *(_QWORD *)((char *)&v20 + 4) && *(_DWORD *)(a1 + 12) != 3 )
          *(_DWORD *)(a1 + 12) = 2;
      }
      else
      {
        v13 = *(_QWORD *)((char *)&v20 + 4);
      }
      ++v12;
    }
    while ( !(unsigned int)StorPortExtendedFunction(13LL, a1, v12, &v19) );
    if ( !v12 )
    {
LABEL_18:
      v12 = 1;
      *(_DWORD *)(a1 + 12) = 1;
    }
    *(_WORD *)(a1 + 192) = v12;
  }
  else
  {
    *(_WORD *)(a1 + 192) = 1;
  }
  StorPortExtendedFunction(0LL, a1, 24 * (unsigned int)*(unsigned __int16 *)(a1 + 192), 1701672526LL);
  if ( !*v9 )
    goto LABEL_36;
  v15 = (24 * (unsigned int)*(unsigned __int16 *)(a1 + 192)) >> 2;
  if ( v15 )
    memset(*v9, 0, 4LL * v15);
  StorPortExtendedFunction(0LL, a1, 16 * (unsigned int)*(unsigned __int16 *)(a1 + 192), 1701672526LL);
  if ( *v7 )
  {
    v16 = (16 * (unsigned int)*(unsigned __int16 *)(a1 + 192)) >> 2;
    if ( v16 )
      memset(*v7, 0, 4LL * v16);
    while ( v4 < *(_WORD *)(a1 + 192) )
    {
      v17 = 3LL * v4;
      *((_DWORD *)*v9 + 2 * v17) = v4;
      v18 = (__int64)*v7 + 16 * v4++;
      *((_QWORD *)*v9 + v17 + 1) = v18;
    }
    return 1;
  }
  else
  {
LABEL_36:
    if ( *v7 )
    {
      StorPortExtendedFunction(1LL, a1, *v7, v14);
      *v7 = 0LL;
    }
    if ( *v9 )
    {
      StorPortExtendedFunction(1LL, a1, *v9, v14);
      *v9 = 0LL;
    }
    *(_WORD *)(a1 + 192) = 0;
    return 0;
  }
}
