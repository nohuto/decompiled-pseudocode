/*
 * XREFs of SepCreateClientSecurityEx @ 0x140481870
 * Callers:
 *     SeCreateClientSecurityFromSubjectContextEx @ 0x14024F924 (SeCreateClientSecurityFromSubjectContextEx.c)
 *     SeCreateClientSecurityEx @ 0x140481510 (SeCreateClientSecurityEx.c)
 *     SeCreateClientSecurity @ 0x1404819F0 (SeCreateClientSecurity.c)
 *     SeCreateClientSecurityFromSubjectContext @ 0x140559A3C (SeCreateClientSecurityFromSubjectContext.c)
 * Callees:
 *     SepGetAnonymousToken @ 0x140007CC8 (SepGetAnonymousToken.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140016968 (PsIsCurrentThreadInServerSilo.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     PsGetCurrentServerSilo @ 0x1400CE990 (PsGetCurrentServerSilo.c)
 *     PspDereferenceSiloObject @ 0x140127C98 (PspDereferenceSiloObject.c)
 *     PsIsHostSilo @ 0x14013A210 (PsIsHostSilo.c)
 *     ObInsertObject @ 0x140471094 (ObInsertObject.c)
 *     SeCopyClientToken @ 0x1404D25E4 (SeCopyClientToken.c)
 *     PsReferencePrimaryToken @ 0x14050D730 (PsReferencePrimaryToken.c)
 *     SeQueryServerSiloToken @ 0x14054D97C (SeQueryServerSiloToken.c)
 *     SepCopyClientTokenAndSetSilo @ 0x1406D0D40 (SepCopyClientTokenAndSetSilo.c)
 *     SeGetTokenControlInformation @ 0x1406D5738 (SeGetTokenControlInformation.c)
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
  __int64 v19; // r8
  int v20; // eax
  int AnonymousToken; // ebx
  bool v22; // al
  __int64 v23; // rcx
  struct _KTHREAD *CurrentThread; // rcx
  struct _KPROCESS *Process; // rcx
  PACCESS_TOKEN v26; // rax
  void *v27; // r14
  __int64 v28; // rcx
  PVOID v29; // rbx
  void *v30; // rbx
  __int64 v31; // r8
  void *CurrentServerSilo; // r15
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
      goto LABEL_34;
    }
    return -1073741659;
  }
  v22 = a5 || *(_BYTE *)(a2 + 9);
  v16 = a11;
  *(_BYTE *)(a11 + 25) = v22;
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
        CurrentServerSilo = (void *)PsGetCurrentServerSilo();
        AnonymousToken = SepCopyClientTokenAndSetSilo(a1, *(unsigned int *)(a2 + 4), CurrentServerSilo, &v33);
        if ( CurrentServerSilo )
          PspDereferenceSiloObject(CurrentServerSilo);
LABEL_14:
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
      v20 = SeCopyClientToken(a1, *(unsigned int *)(a2 + 4), v31, 0LL, 0LL, &v33);
    }
    else
    {
      v20 = SeCopyClientToken(a1, *(unsigned int *)(a2 + 4), v19, a9, a10, &v33);
    }
    AnonymousToken = v20;
    goto LABEL_14;
  }
LABEL_34:
  if ( (*(_DWORD *)(a1 + 200) & 0x4000) != 0 )
  {
    v23 = a1;
LABEL_45:
    AnonymousToken = SepGetAnonymousToken(v23, &Object);
    goto LABEL_46;
  }
  if ( !a8 )
  {
    v23 = 0LL;
    goto LABEL_45;
  }
  CurrentThread = KeGetCurrentThread();
  if ( a8 == CurrentThread )
    Process = CurrentThread->ApcState.Process;
  else
    Process = a8->Process;
  v26 = PsReferencePrimaryToken(Process);
  v27 = v26;
  if ( (*((_DWORD *)v26 + 50) & 0x4000) != 0 )
    v28 = (__int64)v26;
  else
    v28 = 0LL;
  AnonymousToken = SepGetAnonymousToken(v28, &Object);
  ObfDereferenceObject(v27);
LABEL_46:
  if ( AnonymousToken < 0 )
    return AnonymousToken;
  v29 = Object;
  result = ObInsertObject(Object, 0LL, 0, 0, 0LL, 0LL);
  if ( result >= 0 )
  {
    *(_QWORD *)v16 = 12LL;
    *(_BYTE *)(v16 + 8) = 0;
    v17 = *(_BYTE *)(a2 + 9);
    *(_BYTE *)(v16 + 24) = 0;
    *(_QWORD *)(v16 + 16) = v29;
    goto LABEL_9;
  }
  return result;
}
