/*
 * XREFs of NewNameSpaceObject @ 0x1C00058CC
 * Callers:
 *     InitializeNativeNamespace @ 0x1C000547C (InitializeNativeNamespace.c)
 *     CreateNameSpaceObject @ 0x1C00175D0 (CreateNameSpaceObject.c)
 *     AMLIInitialize @ 0x1C00A6000 (AMLIInitialize.c)
 * Callees:
 *     HeapAlloc @ 0x1C0018760 (HeapAlloc.c)
 *     memset @ 0x1C002C1C0 (memset.c)
 */

_QWORD *__fastcall NewNameSpaceObject(__int64 a1)
{
  _QWORD *v1; // rax
  _QWORD *v2; // rbx

  v1 = (_QWORD *)HeapAlloc(a1, 1330859592LL, 144LL);
  v2 = v1;
  if ( v1 )
  {
    memset(v1, 0, 0x90uLL);
    v2[4] = v2 + 3;
    v2[3] = v2 + 3;
    *((_DWORD *)v2 + 28) = 2;
    *((_DWORD *)v2 + 32) = 1;
    v2[15] = v2;
  }
  return v2;
}
