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

__int64 __fastcall RtlpCallQueryRegistryRoutine(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        int *a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  __int64 v8; // r8
  __int64 v10; // r10
  unsigned __int64 v11; // rdx
  int v12; // edi
  unsigned int v13; // r15d
  int v14; // ecx
  int v15; // eax
  char *v16; // r12
  _WORD *v17; // rsi
  unsigned int v18; // edi
  int v19; // ecx
  __int64 v20; // rdx
  __int64 result; // rax
  _WORD *v22; // rcx
  bool v23; // cf
  __int64 v24; // r12
  unsigned int v25; // edx
  int v26; // ecx
  unsigned __int64 v27; // rsi
  __int64 v28; // rax
  unsigned int v29; // eax
  _WORD *v30; // rcx
  unsigned __int64 v31; // rbx
  int v32; // ecx
  _WORD *i; // rdi
  __int64 v35; // rdx
  unsigned int v36; // r15d
  int RegistryDirect; // eax
  unsigned __int16 v40; // [rsp+30h] [rbp-28h] BYREF
  __int16 v41; // [rsp+32h] [rbp-26h]
  _WORD *v42; // [rsp+38h] [rbp-20h]
  _WORD v43[4]; // [rsp+40h] [rbp-18h] BYREF
  _WORD *v44; // [rsp+48h] [rbp-10h]
  unsigned int v46; // [rsp+A8h] [rbp+50h] BYREF
  _DWORD *v47; // [rsp+B0h] [rbp+58h]
  _DWORD *v48; // [rsp+B8h] [rbp+60h]

  v48 = a4;
  v8 = *a4;
  *a4 = 0;
  v10 = a1;
  v11 = (unsigned __int64)a3;
  v47 = a3;
  v12 = (_DWORD)a3 + v8;
  v13 = *(unsigned __int8 *)(a2 + 32);
  if ( a3[1] )
  {
    v14 = a3[2];
    if ( v14 != -1 )
    {
      v15 = a3[3];
      if ( v15 || a3[1] != v13 )
      {
        if ( (*(_BYTE *)(a2 + 8) & 0x20) != 0 )
        {
          v16 = *(char **)(a2 + 16);
LABEL_6:
          v13 = a3[1];
          v17 = (_WORD *)((char *)a3 + (unsigned int)a3[2]);
          v18 = a3[3];
          goto LABEL_7;
        }
        if ( v15 )
          v24 = (unsigned int)(v14 + v15);
        else
          v24 = (unsigned int)(a3[4] + 20);
        v25 = a3[4];
        v16 = (char *)(((unsigned __int64)a3 + v24 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
        v26 = v25 + 2;
        v27 = (int)(v25 + 2);
        if ( v27 >= 2 )
        {
          if ( v12 - (int)v16 < v26 )
          {
            result = 3221225507LL;
            *a4 = v26 + (_DWORD)v16 - (_DWORD)a3;
            return result;
          }
          memmove(v16, a3 + 5, v25);
          v28 = (unsigned int)a3[4];
          v10 = a1;
          v11 = (unsigned __int64)&v16[v27 + 7] & 0xFFFFFFFFFFFFFFF8uLL;
          v47 = (_DWORD *)v11;
          v8 = (unsigned int)(v12 - v11);
          *(_WORD *)&v16[v28] = 0;
          goto LABEL_6;
        }
        return 3221225532LL;
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
  v17 = *(_WORD **)(a2 + 40);
  if ( !v18 )
  {
    v22 = *(_WORD **)(a2 + 40);
    if ( v13 - 1 <= 1 )
    {
      if ( !v17 )
        return 3221225532LL;
      while ( *v22++ )
        ;
      v18 = (_DWORD)v22 - (_DWORD)v17;
    }
    else if ( v13 == 7 )
    {
      if ( !v17 )
        return 3221225532LL;
      if ( *v17 )
      {
        do
        {
          while ( *v22++ )
            ;
        }
        while ( *v22 );
      }
      v18 = (_DWORD)v22 - (_DWORD)v17 + 2;
    }
  }
LABEL_7:
  v19 = *(_DWORD *)(a2 + 8);
  if ( (v19 & 0x20) != 0 )
  {
    if ( (v19 & 0x100) != 0 )
    {
      if ( *(unsigned __int8 *)(a2 + 35) != v13 )
        return 3221225508LL;
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
      v31 = (unsigned __int64)v17 + v18 - 4;
      v32 = 0;
      v48 = (_DWORD *)v31;
      for ( i = v17; (unsigned __int64)i < v31; v17 = i )
      {
        while ( *i++ )
          ;
        v35 = *(unsigned int *)(a2 + 8);
        v36 = (_DWORD)i - (_DWORD)v17;
        if ( (v35 & 0x20) != 0 )
        {
          if ( a7 )
          {
            v32 = RtlpValidateKeyTrust(v10, v35, v8);
            if ( v32 < 0 )
              return (unsigned int)v32;
          }
          RegistryDirect = RtlpQueryRegistryDirect(1LL, v17, v36, *(_QWORD *)(a2 + 24));
          *(_QWORD *)(a2 + 24) += 16LL;
        }
        else
        {
          RegistryDirect = (*(__int64 (__fastcall **)(char *, __int64, _WORD *, _QWORD, __int64, _QWORD))a2)(
                             v16,
                             1LL,
                             v17,
                             v36,
                             a5,
                             *(_QWORD *)(a2 + 24));
          v31 = (unsigned __int64)v48;
        }
        v32 = RegistryDirect;
        if ( RegistryDirect == -1073741789 )
          v32 = 0;
        if ( v32 < 0 )
          break;
        v10 = a1;
      }
      return (unsigned int)v32;
    }
    if ( v13 == 2 )
    {
      v29 = v18 - 2;
      if ( v18 - 2 <= 0xFFFA )
      {
        v30 = v17;
        if ( v18 != 2 )
        {
          while ( *v30 != 37 )
          {
            ++v30;
            v29 -= 2;
            if ( !v29 )
              goto LABEL_13;
          }
          v44 = v17;
          v43[1] = v18;
          v43[0] = v18 - 2;
          v42 = (_WORD *)v11;
          v40 = 0;
          if ( (int)v8 <= 0 )
          {
            v41 = 0;
          }
          else if ( (unsigned __int64)(int)v8 > 0xFFFE )
          {
            v41 = -2;
            *(_WORD *)(v11 + 65532) = 0;
          }
          else
          {
            v41 = v8;
            *(_WORD *)(v11 + 2 * ((unsigned __int64)(int)v8 >> 1) - 2) = 0;
          }
          result = RtlExpandEnvironmentStrings_U(a6, v43, &v40, &v46);
          v13 = 1;
          if ( (int)result < 0 )
          {
            if ( (_DWORD)result == -1073741789 )
              *v48 = v46 + (_DWORD)v47 - (_DWORD)a3;
            if ( (_DWORD)result != -2147483643 && ((_DWORD)result != -1073741789 || v41 != -2 && v46 <= 0xFFFC) )
              return result;
          }
          else
          {
            v17 = v42;
            v18 = v40 + 2;
          }
        }
      }
    }
  }
LABEL_13:
  v20 = *(unsigned int *)(a2 + 8);
  if ( (v20 & 0x20) == 0 )
  {
    result = (*(__int64 (__fastcall **)(char *, _QWORD, _WORD *, _QWORD, __int64, _QWORD))a2)(
               v16,
               v13,
               v17,
               v18,
               a5,
               *(_QWORD *)(a2 + 24));
LABEL_17:
    if ( (_DWORD)result == -1073741789 )
      return 0LL;
    return result;
  }
  if ( !a7 || (result = RtlpValidateKeyTrust(a1, v20, v8), (int)result >= 0) )
  {
    result = RtlpQueryRegistryDirect(v13, v17, v18, *(_QWORD *)(a2 + 24));
    goto LABEL_17;
  }
  return result;
}
