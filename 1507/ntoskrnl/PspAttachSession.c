/*
 * XREFs of PspAttachSession @ 0x14051C288
 * Callers:
 *     PspAllocateProcess @ 0x140468798 (PspAllocateProcess.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     MmAttachSession @ 0x1400FD5A0 (MmAttachSession.c)
 *     MmGetSessionById @ 0x1400FD644 (MmGetSessionById.c)
 */

__int64 __fastcall PspAttachSession(int a1, __int64 a2, _KPROCESS **a3)
{
  _KPROCESS *SessionById; // rax
  _KPROCESS *v6; // rbx
  int v7; // edi

  SessionById = (_KPROCESS *)MmGetSessionById(a1);
  v6 = SessionById;
  if ( !SessionById )
    return 3221225738LL;
  *a3 = SessionById;
  v7 = MmAttachSession(SessionById, a2);
  if ( v7 < 0 )
    ObfDereferenceObject(v6);
  return (unsigned int)v7;
}
