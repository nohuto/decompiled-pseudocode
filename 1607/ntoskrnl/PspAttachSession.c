/*
 * XREFs of PspAttachSession @ 0x1404CC854
 * Callers:
 *     PspAllocateProcess @ 0x14046DF00 (PspAllocateProcess.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     MmAttachSession @ 0x14007659C (MmAttachSession.c)
 *     MmGetSessionById @ 0x140076640 (MmGetSessionById.c)
 */

__int64 __fastcall PspAttachSession(unsigned int a1, __int64 a2, ULONG_PTR *a3)
{
  ULONG_PTR SessionById; // rax
  void *v5; // rbx
  int v6; // edi

  SessionById = MmGetSessionById(a1, a2, (__int64)a3);
  v5 = (void *)SessionById;
  if ( !SessionById )
    return 3221225738LL;
  *a3 = SessionById;
  v6 = MmAttachSession(SessionById);
  if ( v6 < 0 )
    ObfDereferenceObject(v5);
  return (unsigned int)v6;
}
