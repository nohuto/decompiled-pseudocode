/*
 * XREFs of SepAppendDefaultDacl @ 0x1403BDE04
 * Callers:
 *     SepAppendAceToTokenDefaultDacl @ 0x1400033B0 (SepAppendAceToTokenDefaultDacl.c)
 *     NtSetInformationToken @ 0x1403C45C8 (NtSetInformationToken.c)
 * Callees:
 *     memmove @ 0x140166980 (memmove.c)
 */

void *__fastcall SepAppendDefaultDacl(__int64 a1, unsigned __int16 *a2)
{
  int v3; // ebx
  void *v4; // rdi
  void *result; // rax

  v3 = a2[1];
  v4 = (void *)(*(_QWORD *)(a1 + 176) + 4 * *(unsigned __int8 *)(*(_QWORD *)(a1 + 168) + 1LL) + 8);
  result = memmove(v4, a2, a2[1]);
  *(_DWORD *)(a1 + 140) -= v3;
  *(_QWORD *)(a1 + 184) = v4;
  return result;
}
