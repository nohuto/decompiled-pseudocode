/*
 * XREFs of HMRemoveHandleForObject @ 0x1C007B1F0
 * Callers:
 *     <none>
 * Callees:
 *     HMRemoveHandleForObjectWorker @ 0x1C007B26C (HMRemoveHandleForObjectWorker.c)
 *     HMUnlockObject @ 0x1C007B2FC (HMUnlockObject.c)
 */

__int64 __fastcall HMRemoveHandleForObject(_DWORD *a1)
{
  __int64 v1; // rbx
  _BYTE *v2; // rdi
  char v3; // al
  void *v4; // rcx

  v1 = 0LL;
  v2 = (_BYTE *)(qword_1C011A128 + dword_1C011A130 * (unsigned int)(unsigned __int16)*a1);
  v3 = v2[16];
  if ( v3 == 19 )
  {
    v4 = *(void **)(*(_QWORD *)v2 + 32LL);
  }
  else
  {
    if ( v3 != 22 )
      goto LABEL_4;
    v1 = *(_QWORD *)(*(_QWORD *)v2 + 16LL);
    v4 = *(void **)(v1 + 32);
  }
  ObfDereferenceObject(v4);
LABEL_4:
  HMRemoveHandleForObjectWorker(v2);
  if ( !gbInDestroyHandleTableObjects && v1 )
    HMUnlockObject(v1);
  return 1LL;
}
