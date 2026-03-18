/*
 * XREFs of PspCreateMinimalProcess @ 0x1406431F4
 * Callers:
 *     PspInitPhase3 @ 0x140772470 (PspInitPhase3.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     KeStackAttachProcess @ 0x1400C7880 (KeStackAttachProcess.c)
 *     KeUnstackDetachProcess @ 0x1400DF9CC (KeUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     KeKvaShadowingActive @ 0x1401CA5E0 (KeKvaShadowingActive.c)
 *     PspInsertProcess @ 0x1403E3600 (PspInsertProcess.c)
 *     PspRundownSingleProcess @ 0x1403E770C (PspRundownSingleProcess.c)
 *     PspCreateObjectHandle @ 0x1403EFA94 (PspCreateObjectHandle.c)
 *     PsReferencePrimaryToken @ 0x140412C90 (PsReferencePrimaryToken.c)
 *     SeDeleteAccessState @ 0x140435480 (SeDeleteAccessState.c)
 *     PspAllocateProcess @ 0x14044C768 (PspAllocateProcess.c)
 *     PsTerminateProcess @ 0x140452368 (PsTerminateProcess.c)
 *     DbgkCreateMinimalProcess @ 0x1405F0818 (DbgkCreateMinimalProcess.c)
 *     MmSynchronizeAddressPolicy @ 0x140626748 (MmSynchronizeAddressPolicy.c)
 */

__int64 __fastcall PspCreateMinimalProcess(__int64 a1, char a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  PEPROCESS v5; // r15
  PACCESS_TOKEN v7; // rsi
  signed int inserted; // edi
  PRKPROCESS v9; // rbx
  char v10; // di
  signed __int8 v11; // cf
  PRKPROCESS PROCESS; // [rsp+78h] [rbp-90h] BYREF
  int v14; // [rsp+80h] [rbp-88h] BYREF
  _BYTE v15[400]; // [rsp+88h] [rbp-80h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+218h] [rbp+110h] BYREF

  v5 = PsInitialSystemProcess;
  v7 = PsReferencePrimaryToken(PsInitialSystemProcess);
  inserted = PspAllocateProcess((ULONG_PTR)v5, 0, 0LL, a2, 0, 0, 0LL, v7, 0x800u, 0LL, 0, (__int64)&v14, &PROCESS);
  if ( inserted >= 0 )
  {
    v9 = PROCESS;
    v10 = 1;
    if ( (HIDWORD(PROCESS[2].SwapListEntry.Next) & 1) != 0 && !PROCESS[2].ActiveProcessors.Bitmap[7] )
    {
      if ( (unsigned int)KeKvaShadowingActive() )
      {
        v9->AddressPolicy = 1;
        v11 = _interlockedbittestandset((volatile signed __int32 *)&v9[2].SwapListEntry.Next + 1, 0xFu);
        v9 = PROCESS;
        if ( !v11 )
        {
          KeStackAttachProcess(PROCESS, &ApcState);
          MmSynchronizeAddressPolicy(v9);
          KeUnstackDetachProcess(&ApcState);
        }
      }
    }
    memset(v15, 0, sizeof(v15));
    v15[388] = 0;
    if ( v14 )
      v10 = 3;
    inserted = PspInsertProcess((char *)v9, (__int64)v5, 0x2000000, 0, 0LL, v10, 0LL, (__int64)v15);
    if ( inserted >= 0 )
    {
      DbgkCreateMinimalProcess(v9);
      *(_DWORD *)&v15[384] |= 0x200u;
      inserted = PspCreateObjectHandle(v9, (__int64)v15, (struct _OBJECT_TYPE *)PsProcessType);
      if ( inserted >= 0 )
        *a5 = *(_QWORD *)&v15[392];
      SeDeleteAccessState((struct _SECURITY_SUBJECT_CONTEXT *)v15);
      if ( inserted < 0 )
        PsTerminateProcess((ULONG_PTR)v9, inserted);
    }
    else
    {
      PspRundownSingleProcess((ULONG_PTR)v9, 0);
    }
    ObfDereferenceObjectWithTag(v9, 0x72437350u);
  }
  ObfDereferenceObject(v7);
  return (unsigned int)inserted;
}
