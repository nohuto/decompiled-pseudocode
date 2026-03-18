/*
 * XREFs of SepCreateClientSecurityEx @ 0x14042C5D0
 * Callers:
 *     SeCreateClientSecurityFromSubjectContextEx @ 0x140200BB8 (SeCreateClientSecurityFromSubjectContextEx.c)
 *     AlpcpExposeTokenAttribute @ 0x14042B240 (AlpcpExposeTokenAttribute.c)
 *     SeCreateClientSecurity @ 0x14042CA10 (SeCreateClientSecurity.c)
 *     SeCreateClientSecurityEx @ 0x1404A629C (SeCreateClientSecurityEx.c)
 *     SeCreateClientSecurityFromSubjectContext @ 0x1404C18F0 (SeCreateClientSecurityFromSubjectContext.c)
 * Callees:
 *     SepGetAnonymousToken @ 0x140003988 (SepGetAnonymousToken.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     PsGetCurrentServerSilo @ 0x1400436F0 (PsGetCurrentServerSilo.c)
 *     PsIsHostSilo @ 0x140079E50 (PsIsHostSilo.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140079E5C (PsIsCurrentThreadInServerSilo.c)
 *     PsReferencePrimaryToken @ 0x140412C90 (PsReferencePrimaryToken.c)
 *     ObInsertObject @ 0x14044E94C (ObInsertObject.c)
 *     SeCopyClientToken @ 0x140479434 (SeCopyClientToken.c)
 *     SeQueryServerSiloToken @ 0x1404B5B9C (SeQueryServerSiloToken.c)
 *     SepCopyClientTokenAndSetSilo @ 0x14064D8F4 (SepCopyClientTokenAndSetSilo.c)
 *     SeGetTokenControlInformation @ 0x1406538C0 (SeGetTokenControlInformation.c)
 */

NTSTATUS __fastcall SepCreateClientSecurityEx(
        __int64 a1,
        __int64 a2,
        char a3,
        int a4,
        char a5,
        unsigned int a6,
        char a7,
        struct _KTHREAD *a8,
        unsigned __int8 a9,
        __int64 a10,
        __int64 a11)
{
  char v12; // cl
  unsigned int v15; // eax
  __int64 v16; // rdi
  char v17; // al
  NTSTATUS result; // eax
  bool v19; // al
  __int64 v20; // r8
  int v21; // eax
  int AnonymousToken; // ebx
  struct _KTHREAD *CurrentThread; // rcx
  struct _KPROCESS *Process; // rcx
  PACCESS_TOKEN v25; // rax
  void *v26; // r14
  __int64 v27; // rcx
  PVOID v28; // rbx
  __int64 v29; // rcx
  void *v30; // rbx
  __int64 v31; // r8
  _QWORD *CurrentServerSilo; // r15
  __int64 v33; // [rsp+30h] [rbp-28h] BYREF
  __int64 v34[4]; // [rsp+38h] [rbp-20h] BYREF
  PVOID Object; // [rsp+68h] [rbp+10h] BYREF

  v12 = 0;
  Object = 0LL;
  if ( *(_BYTE *)(a2 + 8) >= 2u )
    return -1073741811;
  v15 = *(_DWORD *)(a2 + 4);
  if ( v15 > 3 )
    return -1073741659;
  if ( a4 != 2 )
  {
    v16 = a11;
    *(_BYTE *)(a11 + 25) = *(_BYTE *)(a2 + 9);
    goto LABEL_5;
  }
  if ( (int)v15 > (int)a6 )
  {
    if ( !a7 )
      return -1073741659;
    v12 = 1;
  }
  if ( a6 <= 1 || a3 && a6 != 3 )
  {
    if ( a7 )
    {
      v16 = a11;
      goto LABEL_30;
    }
    return -1073741659;
  }
  v19 = a5 || *(_BYTE *)(a2 + 9);
  v16 = a11;
  *(_BYTE *)(a11 + 25) = v19;
  if ( !v12 )
  {
LABEL_5:
    if ( *(_BYTE *)(a2 + 8) )
    {
      *(_BYTE *)(v16 + 24) = 1;
      if ( a3 )
        SeGetTokenControlInformation(a1, v16 + 28);
      goto LABEL_8;
    }
    *(_BYTE *)(v16 + 24) = 0;
    if ( PsIsCurrentThreadInServerSilo() )
    {
      v30 = *(void **)(a1 + 24);
      Object = v30;
      if ( (int)SeQueryServerSiloToken(a1, v34) >= 0 && PsIsHostSilo(v34[0]) && (_DWORD)v30 == 999 && !HIDWORD(Object) )
      {
        CurrentServerSilo = PsGetCurrentServerSilo();
        AnonymousToken = SepCopyClientTokenAndSetSilo(a1, *(unsigned int *)(a2 + 4), CurrentServerSilo, &v33);
        if ( CurrentServerSilo )
          ObfDereferenceObject(CurrentServerSilo);
LABEL_22:
        a1 = v33;
        if ( AnonymousToken >= 0 )
        {
LABEL_8:
          *(_DWORD *)v16 = 12;
          *(_DWORD *)(v16 + 4) = *(_DWORD *)(a2 + 4);
          *(_BYTE *)(v16 + 8) = *(_BYTE *)(a2 + 8);
          v17 = *(_BYTE *)(a2 + 9);
          *(_QWORD *)(v16 + 16) = a1;
LABEL_9:
          *(_BYTE *)(v16 + 9) = v17;
          result = 0;
          *(_BYTE *)(v16 + 26) = a3;
          return result;
        }
        return AnonymousToken;
      }
      v21 = SeCopyClientToken(a1, *(unsigned int *)(a2 + 4), v31, 0LL, 0LL, &v33);
    }
    else
    {
      v21 = SeCopyClientToken(a1, *(unsigned int *)(a2 + 4), v20, a9, a10, &v33);
    }
    AnonymousToken = v21;
    goto LABEL_22;
  }
LABEL_30:
  if ( (*(_DWORD *)(a1 + 200) & 0x4000) != 0 )
  {
    v29 = a1;
LABEL_48:
    AnonymousToken = SepGetAnonymousToken(v29, &Object);
    goto LABEL_37;
  }
  if ( !a8 )
  {
    v29 = 0LL;
    goto LABEL_48;
  }
  CurrentThread = KeGetCurrentThread();
  if ( a8 == CurrentThread )
    Process = CurrentThread->ApcState.Process;
  else
    Process = a8->Process;
  v25 = PsReferencePrimaryToken(Process);
  v26 = v25;
  if ( (*((_DWORD *)v25 + 50) & 0x4000) != 0 )
    v27 = (__int64)v25;
  else
    v27 = 0LL;
  AnonymousToken = SepGetAnonymousToken(v27, &Object);
  ObfDereferenceObject(v26);
LABEL_37:
  if ( AnonymousToken < 0 )
    return AnonymousToken;
  v28 = Object;
  result = ObInsertObject(Object, 0LL, 0, 0, 0LL, 0LL);
  if ( result >= 0 )
  {
    *(_QWORD *)v16 = 12LL;
    *(_BYTE *)(v16 + 8) = 0;
    v17 = *(_BYTE *)(a2 + 9);
    *(_BYTE *)(v16 + 24) = 0;
    *(_QWORD *)(v16 + 16) = v28;
    goto LABEL_9;
  }
  return result;
}
