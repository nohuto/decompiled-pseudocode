/*
 * XREFs of RtlpFreeAllAtom @ 0x1400EE398
 * Callers:
 *     RtlpDereferenceAtom @ 0x1400EE310 (RtlpDereferenceAtom.c)
 * Callees:
 *     RtlpHashStringToAtom @ 0x140423FA0 (RtlpHashStringToAtom.c)
 *     RtlpFreeAtom @ 0x140504D9C (RtlpFreeAtom.c)
 *     RtlpFreeHandleForAtom @ 0x140504DC4 (RtlpFreeHandleForAtom.c)
 */

__int64 __fastcall RtlpFreeAllAtom(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax
  _QWORD *v4; // rdi
  __int64 **v5; // rbx
  __int64 *v6; // rcx
  __int64 v7; // rax
  _QWORD *v8; // [rsp+60h] [rbp+8h] BYREF
  _QWORD *v9; // [rsp+70h] [rbp+18h] BYREF
  __int64 v10; // [rsp+78h] [rbp+20h] BYREF

  v8 = a1;
  result = RtlpHashStringToAtom(a2, (char *)a1 + 42, 0LL, &v9, 0LL, &v10, &v8);
  if ( (int)result >= 0 )
  {
    v4 = v8;
    if ( v8 )
    {
      if ( v9 )
        *v9 = *v8;
      v5 = (__int64 **)(v4 + 2);
      while ( *v5 != (__int64 *)v5 )
      {
        v6 = *v5;
        v7 = **v5;
        if ( (__int64 **)(*v5)[1] != v5 || *(__int64 **)(v7 + 8) != v6 )
          __fastfail(3u);
        *v5 = (__int64 *)v7;
        *(_QWORD *)(v7 + 8) = v5;
        RtlpFreeAtom(v6);
      }
      RtlpFreeHandleForAtom(a2, v4);
      return RtlpFreeAtom(v4);
    }
  }
  return result;
}
