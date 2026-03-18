/*
 * XREFs of RfontIsolationUninitialize @ 0x140329B80
 * Callers:
 *     <none>
 * Callees:
 *     ?Destroy@?$CTypeIsolation@$0DKAAA@$0DKA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x140329AA0 (-Destroy@-$CTypeIsolation@$0DKAAA@$0DKA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 */

struct Gre::Base::SESSION_GLOBALS *__fastcall RfontIsolationUninitialize(Gre::Base *a1)
{
  struct Gre::Base::SESSION_GLOBALS *result; // rax
  struct Gre::Base::SESSION_GLOBALS *v2; // rbx
  void *v3; // rcx

  result = Gre::Base::Globals(a1);
  v2 = result;
  v3 = *(void **)(*((_QWORD *)result + 548) + 40LL);
  if ( v3 )
  {
    NSInstrumentation::CTypeIsolation<237568,928>::Destroy(v3);
    result = (struct Gre::Base::SESSION_GLOBALS *)*((_QWORD *)v2 + 548);
    *((_QWORD *)result + 5) = 0LL;
  }
  return result;
}
