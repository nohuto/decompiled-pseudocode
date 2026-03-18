/*
 * XREFs of CmpIsVirtEnabled @ 0x140481D80
 * Callers:
 *     CmpIsSystemEntity @ 0x140481E04 (CmpIsSystemEntity.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x14004E3E0 (ObFastDereferenceObject.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     PsReferenceEffectiveToken @ 0x140481AE0 (PsReferenceEffectiveToken.c)
 *     SeQueryInformationToken @ 0x140481E90 (SeQueryInformationToken.c)
 */

__int64 CmpIsVirtEnabled()
{
  void *v0; // rax
  unsigned __int64 v1; // rbx
  bool v3; // [rsp+40h] [rbp+8h] BYREF
  PVOID TokenInformation; // [rsp+48h] [rbp+10h] BYREF
  int v5; // [rsp+50h] [rbp+18h] BYREF
  int v6; // [rsp+58h] [rbp+20h] BYREF

  LODWORD(TokenInformation) = 0;
  v0 = PsReferenceEffectiveToken((__int64)KeGetCurrentThread(), &v5, &v3, &v6, 0LL);
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
  return (unsigned __int8)TokenInformation;
}
