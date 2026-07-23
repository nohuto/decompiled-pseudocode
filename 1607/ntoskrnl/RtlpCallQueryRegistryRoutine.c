/*
 * XREFs of RtlpCallQueryRegistryRoutine @ 0x1404DB43C
 * Callers:
 *     RtlpQueryRegistryValues @ 0x1404DAFA4 (RtlpQueryRegistryValues.c)
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 *     RtlpValidateKeyTrust @ 0x1404DA4C4 (RtlpValidateKeyTrust.c)
 *     RtlpQueryRegistryDirect @ 0x1404DB708 (RtlpQueryRegistryDirect.c)
 */

NTSTATUS __fastcall RtlpCallQueryRegistryRoutine(
        void *a1,
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
  int v20; // edx
  NTSTATUS result; // eax
  __int64 v22; // r14
  unsigned int v23; // edx
  int v24; // ecx
  unsigned __int64 v25; // rbp
  _WORD *v26; // rcx
  bool v27; // cf
  NTSTATUS v28; // ecx
  __int64 v29; // rax
  char *v30; // rdi
  char *v31; // r15
  __int16 v32; // ax
  int v33; // edx
  unsigned int v34; // ebp
  NTSTATUS RegistryDirect; // eax
  unsigned int v37; // eax
  char *v38; // rcx

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
          v22 = (unsigned int)(v16 + v15);
        else
          v22 = (unsigned int)(a3[4] + 20);
        v23 = a3[4];
        v17 = (char *)(((unsigned __int64)a3 + v22 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
        v24 = v23 + 2;
        v25 = (int)(v23 + 2);
        if ( v25 >= 2 )
        {
          if ( v13 - (int)v17 < v24 )
          {
            result = -1073741789;
            *a4 = v24 + (_DWORD)v17 - (_DWORD)a3;
            return result;
          }
          memmove(v17, a3 + 5, v23);
          v14 = (unsigned __int64)&v17[v25 + 7] & 0xFFFFFFFFFFFFFFF8uLL;
          v7 = v13 - v14;
          *(_WORD *)&v17[a3[4]] = 0;
          goto LABEL_6;
        }
        return -1073741764;
      }
    }
  }
  if ( !v10 )
  {
    v27 = (*(_BYTE *)(a2 + 8) & 4) != 0;
    return v27 ? 0xC0000034 : 0;
  }
  v19 = *(_DWORD *)(a2 + 48);
  v17 = *(char **)(a2 + 16);
  v18 = *(char **)(a2 + 40);
  if ( !v19 )
  {
    v26 = *(_WORD **)(a2 + 40);
    if ( v10 - 1 <= 1 )
    {
      if ( !v18 )
        return -1073741764;
      while ( *v26++ )
        ;
      v19 = (_DWORD)v26 - (_DWORD)v18;
    }
    else if ( v10 == 7 )
    {
      if ( !v18 )
        return -1073741764;
      if ( *(_WORD *)v18 )
      {
        do
        {
          while ( *v26++ )
            ;
        }
        while ( *v26 );
      }
      v19 = (_DWORD)v26 - (_DWORD)v18 + 2;
    }
  }
LABEL_7:
  v20 = *(_DWORD *)(a2 + 8);
  if ( (v20 & 0x20) == 0 )
    goto LABEL_10;
  if ( (v20 & 0x100) == 0 )
  {
    if ( (v20 & 0x80u) == 0 || v10 - 1 > 1 && v10 != 7 )
      goto LABEL_10;
    v27 = (v20 & 4) != 0;
    return v27 ? 0xC0000034 : 0;
  }
  if ( *(unsigned __int8 *)(a2 + 35) != v10 )
    return -1073741788;
LABEL_10:
  if ( (v20 & 0x10) != 0 )
    goto LABEL_13;
  if ( v10 != 7 )
  {
    if ( v10 == 2 )
    {
      v37 = v19 - 2;
      if ( v19 - 2 <= 0xFFFA )
      {
        v38 = v18;
        if ( v19 != 2 )
        {
          while ( *(_WORD *)v38 != 37 )
          {
            v38 += 2;
            v37 -= 2;
            if ( !v37 )
              goto LABEL_13;
          }
          if ( v7 > 0 )
          {
            if ( (unsigned __int64)v7 > 0xFFFE )
              *(_WORD *)(v14 + 65532) = 0;
            else
              *(_WORD *)(v14 + 2 * ((unsigned __int64)v7 >> 1) - 2) = 0;
          }
          return -1073741811;
        }
      }
    }
LABEL_13:
    if ( (*(_DWORD *)(a2 + 8) & 0x20) != 0 )
    {
      if ( a7 )
      {
        result = RtlpValidateKeyTrust(a1, v20);
        if ( result < 0 )
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
    if ( result == -1073741789 )
      return 0;
    return result;
  }
  v28 = 0;
  v29 = v19;
  v30 = v18;
  v31 = &v18[v29 - 4];
  if ( v18 < v31 )
  {
    do
    {
      do
      {
        v32 = *(_WORD *)v30;
        v30 += 2;
      }
      while ( v32 );
      v33 = *(_DWORD *)(a2 + 8);
      v34 = (_DWORD)v30 - (_DWORD)v18;
      if ( (v33 & 0x20) != 0 )
      {
        if ( a7 )
        {
          v28 = RtlpValidateKeyTrust(a1, v33);
          if ( v28 < 0 )
            return v28;
        }
        RegistryDirect = RtlpQueryRegistryDirect(1LL, v18, v34, *(_QWORD *)(a2 + 24));
        *(_QWORD *)(a2 + 24) += 16LL;
      }
      else
      {
        RegistryDirect = (*(__int64 (__fastcall **)(char *, __int64, char *, _QWORD, __int64, _QWORD))a2)(
                           v17,
                           1LL,
                           v18,
                           v34,
                           a5,
                           *(_QWORD *)(a2 + 24));
      }
      v28 = RegistryDirect;
      if ( RegistryDirect == -1073741789 )
        v28 = 0;
      if ( v28 < 0 )
        break;
      v18 = v30;
    }
    while ( v30 < v31 );
  }
  return v28;
}
