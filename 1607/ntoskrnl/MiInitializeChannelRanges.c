/*
 * XREFs of MiInitializeChannelRanges @ 0x14078FBD4
 * Callers:
 *     MiInitNucleus @ 0x1407D06B4 (MiInitNucleus.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     xHalSetSystemInformation @ 0x140581DF0 (xHalSetSystemInformation.c)
 */

__int64 MiInitializeChannelRanges()
{
  __int64 result; // rax
  __int64 v1; // r9
  unsigned int v2; // edx
  int v3; // r8d
  unsigned int v4; // ecx
  unsigned int v5; // ecx
  unsigned int v6; // edx
  unsigned __int16 v7; // ax
  unsigned int v8; // r10d
  int v9; // ecx
  unsigned int v10; // r11d
  __int64 v11; // rax
  int v12; // ebx
  signed __int32 *v13; // rsi
  unsigned int v14; // r14d
  char *v15; // rcx
  __int64 i; // rax
  unsigned int v17; // ecx
  int v18; // ecx
  unsigned int v19; // r10d
  unsigned int v20; // r9d
  int v21; // ecx
  __int64 v22; // rax
  int v23; // r11d
  signed __int32 *v24; // rdi
  unsigned int v25; // esi
  char *v26; // rcx
  unsigned int v27; // ecx
  int v28; // ecx
  __int64 v29; // rdx
  unsigned int v30; // r8d
  int v31; // ecx
  signed __int32 v32; // [rsp+38h] [rbp-28h] BYREF
  __int64 v33; // [rsp+3Ch] [rbp-24h]
  __int64 v34; // [rsp+44h] [rbp-1Ch]
  __int64 v35; // [rsp+4Ch] [rbp-14h]
  int v36; // [rsp+54h] [rbp-Ch]

  v32 = 0;
  result = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  v36 = 0;
  if ( !dword_1403A914C )
    return result;
  if ( byte_1403277D9 == 1 )
    return result;
  if ( !dword_1403A9160 )
    return result;
  result = off_1402F37E8();
  v1 = qword_140326A10;
  if ( !qword_140326A10 )
    return result;
  v2 = 0;
  v3 = 0;
  if ( *(_QWORD *)qword_140326A10 == -1LL )
    goto LABEL_16;
  do
  {
    v4 = *(unsigned __int16 *)(v1 + 12);
    if ( v2 <= v4 )
      v2 = *(unsigned __int16 *)(v1 + 12);
    if ( *(_BYTE *)(v1 + 14) == 1 )
    {
      v3 = 1;
    }
    else
    {
      result = *(unsigned __int16 *)(v1 + 10);
      if ( (unsigned __int16)result < 0x40u && (unsigned __int16)v4 < 4u )
      {
        v5 = v4 + 4 * (unsigned __int16)result;
        result = (__int64)&v32;
        _bittestandset(&v32, v5);
      }
    }
    v1 += 16LL;
  }
  while ( *(_QWORD *)v1 != -1LL );
  v1 = qword_140326A10;
  if ( !v3 )
LABEL_16:
    v2 = 0;
  v6 = v2 + 1;
  MmNumberOfChannels = v6;
  if ( v6 == 1 )
  {
    qword_140326A10 = 0LL;
    return result;
  }
  if ( v6 > 4 )
  {
LABEL_20:
    if ( *(_QWORD *)v1 != -1LL )
    {
      if ( *(_WORD *)(v1 + 12) < 4u )
        goto LABEL_44;
      v7 = *(_WORD *)(v1 + 10);
      if ( v7 >= 0x40u )
        goto LABEL_44;
      v8 = 4 * v7;
      v9 = 255;
      v10 = v8 < 0x100 ? v8 : 0;
      if ( ((unsigned __int8)&v32 & 4) != 0 )
      {
        v11 = 1LL;
        v12 = 32;
      }
      else
      {
        v11 = 0LL;
        v12 = 0;
      }
      v13 = &v32 - v11;
      while ( 1 )
      {
        v14 = v12 + v9;
        if ( v9 - v10 == -1 )
          goto LABEL_29;
        v15 = (char *)&v13[2 * ((unsigned __int64)(v12 + v10) >> 6)];
        for ( i = ((1LL << ((v12 + v10) & 0x3F)) - 1) | ~*(_QWORD *)v15; i == -1; i = ~*(_QWORD *)v15 )
        {
          v15 += 8;
          if ( v15 > (char *)&v13[2 * ((unsigned __int64)v14 >> 6)] )
            goto LABEL_29;
        }
        _BitScanForward64((unsigned __int64 *)&i, ~i);
        v17 = i + ((unsigned int)((v15 - (char *)v13) >> 3) << 6);
        if ( v17 > v14 )
        {
LABEL_29:
          v17 = -1;
        }
        else if ( v17 != -1 )
        {
          v17 -= v12;
LABEL_40:
          if ( v17 < v8 || v17 >= v8 + 4 )
          {
            *(_BYTE *)(v1 + 14) = 0;
            *(_WORD *)(v1 + 12) = 3;
          }
          else
          {
            *(_WORD *)(v1 + 12) = v17 & 3;
          }
LABEL_44:
          v1 += 16LL;
          goto LABEL_20;
        }
        if ( !v10 )
          goto LABEL_40;
        v18 = v8 + 1;
        if ( v8 + 1 > 0x100 )
          v18 = 256;
        v9 = v18 - 1;
        v10 = 0;
      }
    }
    MmNumberOfChannels = 4;
  }
  v19 = 0;
  while ( 2 )
  {
    v20 = v19 < 0x100 ? v19 : 0;
    v21 = 255;
    if ( ((unsigned __int64)&v32 & 4) != 0 )
    {
      v22 = 1LL;
      v23 = 32;
    }
    else
    {
      v22 = 0LL;
      v23 = 0;
    }
    v24 = &v32 - v22;
    while ( 1 )
    {
      v25 = v23 + v21;
      result = v21 - v20 + 1;
      if ( v21 - v20 == -1 )
        goto LABEL_53;
      v26 = (char *)&v24[2 * ((unsigned __int64)(v23 + v20) >> 6)];
      for ( result = ((1LL << ((v23 + v20) & 0x3F)) - 1) | ~*(_QWORD *)v26; result == -1; result = ~*(_QWORD *)v26 )
      {
        v26 += 8;
        if ( v26 > (char *)&v24[2 * ((unsigned __int64)v25 >> 6)] )
          goto LABEL_53;
      }
      _BitScanForward64((unsigned __int64 *)&result, ~result);
      v27 = result + ((unsigned int)((v26 - (char *)v24) >> 3) << 6);
      if ( v27 > v25 )
      {
LABEL_53:
        v27 = -1;
        goto LABEL_54;
      }
      if ( v27 != -1 )
        break;
LABEL_54:
      if ( !v20 )
        goto LABEL_64;
      v28 = v19 + 1;
      if ( v19 + 1 > 0x100 )
        v28 = 256;
      v21 = v28 - 1;
      v20 = 0;
    }
    v27 -= v23;
LABEL_64:
    if ( v27 != -1 && v27 >= v19 )
    {
      v29 = qword_140326A10;
      v19 = v27 + 1;
      v30 = v27 >> 2;
      v31 = v27 & 3;
      while ( *(_QWORD *)v29 != -1LL )
      {
        if ( *(unsigned __int16 *)(v29 + 10) == v30 && *(unsigned __int16 *)(v29 + 12) == v31 )
          *(_BYTE *)(v29 + 14) = 0;
        v29 += 16LL;
      }
      continue;
    }
    return result;
  }
}
