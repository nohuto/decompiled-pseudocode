/*
 * XREFs of NtGdiGetDhpdev @ 0x14032F820
 * Callers:
 *     <none>
 * Callees:
 *     ?ValidUmpdHdev@@YAPEAUHDEV__@@PEAU1@@Z @ 0x1400F4A1C (-ValidUmpdHdev@@YAPEAUHDEV__@@PEAU1@@Z.c)
 */

__int64 __fastcall NtGdiGetDhpdev(Gre::Base *a1)
{
  __int64 v1; // rbx
  __int64 *v2; // rax
  Gre::Base *v3; // rcx
  struct Gre::Base::SESSION_GLOBALS *v4; // rax
  __int64 *v6; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0LL;
  v2 = ValidUmpdHdev(a1);
  if ( v2 )
  {
    v6 = v2;
    v1 = v2[223];
    v4 = Gre::Base::Globals(v3);
    PDEVOBJ::vUnreferencePdev((PDEVOBJ *)&v6, v4);
  }
  return v1;
}
