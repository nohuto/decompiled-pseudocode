/*
 * XREFs of ExpWnfQueryCurrentUserSID @ 0x1403E5EDC
 * Callers:
 *     ExpWnfGetCurrentScopeInstance @ 0x1403E5E08 (ExpWnfGetCurrentScopeInstance.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ObFastDereferenceObject @ 0x140043280 (ObFastDereferenceObject.c)
 *     PsReferencePrimaryToken @ 0x140412C90 (PsReferencePrimaryToken.c)
 *     PsReferenceEffectiveToken @ 0x1404340D0 (PsReferenceEffectiveToken.c)
 *     SeQueryUserSidToken @ 0x140479360 (SeQueryUserSidToken.c)
 */

__int64 __fastcall ExpWnfQueryCurrentUserSID(
        struct _KPROCESS *a1,
        __int64 a2,
        __int64 a3,
        unsigned int *a4,
        _DWORD *a5)
{
  int v5; // ebx
  PACCESS_TOKEN v9; // rax
  int v10; // ebp
  void *v11; // rdi
  int UserSidToken; // esi
  int v14; // [rsp+30h] [rbp-28h] BYREF
  int v15; // [rsp+34h] [rbp-24h] BYREF
  __int64 v16; // [rsp+68h] [rbp+10h] BYREF

  v5 = 0;
  if ( a2 )
  {
    v9 = (PACCESS_TOKEN)PsReferenceEffectiveToken(a2, (unsigned int)&v14, (unsigned int)&v16, (unsigned int)&v15, 0LL);
    v10 = v14;
  }
  else
  {
    v9 = PsReferencePrimaryToken(a1);
    v10 = 1;
  }
  v11 = v9;
  UserSidToken = SeQueryUserSidToken(v9, a3, *a4);
  if ( v10 == 1 )
  {
    ObFastDereferenceObject((signed __int64 *)&a1[1].Affinity.Bitmap[5], (unsigned __int64)v11);
  }
  else if ( v11 )
  {
    ObfDereferenceObject(v11);
  }
  if ( UserSidToken >= 0 )
  {
    LOBYTE(v5) = v10 == 1;
    *a5 = v5;
  }
  return (unsigned int)UserSidToken;
}
