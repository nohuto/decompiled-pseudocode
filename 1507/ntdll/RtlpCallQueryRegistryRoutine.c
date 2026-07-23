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

NTSTATUS __fastcall RtlpCallQueryRegistryRoutine(
        __int64 a1,
        __int64 a2,
        unsigned __int16 *a3,
        _DWORD *a4,
        __int64 a5,
        PVOID Environment,
        char a7)
{
  int v8; // r8d
  __int64 v10; // r10
  unsigned __int16 *v11; // rdx
  int v12; // edi
  unsigned int v13; // r15d
  unsigned int v14; // edi
  char *v15; // r12
  unsigned __int16 *Buffer; // rsi
  int v17; // ecx
  NTSTATUS result; // eax
  int v19; // ecx
  int v20; // eax
  __int64 v21; // r12
  unsigned int v22; // edx
  int v23; // ecx
  unsigned __int64 v24; // rsi
  __int64 v25; // rax
  bool v26; // cf
  unsigned int v27; // eax
  unsigned __int16 *v28; // rcx
  unsigned __int64 v29; // rbx
  int v30; // ecx
  unsigned __int16 *i; // rdi
  unsigned int v33; // r15d
  int RegistryDirect; // eax
  _WORD *v35; // rcx
  _UNICODE_STRING Destination; // [rsp+30h] [rbp-28h] BYREF
  _UNICODE_STRING Source; // [rsp+40h] [rbp-18h] BYREF
  ULONG ReturnedLength; // [rsp+A8h] [rbp+50h] BYREF
  unsigned __int16 *v42; // [rsp+B0h] [rbp+58h]
  _DWORD *v43; // [rsp+B8h] [rbp+60h]

  v43 = a4;
  v8 = *a4;
  *a4 = 0;
  v10 = a1;
  v11 = a3;
  v42 = a3;
  v12 = (_DWORD)a3 + v8;
  v13 = *(unsigned __int8 *)(a2 + 32);
  if ( *((_DWORD *)a3 + 1) )
  {
    v19 = *((_DWORD *)a3 + 2);
    if ( v19 != -1 )
    {
      v20 = *((_DWORD *)a3 + 3);
      if ( v20 || *((_DWORD *)a3 + 1) != v13 )
      {
        if ( (*(_BYTE *)(a2 + 8) & 0x20) != 0 )
        {
          v15 = *(char **)(a2 + 16);
LABEL_21:
          v13 = *((_DWORD *)a3 + 1);
          Buffer = (unsigned __int16 *)((char *)a3 + *((unsigned int *)a3 + 2));
          v14 = *((_DWORD *)a3 + 3);
          goto LABEL_4;
        }
        if ( v20 )
          v21 = (unsigned int)(v19 + v20);
        else
          v21 = (unsigned int)(*((_DWORD *)a3 + 4) + 20);
        v22 = *((_DWORD *)a3 + 4);
        v15 = (char *)(((unsigned __int64)a3 + v21 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
        v23 = v22 + 2;
        v24 = (int)(v22 + 2);
        if ( v24 >= 2 )
        {
          if ( v12 - (int)v15 < v23 )
          {
            result = -1073741789;
            *a4 = v23 + (_DWORD)v15 - (_DWORD)a3;
            return result;
          }
          memmove(v15, a3 + 10, v22);
          v25 = *((unsigned int *)a3 + 4);
          v10 = a1;
          v11 = (unsigned __int16 *)((unsigned __int64)&v15[v24 + 7] & 0xFFFFFFFFFFFFFFF8uLL);
          v42 = v11;
          v8 = v12 - (_DWORD)v11;
          *(_WORD *)&v15[v25] = 0;
          goto LABEL_21;
        }
        return -1073741764;
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
  Buffer = *(unsigned __int16 **)(a2 + 40);
  if ( !v14 )
  {
    v35 = *(_WORD **)(a2 + 40);
    if ( v13 - 1 <= 1 )
    {
      if ( !Buffer )
        return -1073741764;
      while ( *v35++ )
        ;
      v14 = (_DWORD)v35 - (_DWORD)Buffer;
    }
    else if ( v13 == 7 )
    {
      if ( !Buffer )
        return -1073741764;
      if ( *Buffer )
      {
        do
        {
          while ( *v35++ )
            ;
        }
        while ( *v35 );
      }
      v14 = (_DWORD)v35 - (_DWORD)Buffer + 2;
    }
  }
LABEL_4:
  v17 = *(_DWORD *)(a2 + 8);
  if ( (v17 & 0x20) != 0 )
  {
    if ( (v17 & 0x100) != 0 )
    {
      if ( *(unsigned __int8 *)(a2 + 35) != v13 )
        return -1073741788;
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
    v29 = (unsigned __int64)Buffer + v14 - 4;
    v30 = 0;
    v43 = (_DWORD *)v29;
    for ( i = Buffer; (unsigned __int64)i < v29; Buffer = i )
    {
      while ( *i++ )
        ;
      v33 = (_DWORD)i - (_DWORD)Buffer;
      if ( (*(_DWORD *)(a2 + 8) & 0x20) != 0 )
      {
        if ( a7 )
          RtlpValidateKeyTrust(v10);
        RegistryDirect = RtlpQueryRegistryDirect(1LL, Buffer, v33, *(_QWORD *)(a2 + 24));
        *(_QWORD *)(a2 + 24) += 16LL;
      }
      else
      {
        RegistryDirect = (*(__int64 (__fastcall **)(char *, __int64, unsigned __int16 *, _QWORD, __int64, _QWORD))a2)(
                           v15,
                           1LL,
                           Buffer,
                           v33,
                           a5,
                           *(_QWORD *)(a2 + 24));
        v29 = (unsigned __int64)v43;
      }
      v30 = RegistryDirect;
      if ( RegistryDirect == -1073741789 )
        v30 = 0;
      if ( v30 < 0 )
        break;
      v10 = a1;
    }
    return v30;
  }
  else
  {
    if ( v13 != 2 )
      goto LABEL_10;
    v27 = v14 - 2;
    if ( v14 - 2 > 0xFFFA )
      goto LABEL_10;
    v28 = Buffer;
    if ( v14 == 2 )
      goto LABEL_10;
    while ( *v28 != 37 )
    {
      ++v28;
      v27 -= 2;
      if ( !v27 )
        goto LABEL_10;
    }
    Source.Buffer = Buffer;
    Source.MaximumLength = v14;
    Source.Length = v14 - 2;
    Destination.Buffer = v11;
    Destination.Length = 0;
    if ( v8 <= 0 )
    {
      Destination.MaximumLength = 0;
    }
    else if ( (unsigned __int64)v8 > 0xFFFE )
    {
      Destination.MaximumLength = -2;
      v11[32766] = 0;
    }
    else
    {
      Destination.MaximumLength = v8;
      v11[((unsigned __int64)v8 >> 1) - 1] = 0;
    }
    result = RtlExpandEnvironmentStrings_U(Environment, &Source, &Destination, &ReturnedLength);
    v13 = 1;
    if ( result >= 0 )
    {
      Buffer = Destination.Buffer;
      v14 = Destination.Length + 2;
LABEL_10:
      if ( (*(_DWORD *)(a2 + 8) & 0x20) != 0 )
      {
        if ( a7 )
          RtlpValidateKeyTrust(a1);
        result = RtlpQueryRegistryDirect(v13, Buffer, v14, *(_QWORD *)(a2 + 24));
      }
      else
      {
        result = (*(__int64 (__fastcall **)(char *, _QWORD, unsigned __int16 *, _QWORD, __int64, _QWORD))a2)(
                   v15,
                   v13,
                   Buffer,
                   v14,
                   a5,
                   *(_QWORD *)(a2 + 24));
      }
      if ( result == -1073741789 )
        return 0;
      return result;
    }
    if ( result == -1073741789 )
      *v43 = ReturnedLength + (_DWORD)v42 - (_DWORD)a3;
    if ( result == -2147483643
      || result == -1073741789 && (Destination.MaximumLength == 0xFFFE || ReturnedLength > 0xFFFC) )
    {
      goto LABEL_10;
    }
  }
  return result;
}
