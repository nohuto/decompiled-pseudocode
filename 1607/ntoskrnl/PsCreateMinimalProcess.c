/*
 * XREFs of PsCreateMinimalProcess @ 0x14057E30C
 * Callers:
 *     SmFirstTimeInit @ 0x1403E3814 (SmFirstTimeInit.c)
 *     PspCreateProcess @ 0x1404EB990 (PspCreateProcess.c)
 *     PspCreatePicoProcess @ 0x1406815A4 (PspCreatePicoProcess.c)
 *     PspInitPhase3 @ 0x1407BD288 (PspInitPhase3.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14006ACD0 (ObfDereferenceObjectWithTag.c)
 *     KeStackAttachProcess @ 0x1400CD110 (KeStackAttachProcess.c)
 *     KeUnstackDetachProcess @ 0x1400CD1BC (KeUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     memset @ 0x1401715C0 (memset.c)
 *     KeKvaShadowingActive @ 0x1401D8DB4 (KeKvaShadowingActive.c)
 *     SeDeleteAccessState @ 0x140405E08 (SeDeleteAccessState.c)
 *     PsReferencePrimaryToken @ 0x140418C20 (PsReferencePrimaryToken.c)
 *     PspRundownSingleProcess @ 0x14045E0C0 (PspRundownSingleProcess.c)
 *     PspInsertProcess @ 0x14045F5C0 (PspInsertProcess.c)
 *     PspAllocateProcess @ 0x14046F030 (PspAllocateProcess.c)
 *     PsTerminateProcess @ 0x1404EC470 (PsTerminateProcess.c)
 *     PspCreateObjectHandle @ 0x140516ED4 (PspCreateObjectHandle.c)
 *     DbgkCreateMinimalProcess @ 0x14057E530 (DbgkCreateMinimalProcess.c)
 *     MmSynchronizeAddressPolicy @ 0x14065BF18 (MmSynchronizeAddressPolicy.c)
 *     PspSetMinimalProcessName @ 0x140681AEC (PspSetMinimalProcessName.c)
 */

__int64 __fastcall PsCreateMinimalProcess(
        struct _KPROCESS *a1,
        __int64 a2,
        char a3,
        void *a4,
        int a5,
        char a6,
        _QWORD *a7)
{
  PACCESS_TOKEN v7; // r14
  char v11; // si
  unsigned __int8 v12; // r15
  int inserted; // edi
  PRKPROCESS v14; // rbx
  signed __int8 v15; // cf
  PRKPROCESS PROCESS; // [rsp+70h] [rbp-90h] BYREF
  int v18; // [rsp+78h] [rbp-88h] BYREF
  _QWORD *v19; // [rsp+80h] [rbp-80h]
  _BYTE AccessState[400]; // [rsp+90h] [rbp-70h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+220h] [rbp+120h] BYREF
  int v22; // [rsp+2D0h] [rbp+1D0h]

  v19 = a7;
  v7 = a4;
  v11 = 1;
  if ( a4 )
  {
    v12 = 1;
  }
  else
  {
    v7 = PsReferencePrimaryToken(a1);
    v12 = 0;
  }
  v22 = a5 | 0x800;
  inserted = PspAllocateProcess(a1, 0, 0LL, a3, 0, 0, 0LL, v7, v22, 0LL, v12, (__int64)&v18, &PROCESS);
  if ( inserted >= 0 )
  {
    v14 = PROCESS;
    if ( (PROCESS[2].ActiveProcessors.Bitmap[0] & 0x100000000LL) != 0 && !a6 )
    {
      if ( (unsigned int)KeKvaShadowingActive() )
      {
        v14->AddressPolicy = 1;
        v15 = _interlockedbittestandset((volatile signed __int32 *)v14[2].ActiveProcessors.Bitmap + 1, 0x17u);
        v14 = PROCESS;
        if ( !v15 )
        {
          KeStackAttachProcess(PROCESS, &ApcState);
          MmSynchronizeAddressPolicy(v14);
          KeUnstackDetachProcess(&ApcState);
        }
      }
    }
    if ( a2 )
      PspSetMinimalProcessName(v14, a2);
    memset(AccessState, 0, sizeof(AccessState));
    if ( v18 )
      v11 = 3;
    AccessState[388] = 0;
    inserted = PspInsertProcess(
                 (char *)v14,
                 (__int64)a1,
                 0x2000000u,
                 v22,
                 0LL,
                 v11,
                 0LL,
                 (struct _SECURITY_SUBJECT_CONTEXT *)AccessState);
    if ( inserted >= 0 )
    {
      DbgkCreateMinimalProcess((ULONG_PTR)v14);
      *(_DWORD *)&AccessState[384] |= 0x200u;
      inserted = PspCreateObjectHandle(v14, (__int64)AccessState, (struct _OBJECT_TYPE *)PsProcessType);
      if ( inserted >= 0 )
        *v19 = *(_QWORD *)&AccessState[392];
      SeDeleteAccessState((struct _SECURITY_SUBJECT_CONTEXT *)AccessState);
      if ( inserted < 0 )
        PsTerminateProcess((ULONG_PTR)v14);
    }
    else
    {
      PspRundownSingleProcess((ULONG_PTR)v14, 0);
    }
    ObfDereferenceObjectWithTag(v14, 0x72437350u);
  }
  if ( !v12 )
    ObfDereferenceObject(v7);
  return (unsigned int)inserted;
}
