/*
 * XREFs of ?SetDacl@CSecurityDesc@ATL@@QEAAXAEBVCDacl@2@_N@Z @ 0x180032E98
 * Callers:
 *     ?GetADGProcessSD@CAudioDGProcess@@CAJPEAPEAX@Z @ 0x18002FB10 (-GetADGProcessSD@CAudioDGProcess@@CAJPEAPEAX@Z.c)
 *     ?DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z @ 0x180033EF0 (-DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z.c)
 * Callees:
 *     ?IsEmpty@CAcl@ATL@@QEBA_NXZ @ 0x18002D640 (-IsEmpty@CAcl@ATL@@QEBA_NXZ.c)
 *     ?GetLength@CAcl@ATL@@QEBAIXZ @ 0x18002D698 (-GetLength@CAcl@ATL@@QEBAIXZ.c)
 *     ?GetPACL@CAcl@ATL@@QEBAPEBU_ACL@@XZ @ 0x18002D700 (-GetPACL@CAcl@ATL@@QEBAPEBU_ACL@@XZ.c)
 *     ?MakeAbsolute@CSecurityDesc@ATL@@QEAAXXZ @ 0x180032BE8 (-MakeAbsolute@CSecurityDesc@ATL@@QEAAXXZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180067B60 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?AtlHresultFromLastError@ATL@@YAJXZ @ 0x18006A118 (-AtlHresultFromLastError@ATL@@YAJXZ.c)
 *     ?AtlThrowLastWin32@ATL@@YAXXZ @ 0x18006A13C (-AtlThrowLastWin32@ATL@@YAXXZ.c)
 */

void __fastcall ATL::CSecurityDesc::SetDacl(PSECURITY_DESCRIPTOR *this, const struct ATL::CDacl *a2, char a3)
{
  BOOL v5; // ebp
  PSECURITY_DESCRIPTOR v6; // rcx
  void *v7; // rax
  unsigned int Length; // r14d
  struct _ACL *v9; // rsi
  const struct _ACL *PACL; // rax
  errno_t v11; // eax
  int Error; // ebx
  int v13; // ebx
  WINBOOL bDaclPresent; // [rsp+50h] [rbp+8h] BYREF
  WINBOOL bDaclDefaulted; // [rsp+60h] [rbp+18h] BYREF
  void *Block; // [rsp+68h] [rbp+20h] BYREF

  LOBYTE(bDaclDefaulted) = a3;
  if ( this[1] )
    ATL::CSecurityDesc::MakeAbsolute(this);
  Block = 0LL;
  v5 = 1;
  v6 = this[1];
  if ( v6 )
  {
    if ( !GetSecurityDescriptorDacl(v6, &bDaclPresent, (PACL *)&Block, &bDaclDefaulted) )
      ATL::AtlThrowLastWin32();
  }
  else
  {
    v7 = malloc(0x28uLL);
    this[1] = v7;
    if ( !v7 )
      ATL::AtlThrowImpl(-2147024882);
    if ( !InitializeSecurityDescriptor(v7, 1u) )
    {
      Error = ATL::AtlHresultFromLastError();
      free(this[1]);
      this[1] = 0LL;
      ATL::AtlThrowImpl(Error);
    }
  }
  if ( *((_BYTE *)a2 + 16) || ATL::CAcl::IsEmpty(a2) )
  {
    v9 = 0LL;
  }
  else
  {
    Length = ATL::CAcl::GetLength(a2);
    v9 = (struct _ACL *)malloc(Length);
    if ( !v9 )
      ATL::AtlThrowImpl(-2147024882);
    PACL = ATL::CAcl::GetPACL(a2);
    v11 = memcpy_s(v9, Length, PACL, Length);
    if ( v11 )
    {
      if ( v11 == 12 )
        ATL::AtlThrowImpl(-2147024882);
      if ( v11 == 22 || v11 == 34 )
        ATL::AtlThrowImpl(-2147024809);
      if ( v11 != 80 )
        ATL::AtlThrowImpl(-2147467259);
    }
  }
  if ( !*((_BYTE *)a2 + 16) && !v9 )
    v5 = 0;
  if ( !SetSecurityDescriptorDacl(this[1], v5, v9, 0) )
  {
    v13 = ATL::AtlHresultFromLastError();
    free(v9);
    ATL::AtlThrowImpl(v13);
  }
  free(Block);
}
