/*
 * XREFs of CmpIsVirtEnabled @ 0x14040E088
 * Callers:
 *     CmpIsSystemEntity @ 0x14040E004 (CmpIsSystemEntity.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x14000F210 (ObFastDereferenceObject.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     PsReferenceEffectiveToken @ 0x140411380 (PsReferenceEffectiveToken.c)
 *     SeQueryInformationToken @ 0x140438EC0 (SeQueryInformationToken.c)
 */

char CmpIsVirtEnabled()
{
  void *v0; // rax
  unsigned __int64 v1; // rbx
  __int64 v3; // [rsp+40h] [rbp+8h] BYREF
  PVOID TokenInformation; // [rsp+48h] [rbp+10h] BYREF
  int v5; // [rsp+50h] [rbp+18h] BYREF
  __int64 v6; // [rsp+58h] [rbp+20h] BYREF

  LODWORD(TokenInformation) = 0;
  v0 = (void *)PsReferenceEffectiveToken(
                 (unsigned int)KeGetCurrentThread(),
                 (unsigned int)&v5,
                 (unsigned int)&v3,
                 (unsigned int)&v6,
                 0LL);
  v1 = (unsigned __int64)v0;
  if ( v5 == 1 )
  {
    SeQueryInformationToken(v0, TokenVirtualizationEnabled, &TokenInformation);
    ObFastDereferenceObject((signed __int64 *)&KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[5], v1);
  }
  else if ( v0 )
  {
    ObfDereferenceObject(v0);
  }
  return (char)TokenInformation;
}
