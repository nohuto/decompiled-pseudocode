/*
 * XREFs of ?GetACE@CAccessAce@CDacl@ATL@@UEBAPEAXXZ @ 0x18002D9F0
 * Callers:
 *     ?GetPACL@CAcl@ATL@@QEBAPEBU_ACL@@XZ @ 0x18002D700 (-GetPACL@CAcl@ATL@@QEBAPEBU_ACL@@XZ.c)
 * Callees:
 *     ?AceType@CAccessAce@CDacl@ATL@@UEBAEXZ @ 0x18002D9B0 (-AceType@CAccessAce@CDacl@ATL@@UEBAEXZ.c)
 *     ?GetLength@CAccessAce@CDacl@ATL@@UEBAIXZ @ 0x18002D9D0 (-GetLength@CAccessAce@CDacl@ATL@@UEBAIXZ.c)
 *     memset_0 @ 0x180047978 (memset_0.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180067B60 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

void *__fastcall ATL::CDacl::CAccessAce::GetACE(ATL::CDacl::CAccessAce *this)
{
  __int64 (__fastcall *v2)(ATL::CDacl::CAccessAce *); // rbx
  unsigned int Length; // eax
  __int16 v4; // bx
  __int64 v5; // rbp
  _WORD *v6; // rax
  _WORD *v7; // rsi
  _BOOL8 (__fastcall *v8)(ATL::CDacl::CAccessAce *); // rbx
  bool v9; // al
  DWORD LengthSid; // eax
  errno_t v11; // eax

  if ( !*((_QWORD *)this + 17) )
  {
    v2 = *(__int64 (__fastcall **)(ATL::CDacl::CAccessAce *))(*(_QWORD *)this + 16LL);
    if ( v2 == ATL::CDacl::CAccessAce::GetLength )
      Length = ATL::CDacl::CAccessAce::GetLength(this);
    else
      Length = v2(this);
    v4 = Length;
    v5 = Length;
    v6 = malloc(Length);
    v7 = v6;
    if ( !v6 )
      ATL::AtlThrowImpl(-2147024882);
    memset_0(v6, 0, (unsigned int)v5);
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
    v11 = memcpy_s(v7 + 4, v5 - 8, (char *)this + 16, LengthSid);
    if ( v11 )
    {
      if ( v11 == 12 )
        ATL::AtlThrowImpl(-2147024882);
      if ( v11 == 22 || v11 == 34 )
        ATL::AtlThrowImpl(-2147024809);
      if ( v11 != 80 )
        ATL::AtlThrowImpl(-2147467259);
    }
    *((_QWORD *)this + 17) = v7;
  }
  return (void *)*((_QWORD *)this + 17);
}
