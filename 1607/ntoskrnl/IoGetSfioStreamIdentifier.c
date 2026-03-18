/*
 * XREFs of IoGetSfioStreamIdentifier @ 0x1401C8C60
 * Callers:
 *     <none>
 * Callees:
 *     IopGetSetStreamIdentifier @ 0x1401C948C (IopGetSetStreamIdentifier.c)
 */

PVOID __stdcall IoGetSfioStreamIdentifier(PFILE_OBJECT FileObject, PVOID Signature)
{
  void *v3; // [rsp+40h] [rbp+8h] BYREF

  if ( !FileObject || !Signature )
    return 0LL;
  IopGetSetStreamIdentifier((_DWORD)FileObject, 0, (_DWORD)Signature, (unsigned int)&v3, 0);
  return v3;
}
