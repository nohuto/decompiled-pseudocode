/*
 * XREFs of PnpiCmResourceRemoveSidebandResources @ 0x1C007E7A4
 * Callers:
 *     PnpCmResourcesExcludeSidebandResources @ 0x1C007E678 (PnpCmResourcesExcludeSidebandResources.c)
 * Callees:
 *     PnpiCmResourceSidebandConnection @ 0x1C007E978 (PnpiCmResourceSidebandConnection.c)
 */

__int64 __fastcall PnpiCmResourceRemoveSidebandResources(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int *a6)
{
  __int64 v6; // rsi
  __int64 v10; // r11
  unsigned int v11; // r13d
  __int64 result; // rax
  __int64 v13; // r14
  __int64 v14; // r12
  unsigned int v15; // edi
  __int64 v16; // rdx
  __int64 v17; // r9
  __int64 v18; // rdx
  char v19; // r8
  unsigned int v20; // r10d
  unsigned int v21; // edx
  __int64 v22; // rcx
  __int64 v23; // rcx
  char v25; // [rsp+78h] [rbp+10h] BYREF

  v6 = 0LL;
  v10 = a1;
  v11 = *a6;
  if ( !*(_DWORD *)a2 )
    return 3221225524LL;
  if ( *(_DWORD *)a2 != 1 || *(_DWORD *)a3 != 1 || *(_DWORD *)(a2 + 16) != *(_DWORD *)(a3 + 16) )
    return 3221225473LL;
  v13 = a5;
  if ( v11 >= 0x28 )
  {
    *(_OWORD *)a4 = *(_OWORD *)a2;
    *(_OWORD *)(a4 + 16) = *(_OWORD *)(a2 + 16);
    *(_QWORD *)(a4 + 32) = *(_QWORD *)(a2 + 32);
    *(_DWORD *)(a4 + 16) = 0;
    *(_OWORD *)v13 = *(_OWORD *)a3;
    *(_OWORD *)(v13 + 16) = *(_OWORD *)(a3 + 16);
    *(_QWORD *)(v13 + 32) = *(_QWORD *)(a3 + 32);
    *(_DWORD *)(v13 + 16) = 0;
  }
  v14 = 0LL;
  v15 = 20;
  if ( !*(_DWORD *)(a2 + 16) )
  {
LABEL_27:
    v15 += 20;
    goto LABEL_28;
  }
  do
  {
    v16 = 5 * v14;
    v25 = 0;
    v17 = a2 + 20 + 20 * v14;
    if ( *(_BYTE *)v17 == 2 )
    {
      v20 = *(_DWORD *)(v10 + 4);
      v19 = 0;
      v21 = 0;
      if ( v20 )
      {
        while ( 1 )
        {
          v22 = 32LL * v21;
          if ( *(_BYTE *)(v22 + v10 + 9) == 2 && *(_DWORD *)(v22 + v10 + 16) == *(_DWORD *)(v17 + 8) )
            break;
          if ( ++v21 >= v20 )
            goto LABEL_20;
        }
        v19 = 1;
      }
    }
    else
    {
      if ( *(_BYTE *)v17 != 0x84 )
        goto LABEL_22;
      result = PnpiCmResourceSidebandConnection(v10, a2 + 20 + 20 * v14, &v25);
      if ( (int)result < 0 )
        return result;
      v19 = v25;
      v17 = v18;
      v10 = a1;
    }
LABEL_20:
    if ( v19 )
      goto LABEL_25;
    v16 = 5 * v14;
LABEL_22:
    v15 += 20;
    if ( v11 >= v15 )
    {
      v23 = 5 * v6;
      *(_OWORD *)(a4 + 4 * v23 + 20) = *(_OWORD *)v17;
      *(_DWORD *)(a4 + 4 * v23 + 36) = *(_DWORD *)(v17 + 16);
      *(_OWORD *)(v13 + 4 * v23 + 20) = *(_OWORD *)(a3 + 4 * v16 + 20);
      *(_DWORD *)(v13 + 4 * v23 + 36) = *(_DWORD *)(a3 + 4 * v16 + 36);
    }
    v6 = (unsigned int)(v6 + 1);
LABEL_25:
    v14 = (unsigned int)(v14 + 1);
  }
  while ( (unsigned int)v14 < *(_DWORD *)(a2 + 16) );
  if ( !(_DWORD)v6 )
    goto LABEL_27;
LABEL_28:
  if ( (_DWORD)v6 == *(_DWORD *)(a2 + 16) )
    return 3221225524LL;
  if ( v15 <= v11 )
  {
    *(_DWORD *)(a4 + 16) = v6;
    result = 0LL;
    *(_DWORD *)(v13 + 16) = v6;
  }
  else
  {
    *a6 = v15;
    return 3221225507LL;
  }
  return result;
}
