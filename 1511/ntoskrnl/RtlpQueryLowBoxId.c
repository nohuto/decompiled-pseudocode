/*
 * XREFs of RtlpQueryLowBoxId @ 0x140038774
 * Callers:
 *     RtlpLookupOrCreateLowBox @ 0x140038634 (RtlpLookupOrCreateLowBox.c)
 *     RtlpLookupLowBox @ 0x140099F58 (RtlpLookupLowBox.c)
 *     RtlpAllocateAtomTableEntry @ 0x14009A04C (RtlpAllocateAtomTableEntry.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     SeQueryInformationToken @ 0x1403FE580 (SeQueryInformationToken.c)
 *     PsReferencePrimaryToken @ 0x140412C90 (PsReferencePrimaryToken.c)
 *     PsReferenceEffectiveToken @ 0x1404340D0 (PsReferenceEffectiveToken.c)
 */

__int64 RtlpQueryLowBoxId()
{
  __int64 v0; // rax
  int v1; // edi
  void *v2; // rbx
  PACCESS_TOKEN v4; // rax
  void *v5; // rdi
  int v6; // [rsp+30h] [rbp-10h] BYREF
  char v7; // [rsp+60h] [rbp+20h] BYREF
  PVOID v8; // [rsp+68h] [rbp+28h] BYREF
  int v9; // [rsp+70h] [rbp+30h] BYREF
  PVOID TokenInformation; // [rsp+78h] [rbp+38h] BYREF

  v0 = PsReferenceEffectiveToken(
         (unsigned int)KeGetCurrentThread(),
         (unsigned int)&v9,
         (unsigned int)&v7,
         (unsigned int)&v6,
         0LL);
  v1 = v9;
  v2 = (void *)v0;
  if ( v9 == 2 && v6 < 2 )
  {
    v4 = PsReferencePrimaryToken(KeGetCurrentThread()->ApcState.Process);
    LODWORD(v8) = 0;
    v5 = v4;
    SeQueryInformationToken(v4, TokenIsAppContainer, &v8);
    if ( (_DWORD)v8 == 1 )
    {
      if ( v2 )
        ObfDereferenceObject(v2);
      v2 = v5;
      v1 = 1;
    }
    else
    {
      ObfDereferenceObject(v5);
      v1 = v9;
    }
  }
  LODWORD(TokenInformation) = 0;
  SeQueryInformationToken(v2, TokenAppContainerNumber, &TokenInformation);
  if ( v1 == 1 || v2 )
    ObfDereferenceObject(v2);
  return (unsigned int)TokenInformation;
}
