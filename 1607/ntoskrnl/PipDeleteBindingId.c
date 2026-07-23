/*
 * XREFs of PipDeleteBindingId @ 0x14062B210
 * Callers:
 *     IoResolveDependency @ 0x140142E54 (IoResolveDependency.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x14040E5E0 (RtlEqualUnicodeString.c)
 *     PipFreeBindingId @ 0x14062B390 (PipFreeBindingId.c)
 */

__int64 __fastcall PipDeleteBindingId(__int64 a1, const UNICODE_STRING *a2)
{
  const UNICODE_STRING *v2; // rdi
  const UNICODE_STRING *v4; // rbx
  unsigned int v5; // esi
  __int64 v7; // rcx
  wchar_t *Buffer; // rax

  v2 = (const UNICODE_STRING *)(a1 + 56);
  v4 = *(const UNICODE_STRING **)(a1 + 56);
  v5 = -1073741275;
  while ( v4 != v2 )
  {
    if ( RtlEqualUnicodeString(v4 + 1, a2, 0) )
    {
      v7 = *(_QWORD *)&v4->Length;
      Buffer = v4->Buffer;
      if ( *(const UNICODE_STRING **)(*(_QWORD *)&v4->Length + 8LL) != v4 || *(const UNICODE_STRING **)Buffer != v4 )
        __fastfail(3u);
      *(_QWORD *)Buffer = v7;
      *(_QWORD *)(v7 + 8) = Buffer;
      PipFreeBindingId(v4);
      return 0;
    }
    v4 = *(const UNICODE_STRING **)&v4->Length;
  }
  return v5;
}
