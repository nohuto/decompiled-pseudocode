/*
 * XREFs of RtlpCallQueryRegistryRoutine @ 0x180057DD8
 * Callers:
 *     RtlpQueryRegistryValues @ 0x1800579E4 (RtlpQueryRegistryValues.c)
 * Callees:
 *     RtlpQueryRegistryDirect @ 0x1800581A4 (RtlpQueryRegistryDirect.c)
 *     RtlpValidateKeyTrust @ 0x180058254 (RtlpValidateKeyTrust.c)
 *     RtlExpandEnvironmentStrings_U @ 0x18005A890 (RtlExpandEnvironmentStrings_U.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1800AC980 (memmove.c)
 */

NTSTATUS __fastcall RtlpCallQueryRegistryRoutine(
        __int64 a1,
        __int64 a2,
        wchar_t *a3,
        _DWORD *a4,
        __int64 a5,
        PVOID Environment,
        char a7)
{
  int v8; // r8d
  wchar_t *v10; // rdx
  __int64 v11; // r10
  int v12; // ebx
  unsigned int v13; // r15d
  unsigned int v14; // ebx
  char *v15; // r12
  wchar_t *Buffer; // rdi
  int v17; // ecx
  NTSTATUS result; // eax
  int v19; // ecx
  int v20; // eax
  bool v21; // cf
  __int64 v22; // r12
  unsigned int v23; // edx
  int v24; // ecx
  unsigned __int64 v25; // rdi
  __int64 v26; // rax
  unsigned int v27; // eax
  wchar_t *v28; // rcx
  unsigned __int64 v29; // r15
  int v30; // ecx
  wchar_t *i; // rbx
  unsigned int v33; // r14d
  int RegistryDirect; // eax
  _WORD *v35; // rcx
  _UNICODE_STRING Destination; // [rsp+40h] [rbp-28h] BYREF
  _UNICODE_STRING Source; // [rsp+50h] [rbp-18h] BYREF
  ULONG ReturnedLength; // [rsp+B8h] [rbp+50h] BYREF
  wchar_t *v42; // [rsp+C0h] [rbp+58h]
  _DWORD *v43; // [rsp+C8h] [rbp+60h]

  v43 = a4;
  v8 = *a4;
  *a4 = 0;
  v10 = a3;
  v11 = a1;
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
          Buffer = (wchar_t *)((char *)a3 + *((unsigned int *)a3 + 2));
          v14 = *((_DWORD *)a3 + 3);
          goto LABEL_4;
        }
        if ( v20 )
          v22 = (unsigned int)(v19 + v20);
        else
          v22 = (unsigned int)(*((_DWORD *)a3 + 4) + 20);
        v23 = *((_DWORD *)a3 + 4);
        v15 = (char *)(((unsigned __int64)a3 + v22 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
        v24 = v23 + 2;
        v25 = (int)(v23 + 2);
        if ( v25 >= 2 )
        {
          if ( v12 - (int)v15 < v24 )
          {
            result = -1073741789;
            *a4 = v24 + (_DWORD)v15 - (_DWORD)a3;
            return result;
          }
          memmove(v15, a3 + 10, v23);
          v26 = *((unsigned int *)a3 + 4);
          v11 = a1;
          v10 = (wchar_t *)((unsigned __int64)&v15[v25 + 7] & 0xFFFFFFFFFFFFFFF8uLL);
          v42 = v10;
          v8 = v12 - (_DWORD)v10;
          *(_WORD *)&v15[v26] = 0;
          goto LABEL_21;
        }
        return -1073741764;
      }
    }
  }
  if ( !*(_BYTE *)(a2 + 32) )
  {
    v21 = (*(_BYTE *)(a2 + 8) & 4) != 0;
    return v21 ? 0xC0000034 : 0;
  }
  v14 = *(_DWORD *)(a2 + 48);
  v15 = *(char **)(a2 + 16);
  Buffer = *(wchar_t **)(a2 + 40);
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
      v21 = (v17 & 4) != 0;
      return v21 ? 0xC0000034 : 0;
    }
  }
  if ( (v17 & 0x10) == 0 )
  {
    if ( v13 == 7 )
    {
      v29 = (unsigned __int64)Buffer + v14 - 4;
      v30 = 0;
      for ( i = Buffer; (unsigned __int64)i < v29; Buffer = i )
      {
        while ( *i++ )
          ;
        v33 = (_DWORD)i - (_DWORD)Buffer;
        if ( (*(_DWORD *)(a2 + 8) & 0x20) != 0 )
        {
          if ( a7 )
          {
            v30 = RtlpValidateKeyTrust(v11);
            if ( v30 < 0 )
              return v30;
          }
          RegistryDirect = RtlpQueryRegistryDirect(1LL, Buffer, v33, *(_QWORD *)(a2 + 24));
          *(_QWORD *)(a2 + 24) += 16LL;
        }
        else
        {
          RegistryDirect = (*(__int64 (__fastcall **)(char *, __int64, wchar_t *, _QWORD, __int64, _QWORD))a2)(
                             v15,
                             1LL,
                             Buffer,
                             v33,
                             a5,
                             *(_QWORD *)(a2 + 24));
        }
        v30 = RegistryDirect;
        if ( RegistryDirect == -1073741789 )
          v30 = 0;
        if ( v30 < 0 )
          break;
        v11 = a1;
      }
      return v30;
    }
    if ( v13 == 2 )
    {
      v27 = v14 - 2;
      if ( v14 - 2 <= 0xFFFA )
      {
        v28 = Buffer;
        if ( v14 != 2 )
        {
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
          Destination.Buffer = v10;
          Destination.Length = 0;
          if ( v8 <= 0 )
          {
            Destination.MaximumLength = 0;
          }
          else if ( (unsigned __int64)v8 > 0xFFFE )
          {
            Destination.MaximumLength = -2;
            v10[32766] = 0;
          }
          else
          {
            Destination.MaximumLength = v8;
            v10[((unsigned __int64)v8 >> 1) - 1] = 0;
          }
          result = RtlExpandEnvironmentStrings_U(Environment, &Source, &Destination, &ReturnedLength);
          v13 = 1;
          if ( result < 0 )
          {
            if ( result == -1073741789 )
              *v43 = ReturnedLength + (_DWORD)v42 - (_DWORD)a3;
            if ( result != -2147483643
              && (result != -1073741789 || Destination.MaximumLength != 0xFFFE && ReturnedLength <= 0xFFFC) )
            {
              return result;
            }
          }
          else
          {
            Buffer = Destination.Buffer;
            v14 = Destination.Length + 2;
          }
        }
      }
    }
  }
LABEL_10:
  if ( (*(_DWORD *)(a2 + 8) & 0x20) == 0 )
  {
    result = (*(__int64 (__fastcall **)(char *, _QWORD, wchar_t *, _QWORD, __int64, _QWORD))a2)(
               v15,
               v13,
               Buffer,
               v14,
               a5,
               *(_QWORD *)(a2 + 24));
LABEL_14:
    if ( result == -1073741789 )
      return 0;
    return result;
  }
  if ( !a7 || (result = RtlpValidateKeyTrust(a1), result >= 0) )
  {
    result = RtlpQueryRegistryDirect(v13, Buffer, v14, *(_QWORD *)(a2 + 24));
    goto LABEL_14;
  }
  return result;
}
