/*
 * XREFs of SepGetAnonymousToken @ 0x14007F904
 * Callers:
 *     SepCreateClientSecurityEx @ 0x140411140 (SepCreateClientSecurityEx.c)
 *     NtImpersonateAnonymousToken @ 0x140474C2C (NtImpersonateAnonymousToken.c)
 * Callees:
 *     AppContainerPrivilegesEnabledExt_0 @ 0x1400012D8 (AppContainerPrivilegesEnabledExt_0.c)
 *     AuthzBasepDuplicateSecurityAttributes @ 0x14000E910 (AuthzBasepDuplicateSecurityAttributes.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     SepDuplicateToken @ 0x140411A90 (SepDuplicateToken.c)
 *     SepSetTokenPackage @ 0x140475884 (SepSetTokenPackage.c)
 *     SepSetTokenLowboxNumber @ 0x140475934 (SepSetTokenLowboxNumber.c)
 *     SepSetTokenCapabilities @ 0x14047791C (SepSetTokenCapabilities.c)
 *     SepSetTokenSessionById @ 0x140693194 (SepSetTokenSessionById.c)
 */

__int64 __fastcall SepGetAnonymousToken(__int64 a1, _QWORD *a2)
{
  int v4; // edi
  _QWORD *v5; // rbx
  _DWORD *v6; // rcx
  int v7; // eax
  unsigned int v8; // edx
  int v10; // [rsp+48h] [rbp-38h] BYREF
  __int64 v11; // [rsp+50h] [rbp-30h]
  __int64 v12; // [rsp+58h] [rbp-28h]
  int v13; // [rsp+60h] [rbp-20h]
  __int128 v14; // [rsp+68h] [rbp-18h]
  PVOID Object; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v16; // [rsp+C8h] [rbp+48h]

  Object = 0LL;
  v16 = 0LL;
  v11 = 0LL;
  v13 = 0;
  v12 = 0LL;
  v10 = 48;
  v14 = 0LL;
  v4 = SepDuplicateToken(SeAnonymousLogonTokenNoEveryone, (unsigned int)&v10, 1, 2, 2, 0, 1, (__int64)&Object);
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
          v4 = AuthzBasepDuplicateSecurityAttributes((__int64)v6, v5[97], 0);
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
          ObfDereferenceObjectWithTag(v5, 0x746C6644u);
          return (unsigned int)v4;
        }
        v5[9] &= v16;
        v5[10] = 0LL;
      }
      v8 = v5[25] & 0xFFFF9FFF | 0x4000;
      *((_DWORD *)v5 + 50) = v8;
      *((_DWORD *)v5 + 50) = v8 | *(_DWORD *)(a1 + 200) & 0x80000;
    }
    *a2 = v5;
    if ( v4 < 0 )
      goto LABEL_15;
  }
  return (unsigned int)v4;
}
