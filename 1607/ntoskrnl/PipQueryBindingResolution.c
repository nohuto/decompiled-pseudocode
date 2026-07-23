/*
 * XREFs of PipQueryBindingResolution @ 0x140568370
 * Callers:
 *     IoResolveDependency @ 0x140142E54 (IoResolveDependency.c)
 *     IoDuplicateDependency @ 0x14062ABCC (IoDuplicateDependency.c)
 *     PipSetDependency @ 0x14062B648 (PipSetDependency.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x14040E5E0 (RtlEqualUnicodeString.c)
 */

__int64 *__fastcall PipQueryBindingResolution(__int64 a1)
{
  __int64 v1; // rbx
  __int64 *v3; // rdi
  __int64 *v4; // rbp
  const UNICODE_STRING *v5; // r14
  const UNICODE_STRING *v6; // r12
  const UNICODE_STRING *v7; // rcx
  __int64 v9; // rax

  v1 = 0LL;
  if ( *(_DWORD *)a1 )
  {
    if ( *(_DWORD *)a1 == 1 )
    {
      v3 = (__int64 *)PiDependencyNodeListHead;
LABEL_4:
      while ( v3 != &PiDependencyNodeListHead )
      {
        v4 = v3;
        v3 = (__int64 *)*v3;
        v5 = (const UNICODE_STRING *)v4[7];
        if ( v5 != (const UNICODE_STRING *)(v4 + 7) )
        {
          v6 = *(const UNICODE_STRING **)(a1 + 8);
          while ( 1 )
          {
            v7 = v5;
            v5 = *(const UNICODE_STRING **)&v5->Length;
            if ( RtlEqualUnicodeString(v7 + 1, v6, 1u) )
              return v4;
            if ( v5 == (const UNICODE_STRING *)(v4 + 7) )
              goto LABEL_4;
          }
        }
      }
    }
  }
  else
  {
    v9 = *(_QWORD *)(a1 + 8);
    if ( v9 )
      return *(__int64 **)(*(_QWORD *)(v9 + 312) + 80LL);
  }
  return (__int64 *)v1;
}
