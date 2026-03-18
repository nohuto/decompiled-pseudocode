/*
 * XREFs of RfontIsolationInitialize @ 0x140329AD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Initialize@?$CTypeIsolation@$0DKAAA@$0DKA@@NSInstrumentation@@IEAA_NXZ @ 0x140253580 (-Initialize@-$CTypeIsolation@$0DKAAA@$0DKA@@NSInstrumentation@@IEAA_NXZ.c)
 *     ?Destroy@?$CTypeIsolation@$0DKAAA@$0DKA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x140329AA0 (-Destroy@-$CTypeIsolation@$0DKAAA@$0DKA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 */

__int64 __fastcall RfontIsolationInitialize(Gre::Base *a1)
{
  struct Gre::Base::SESSION_GLOBALS *v1; // rsi
  __int64 Pool2; // rax
  unsigned int v3; // edi
  void *v4; // rbx

  v1 = Gre::Base::Globals(a1);
  Pool2 = ExAllocatePool2(258LL, 40LL, 1869834581LL);
  v3 = 0;
  v4 = (void *)Pool2;
  if ( !Pool2 )
    goto LABEL_4;
  *(_QWORD *)(Pool2 + 16) = 0LL;
  *(_QWORD *)(Pool2 + 24) = 0LL;
  *(_DWORD *)(Pool2 + 32) = 0;
  *(_BYTE *)(Pool2 + 36) = 0;
  *(_QWORD *)(Pool2 + 8) = Pool2;
  *(_QWORD *)Pool2 = Pool2;
  if ( !NSInstrumentation::CTypeIsolation<237568,928>::Initialize(Pool2) )
  {
    NSInstrumentation::CTypeIsolation<237568,928>::Destroy(v4);
LABEL_4:
    v4 = 0LL;
  }
  *(_QWORD *)(*((_QWORD *)v1 + 548) + 40LL) = v4;
  LOBYTE(v3) = *(_QWORD *)(*((_QWORD *)v1 + 548) + 40LL) != 0LL;
  return v3;
}
