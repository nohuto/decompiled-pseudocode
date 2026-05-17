/*
 * XREFs of LdrpFindLoadedDllByName @ 0x18002467C
 * Callers:
 *     LdrpFindLoadedDllInternal @ 0x1800187EC (LdrpFindLoadedDllInternal.c)
 *     LdrpFastpthReloadedDll @ 0x180020D34 (LdrpFastpthReloadedDll.c)
 *     LdrpLoadDependentModule @ 0x180022010 (LdrpLoadDependentModule.c)
 *     LdrpFindOrPrepareLoadingModule @ 0x18003F368 (LdrpFindOrPrepareLoadingModule.c)
 *     LdrpResolveDllName @ 0x18003F930 (LdrpResolveDllName.c)
 *     LdrGetDllHandleByName @ 0x18006CF40 (LdrGetDllHandleByName.c)
 *     AVrfInitializeVerifier @ 0x1800C4CAC (AVrfInitializeVerifier.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x180023F50 (RtlEqualUnicodeString.c)
 *     RtlHashUnicodeString @ 0x180026F30 (RtlHashUnicodeString.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 *     LdrpLogEtwEvent @ 0x1800BD334 (LdrpLogEtwEvent.c)
 */

__int64 __fastcall LdrpFindLoadedDllByName(unsigned __int16 *a1, unsigned __int16 *a2, char a3, __int64 a4, _DWORD *a5)
{
  unsigned __int16 *v7; // rdi
  unsigned __int16 *v8; // rsi
  int v9; // r12d
  char v10; // cl
  _QWORD **v11; // r15
  _QWORD *v12; // r14
  _QWORD *v13; // rbx
  __int64 v14; // rax
  int v15; // ebx
  int v16; // r9d
  char v17; // dl
  unsigned __int64 v19; // rcx
  _WORD *i; // rax
  __int16 v21; // cx
  __int16 v22; // ax
  __int64 v23; // [rsp+20h] [rbp-48h]
  _WORD v24[4]; // [rsp+30h] [rbp-38h] BYREF
  _WORD *v25; // [rsp+38h] [rbp-30h]
  int v26; // [rsp+70h] [rbp+8h] BYREF

  v7 = a2;
  v8 = a1;
  if ( !a1 )
  {
    a2 = (unsigned __int16 *)*a2;
    v19 = *((_QWORD *)v7 + 1);
    for ( i = (unsigned __int16 *)((char *)a2 + v19 - 2); (unsigned __int64)i > v19; --i )
    {
      if ( *i == 92 || *i == 47 )
      {
        ++i;
        break;
      }
    }
    v25 = i;
    v21 = (_WORD)i - v7[4];
    v8 = v24;
    LOWORD(a2) = (_WORD)a2 - v21;
    v22 = v7[1] - v21;
    v24[0] = (_WORD)a2;
    v24[1] = v22;
  }
  v26 = 0;
  LOBYTE(a2) = 1;
  RtlHashUnicodeString(v8, a2, 0LL, &v26);
  RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
  v9 = v26;
  v10 = 0;
  v11 = (_QWORD **)((char *)&LdrpHashTable + 16 * (v26 & 0x1F));
  v12 = *v11;
  if ( *v11 == v11 )
  {
LABEL_23:
    v15 = -1073741515;
    goto LABEL_14;
  }
  while ( 1 )
  {
    v13 = v12 - 14;
    if ( v9 != *((_DWORD *)v12 + 38) || (a3 & 8) != 0 && (v13[13] & 1) == 0 )
      goto LABEL_19;
    if ( v7 )
    {
      v10 = RtlEqualUnicodeString(v7, (unsigned __int16 *)v13 + 36, 1);
      goto LABEL_37;
    }
    if ( (v13[13] & 0x10000000) == 0 && RtlEqualUnicodeString(v8, (unsigned __int16 *)v13 + 44, 1) )
      break;
    v10 = 0;
LABEL_37:
    if ( v10 )
      goto LABEL_9;
LABEL_19:
    v12 = (_QWORD *)*v12;
    if ( v12 == v11 )
      goto LABEL_11;
  }
  v10 = 1;
LABEL_9:
  v14 = v13[19];
  if ( *(_DWORD *)(v14 + 24) != -1 && (*(_BYTE *)(*(_QWORD *)v14 - 56LL) & 0x20) == 0 )
    _InterlockedIncrement((volatile signed __int32 *)v13 + 69);
  *(_QWORD *)a4 = v13;
LABEL_11:
  if ( !v10 )
    goto LABEL_23;
  v15 = 0;
  if ( a5 )
    *a5 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a4 + 152LL) + 56LL);
LABEL_14:
  RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
  v17 = 3;
  if ( v7 )
  {
    if ( v15 >= 0 )
      v17 = 0;
    if ( MEMORY[0x7FFE0384] && (NtCurrentPeb()->TracingFlags & 4) != 0 && (MEMORY[0x7FFE0385] & 0x20) != 0 )
    {
      v23 = (__int64)v7;
      goto LABEL_48;
    }
  }
  else
  {
    if ( v15 >= 0 )
      v17 = 0;
    if ( MEMORY[0x7FFE0384] && (NtCurrentPeb()->TracingFlags & 4) != 0 && (MEMORY[0x7FFE0385] & 0x20) != 0 )
    {
      v23 = (__int64)v8;
LABEL_48:
      LOBYTE(v16) = v17;
      LdrpLogEtwEvent(5280, 0, 0, v16, v23);
    }
  }
  return (unsigned int)v15;
}
