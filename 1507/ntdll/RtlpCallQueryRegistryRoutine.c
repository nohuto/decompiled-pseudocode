/*
 * XREFs of RtlpCallQueryRegistryRoutine @ 0x18000DB50
 * Callers:
 *     RtlpQueryRegistryValues @ 0x18000D754 (RtlpQueryRegistryValues.c)
 * Callees:
 *     RtlpQueryRegistryDirect @ 0x18000DF28 (RtlpQueryRegistryDirect.c)
 *     RtlpValidateKeyTrust @ 0x18000DFD8 (RtlpValidateKeyTrust.c)
 *     RtlExpandEnvironmentStrings_U @ 0x18000F480 (RtlExpandEnvironmentStrings_U.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180075B10 (RtlEndStrongEnumerationHashTable.c)
 *     memmove @ 0x180098200 (memmove.c)
 */

__int64 __fastcall RtlpCallQueryRegistryRoutine(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        _DWORD *a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  int v8; // r8d
  __int64 v10; // r10
  unsigned __int64 v11; // rdx
  int v12; // edi
  unsigned int v13; // r15d
  unsigned int v14; // edi
  char *v15; // r12
  _WORD *v16; // rsi
  int v17; // ecx
  __int64 result; // rax
  int v19; // ecx
  int v20; // eax
  __int64 v21; // r12
  unsigned int v22; // edx
  int v23; // ecx
  unsigned __int64 v24; // rsi
  __int64 v25; // rax
  bool v26; // cf
  unsigned int v27; // eax
  _WORD *v28; // rcx
  unsigned __int64 v29; // rbx
  int v30; // ecx
  _WORD *i; // rdi
  unsigned int v33; // r15d
  int RegistryDirect; // eax
  _WORD *v35; // rcx
  unsigned __int16 v38; // [rsp+30h] [rbp-28h] BYREF
  __int16 v39; // [rsp+32h] [rbp-26h]
  _WORD *v40; // [rsp+38h] [rbp-20h]
  _WORD v41[4]; // [rsp+40h] [rbp-18h] BYREF
  _WORD *v42; // [rsp+48h] [rbp-10h]
  unsigned int v44; // [rsp+A8h] [rbp+50h] BYREF
  _DWORD *v45; // [rsp+B0h] [rbp+58h]
  _DWORD *v46; // [rsp+B8h] [rbp+60h]

  v46 = a4;
  v8 = *a4;
  *a4 = 0;
  v10 = a1;
  v11 = (unsigned __int64)a3;
  v45 = a3;
  v12 = (_DWORD)a3 + v8;
  v13 = *(unsigned __int8 *)(a2 + 32);
  if ( a3[1] )
  {
    v19 = a3[2];
    if ( v19 != -1 )
    {
      v20 = a3[3];
      if ( v20 || a3[1] != v13 )
      {
        if ( (*(_BYTE *)(a2 + 8) & 0x20) != 0 )
        {
          v15 = *(char **)(a2 + 16);
LABEL_21:
          v13 = a3[1];
          v16 = (_WORD *)((char *)a3 + (unsigned int)a3[2]);
          v14 = a3[3];
          goto LABEL_4;
        }
        if ( v20 )
          v21 = (unsigned int)(v19 + v20);
        else
          v21 = (unsigned int)(a3[4] + 20);
        v22 = a3[4];
        v15 = (char *)(((unsigned __int64)a3 + v21 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
        v23 = v22 + 2;
        v24 = (int)(v22 + 2);
        if ( v24 >= 2 )
        {
          if ( v12 - (int)v15 < v23 )
          {
            result = 3221225507LL;
            *a4 = v23 + (_DWORD)v15 - (_DWORD)a3;
            return result;
          }
          memmove(v15, a3 + 5, v22);
          v25 = (unsigned int)a3[4];
          v10 = a1;
          v11 = (unsigned __int64)&v15[v24 + 7] & 0xFFFFFFFFFFFFFFF8uLL;
          v45 = (_DWORD *)v11;
          v8 = v12 - v11;
          *(_WORD *)&v15[v25] = 0;
          goto LABEL_21;
        }
        return 3221225532LL;
      }
    }
  }
  if ( !*(_BYTE *)(a2 + 32) )
  {
    v26 = (*(_BYTE *)(a2 + 8) & 4) != 0;
    return v26 ? 0xC0000034 : 0;
  }
  v14 = *(_DWORD *)(a2 + 48);
  v15 = *(char **)(a2 + 16);
  v16 = *(_WORD **)(a2 + 40);
  if ( !v14 )
  {
    v35 = *(_WORD **)(a2 + 40);
    if ( v13 - 1 <= 1 )
    {
      if ( !v16 )
        return 3221225532LL;
      while ( *v35++ )
        ;
      v14 = (_DWORD)v35 - (_DWORD)v16;
    }
    else if ( v13 == 7 )
    {
      if ( !v16 )
        return 3221225532LL;
      if ( *v16 )
      {
        do
        {
          while ( *v35++ )
            ;
        }
        while ( *v35 );
      }
      v14 = (_DWORD)v35 - (_DWORD)v16 + 2;
    }
  }
LABEL_4:
  v17 = *(_DWORD *)(a2 + 8);
  if ( (v17 & 0x20) != 0 )
  {
    if ( (v17 & 0x100) != 0 )
    {
      if ( *(unsigned __int8 *)(a2 + 35) != v13 )
        return 3221225508LL;
    }
    else if ( (v17 & 0x80u) != 0 && (v13 - 1 <= 1 || v13 == 7) )
    {
      v26 = (v17 & 4) != 0;
      return v26 ? 0xC0000034 : 0;
    }
  }
  if ( (v17 & 0x10) != 0 )
    goto LABEL_10;
  if ( v13 == 7 )
  {
    v29 = (unsigned __int64)v16 + v14 - 4;
    v30 = 0;
    v46 = (_DWORD *)v29;
    for ( i = v16; (unsigned __int64)i < v29; v16 = i )
    {
      while ( *i++ )
        ;
      v33 = (_DWORD)i - (_DWORD)v16;
      if ( (*(_DWORD *)(a2 + 8) & 0x20) != 0 )
      {
        if ( a7 )
          RtlpValidateKeyTrust(v10);
        RegistryDirect = RtlpQueryRegistryDirect(1LL, v16, v33, *(_QWORD *)(a2 + 24));
        *(_QWORD *)(a2 + 24) += 16LL;
      }
      else
      {
        RegistryDirect = (*(__int64 (__fastcall **)(char *, __int64, _WORD *, _QWORD, __int64, _QWORD))a2)(
                           v15,
                           1LL,
                           v16,
                           v33,
                           a5,
                           *(_QWORD *)(a2 + 24));
        v29 = (unsigned __int64)v46;
      }
      v30 = RegistryDirect;
      if ( RegistryDirect == -1073741789 )
        v30 = 0;
      if ( v30 < 0 )
        break;
      v10 = a1;
    }
    return (unsigned int)v30;
  }
  else
  {
    if ( v13 != 2 )
      goto LABEL_10;
    v27 = v14 - 2;
    if ( v14 - 2 > 0xFFFA )
      goto LABEL_10;
    v28 = v16;
    if ( v14 == 2 )
      goto LABEL_10;
    while ( *v28 != 37 )
    {
      ++v28;
      v27 -= 2;
      if ( !v27 )
        goto LABEL_10;
    }
    v42 = v16;
    v41[1] = v14;
    v41[0] = v14 - 2;
    v40 = (_WORD *)v11;
    v38 = 0;
    if ( v8 <= 0 )
    {
      v39 = 0;
    }
    else if ( (unsigned __int64)v8 > 0xFFFE )
    {
      v39 = -2;
      *(_WORD *)(v11 + 65532) = 0;
    }
    else
    {
      v39 = v8;
      *(_WORD *)(v11 + 2 * ((unsigned __int64)v8 >> 1) - 2) = 0;
    }
    result = RtlExpandEnvironmentStrings_U(a6, v41, &v38, &v44);
    v13 = 1;
    if ( (int)result >= 0 )
    {
      v16 = v40;
      v14 = v38 + 2;
LABEL_10:
      if ( (*(_DWORD *)(a2 + 8) & 0x20) != 0 )
      {
        if ( a7 )
          RtlpValidateKeyTrust(a1);
        result = RtlpQueryRegistryDirect(v13, v16, v14, *(_QWORD *)(a2 + 24));
      }
      else
      {
        result = (*(__int64 (__fastcall **)(char *, _QWORD, _WORD *, _QWORD, __int64, _QWORD))a2)(
                   v15,
                   v13,
                   v16,
                   v14,
                   a5,
                   *(_QWORD *)(a2 + 24));
      }
      if ( (_DWORD)result == -1073741789 )
        return 0LL;
      return result;
    }
    if ( (_DWORD)result == -1073741789 )
      *v46 = v44 + (_DWORD)v45 - (_DWORD)a3;
    if ( (_DWORD)result == -2147483643 || (_DWORD)result == -1073741789 && (v39 == -2 || v44 > 0xFFFC) )
      goto LABEL_10;
  }
  return result;
}
