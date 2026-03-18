/*
 * XREFs of SepGetAnonymousToken @ 0x140003988
 * Callers:
 *     NtImpersonateAnonymousToken @ 0x1403BE658 (NtImpersonateAnonymousToken.c)
 *     SepCreateClientSecurityEx @ 0x14042C5D0 (SepCreateClientSecurityEx.c)
 * Callees:
 *     AppContainerPrivilegesEnabledExt_0 @ 0x140001290 (AppContainerPrivilegesEnabledExt_0.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     AuthzBasepDuplicateSecurityAttributes @ 0x14009E350 (AuthzBasepDuplicateSecurityAttributes.c)
 *     SepSetTokenLowboxNumber @ 0x1403BED94 (SepSetTokenLowboxNumber.c)
 *     SepDuplicateToken @ 0x140477C00 (SepDuplicateToken.c)
 *     SepSetTokenCapabilities @ 0x140478C80 (SepSetTokenCapabilities.c)
 *     SepSetTokenPackage @ 0x1404792B0 (SepSetTokenPackage.c)
 *     SepSetTokenSessionById @ 0x140653D2C (SepSetTokenSessionById.c)
 */

__int64 __fastcall SepGetAnonymousToken(__int64 a1, _QWORD *a2)
{
  int v4; // edi
  _QWORD *v5; // rbx
  _DWORD *v6; // rcx
  int v7; // eax
  int v9; // [rsp+48h] [rbp-38h] BYREF
  __int64 v10; // [rsp+50h] [rbp-30h]
  __int64 v11; // [rsp+58h] [rbp-28h]
  int v12; // [rsp+60h] [rbp-20h]
  __int128 v13; // [rsp+68h] [rbp-18h]
  PVOID Object; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v15; // [rsp+C8h] [rbp+48h]

  Object = 0LL;
  v15 = 0LL;
  v10 = 0LL;
  v12 = 0;
  v11 = 0LL;
  v9 = 48;
  v13 = 0LL;
  v4 = SepDuplicateToken(SeAnonymousLogonTokenNoEveryone, (unsigned int)&v9, 1, 2, 2, 0, 1, (__int64)&Object);
  if ( v4 >= 0 )
  {
    v5 = Object;
    if ( a1 )
    {
      v4 = SepSetTokenPackage(Object, *(_QWORD *)(a1 + 784));
      if ( v4 < 0 )
        goto LABEL_15;
      v4 = SepSetTokenCapabilities(v5, *(_QWORD *)(a1 + 784), *(_QWORD *)(a1 + 792), *(unsigned int *)(a1 + 800));
      if ( v4 < 0 )
        goto LABEL_15;
      SepSetTokenSessionById((_DWORD)v5, *(_DWORD *)(a1 + 120), 0, 0, 0LL);
      v4 = SepSetTokenLowboxNumber(v5, *(_QWORD *)(a1 + 784));
      if ( v4 < 0 )
        goto LABEL_15;
      v6 = *(_DWORD **)(a1 + 776);
      if ( v6 )
      {
        if ( *v6 )
        {
          v4 = AuthzBasepDuplicateSecurityAttributes(v6, v5[97], 0LL);
          if ( v4 < 0 )
            goto LABEL_15;
        }
      }
      v7 = AppContainerPrivilegesEnabledExt_0();
      v4 = v7;
      if ( v7 == -1073741637 )
      {
        v5[9] &= 0x200800000uLL;
        v5[10] &= 0x200800000uLL;
        v4 = 0;
      }
      else
      {
        if ( v7 < 0 )
        {
LABEL_15:
          ObfDereferenceObject(v5);
          return (unsigned int)v4;
        }
        v5[9] &= v15;
        v5[10] = 0LL;
      }
      *((_DWORD *)v5 + 50) = v5[25] & 0xFFFF9FFF | 0x4000;
    }
    *a2 = v5;
    if ( v4 < 0 )
      goto LABEL_15;
  }
  return (unsigned int)v4;
}
