/*
 * XREFs of SepReferenceTokenUsingPseudoHandle @ 0x1400E6284
 * Callers:
 *     SeAccessCheckByType @ 0x14008CBF0 (SeAccessCheckByType.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     SepReconcileTrustSidWithProcessProtection @ 0x14007A640 (SepReconcileTrustSidWithProcessProtection.c)
 *     PsReferencePrimaryToken @ 0x140412C90 (PsReferencePrimaryToken.c)
 *     PsReferenceImpersonationTokenEx @ 0x140433F70 (PsReferenceImpersonationTokenEx.c)
 *     PsReferenceEffectiveToken @ 0x1404340D0 (PsReferenceEffectiveToken.c)
 */

__int64 __fastcall SepReferenceTokenUsingPseudoHandle(__int64 a1, PSID **a2, _BYTE *a3, _QWORD *a4)
{
  bool v7; // zf
  unsigned int CurrentThread; // ecx
  PSID *v9; // rax
  PSID *v10; // rbx
  int v12; // [rsp+30h] [rbp-10h] BYREF
  char v13; // [rsp+70h] [rbp+30h] BYREF
  char v14; // [rsp+78h] [rbp+38h] BYREF
  char v15; // [rsp+80h] [rbp+40h] BYREF
  int v16; // [rsp+88h] [rbp+48h] BYREF

  *a2 = 0LL;
  *a3 = 0;
  *a4 = 0LL;
  if ( a1 == -4 )
  {
    v10 = (PSID *)PsReferencePrimaryToken(KeGetCurrentThread()->ApcState.Process);
    goto LABEL_6;
  }
  v7 = a1 == -5;
  CurrentThread = (unsigned int)KeGetCurrentThread();
  if ( v7 )
  {
    v9 = (PSID *)PsReferenceImpersonationTokenEx(
                   CurrentThread,
                   0,
                   (unsigned int)&v15,
                   (unsigned int)&v14,
                   (__int64)&v16,
                   (__int64)&v13);
    v10 = v9;
    if ( !v9 )
      return 3221225596LL;
  }
  else
  {
    v9 = (PSID *)PsReferenceEffectiveToken(
                   CurrentThread,
                   (unsigned int)&v12,
                   (unsigned int)&v14,
                   (unsigned int)&v16,
                   (__int64)&v13);
    v10 = v9;
    if ( v12 != 2 )
      goto LABEL_5;
  }
  if ( v16 )
  {
LABEL_5:
    SepReconcileTrustSidWithProcessProtection(v10[138], &v13, a3, a4);
LABEL_6:
    *a2 = v10;
    return 0LL;
  }
  ObfDereferenceObjectWithTag(v9, 0x746C6644u);
  return 3221225638LL;
}
