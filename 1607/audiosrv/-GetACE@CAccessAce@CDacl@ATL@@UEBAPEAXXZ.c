/*
 * XREFs of ?GetACE@CAccessAce@CDacl@ATL@@UEBAPEAXXZ @ 0x18000CE60
 * Callers:
 *     ?GetPACL@CAcl@ATL@@QEBAPEBU_ACL@@XZ @ 0x18002CCA8 (-GetPACL@CAcl@ATL@@QEBAPEBU_ACL@@XZ.c)
 * Callees:
 *     ?AceType@CAccessAce@CDacl@ATL@@UEBAEXZ @ 0x18000CE20 (-AceType@CAccessAce@CDacl@ATL@@UEBAEXZ.c)
 *     ?GetLength@CAccessAce@CDacl@ATL@@UEBAIXZ @ 0x18000CE40 (-GetLength@CAccessAce@CDacl@ATL@@UEBAIXZ.c)
 *     _invalid_parameter_noinfo @ 0x180036CBA (_invalid_parameter_noinfo.c)
 *     memset @ 0x180036D30 (memset.c)
 *     memcpy_0 @ 0x180038F10 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180052240 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

void *__fastcall ATL::CDacl::CAccessAce::GetACE(ATL::CDacl::CAccessAce *this)
{
  __int64 (*v2)(void); // rax
  unsigned int Length; // eax
  __int16 v4; // si
  __int64 v5; // rbp
  _WORD *v6; // rax
  _WORD *v7; // rdi
  _BOOL8 (__fastcall *v8)(ATL::CDacl::CAccessAce *); // rax
  bool v9; // al
  DWORD LengthSid; // eax
  __int64 v11; // rdx
  size_t v12; // rbp
  size_t v13; // rsi
  void *v14; // rcx

  if ( !*((_QWORD *)this + 17) )
  {
    v2 = *(__int64 (**)(void))(*(_QWORD *)this + 16LL);
    if ( (char *)v2 == (char *)ATL::CDacl::CAccessAce::GetLength )
      Length = ATL::CDacl::CAccessAce::GetLength(this);
    else
      Length = v2();
    v4 = Length;
    v5 = Length;
    v6 = malloc(Length);
    v7 = v6;
    if ( !v6 )
      ATL::AtlThrowImpl(-2147024882);
    memset(v6, 0, (unsigned int)v5);
    v7[1] = v4;
    *((_BYTE *)v7 + 1) = *((_BYTE *)this + 132);
    v8 = *(_BOOL8 (__fastcall **)(ATL::CDacl::CAccessAce *))(*(_QWORD *)this + 24LL);
    if ( v8 == ATL::CDacl::CAccessAce::AceType )
      v9 = ATL::CDacl::CAccessAce::AceType(this);
    else
      v9 = v8(this);
    *(_BYTE *)v7 = v9;
    *((_DWORD *)v7 + 1) = *((_DWORD *)this + 32);
    LengthSid = GetLengthSid((char *)this + 16);
    v12 = v5 - 8;
    v13 = LengthSid;
    v14 = v7 + 4;
    if ( !LengthSid )
      goto LABEL_12;
    if ( v7 == (_WORD *)-8LL )
      goto LABEL_17;
    if ( this != (ATL::CDacl::CAccessAce *)-16LL && v12 >= LengthSid )
    {
      memcpy_0(v14, (char *)this + 16, LengthSid);
LABEL_12:
      *((_QWORD *)this + 17) = v7;
      return (void *)*((_QWORD *)this + 17);
    }
    memset(v14, 0, v12);
    if ( this == (ATL::CDacl::CAccessAce *)-16LL )
    {
LABEL_17:
      *(_DWORD *)_o__errno(v14, v11) = 22;
    }
    else
    {
      if ( v12 >= v13 )
        goto LABEL_22;
      *(_DWORD *)_o__errno(v14, v11) = 34;
    }
    invalid_parameter_noinfo();
LABEL_22:
    ATL::AtlThrowImpl(-2147024809);
  }
  return (void *)*((_QWORD *)this + 17);
}
