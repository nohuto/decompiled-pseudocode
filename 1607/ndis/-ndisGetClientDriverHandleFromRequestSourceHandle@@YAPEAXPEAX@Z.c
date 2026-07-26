/*
 * XREFs of ?ndisGetClientDriverHandleFromRequestSourceHandle@@YAPEAXPEAX@Z @ 0x1C00E01A0
 * Callers:
 *     ndisOidPrePDCloseProvider @ 0x1C00E1260 (ndisOidPrePDCloseProvider.c)
 *     ndisOidPrePDOpenProvider @ 0x1C00E15A0 (ndisOidPrePDOpenProvider.c)
 * Callees:
 *     <none>
 */

void *__fastcall ndisGetClientDriverHandleFromRequestSourceHandle(_QWORD *a1)
{
  void *result; // rax

  result = 0LL;
  if ( *(_BYTE *)a1 == 18 )
    return (void *)a1[3];
  if ( *(_BYTE *)a1 == 5 )
    return (void *)a1[2];
  return result;
}
