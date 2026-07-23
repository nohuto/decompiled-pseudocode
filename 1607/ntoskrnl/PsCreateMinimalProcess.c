/*
 * XREFs of PsCreateMinimalProcess @ 0x14057E7B8
 * Callers:
 *     SmFirstTimeInit @ 0x1403E4E40 (SmFirstTimeInit.c)
 *     PspCreateProcess @ 0x1404CDA18 (PspCreateProcess.c)
 *     PspCreatePicoProcess @ 0x140681688 (PspCreatePicoProcess.c)
 *     PspInitPhase3 @ 0x1407BD288 (PspInitPhase3.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     KeStackAttachProcess @ 0x1400CAFB0 (KeStackAttachProcess.c)
 *     KeUnstackDetachProcess @ 0x1400CB05C (KeUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     KeKvaShadowingActive @ 0x1401D8BE0 (KeKvaShadowingActive.c)
 *     SeDeleteAccessState @ 0x140404CC8 (SeDeleteAccessState.c)
 *     PsReferencePrimaryToken @ 0x140417AE0 (PsReferencePrimaryToken.c)
 *     PspRundownSingleProcess @ 0x14045CF90 (PspRundownSingleProcess.c)
 *     PspInsertProcess @ 0x14045E490 (PspInsertProcess.c)
 *     PspAllocateProcess @ 0x14046DF00 (PspAllocateProcess.c)
 *     PsTerminateProcess @ 0x1404CE4F8 (PsTerminateProcess.c)
 *     PspCreateObjectHandle @ 0x1404FA2C4 (PspCreateObjectHandle.c)
 *     DbgkCreateMinimalProcess @ 0x14057E9DC (DbgkCreateMinimalProcess.c)
 *     MmSynchronizeAddressPolicy @ 0x14065BFFC (MmSynchronizeAddressPolicy.c)
 *     PspSetMinimalProcessName @ 0x140681BD0 (PspSetMinimalProcessName.c)
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
      DbgkCreateMinimalProcess(v14);
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
