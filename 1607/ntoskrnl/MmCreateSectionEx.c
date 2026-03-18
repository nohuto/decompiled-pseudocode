/*
 * XREFs of MmCreateSectionEx @ 0x140471464
 * Callers:
 *     FsRtlCreateSectionForDataScan @ 0x14007DB60 (FsRtlCreateSectionForDataScan.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x140024FEC (MmGetSessionIdEx.c)
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 *     PsReferencePrimaryToken @ 0x140418C20 (PsReferencePrimaryToken.c)
 *     MiCreateSection @ 0x14042CD40 (MiCreateSection.c)
 */

__int64 __fastcall MmCreateSectionEx(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4,
        unsigned int a5,
        int a6,
        int a7,
        struct _FILE_OBJECT *a8,
        char a9)
{
  char PreviousMode; // si
  PACCESS_TOKEN v13; // rdi
  char v14; // bl
  unsigned int SessionId; // eax
  unsigned int Section; // ebx
  char v18; // [rsp+98h] [rbp+10h]

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode == 1 )
  {
    v18 = BYTE1(KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0]);
    v13 = PsReferencePrimaryToken(KeGetCurrentThread()->ApcState.Process);
  }
  else
  {
    v18 = 0;
    v13 = 0LL;
  }
  v14 = 0;
  if ( a8 )
    v14 = 2;
  if ( (a9 & 2) != 0 )
    v14 |= 8u;
  SessionId = MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
  Section = MiCreateSection(a1, a3, v14, a4, a5, a6, (__int64)v13, v18, 0LL, a8, PreviousMode, SessionId);
  if ( v13 )
    ObfDereferenceObject(v13);
  return Section;
}
