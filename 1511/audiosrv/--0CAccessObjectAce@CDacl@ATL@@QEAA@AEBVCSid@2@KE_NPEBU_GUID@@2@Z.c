/*
 * XREFs of ??0CAccessObjectAce@CDacl@ATL@@QEAA@AEBVCSid@2@KE_NPEBU_GUID@@2@Z @ 0x18007F104
 * Callers:
 *     ?Copy@CDacl@ATL@@AEAAXAEBU_ACL@@@Z @ 0x18002DE40 (-Copy@CDacl@ATL@@AEAAXAEBU_ACL@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800301D0 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800301FC (--2@YAPEAX_K@Z.c)
 *     ??0CAccessAce@CDacl@ATL@@QEAA@AEBVCSid@2@KE_N@Z @ 0x1800662A8 (--0CAccessAce@CDacl@ATL@@QEAA@AEBVCSid@2@KE_N@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180067B60 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
ATL::CDacl::CAccessObjectAce *__fastcall ATL::CDacl::CAccessObjectAce::CAccessObjectAce(
        ATL::CDacl::CAccessObjectAce *this,
        const struct ATL::CSid *a2,
        int a3,
        char a4,
        bool a5,
        const struct _GUID *a6,
        const struct _GUID *a7)
{
  ATL::CDacl::CAccessObjectAce *v7; // rbx
  struct _GUID *v8; // rax
  struct _GUID *v9; // rax

  v7 = this;
  ATL::CDacl::CAccessAce::CAccessAce(this, a2, a3, a4, a5);
  *(_QWORD *)v7 = &ATL::CDacl::CAccessObjectAce::`vftable';
  *((_QWORD *)v7 + 19) = 0LL;
  *((_QWORD *)v7 + 20) = 0LL;
  if ( a6 )
  {
    try
    {
      v8 = (struct _GUID *)operator new(0x10uLL);
      if ( v8 )
        *v8 = *a6;
      *((_QWORD *)v7 + 19) = v8;
    }
    catch ( ... )
    {
      v7 = this;
    }
    if ( !*((_QWORD *)v7 + 19) )
      ATL::AtlThrowImpl(-2147024882);
  }
  if ( a7 )
  {
    try
    {
      v9 = (struct _GUID *)operator new(0x10uLL);
      if ( v9 )
        *v9 = *a7;
      *((_QWORD *)v7 + 20) = v9;
    }
    catch ( ... )
    {
      v7 = this;
    }
    if ( !*((_QWORD *)v7 + 20) )
    {
      operator delete(*((void **)v7 + 19));
      *((_QWORD *)v7 + 19) = 0LL;
      ATL::AtlThrowImpl(-2147024882);
    }
  }
  return v7;
}
