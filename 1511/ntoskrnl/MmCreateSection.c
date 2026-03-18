/*
 * XREFs of MmCreateSection @ 0x14044E98C
 * Callers:
 *     FsRtlCreateSectionForDataScan @ 0x140093000 (FsRtlCreateSectionForDataScan.c)
 *     AlpcpCreateSection @ 0x14044E0D4 (AlpcpCreateSection.c)
 *     VerifierMmCreateSection @ 0x1406CFC60 (VerifierMmCreateSection.c)
 *     MiInitializeApiSets @ 0x14074CE5C (MiInitializeApiSets.c)
 *     MiInitializeCfg @ 0x14074DF4C (MiInitializeCfg.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x14003AFB0 (MmGetSessionIdEx.c)
 *     MiCreateSection @ 0x1403F80B0 (MiCreateSection.c)
 */

int __fastcall MmCreateSection(
        _QWORD *a1,
        __int64 a2,
        int a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6,
        HANDLE Handle,
        struct _OBJECT_HANDLE_INFORMATION *a8)
{
  char v8; // di
  char PreviousMode; // si
  struct _KPROCESS *Process; // rcx
  unsigned int SessionId; // eax
  __int64 v16; // [rsp+30h] [rbp-58h]
  char v17; // [rsp+60h] [rbp-28h]

  v8 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode == 1 )
    v17 = BYTE1(KeGetCurrentThread()->ApcState.Process[2].SwapListEntry.Next);
  else
    v17 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( a8 )
    v8 = 2;
  SessionId = MmGetSessionIdEx(Process);
  LOBYTE(v16) = v17;
  return MiCreateSection(a1, a3, v8, a4, a5, a6, v16, Handle, a8, PreviousMode, SessionId);
}
