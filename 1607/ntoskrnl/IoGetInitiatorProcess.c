/*
 * XREFs of IoGetInitiatorProcess @ 0x1400B1F8C
 * Callers:
 *     IopCheckInitiatorHint @ 0x14009C74C (IopCheckInitiatorHint.c)
 *     IoIsInitiator32bitProcess @ 0x1400B1F5C (IoIsInitiator32bitProcess.c)
 * Callees:
 *     IopGetFileObjectExtension @ 0x14007B5A0 (IopGetFileObjectExtension.c)
 */

__int64 __fastcall IoGetInitiatorProcess(__int64 a1)
{
  __int64 FileObjectExtension; // rax

  if ( *(_QWORD *)(a1 + 208) && (FileObjectExtension = IopGetFileObjectExtension(a1, 1, 0LL)) != 0 )
    return *(_QWORD *)(FileObjectExtension + 8);
  else
    return 0LL;
}
