/*
 * XREFs of RtlpCallQueryRegistryRoutine @ 0x1404C8C64
 * Callers:
 *     RtlpQueryRegistryValues @ 0x1404C87C0 (RtlpQueryRegistryValues.c)
 * Callees:
 *     memmove @ 0x140166980 (memmove.c)
 *     RtlpQueryRegistryDirect @ 0x1404C8F40 (RtlpQueryRegistryDirect.c)
 *     RtlpValidateKeyTrust @ 0x1404C9244 (RtlpValidateKeyTrust.c)
 */

__int64 __fastcall RtlpCallQueryRegistryRoutine(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        int *a4,
        __int64 a5,
        int a6,
        char a7)
{
  int v7; // r10d
  unsigned int v10; // ebp
  int v12; // eax
  int v13; // ebx
  unsigned __int64 v14; // r11
  int v15; // edx
  int v16; // ecx
  char *v17; // r14
  char *v18; // rbx
  unsigned int v19; // edi
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 result; // rax
  __int64 v23; // r14
  unsigned int v24; // edx
  int v25; // ecx
  unsigned __int64 v26; // rbp
  _WORD *v27; // rcx
  bool v28; // cf
  int v29; // ecx
  __int64 v30; // rax
  char *v31; // rdi
  char *v32; // r15
  __int16 v33; // ax
  __int64 v34; // rdx
  unsigned int v35; // ebp
  int RegistryDirect; // eax
  unsigned int v38; // eax
  char *v39; // rcx

  v7 = *a4;
  *a4 = 0;
  v10 = (unsigned __int8)*(_DWORD *)(a2 + 32);
  v12 = a3[1];
  v13 = (_DWORD)a3 + v7;
  v14 = (unsigned __int64)a3;
  if ( v12 )
  {
    v15 = a3[2];
    if ( v15 != -1 )
    {
      v16 = a3[3];
      if ( v16 || v12 != v10 )
      {
        if ( (*(_DWORD *)(a2 + 8) & 0x20) != 0 )
        {
          v17 = *(char **)(a2 + 16);
LABEL_6:
          v10 = a3[1];
          v18 = (char *)a3 + (unsigned int)a3[2];
          v19 = a3[3];
          goto LABEL_7;
        }
        if ( v16 )
          v23 = (unsigned int)(v16 + v15);
        else
          v23 = (unsigned int)(a3[4] + 20);
        v24 = a3[4];
        v17 = (char *)(((unsigned __int64)a3 + v23 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
        v25 = v24 + 2;
        v26 = (int)(v24 + 2);
        if ( v26 >= 2 )
        {
          if ( v13 - (int)v17 < v25 )
          {
            result = 3221225507LL;
            *a4 = v25 + (_DWORD)v17 - (_DWORD)a3;
            return result;
          }
          memmove(v17, a3 + 5, v24);
          v14 = (unsigned __int64)&v17[v26 + 7] & 0xFFFFFFFFFFFFFFF8uLL;
          v7 = v13 - v14;
          *(_WORD *)&v17[a3[4]] = 0;
          goto LABEL_6;
        }
        return 3221225532LL;
      }
    }
  }
  if ( !v10 )
  {
    v28 = (*(_BYTE *)(a2 + 8) & 4) != 0;
    return v28 ? 0xC0000034 : 0;
  }
  v19 = *(_DWORD *)(a2 + 48);
  v17 = *(char **)(a2 + 16);
  v18 = *(char **)(a2 + 40);
  if ( !v19 )
  {
    v27 = *(_WORD **)(a2 + 40);
    if ( v10 - 1 <= 1 )
    {
      if ( !v18 )
        return 3221225532LL;
      while ( *v27++ )
        ;
      v19 = (_DWORD)v27 - (_DWORD)v18;
    }
    else if ( v10 == 7 )
    {
      if ( !v18 )
        return 3221225532LL;
      if ( *(_WORD *)v18 )
      {
        do
        {
          while ( *v27++ )
            ;
        }
        while ( *v27 );
      }
      v19 = (_DWORD)v27 - (_DWORD)v18 + 2;
    }
  }
LABEL_7:
  v20 = *(unsigned int *)(a2 + 8);
  v21 = *(_DWORD *)(a2 + 8) & 0x20;
  if ( (*(_DWORD *)(a2 + 8) & 0x20) == 0 )
    goto LABEL_10;
  if ( (v20 & 0x100) == 0 )
  {
    if ( (v20 & 0x80u) == 0LL || v10 - 1 > 1 && v10 != 7 )
      goto LABEL_10;
    v28 = (v20 & 4) != 0;
    return v28 ? 0xC0000034 : 0;
  }
  if ( *(unsigned __int8 *)(a2 + 35) != v10 )
    return 3221225508LL;
LABEL_10:
  if ( (v20 & 0x10) != 0 )
    goto LABEL_13;
  if ( v10 != 7 )
  {
    if ( v10 == 2 )
    {
      v38 = v19 - 2;
      if ( v19 - 2 <= 0xFFFA )
      {
        v39 = v18;
        if ( v19 != 2 )
        {
          while ( *(_WORD *)v39 != 37 )
          {
            v39 += 2;
            v38 -= 2;
            if ( !v38 )
              goto LABEL_13;
          }
          if ( v7 > 0 )
          {
            if ( (unsigned __int64)v7 > 0xFFFE )
              *(_WORD *)(v14 + 65532) = 0;
            else
              *(_WORD *)(v14 + 2 * ((unsigned __int64)v7 >> 1) - 2) = 0;
          }
          return 3221225485LL;
        }
      }
    }
LABEL_13:
    if ( (_DWORD)v21 )
    {
      if ( a7 )
      {
        result = RtlpValidateKeyTrust(a1, v20, v21);
        if ( (int)result < 0 )
          return result;
      }
      result = RtlpQueryRegistryDirect(v10, v18, v19, *(_QWORD *)(a2 + 24));
    }
    else
    {
      result = (*(__int64 (__fastcall **)(char *, _QWORD, char *, _QWORD, __int64, _QWORD))a2)(
                 v17,
                 v10,
                 v18,
                 v19,
                 a5,
                 *(_QWORD *)(a2 + 24));
    }
    if ( (_DWORD)result == -1073741789 )
      return 0LL;
    return result;
  }
  v29 = 0;
  v30 = v19;
  v31 = v18;
  v32 = &v18[v30 - 4];
  if ( v18 < v32 )
  {
    do
    {
      do
      {
        v33 = *(_WORD *)v31;
        v31 += 2;
      }
      while ( v33 );
      v34 = *(unsigned int *)(a2 + 8);
      v35 = (_DWORD)v31 - (_DWORD)v18;
      if ( (v34 & 0x20) != 0 )
      {
        if ( a7 )
        {
          v29 = RtlpValidateKeyTrust(a1, v34, 0LL);
          if ( v29 < 0 )
            return (unsigned int)v29;
        }
        RegistryDirect = RtlpQueryRegistryDirect(1LL, v18, v35, *(_QWORD *)(a2 + 24));
        *(_QWORD *)(a2 + 24) += 16LL;
      }
      else
      {
        RegistryDirect = (*(__int64 (__fastcall **)(char *, __int64, char *, _QWORD, __int64, _QWORD))a2)(
                           v17,
                           1LL,
                           v18,
                           v35,
                           a5,
                           *(_QWORD *)(a2 + 24));
      }
      v29 = RegistryDirect;
      if ( RegistryDirect == -1073741789 )
        v29 = 0;
      if ( v29 < 0 )
        break;
      v18 = v31;
    }
    while ( v31 < v32 );
  }
  return (unsigned int)v29;
}
