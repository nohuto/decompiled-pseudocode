/*
 * XREFs of RtlNtPathNameToDosPathName @ 0x1800C8860
 * Callers:
 *     <none>
 * Callees:
 *     RtlDetermineDosPathNameType_Ustr @ 0x180017C70 (RtlDetermineDosPathNameType_Ustr.c)
 *     RtlPrefixUnicodeString @ 0x18006ED20 (RtlPrefixUnicodeString.c)
 *     RtlpEnsureBufferSize @ 0x180075450 (RtlpEnsureBufferSize.c)
 *     memmove @ 0x1800AB5C0 (memmove.c)
 */

__int64 __fastcall RtlNtPathNameToDosPathName(int a1, unsigned __int16 *a2, _DWORD *a3, _QWORD *a4)
{
  unsigned int v4; // ebx
  unsigned __int64 v8; // rbp
  const wchar_t *v9; // r14
  unsigned __int16 *v10; // r15
  unsigned __int16 v11; // di
  unsigned __int64 v12; // r8
  __int64 v13; // r9
  int v14; // eax
  __int64 v15; // rax
  unsigned __int16 v16; // di
  int v17; // eax

  v4 = 0;
  v8 = 0LL;
  if ( a3 )
    *a3 = 0;
  if ( !a2 )
    return (unsigned int)-1073741811;
  if ( a1 )
    return (unsigned int)-1073741811;
  if ( a4 )
  {
    if ( *a4 )
    {
      v8 = (__int64)(*a4 - *((_QWORD *)a2 + 1)) >> 1;
      if ( v8 >= (unsigned __int64)*a2 >> 1 )
        return (unsigned int)-1073741811;
    }
  }
  v9 = RtlpDosDevicesUncPrefix;
  if ( !RtlPrefixUnicodeString(RtlpDosDevicesUncPrefix, a2, 1) )
  {
    v9 = L"\b\n";
    if ( RtlPrefixUnicodeString(L"\b\n", a2, 1) )
    {
      v10 = (unsigned __int16 *)&RtlpEmptyString;
      if ( a3 )
        *a3 = 3;
      goto LABEL_14;
    }
    if ( !a3 )
      return v4;
    v17 = RtlDetermineDosPathNameType_Ustr(a2);
    if ( v17 )
    {
      if ( v17 <= 0 )
        return v4;
      if ( v17 <= 2 )
      {
LABEL_30:
        *a3 = 4;
        return v4;
      }
      if ( v17 != 3 && v17 != 4 && v17 != 5 )
      {
        if ( v17 > 7 )
          return v4;
        goto LABEL_30;
      }
    }
    *a3 = 1;
    return v4;
  }
  v10 = (unsigned __int16 *)&unk_180112230;
  if ( a3 )
    *a3 = 2;
LABEL_14:
  v11 = (*v10 >> 1) + (*a2 >> 1) - (*v9 >> 1);
  v12 = 2LL * v11 + 2;
  if ( v12 <= 0xFFFE )
  {
    if ( (a2 == (unsigned __int16 *)-16LL || v12 > *((_QWORD *)a2 + 4))
      && (int)RtlpEnsureBufferSize(0, (__int64)(a2 + 8), v12) < 0 )
    {
      return (unsigned int)-1073741801;
    }
    else
    {
      v13 = *((_QWORD *)a2 + 2);
      a2[1] = a2[16];
      v14 = *a2;
      *((_QWORD *)a2 + 1) = v13;
      memmove(
        (void *)(v13 + 2 * ((unsigned __int64)*v10 >> 1)),
        (const void *)(v13 + 2 * ((unsigned __int64)*v9 >> 1)),
        v14 - *v9);
      memmove(*((void **)a2 + 1), *((const void **)v10 + 1), *v10);
      v15 = *((_QWORD *)a2 + 1);
      v16 = 2 * v11;
      *a2 = v16;
      *(_WORD *)(v15 + 2 * ((unsigned __int64)v16 >> 1)) = 0;
      if ( v8 )
        *a4 = *((_QWORD *)a2 + 1) + 2 * (v8 + ((unsigned __int64)*v10 >> 1) - ((unsigned __int64)*v9 >> 1));
    }
  }
  else
  {
    return (unsigned int)-1073741562;
  }
  return v4;
}
