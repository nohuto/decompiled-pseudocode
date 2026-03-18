/*
 * XREFs of MmCreateSection @ 0x14042CC10
 * Callers:
 *     NtCreateSection @ 0x14042C990 (NtCreateSection.c)
 *     AlpcpCreateSection @ 0x140472868 (AlpcpCreateSection.c)
 *     PspApiSetCopyToSystemSpace @ 0x14067E198 (PspApiSetCopyToSystemSpace.c)
 *     MiInitializeApiSets @ 0x1407A426C (MiInitializeApiSets.c)
 *     MiInitializeCfg @ 0x1407A6890 (MiInitializeCfg.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x140024FEC (MmGetSessionIdEx.c)
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 *     PsReferencePrimaryToken @ 0x140418C20 (PsReferencePrimaryToken.c)
 *     MiCreateSection @ 0x14042CD40 (MiCreateSection.c)
 */

__int64 __fastcall MmCreateSection(int a1, __int64 a2, int a3, int a4, int a5, int a6, __int64 a7, PVOID a8)
{
  int v8; // esi
  char PreviousMode; // di
  PACCESS_TOKEN v13; // rbp
  int SessionId; // eax
  __int64 result; // rax
  unsigned int v16; // ebx
  char v17; // [rsp+60h] [rbp-28h]

  v8 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode == 1 )
  {
    v17 = BYTE1(KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0]);
    v13 = PsReferencePrimaryToken(KeGetCurrentThread()->ApcState.Process);
  }
  else
  {
    v17 = 0;
    v13 = 0LL;
  }
  if ( a8 )
    v8 = 2;
  SessionId = MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
  result = MiCreateSection(a1, a3, v8, a4, a5, a6, (__int64)v13, v17, a7, a8, PreviousMode, SessionId);
  v16 = result;
  if ( v13 )
  {
    ObfDereferenceObject(v13);
    return v16;
  }
  return result;
}
