/*
 * XREFs of MmCreateCacheManagerSection @ 0x140471580
 * Callers:
 *     CcInitializeCacheMapEx @ 0x1400E8440 (CcInitializeCacheMapEx.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x140024FEC (MmGetSessionIdEx.c)
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 *     PsReferencePrimaryToken @ 0x140418C20 (PsReferencePrimaryToken.c)
 *     MiCreateSection @ 0x14042CD40 (MiCreateSection.c)
 */

__int64 __fastcall MmCreateCacheManagerSection(_QWORD *a1, __int64 *a2, char a3, struct _FILE_OBJECT *a4)
{
  char PreviousMode; // bp
  PACCESS_TOKEN v9; // rdi
  char v10; // bl
  unsigned int SessionId; // eax
  unsigned int Section; // ebx
  char v14; // [rsp+A0h] [rbp+18h]

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode == 1 )
  {
    v14 = BYTE1(KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0]);
    v9 = PsReferencePrimaryToken(KeGetCurrentThread()->ApcState.Process);
  }
  else
  {
    v14 = 0;
    v9 = 0LL;
  }
  v10 = 2;
  if ( (a3 & 2) != 0 )
    v10 = 6;
  if ( (a3 & 1) != 0 )
    v10 |= 8u;
  SessionId = MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
  Section = MiCreateSection(a1, 0LL, v10, a2, 4u, 0x8000000, (__int64)v9, v14, 0LL, a4, PreviousMode, SessionId);
  if ( v9 )
    ObfDereferenceObject(v9);
  return Section;
}
