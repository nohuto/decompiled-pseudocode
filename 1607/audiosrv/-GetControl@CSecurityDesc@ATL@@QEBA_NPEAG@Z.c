/*
 * XREFs of ?GetControl@CSecurityDesc@ATL@@QEBA_NPEAG@Z @ 0x18002C8C8
 * Callers:
 *     ?Clear@CSecurityDesc@ATL@@MEAAXXZ @ 0x18002C730 (-Clear@CSecurityDesc@ATL@@MEAAXXZ.c)
 *     ?MakeSelfRelative@CSecurityDesc@ATL@@QEAAXXZ @ 0x18002C800 (-MakeSelfRelative@CSecurityDesc@ATL@@QEAAXXZ.c)
 *     ?MakeAbsolute@CSecurityDesc@ATL@@QEAAXXZ @ 0x18006CB08 (-MakeAbsolute@CSecurityDesc@ATL@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall ATL::CSecurityDesc::GetControl(ATL::CSecurityDesc *this, unsigned __int16 *a2)
{
  void *v2; // rcx
  bool result; // al
  DWORD dwRevision; // [rsp+38h] [rbp+10h] BYREF

  result = 0;
  if ( a2 )
  {
    *a2 = 0;
    v2 = (void *)*((_QWORD *)this + 1);
    if ( v2 )
    {
      if ( GetSecurityDescriptorControl(v2, a2, &dwRevision) )
        return 1;
    }
  }
  return result;
}
