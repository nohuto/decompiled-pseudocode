/*
 * XREFs of LdrpFindLoadedDllByName @ 0x180015388
 * Callers:
 *     LdrpFindOrPrepareLoadingModule @ 0x18000C4E4 (LdrpFindOrPrepareLoadingModule.c)
 *     LdrpResolveDllName @ 0x18000CFF8 (LdrpResolveDllName.c)
 *     LdrpFindLoadedDllInternal @ 0x18001138C (LdrpFindLoadedDllInternal.c)
 *     LdrpFastpthReloadedDll @ 0x180011F9C (LdrpFastpthReloadedDll.c)
 *     LdrpLoadDependentModule @ 0x180013200 (LdrpLoadDependentModule.c)
 *     LdrGetDllHandleByName @ 0x1800788F0 (LdrGetDllHandleByName.c)
 *     AVrfInitializeVerifier @ 0x1800CDFDC (AVrfInitializeVerifier.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x1800150E0 (RtlEqualUnicodeString.c)
 *     RtlHashUnicodeString @ 0x180017DC0 (RtlHashUnicodeString.c)
 *     RtlReleaseSRWLockExclusive @ 0x180023A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 *     LdrpLogEtwEvent @ 0x1800CA054 (LdrpLogEtwEvent.c)
 */

__int64 __fastcall LdrpFindLoadedDllByName(unsigned __int16 *a1, unsigned __int16 *a2, char a3, __int64 a4, _DWORD *a5)
{
  unsigned __int16 *v7; // rdi
  unsigned __int16 *v8; // rsi
  unsigned __int64 v9; // rcx
  _WORD *i; // rax
  __int16 v11; // cx
  __int16 v12; // ax
  int v13; // r12d
  char v14; // cl
  _QWORD **v15; // r15
  _QWORD *v16; // r14
  _QWORD *v17; // rbx
  __int64 v18; // rax
  int v19; // ebx
  int v20; // r9d
  char v21; // dl
  __int64 v23; // [rsp+20h] [rbp-48h]
  _WORD v24[4]; // [rsp+30h] [rbp-38h] BYREF
  _WORD *v25; // [rsp+38h] [rbp-30h]
  int v26; // [rsp+70h] [rbp+8h] BYREF

  v7 = a2;
  v8 = a1;
  if ( !a1 )
  {
    a2 = (unsigned __int16 *)*a2;
    v9 = *((_QWORD *)v7 + 1);
    for ( i = (unsigned __int16 *)((char *)a2 + v9 - 2); (unsigned __int64)i > v9; --i )
    {
      if ( *i == 92 || *i == 47 )
      {
        ++i;
        break;
      }
    }
    v25 = i;
    v11 = (_WORD)i - v7[4];
    v8 = v24;
    LOWORD(a2) = (_WORD)a2 - v11;
    v12 = v7[1] - v11;
    v24[0] = (_WORD)a2;
    v24[1] = v12;
  }
  v26 = 0;
  LOBYTE(a2) = 1;
  RtlHashUnicodeString(v8, a2, 0LL, &v26);
  RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
  v13 = v26;
  v14 = 0;
  v15 = (_QWORD **)((char *)&LdrpHashTable + 16 * (v26 & 0x1F));
  v16 = *v15;
  if ( *v15 == v15 )
    goto LABEL_30;
  while ( 1 )
  {
    v17 = v16 - 14;
    if ( v13 != *((_DWORD *)v16 + 38) || (a3 & 8) != 0 && (v17[13] & 1) == 0 )
      goto LABEL_20;
    if ( v7 )
    {
      v14 = RtlEqualUnicodeString(v7, (unsigned __int16 *)v17 + 36, 1);
      goto LABEL_19;
    }
    if ( (v17[13] & 0x10000000) == 0 && RtlEqualUnicodeString(v8, (unsigned __int16 *)v17 + 44, 1) )
      break;
    v14 = 0;
LABEL_19:
    if ( v14 )
      goto LABEL_23;
LABEL_20:
    v16 = (_QWORD *)*v16;
    if ( v16 == v15 )
      goto LABEL_27;
  }
  v14 = 1;
LABEL_23:
  v18 = v17[19];
  if ( *(_DWORD *)(v18 + 24) != -1 && (*(_BYTE *)(*(_QWORD *)v18 - 56LL) & 0x20) == 0 )
    _InterlockedIncrement((volatile signed __int32 *)v17 + 69);
  *(_QWORD *)a4 = v17;
LABEL_27:
  if ( !v14 )
  {
LABEL_30:
    v19 = -1073741515;
    goto LABEL_31;
  }
  v19 = 0;
  if ( a5 )
    *a5 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a4 + 152LL) + 56LL);
LABEL_31:
  RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
  v21 = 3;
  if ( v7 )
  {
    if ( v19 >= 0 )
      v21 = 0;
    if ( MEMORY[0x7FFE0384] && (NtCurrentPeb()->TracingFlags & 4) != 0 && (MEMORY[0x7FFE0385] & 0x20) != 0 )
    {
      v23 = (__int64)v7;
      goto LABEL_44;
    }
  }
  else
  {
    if ( v19 >= 0 )
      v21 = 0;
    if ( MEMORY[0x7FFE0384] && (NtCurrentPeb()->TracingFlags & 4) != 0 && (MEMORY[0x7FFE0385] & 0x20) != 0 )
    {
      v23 = (__int64)v8;
LABEL_44:
      LOBYTE(v20) = v21;
      LdrpLogEtwEvent(5280, 0, 0, v20, v23);
    }
  }
  return (unsigned int)v19;
}
