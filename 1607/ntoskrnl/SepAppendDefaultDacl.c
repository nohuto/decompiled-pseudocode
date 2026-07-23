/*
 * XREFs of SepAppendDefaultDacl @ 0x140479D44
 * Callers:
 *     SepAppendAceToTokenDefaultDacl @ 0x140080840 (SepAppendAceToTokenDefaultDacl.c)
 *     NtSetInformationToken @ 0x1404786A0 (NtSetInformationToken.c)
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
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
