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

__int64 __fastcall LdrpFindLoadedDllByName(
        PUNICODE_STRING String1,
        PUNICODE_STRING a2,
        char a3,
        __int64 a4,
        _DWORD *a5)
{
  _UNICODE_STRING *v8; // rsi
  ULONG v9; // r12d
  BOOLEAN v10; // cl
  _QWORD **v11; // r15
  _QWORD *v12; // r14
  _QWORD *v13; // rbx
  __int64 v14; // rax
  int v15; // ebx
  int v16; // r9d
  char v17; // dl
  __int64 Length; // rdx
  unsigned __int16 *Buffer; // rcx
  unsigned __int16 *i; // rax
  __int16 v22; // cx
  __int16 v23; // ax
  PUNICODE_STRING v24; // [rsp+20h] [rbp-48h]
  _WORD v25[4]; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int16 *v26; // [rsp+38h] [rbp-30h]
  ULONG HashValue; // [rsp+70h] [rbp+8h] BYREF

  v8 = String1;
  if ( !String1 )
  {
    Length = a2->Length;
    Buffer = a2->Buffer;
    for ( i = (unsigned __int16 *)((char *)Buffer + Length - 2); i > Buffer; --i )
    {
      if ( *i == 92 || *i == 47 )
      {
        ++i;
        break;
      }
    }
    v26 = i;
    v22 = (_WORD)i - LOWORD(a2->Buffer);
    v8 = (_UNICODE_STRING *)v25;
    v23 = a2->MaximumLength - v22;
    v25[0] = Length - v22;
    v25[1] = v23;
  }
  HashValue = 0;
  RtlHashUnicodeString(v8, 1u, 0, &HashValue);
  RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
  v9 = HashValue;
  v10 = 0;
  v11 = (_QWORD **)((char *)&LdrpHashTable + 16 * (HashValue & 0x1F));
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
    if ( a2 )
    {
      v10 = RtlEqualUnicodeString(a2, (PUNICODE_STRING)(v13 + 9), 1u);
      goto LABEL_37;
    }
    if ( (v13[13] & 0x10000000) == 0 && RtlEqualUnicodeString(v8, (PUNICODE_STRING)(v13 + 11), 1u) )
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
  if ( a2 )
  {
    if ( v15 >= 0 )
      v17 = 0;
    if ( MEMORY[0x7FFE0384] && (NtCurrentPeb()->TracingFlags & 4) != 0 && (MEMORY[0x7FFE0385] & 0x20) != 0 )
    {
      v24 = a2;
      goto LABEL_48;
    }
  }
  else
  {
    if ( v15 >= 0 )
      v17 = 0;
    if ( MEMORY[0x7FFE0384] && (NtCurrentPeb()->TracingFlags & 4) != 0 && (MEMORY[0x7FFE0385] & 0x20) != 0 )
    {
      v24 = v8;
LABEL_48:
      LOBYTE(v16) = v17;
      LdrpLogEtwEvent(5280, 0, 0, v16, (__int64)v24);
    }
  }
  return (unsigned int)v15;
}
