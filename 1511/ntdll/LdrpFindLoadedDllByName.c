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

__int64 __fastcall LdrpFindLoadedDllByName(
        PUNICODE_STRING String1,
        PUNICODE_STRING a2,
        char a3,
        __int64 a4,
        _DWORD *a5)
{
  _UNICODE_STRING *v8; // rsi
  __int64 Length; // rdx
  unsigned __int16 *Buffer; // rcx
  unsigned __int16 *i; // rax
  __int16 v12; // cx
  __int16 v13; // ax
  ULONG v14; // r12d
  BOOLEAN v15; // cl
  _QWORD **v16; // r15
  _QWORD *v17; // r14
  _QWORD *v18; // rbx
  __int64 v19; // rax
  int v20; // ebx
  int v21; // r9d
  char v22; // dl
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
    v12 = (_WORD)i - LOWORD(a2->Buffer);
    v8 = (_UNICODE_STRING *)v25;
    v13 = a2->MaximumLength - v12;
    v25[0] = Length - v12;
    v25[1] = v13;
  }
  HashValue = 0;
  RtlHashUnicodeString(v8, 1u, 0, &HashValue);
  RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
  v14 = HashValue;
  v15 = 0;
  v16 = (_QWORD **)((char *)&LdrpHashTable + 16 * (HashValue & 0x1F));
  v17 = *v16;
  if ( *v16 == v16 )
    goto LABEL_30;
  while ( 1 )
  {
    v18 = v17 - 14;
    if ( v14 != *((_DWORD *)v17 + 38) || (a3 & 8) != 0 && (v18[13] & 1) == 0 )
      goto LABEL_20;
    if ( a2 )
    {
      v15 = RtlEqualUnicodeString(a2, (PUNICODE_STRING)(v18 + 9), 1u);
      goto LABEL_19;
    }
    if ( (v18[13] & 0x10000000) == 0 && RtlEqualUnicodeString(v8, (PUNICODE_STRING)(v18 + 11), 1u) )
      break;
    v15 = 0;
LABEL_19:
    if ( v15 )
      goto LABEL_23;
LABEL_20:
    v17 = (_QWORD *)*v17;
    if ( v17 == v16 )
      goto LABEL_27;
  }
  v15 = 1;
LABEL_23:
  v19 = v18[19];
  if ( *(_DWORD *)(v19 + 24) != -1 && (*(_BYTE *)(*(_QWORD *)v19 - 56LL) & 0x20) == 0 )
    _InterlockedIncrement((volatile signed __int32 *)v18 + 69);
  *(_QWORD *)a4 = v18;
LABEL_27:
  if ( !v15 )
  {
LABEL_30:
    v20 = -1073741515;
    goto LABEL_31;
  }
  v20 = 0;
  if ( a5 )
    *a5 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a4 + 152LL) + 56LL);
LABEL_31:
  RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
  v22 = 3;
  if ( a2 )
  {
    if ( v20 >= 0 )
      v22 = 0;
    if ( MEMORY[0x7FFE0384] && (NtCurrentPeb()->TracingFlags & 4) != 0 && (MEMORY[0x7FFE0385] & 0x20) != 0 )
    {
      v24 = a2;
      goto LABEL_44;
    }
  }
  else
  {
    if ( v20 >= 0 )
      v22 = 0;
    if ( MEMORY[0x7FFE0384] && (NtCurrentPeb()->TracingFlags & 4) != 0 && (MEMORY[0x7FFE0385] & 0x20) != 0 )
    {
      v24 = v8;
LABEL_44:
      LOBYTE(v21) = v22;
      LdrpLogEtwEvent(5280, 0, 0, v21, (__int64)v24);
    }
  }
  return (unsigned int)v20;
}
