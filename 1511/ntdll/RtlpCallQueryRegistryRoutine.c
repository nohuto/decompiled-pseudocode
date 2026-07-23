/*
 * XREFs of RtlpCallQueryRegistryRoutine @ 0x180046A98
 * Callers:
 *     RtlpQueryRegistryValues @ 0x1800466A4 (RtlpQueryRegistryValues.c)
 * Callees:
 *     RtlpQueryRegistryDirect @ 0x180046E70 (RtlpQueryRegistryDirect.c)
 *     RtlpValidateKeyTrust @ 0x180046F20 (RtlpValidateKeyTrust.c)
 *     RtlExpandEnvironmentStrings_U @ 0x180048FD0 (RtlExpandEnvironmentStrings_U.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180081AE0 (RtlEndStrongEnumerationHashTable.c)
 *     memmove @ 0x1800AB5C0 (memmove.c)
 */

NTSTATUS __fastcall RtlpCallQueryRegistryRoutine(
        __int64 a1,
        __int64 a2,
        unsigned __int16 *a3,
        int *a4,
        __int64 a5,
        PVOID Environment,
        char a7)
{
  __int64 v8; // r8
  __int64 v10; // r10
  unsigned __int16 *v11; // rdx
  int v12; // edi
  unsigned int v13; // r15d
  int v14; // ecx
  int v15; // eax
  char *v16; // r12
  unsigned __int16 *Buffer; // rsi
  unsigned int v18; // edi
  int v19; // ecx
  __int64 v20; // rdx
  NTSTATUS result; // eax
  _WORD *v22; // rcx
  bool v23; // cf
  __int64 v24; // r12
  unsigned int v25; // edx
  int v26; // ecx
  unsigned __int64 v27; // rsi
  __int64 v28; // rax
  unsigned int v29; // eax
  unsigned __int16 *v30; // rcx
  unsigned __int64 v31; // rbx
  int v32; // ecx
  unsigned __int16 *i; // rdi
  __int64 v35; // rdx
  unsigned int v36; // r15d
  int RegistryDirect; // eax
  _UNICODE_STRING Destination; // [rsp+30h] [rbp-28h] BYREF
  _UNICODE_STRING Source; // [rsp+40h] [rbp-18h] BYREF
  ULONG ReturnedLength; // [rsp+A8h] [rbp+50h] BYREF
  unsigned __int16 *v44; // [rsp+B0h] [rbp+58h]
  _DWORD *v45; // [rsp+B8h] [rbp+60h]

  v45 = a4;
  v8 = *a4;
  *a4 = 0;
  v10 = a1;
  v11 = a3;
  v44 = a3;
  v12 = (_DWORD)a3 + v8;
  v13 = *(unsigned __int8 *)(a2 + 32);
  if ( *((_DWORD *)a3 + 1) )
  {
    v14 = *((_DWORD *)a3 + 2);
    if ( v14 != -1 )
    {
      v15 = *((_DWORD *)a3 + 3);
      if ( v15 || *((_DWORD *)a3 + 1) != v13 )
      {
        if ( (*(_BYTE *)(a2 + 8) & 0x20) != 0 )
        {
          v16 = *(char **)(a2 + 16);
LABEL_6:
          v13 = *((_DWORD *)a3 + 1);
          Buffer = (unsigned __int16 *)((char *)a3 + *((unsigned int *)a3 + 2));
          v18 = *((_DWORD *)a3 + 3);
          goto LABEL_7;
        }
        if ( v15 )
          v24 = (unsigned int)(v14 + v15);
        else
          v24 = (unsigned int)(*((_DWORD *)a3 + 4) + 20);
        v25 = *((_DWORD *)a3 + 4);
        v16 = (char *)(((unsigned __int64)a3 + v24 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
        v26 = v25 + 2;
        v27 = (int)(v25 + 2);
        if ( v27 >= 2 )
        {
          if ( v12 - (int)v16 < v26 )
          {
            result = -1073741789;
            *a4 = v26 + (_DWORD)v16 - (_DWORD)a3;
            return result;
          }
          memmove(v16, a3 + 10, v25);
          v28 = *((unsigned int *)a3 + 4);
          v10 = a1;
          v11 = (unsigned __int16 *)((unsigned __int64)&v16[v27 + 7] & 0xFFFFFFFFFFFFFFF8uLL);
          v44 = v11;
          v8 = (unsigned int)(v12 - (_DWORD)v11);
          *(_WORD *)&v16[v28] = 0;
          goto LABEL_6;
        }
        return -1073741764;
      }
    }
  }
  if ( !*(_BYTE *)(a2 + 32) )
  {
    v23 = (*(_BYTE *)(a2 + 8) & 4) != 0;
    return v23 ? 0xC0000034 : 0;
  }
  v18 = *(_DWORD *)(a2 + 48);
  v16 = *(char **)(a2 + 16);
  Buffer = *(unsigned __int16 **)(a2 + 40);
  if ( !v18 )
  {
    v22 = *(_WORD **)(a2 + 40);
    if ( v13 - 1 <= 1 )
    {
      if ( !Buffer )
        return -1073741764;
      while ( *v22++ )
        ;
      v18 = (_DWORD)v22 - (_DWORD)Buffer;
    }
    else if ( v13 == 7 )
    {
      if ( !Buffer )
        return -1073741764;
      if ( *Buffer )
      {
        do
        {
          while ( *v22++ )
            ;
        }
        while ( *v22 );
      }
      v18 = (_DWORD)v22 - (_DWORD)Buffer + 2;
    }
  }
LABEL_7:
  v19 = *(_DWORD *)(a2 + 8);
  if ( (v19 & 0x20) != 0 )
  {
    if ( (v19 & 0x100) != 0 )
    {
      if ( *(unsigned __int8 *)(a2 + 35) != v13 )
        return -1073741788;
    }
    else if ( (v19 & 0x80u) != 0 && (v13 - 1 <= 1 || v13 == 7) )
    {
      v23 = (v19 & 4) != 0;
      return v23 ? 0xC0000034 : 0;
    }
  }
  if ( (v19 & 0x10) == 0 )
  {
    if ( v13 == 7 )
    {
      v31 = (unsigned __int64)Buffer + v18 - 4;
      v32 = 0;
      v45 = (_DWORD *)v31;
      for ( i = Buffer; (unsigned __int64)i < v31; Buffer = i )
      {
        while ( *i++ )
          ;
        v35 = *(unsigned int *)(a2 + 8);
        v36 = (_DWORD)i - (_DWORD)Buffer;
        if ( (v35 & 0x20) != 0 )
        {
          if ( a7 )
          {
            v32 = RtlpValidateKeyTrust(v10, v35, v8);
            if ( v32 < 0 )
              return v32;
          }
          RegistryDirect = RtlpQueryRegistryDirect(1LL, Buffer, v36, *(_QWORD *)(a2 + 24));
          *(_QWORD *)(a2 + 24) += 16LL;
        }
        else
        {
          RegistryDirect = (*(__int64 (__fastcall **)(char *, __int64, unsigned __int16 *, _QWORD, __int64, _QWORD))a2)(
                             v16,
                             1LL,
                             Buffer,
                             v36,
                             a5,
                             *(_QWORD *)(a2 + 24));
          v31 = (unsigned __int64)v45;
        }
        v32 = RegistryDirect;
        if ( RegistryDirect == -1073741789 )
          v32 = 0;
        if ( v32 < 0 )
          break;
        v10 = a1;
      }
      return v32;
    }
    if ( v13 == 2 )
    {
      v29 = v18 - 2;
      if ( v18 - 2 <= 0xFFFA )
      {
        v30 = Buffer;
        if ( v18 != 2 )
        {
          while ( *v30 != 37 )
          {
            ++v30;
            v29 -= 2;
            if ( !v29 )
              goto LABEL_13;
          }
          Source.Buffer = Buffer;
          Source.MaximumLength = v18;
          Source.Length = v18 - 2;
          Destination.Buffer = v11;
          Destination.Length = 0;
          if ( (int)v8 <= 0 )
          {
            Destination.MaximumLength = 0;
          }
          else if ( (unsigned __int64)(int)v8 > 0xFFFE )
          {
            Destination.MaximumLength = -2;
            v11[32766] = 0;
          }
          else
          {
            Destination.MaximumLength = v8;
            v11[((unsigned __int64)(int)v8 >> 1) - 1] = 0;
          }
          result = RtlExpandEnvironmentStrings_U(Environment, &Source, &Destination, &ReturnedLength);
          v13 = 1;
          if ( result < 0 )
          {
            if ( result == -1073741789 )
              *v45 = ReturnedLength + (_DWORD)v44 - (_DWORD)a3;
            if ( result != -2147483643
              && (result != -1073741789 || Destination.MaximumLength != 0xFFFE && ReturnedLength <= 0xFFFC) )
            {
              return result;
            }
          }
          else
          {
            Buffer = Destination.Buffer;
            v18 = Destination.Length + 2;
          }
        }
      }
    }
  }
LABEL_13:
  v20 = *(unsigned int *)(a2 + 8);
  if ( (v20 & 0x20) == 0 )
  {
    result = (*(__int64 (__fastcall **)(char *, _QWORD, unsigned __int16 *, _QWORD, __int64, _QWORD))a2)(
               v16,
               v13,
               Buffer,
               v18,
               a5,
               *(_QWORD *)(a2 + 24));
LABEL_17:
    if ( result == -1073741789 )
      return 0;
    return result;
  }
  if ( !a7 || (result = RtlpValidateKeyTrust(a1, v20, v8), result >= 0) )
  {
    result = RtlpQueryRegistryDirect(v13, Buffer, v18, *(_QWORD *)(a2 + 24));
    goto LABEL_17;
  }
  return result;
}
