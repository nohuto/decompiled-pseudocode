/*
 * XREFs of ?Init@CSecurityDesc@ATL@@IEAAXAEBU_SECURITY_DESCRIPTOR@@@Z @ 0x180032FCC
 * Callers:
 *     ?DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z @ 0x180033EF0 (-DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180067B60 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?AtlHresultFromLastError@ATL@@YAJXZ @ 0x18006A118 (-AtlHresultFromLastError@ATL@@YAJXZ.c)
 */

void __fastcall ATL::CSecurityDesc::Init(ATL::CSecurityDesc *this, struct _SECURITY_DESCRIPTOR *a2)
{
  void *v4; // rax
  errno_t v5; // eax
  int Error; // ebx
  int v7; // ebx
  WORD pControl; // [rsp+30h] [rbp+8h] BYREF
  rsize_t SourceSize; // [rsp+38h] [rbp+10h] BYREF
  DWORD dwRevision; // [rsp+40h] [rbp+18h] BYREF

  LODWORD(SourceSize) = GetSecurityDescriptorLength(a2);
  v4 = malloc((unsigned int)SourceSize);
  *((_QWORD *)this + 1) = v4;
  if ( !v4 )
    ATL::AtlThrowImpl(-2147024882);
  if ( !GetSecurityDescriptorControl(a2, &pControl, &dwRevision) )
  {
    Error = ATL::AtlHresultFromLastError();
    free(*((void **)this + 1));
    *((_QWORD *)this + 1) = 0LL;
    ATL::AtlThrowImpl(Error);
  }
  if ( (pControl & 0x8000u) == 0 )
  {
    if ( !MakeSelfRelativeSD(a2, *((PSECURITY_DESCRIPTOR *)this + 1), (LPDWORD)&SourceSize) )
    {
      v7 = ATL::AtlHresultFromLastError();
      free(*((void **)this + 1));
      *((_QWORD *)this + 1) = 0LL;
      ATL::AtlThrowImpl(v7);
    }
  }
  else
  {
    v5 = memcpy_s(*((void *const *)this + 1), (unsigned int)SourceSize, a2, (unsigned int)SourceSize);
    if ( v5 )
    {
      if ( v5 == 12 )
        ATL::AtlThrowImpl(-2147024882);
      if ( v5 == 22 || v5 == 34 )
        ATL::AtlThrowImpl(-2147024809);
      if ( v5 != 80 )
        ATL::AtlThrowImpl(-2147467259);
    }
  }
}
