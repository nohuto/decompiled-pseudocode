/*
 * XREFs of SepCreateClientSecurityEx @ 0x140411140
 * Callers:
 *     SeCreateClientSecurityFromSubjectContextEx @ 0x14021A2D8 (SeCreateClientSecurityFromSubjectContextEx.c)
 *     SeCreateClientSecurity @ 0x14040DF28 (SeCreateClientSecurity.c)
 *     SeCreateClientSecurityEx @ 0x14040E110 (SeCreateClientSecurityEx.c)
 *     SeCreateClientSecurityFromSubjectContext @ 0x1404CC6E8 (SeCreateClientSecurityFromSubjectContext.c)
 * Callees:
 *     PsGetCurrentServerSilo @ 0x1400131A0 (PsGetCurrentServerSilo.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     PsIsHostSilo @ 0x140079FE8 (PsIsHostSilo.c)
 *     SepGetAnonymousToken @ 0x14007F904 (SepGetAnonymousToken.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1400C1B90 (PsIsCurrentThreadInServerSilo.c)
 *     SeQueryServerSiloToken @ 0x1403E2044 (SeQueryServerSiloToken.c)
 *     PsReferencePrimaryToken @ 0x140417AE0 (PsReferencePrimaryToken.c)
 *     ObInsertObject @ 0x1404702F4 (ObInsertObject.c)
 *     SeCopyClientToken @ 0x1404B0584 (SeCopyClientToken.c)
 *     SepCopyClientTokenAndSetSilo @ 0x14068D15C (SepCopyClientTokenAndSetSilo.c)
 *     SeGetTokenControlInformation @ 0x140692C98 (SeGetTokenControlInformation.c)
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
  struct _KTHREAD *CurrentThread; // rcx
  struct _KPROCESS *Process; // rcx
  PACCESS_TOKEN v23; // rax
  void *v24; // r14
  __int64 v25; // rcx
  int AnonymousToken; // ebx
  PVOID v27; // rbx
  __int64 v28; // rcx
  void *v29; // rbx
  __int64 v30; // r8
  __int64 CurrentServerSilo; // rax
  __int64 v32; // [rsp+30h] [rbp-28h] BYREF
  __int64 v33[4]; // [rsp+38h] [rbp-20h] BYREF
  PVOID Object; // [rsp+68h] [rbp+10h] BYREF

  v12 = 0;
  Object = 0LL;
  if ( *(_BYTE *)(a2 + 8) >= 2u )
    return -1073741811;
  v15 = *(_DWORD *)(a2 + 4);
  if ( v15 > 3 )
    return -1073741659;
  if ( a4 == 2 )
  {
    if ( (int)v15 > (int)a6 )
    {
      if ( !a7 )
        return -1073741659;
      v12 = 1;
    }
    if ( a6 > 1 && (!a3 || a6 == 3) )
    {
      v19 = a5 || *(_BYTE *)(a2 + 9);
      v16 = a11;
      *(_BYTE *)(a11 + 25) = v19;
      if ( !v12 )
        goto LABEL_5;
LABEL_28:
      if ( (*(_DWORD *)(a1 + 200) & 0x4000) != 0 )
      {
        v28 = a1;
      }
      else
      {
        if ( a8 )
        {
          CurrentThread = KeGetCurrentThread();
          if ( a8 == CurrentThread )
            Process = CurrentThread->ApcState.Process;
          else
            Process = a8->Process;
          v23 = PsReferencePrimaryToken(Process);
          v24 = v23;
          if ( (*((_DWORD *)v23 + 50) & 0x4000) != 0 )
            v25 = (__int64)v23;
          else
            v25 = 0LL;
          AnonymousToken = SepGetAnonymousToken(v25, &Object);
          ObfDereferenceObject(v24);
LABEL_35:
          if ( AnonymousToken < 0 )
            return AnonymousToken;
          v27 = Object;
          result = ObInsertObject(Object, 0LL, 0, 0, 0LL, 0LL);
          if ( result >= 0 )
          {
            *(_QWORD *)v16 = 12LL;
            *(_BYTE *)(v16 + 8) = 0;
            v17 = *(_BYTE *)(a2 + 9);
            *(_BYTE *)(v16 + 24) = 0;
            *(_QWORD *)(v16 + 16) = v27;
            goto LABEL_9;
          }
          return result;
        }
        v28 = 0LL;
      }
      AnonymousToken = SepGetAnonymousToken(v28, &Object);
      goto LABEL_35;
    }
    if ( a7 )
    {
      v16 = a11;
      goto LABEL_28;
    }
    return -1073741659;
  }
  v16 = a11;
  *(_BYTE *)(a11 + 25) = *(_BYTE *)(a2 + 9);
LABEL_5:
  if ( *(_BYTE *)(a2 + 8) )
  {
    *(_BYTE *)(v16 + 24) = 1;
    if ( a3 )
      SeGetTokenControlInformation(a1, v16 + 28);
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
  *(_BYTE *)(v16 + 24) = 0;
  if ( PsIsCurrentThreadInServerSilo() )
  {
    v29 = *(void **)(a1 + 24);
    Object = v29;
    if ( (int)SeQueryServerSiloToken(a1, v33) >= 0 && PsIsHostSilo(v33[0]) && (_DWORD)v29 == 999 && !HIDWORD(Object) )
    {
      CurrentServerSilo = PsGetCurrentServerSilo();
      result = SepCopyClientTokenAndSetSilo(a1, *(unsigned int *)(a2 + 4), CurrentServerSilo, &v32);
    }
    else
    {
      result = SeCopyClientToken(a1, *(unsigned int *)(a2 + 4), v30, 0LL, 0LL, &v32);
    }
  }
  else
  {
    result = SeCopyClientToken(a1, *(unsigned int *)(a2 + 4), v20, a9, a10, &v32);
  }
  a1 = v32;
  if ( result >= 0 )
    goto LABEL_8;
  return result;
}
