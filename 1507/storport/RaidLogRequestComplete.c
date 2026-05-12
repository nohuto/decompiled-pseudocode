/*
 * XREFs of RaidLogRequestComplete @ 0x1C0031F60
 * Callers:
 *     RaidUnitCompleteRequest @ 0x1C0002480 (RaidUnitCompleteRequest.c)
 *     RaUnitAsyncError @ 0x1C000EA18 (RaUnitAsyncError.c)
 *     RaidUnitCompleteResetRequest @ 0x1C0032710 (RaidUnitCompleteResetRequest.c)
 * Callees:
 *     DbgLogRequest @ 0x1C0011B14 (DbgLogRequest.c)
 *     GetSrbScsiData @ 0x1C0020990 (GetSrbScsiData.c)
 */

void __fastcall RaidLogRequestComplete(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 v3; // bl
  __int64 v7; // rdi
  unsigned __int8 v8; // r9
  unsigned __int8 v9; // bp
  int v10; // r8d
  unsigned __int8 v11; // r10
  char v12; // r11
  int v13; // edx
  int v14; // ecx
  __int64 v15; // rax
  unsigned int v16; // r9d
  unsigned int k; // edx
  __int64 v18; // rcx
  unsigned __int64 v19; // rax
  int v20; // ecx
  int v21; // eax
  int v22; // ecx
  __int64 v23; // rcx
  unsigned int v24; // r10d
  unsigned int j; // edx
  __int64 v26; // rcx
  unsigned __int64 v27; // rax
  unsigned int v28; // r9d
  unsigned int i; // edx
  __int64 v30; // rcx
  unsigned __int64 v31; // rax
  unsigned __int8 *SrbScsiData; // rax
  unsigned __int8 v33; // [rsp+78h] [rbp+10h] BYREF
  __int64 v34; // [rsp+80h] [rbp+18h]

  v3 = 0;
  v33 = 0;
  v34 = 0LL;
  v7 = 0LL;
  v8 = *(_BYTE *)(a3 + 2);
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  if ( v8 == 40 )
  {
    v13 = *(_DWORD *)(a3 + 20);
    v7 = a3;
  }
  else
  {
    v13 = v8;
  }
  switch ( v13 )
  {
    case 0:
      if ( v8 == 40 )
      {
        SrbScsiData = (unsigned __int8 *)GetSrbScsiData(v7, 0LL, 0LL, &v33, 0LL, 0LL);
        if ( SrbScsiData )
          v3 = *SrbScsiData;
        v14 = *(unsigned __int8 *)(v7 + 3) | (v3 << 8);
        v15 = v33;
      }
      else
      {
        v14 = *(unsigned __int8 *)(a3 + 3) | (*(unsigned __int8 *)(a3 + 72) << 8);
        v15 = *(unsigned __int8 *)(a3 + 4);
      }
      goto LABEL_51;
    case 23:
      if ( v8 == 40 )
      {
        v28 = *(_DWORD *)(v7 + 56);
        for ( i = 0; i < v28; ++i )
        {
          v30 = *(unsigned int *)(v7 + 4LL * i + 120);
          if ( (unsigned int)v30 >= 0x80 )
          {
            v31 = *(unsigned int *)(v7 + 16);
            if ( (unsigned int)v30 <= (unsigned int)v31 )
            {
              if ( *(_DWORD *)(v30 + v7) == 96 && v30 + 24 <= v31 )
              {
                v11 = *(_BYTE *)((unsigned int)v30 + v7 + 8);
                v12 = 1;
              }
              if ( v12 )
                break;
            }
          }
        }
        v20 = v11 | 0x1700;
        goto LABEL_19;
      }
      v20 = *(unsigned __int8 *)(a3 + 4) | 0x1700;
LABEL_21:
      v21 = *(unsigned __int8 *)(a3 + 3);
      goto LABEL_22;
    case 36:
      if ( v8 == 40 )
      {
        v24 = *(_DWORD *)(v7 + 56);
        for ( j = 0; j < v24; ++j )
        {
          v26 = *(unsigned int *)(v7 + 4LL * j + 120);
          if ( (unsigned int)v26 >= 0x80 )
          {
            v27 = *(unsigned int *)(v7 + 16);
            if ( (unsigned int)v26 <= (unsigned int)v27 )
            {
              if ( *(_DWORD *)(v26 + v7) == 97 && v26 + 24 <= v27 )
              {
                v10 = *(_DWORD *)((unsigned int)v26 + v7 + 12);
                v12 = 1;
              }
              if ( v12 )
                break;
            }
          }
        }
        v22 = ((v10 | 0x2400) << 8) | *(unsigned __int8 *)(v7 + 3);
        goto LABEL_23;
      }
      v20 = *(_DWORD *)(a3 + 8) | 0x2400;
      goto LABEL_21;
  }
  if ( v13 != 37 )
  {
    v14 = *(unsigned __int8 *)(a3 + 3);
    v15 = (unsigned int)(v13 << 24);
LABEL_51:
    v23 = v15 | (unsigned int)(v14 << 8);
    goto LABEL_52;
  }
  if ( v8 != 40 )
  {
    v20 = *(unsigned __int8 *)(a3 + 4) | 0x2500;
    goto LABEL_21;
  }
  v16 = *(_DWORD *)(v7 + 56);
  for ( k = 0; k < v16; ++k )
  {
    v18 = *(unsigned int *)(v7 + 4LL * k + 120);
    if ( (unsigned int)v18 >= 0x80 )
    {
      v19 = *(unsigned int *)(v7 + 16);
      if ( (unsigned int)v18 <= (unsigned int)v19 )
      {
        if ( *(_DWORD *)(v18 + v7) == 98 && v18 + 24 <= v19 )
        {
          v9 = *(_BYTE *)((unsigned int)v18 + v7 + 8);
          v12 = 1;
        }
        if ( v12 )
          break;
      }
    }
  }
  v20 = v9 | 0x2500;
LABEL_19:
  v21 = *(unsigned __int8 *)(v7 + 3);
LABEL_22:
  v22 = v21 | (v20 << 8);
LABEL_23:
  v23 = (unsigned int)(v22 << 8);
LABEL_52:
  DbgLogRequest(a1, 2, a2, *(int *)(a2 + 48), a3, v23, v34);
}
