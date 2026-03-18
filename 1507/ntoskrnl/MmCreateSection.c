/*
 * XREFs of MmCreateSection @ 0x1404710D4
 * Callers:
 *     FsRtlCreateSectionForDataScan @ 0x14002F658 (FsRtlCreateSectionForDataScan.c)
 *     AlpcpCreateSection @ 0x14052B184 (AlpcpCreateSection.c)
 *     VerifierMmCreateSection @ 0x14075372C (VerifierMmCreateSection.c)
 *     MiInitializeCfg @ 0x1407C84F4 (MiInitializeCfg.c)
 *     MiInitializeApiSets @ 0x1407C9714 (MiInitializeApiSets.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x140089328 (MmGetSessionIdEx.c)
 *     MiCreateSection @ 0x1404B3940 (MiCreateSection.c)
 */

__int64 __fastcall MmCreateSection(int a1, __int64 a2, int a3, int a4, int a5, int a6, __int64 a7, PVOID a8)
{
  int v8; // edi
  char PreviousMode; // si
  struct _KPROCESS *Process; // rcx
  int SessionId; // eax
  __int64 v16; // [rsp+30h] [rbp-58h]
  char v17; // [rsp+60h] [rbp-28h]

  v8 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode == 1 )
    v17 = BYTE1(KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink);
  else
    v17 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( a8 )
    v8 = 2;
  SessionId = MmGetSessionIdEx(Process);
  LOBYTE(v16) = v17;
  return MiCreateSection(a1, a3, v8, a4, a5, a6, v16, a7, a8, PreviousMode, SessionId);
}
