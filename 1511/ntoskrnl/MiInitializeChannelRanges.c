/*
 * XREFs of MiInitializeChannelRanges @ 0x14077235C
 * Callers:
 *     MmInitNucleus @ 0x140748C60 (MmInitNucleus.c)
 * Callees:
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     xHalSetSystemInformation @ 0x14054F598 (xHalSetSystemInformation.c)
 */

__int64 MiInitializeChannelRanges()
{
  unsigned __int64 v0; // rbp
  __int64 result; // rax
  bool v2; // zf
  __int64 v3; // r9
  unsigned int v4; // edx
  int v5; // r8d
  unsigned int v6; // ecx
  unsigned int v7; // ecx
  unsigned int v8; // edx
  unsigned __int16 v9; // ax
  unsigned int v10; // edi
  unsigned int v11; // r10d
  unsigned int v12; // ecx
  unsigned int v13; // r11d
  __int64 v14; // rax
  int v15; // ebx
  __int64 v16; // rsi
  unsigned int v17; // r14d
  _QWORD *v18; // rcx
  __int64 i; // rax
  unsigned int v20; // ecx
  unsigned int v21; // ecx
  unsigned int v22; // r10d
  unsigned int v23; // ebx
  unsigned int v24; // r9d
  unsigned int v25; // ecx
  __int64 v26; // rax
  int v27; // r11d
  __int64 v28; // rdi
  unsigned int v29; // esi
  _QWORD *v30; // rcx
  unsigned int v31; // ecx
  unsigned int v32; // ecx
  __int64 v33; // rdx
  unsigned int v34; // r8d
  int v35; // ecx
  _BYTE v36[64]; // [rsp+80h] [rbp+80h] BYREF

  v0 = (unsigned __int64)v36 & 0xFFFFFFFFFFFFFFE0uLL;
  *(_DWORD *)(v0 + 24) = 0;
  result = 0LL;
  v2 = dword_140381100 == 0;
  *(_QWORD *)(v0 + 28) = 0LL;
  *(_QWORD *)(v0 + 36) = 0LL;
  *(_QWORD *)(v0 + 44) = 0LL;
  *(_DWORD *)(v0 + 52) = 0;
  if ( v2 )
    return result;
  if ( byte_1402FF6D9 == 1 )
    return result;
  if ( !dword_140381118 )
    return result;
  *(_DWORD *)(((unsigned __int64)v36 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = 256;
  result = off_1402D29C8();
  v3 = qword_1402FE6E0;
  if ( !qword_1402FE6E0 )
    return result;
  v4 = 0;
  v5 = 0;
  if ( *(_QWORD *)qword_1402FE6E0 == -1LL )
    goto LABEL_16;
  do
  {
    v6 = *(unsigned __int16 *)(v3 + 12);
    if ( v4 <= v6 )
      v4 = *(unsigned __int16 *)(v3 + 12);
    if ( *(_BYTE *)(v3 + 14) == 1 )
    {
      v5 = 1;
    }
    else
    {
      result = *(unsigned __int16 *)(v3 + 10);
      if ( (unsigned __int16)result < 0x40u && (unsigned __int16)v6 < 4u )
      {
        v7 = v6 + 4 * (unsigned __int16)result;
        result = v0 + 24;
        _bittestandset((signed __int32 *)(v0 + 24), v7);
      }
    }
    v3 += 16LL;
  }
  while ( *(_QWORD *)v3 != -1LL );
  v3 = qword_1402FE6E0;
  if ( !v5 )
LABEL_16:
    v4 = 0;
  v8 = v4 + 1;
  MmNumberOfChannels = v8;
  if ( v8 == 1 )
  {
    qword_1402FE6E0 = 0LL;
    return result;
  }
  if ( v8 > 4 )
  {
LABEL_20:
    if ( *(_QWORD *)v3 != -1LL )
    {
      if ( *(_WORD *)(v3 + 12) < 4u )
        goto LABEL_44;
      v9 = *(_WORD *)(v3 + 10);
      if ( v9 >= 0x40u )
        goto LABEL_44;
      v10 = *(_DWORD *)(((unsigned __int64)v36 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
      v11 = 4 * v9;
      v12 = v10 - 1;
      v13 = v11 < v10 ? v11 : 0;
      if ( (((_BYTE)v0 + 24) & 4) != 0 )
      {
        v14 = 1LL;
        v15 = 32;
      }
      else
      {
        v14 = 0LL;
        v15 = 0;
      }
      v16 = v0 + 24 - 4 * v14;
      while ( 1 )
      {
        v17 = v15 + v12;
        if ( v12 - v13 == -1 )
          goto LABEL_29;
        v18 = (_QWORD *)(v16 + 8 * ((unsigned __int64)(v15 + v13) >> 6));
        for ( i = ((1LL << ((v15 + v13) & 0x3F)) - 1) | ~*v18; i == -1; i = ~*v18 )
        {
          if ( (unsigned __int64)++v18 > v16 + 8 * ((unsigned __int64)v17 >> 6) )
            goto LABEL_29;
        }
        _BitScanForward64((unsigned __int64 *)&i, ~i);
        v20 = i + ((unsigned int)(((__int64)v18 - v16) >> 3) << 6);
        if ( v20 > v17 )
        {
LABEL_29:
          v20 = -1;
        }
        else if ( v20 != -1 )
        {
          v20 -= v15;
LABEL_40:
          if ( v20 < v11 || v20 >= v11 + 4 )
          {
            *(_BYTE *)(v3 + 14) = 0;
            *(_WORD *)(v3 + 12) = 3;
          }
          else
          {
            *(_WORD *)(v3 + 12) = v20 & 3;
          }
LABEL_44:
          v3 += 16LL;
          goto LABEL_20;
        }
        if ( !v13 )
          goto LABEL_40;
        v21 = v11 + 1;
        if ( v11 + 1 > v10 )
          v21 = *(_DWORD *)(((unsigned __int64)v36 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
        v12 = v21 - 1;
        v13 = 0;
      }
    }
    MmNumberOfChannels = 4;
  }
  v22 = 0;
  while ( 2 )
  {
    v23 = *(_DWORD *)(((unsigned __int64)v36 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
    v24 = v22 < v23 ? v22 : 0;
    v25 = v23 - 1;
    if ( ((v0 + 24) & 4) != 0 )
    {
      v26 = 1LL;
      v27 = 32;
    }
    else
    {
      v26 = 0LL;
      v27 = 0;
    }
    v28 = v0 + 24 - 4 * v26;
    while ( 1 )
    {
      v29 = v27 + v25;
      result = v25 - v24 + 1;
      if ( v25 - v24 == -1 )
        goto LABEL_53;
      v30 = (_QWORD *)(v28 + 8 * ((unsigned __int64)(v27 + v24) >> 6));
      for ( result = ((1LL << ((v27 + v24) & 0x3F)) - 1) | ~*v30; result == -1; result = ~*v30 )
      {
        if ( (unsigned __int64)++v30 > v28 + 8 * ((unsigned __int64)v29 >> 6) )
          goto LABEL_53;
      }
      _BitScanForward64((unsigned __int64 *)&result, ~result);
      v31 = result + ((unsigned int)(((__int64)v30 - v28) >> 3) << 6);
      if ( v31 > v29 )
      {
LABEL_53:
        v31 = -1;
        goto LABEL_54;
      }
      if ( v31 != -1 )
        break;
LABEL_54:
      if ( !v24 )
        goto LABEL_64;
      v32 = v22 + 1;
      if ( v22 + 1 > v23 )
        v32 = *(_DWORD *)(((unsigned __int64)v36 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
      v25 = v32 - 1;
      v24 = 0;
    }
    v31 -= v27;
LABEL_64:
    if ( v31 != -1 && v31 >= v22 )
    {
      v33 = qword_1402FE6E0;
      v22 = v31 + 1;
      v34 = v31 >> 2;
      v35 = v31 & 3;
      while ( *(_QWORD *)v33 != -1LL )
      {
        if ( *(unsigned __int16 *)(v33 + 10) == v34 && *(unsigned __int16 *)(v33 + 12) == v35 )
          *(_BYTE *)(v33 + 14) = 0;
        v33 += 16LL;
      }
      continue;
    }
    return result;
  }
}
