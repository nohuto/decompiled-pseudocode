/*
 * XREFs of AlpcpReferenceMessageByWaitingThreadPortQueue @ 0x140407004
 * Callers:
 *     AlpcpReferenceMessageByWaitingThreadPort @ 0x140406E24 (AlpcpReferenceMessageByWaitingThreadPort.c)
 * Callees:
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 */

_QWORD *__fastcall AlpcpReferenceMessageByWaitingThreadPortQueue(__int64 a1, _QWORD **a2)
{
  _QWORD *v2; // r8
  __int64 BugCheckParameter4; // rax
  __int64 v6; // rdx

  v2 = *a2;
  if ( *a2 == a2 )
    return 0LL;
  while ( v2[4] != a1 )
  {
LABEL_4:
    v2 = (_QWORD *)*v2;
    if ( v2 == a2 )
      return 0LL;
  }
  _m_prefetchw(v2 - 3);
  BugCheckParameter4 = *(v2 - 3);
  do
  {
    if ( BugCheckParameter4 <= 0 )
    {
      if ( BugCheckParameter4 )
        KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)v2, 0x20uLL, BugCheckParameter4);
      goto LABEL_4;
    }
    v6 = BugCheckParameter4;
    BugCheckParameter4 = _InterlockedCompareExchange64(v2 - 3, BugCheckParameter4 + 1, BugCheckParameter4);
  }
  while ( BugCheckParameter4 != v6 );
  if ( BugCheckParameter4 == -1 )
    goto LABEL_4;
  return v2;
}
