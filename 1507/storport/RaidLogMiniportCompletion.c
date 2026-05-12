/*
 * XREFs of RaidLogMiniportCompletion @ 0x1C0004DE0
 * Callers:
 *     StorPortNotification @ 0x1C0004A70 (StorPortNotification.c)
 *     RaidAdapterRequestComplete @ 0x1C00221D8 (RaidAdapterRequestComplete.c)
 * Callees:
 *     GetSrbScsiData @ 0x1C0020990 (GetSrbScsiData.c)
 */

__int64 __fastcall RaidLogMiniportCompletion(_QWORD *a1)
{
  unsigned int v1; // edi
  __int64 v3; // rcx
  unsigned __int8 v4; // bp
  unsigned __int8 v5; // r9
  unsigned __int8 v6; // r8
  __int64 v7; // r11
  int v8; // r10d
  unsigned __int8 v9; // al
  int v10; // esi
  int v11; // edx
  unsigned __int64 v12; // r9
  __int64 v13; // rax
  unsigned __int64 v14; // r9
  __int64 result; // rax
  unsigned int v16; // eax
  int v17; // edi
  __int64 v18; // r8
  __int64 v19; // r10
  __int64 v20; // r11
  unsigned __int32 v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rcx
  unsigned int v25; // r10d
  unsigned int v26; // edx
  __int64 v27; // rcx
  unsigned __int64 v28; // rax
  unsigned int v29; // r9d
  unsigned int v30; // edx
  __int64 v31; // rcx
  unsigned __int64 v32; // rax
  unsigned int v33; // r10d
  unsigned int v34; // edx
  __int64 v35; // rcx
  unsigned __int64 v36; // rax
  unsigned __int8 *SrbScsiData; // rax
  unsigned __int8 v38; // [rsp+50h] [rbp+8h] BYREF
  __int64 v39; // [rsp+58h] [rbp+10h]

  v1 = 0;
  v3 = a1[20];
  v4 = 0;
  v5 = 0;
  v38 = 0;
  v6 = 0;
  v39 = 0LL;
  v7 = 0LL;
  v8 = 0;
  v9 = *(_BYTE *)(v3 + 2);
  v10 = *(unsigned __int8 *)(v3 + 3);
  if ( v9 == 40 )
  {
    v11 = *(_DWORD *)(v3 + 20);
    v7 = v3;
  }
  else
  {
    v11 = v9;
  }
  switch ( v11 )
  {
    case 0:
      if ( v9 == 40 )
      {
        SrbScsiData = (unsigned __int8 *)GetSrbScsiData(v7, 0, 0, (unsigned int)&v38, 0LL, 0LL);
        if ( SrbScsiData )
          v4 = *SrbScsiData;
        v12 = (unsigned int)(v10 << 8) | (unsigned __int64)(v4 << 16);
        v13 = v38;
        goto LABEL_7;
      }
      v12 = *(unsigned __int8 *)(v3 + 4) | (unsigned __int64)(*(unsigned __int8 *)(v3 + 72) << 16);
LABEL_6:
      v13 = (unsigned int)(v10 << 8);
LABEL_7:
      v14 = v13 | v12;
      goto LABEL_8;
    case 23:
      if ( v9 == 40 )
      {
        v33 = *(_DWORD *)(v7 + 56);
        v34 = 0;
        if ( v33 )
        {
          while ( 1 )
          {
            v35 = *(unsigned int *)(v7 + 4LL * v34 + 120);
            if ( (unsigned int)v35 >= 0x80 )
            {
              v36 = *(unsigned int *)(v7 + 16);
              if ( (unsigned int)v35 <= (unsigned int)v36 && *(_DWORD *)(v35 + v7) == 96 && v35 + 24 <= v36 )
                break;
            }
            if ( ++v34 >= v33 )
              goto LABEL_54;
          }
          v6 = *(_BYTE *)(v35 + v7 + 8);
        }
LABEL_54:
        v12 = v6 << 16;
        v10 |= 0x170000u;
      }
      else
      {
        v12 = *(unsigned __int8 *)(v3 + 4) << 16;
        v10 |= 0x170000u;
      }
      goto LABEL_6;
    case 36:
      if ( v9 == 40 )
      {
        v29 = *(_DWORD *)(v7 + 56);
        v30 = 0;
        if ( v29 )
        {
          while ( 1 )
          {
            v31 = *(unsigned int *)(v7 + 4LL * v30 + 120);
            if ( (unsigned int)v31 >= 0x80 )
            {
              v32 = *(unsigned int *)(v7 + 16);
              if ( (unsigned int)v31 <= (unsigned int)v32 && *(_DWORD *)(v31 + v7) == 97 && v31 + 24 <= v32 )
                break;
            }
            if ( ++v30 >= v29 )
              goto LABEL_46;
          }
          v8 = *(_DWORD *)(v31 + v7 + 12);
        }
LABEL_46:
        v13 = (unsigned int)(v8 << 16);
        v12 = (v10 | 0x240000u) << 8;
        goto LABEL_7;
      }
      v12 = (unsigned int)(*(_DWORD *)(v3 + 8) << 16);
      v10 |= 0x240000u;
      goto LABEL_6;
    case 37:
      if ( v9 == 40 )
      {
        v25 = *(_DWORD *)(v7 + 56);
        v26 = 0;
        if ( v25 )
        {
          while ( 1 )
          {
            v27 = *(unsigned int *)(v7 + 4LL * v26 + 120);
            if ( (unsigned int)v27 >= 0x80 )
            {
              v28 = *(unsigned int *)(v7 + 16);
              if ( (unsigned int)v27 <= (unsigned int)v28 && *(_DWORD *)(v27 + v7) == 98 && v27 + 24 <= v28 )
                break;
            }
            if ( ++v26 >= v25 )
              goto LABEL_38;
          }
          v5 = *(_BYTE *)(v27 + v7 + 8);
        }
LABEL_38:
        v12 = v5 << 16;
        v10 |= 0x250000u;
      }
      else
      {
        v12 = *(unsigned __int8 *)(v3 + 4) << 16;
        v10 |= 0x250000u;
      }
      goto LABEL_6;
  }
  v14 = (v10 | (unsigned int)(v11 << 16)) << 8;
LABEL_8:
  result = a1[27];
  if ( result )
  {
    v16 = *(_DWORD *)(result + 88);
    v17 = ((unsigned __int8)v16 << 8) | BYTE1(v16);
    result = HIWORD(v16);
    v1 = (unsigned __int8)result | (v17 << 8);
  }
  v18 = a1[26];
  v19 = a1[20];
  v20 = a1[19];
  if ( v18 && *(_DWORD *)(v18 + 5060) && *(_QWORD *)(v18 + 5064) )
  {
    v21 = _InterlockedIncrement((volatile signed __int32 *)(v18 + 5056));
    if ( *(_DWORD *)(v18 + 5060) == 256 )
      v22 = (unsigned __int8)v21;
    else
      v22 = v21 % *(_DWORD *)(v18 + 5060);
    v23 = v39;
    v24 = *(_QWORD *)(v18 + 5064) + 48 * v22;
    *(_DWORD *)v24 = 1;
    if ( !v23 )
      v23 = MEMORY[0xFFFFF78000000014];
    *(_QWORD *)(v24 + 40) = v23;
    result = v1;
    *(_QWORD *)(v24 + 16) = v1;
    *(_QWORD *)(v24 + 8) = v20;
    *(_QWORD *)(v24 + 24) = v19;
    *(_QWORD *)(v24 + 32) = v14;
  }
  return result;
}
