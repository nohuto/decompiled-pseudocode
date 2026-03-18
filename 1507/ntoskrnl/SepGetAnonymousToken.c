/*
 * XREFs of SepGetAnonymousToken @ 0x140007CC8
 * Callers:
 *     NtImpersonateAnonymousToken @ 0x140410C10 (NtImpersonateAnonymousToken.c)
 *     SepCreateClientSecurityEx @ 0x140481870 (SepCreateClientSecurityEx.c)
 * Callees:
 *     AppContainerPrivilegesEnabledExt_0 @ 0x140001290 (AppContainerPrivilegesEnabledExt_0.c)
 *     AuthzBasepDuplicateSecurityAttributes @ 0x1400156C0 (AuthzBasepDuplicateSecurityAttributes.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     SepSetTokenLowboxNumber @ 0x140411728 (SepSetTokenLowboxNumber.c)
 *     SepDuplicateToken @ 0x140435D60 (SepDuplicateToken.c)
 *     SepRefDerefLuidToIndexEntryIfNecessary @ 0x1404366E0 (SepRefDerefLuidToIndexEntryIfNecessary.c)
 *     SepSetTokenCapabilities @ 0x140436FA8 (SepSetTokenCapabilities.c)
 *     SepSetTokenPackage @ 0x1404370F0 (SepSetTokenPackage.c)
 *     SepSetTokenSessionById @ 0x1406D5BD8 (SepSetTokenSessionById.c)
 */

__int64 __fastcall SepGetAnonymousToken(__int64 a1, _QWORD *a2)
{
  int v4; // edi
  _QWORD *v5; // rbx
  _DWORD *v6; // rax
  __int64 result; // rax
  int v8; // eax
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
  if ( v4 < 0 )
    return (unsigned int)v4;
  v5 = Object;
  if ( a1 )
  {
    v4 = SepSetTokenPackage(Object, *(_QWORD *)(a1 + 784));
    if ( v4 < 0 )
      goto LABEL_18;
    v4 = SepSetTokenCapabilities(v5, *(_QWORD *)(a1 + 784), *(_QWORD *)(a1 + 792), *(unsigned int *)(a1 + 800));
    if ( v4 < 0 )
      goto LABEL_18;
    SepSetTokenSessionById((_DWORD)v5, *(_DWORD *)(a1 + 120), 0, 0, 0LL);
    v4 = SepSetTokenLowboxNumber(v5, *(_QWORD *)(a1 + 784));
    if ( v4 < 0 )
      goto LABEL_18;
    v6 = *(_DWORD **)(a1 + 776);
    if ( v6 && *v6 )
    {
      result = SepRefDerefLuidToIndexEntryIfNecessary(a1, 0LL);
      if ( (int)result < 0 )
        return result;
      v4 = AuthzBasepDuplicateSecurityAttributes(*(_QWORD *)(a1 + 776), v5[97], 0LL);
      if ( v4 < 0 )
      {
        SepRefDerefLuidToIndexEntryIfNecessary(a1, 1LL);
        goto LABEL_17;
      }
    }
    v8 = AppContainerPrivilegesEnabledExt_0();
    v4 = v8;
    if ( v8 == -1073741637 )
    {
      v5[9] &= 0x200800000uLL;
      v5[10] &= 0x200800000uLL;
      v4 = 0;
    }
    else
    {
      if ( v8 < 0 )
      {
LABEL_18:
        ObfDereferenceObjectWithTag(v5, 0x746C6644u);
        return (unsigned int)v4;
      }
      v5[9] &= v15;
      v5[10] = 0LL;
    }
    *((_DWORD *)v5 + 50) = v5[25] & 0xFFFF9FFF | 0x4000;
  }
  *a2 = v5;
LABEL_17:
  if ( v4 < 0 )
    goto LABEL_18;
  return (unsigned int)v4;
}
