/*
 * XREFs of NewNameSpaceObject @ 0x1C0005820
 * Callers:
 *     InitializeNativeNamespace @ 0x1C000520C (InitializeNativeNamespace.c)
 *     CreateNameSpaceObject @ 0x1C0010A20 (CreateNameSpaceObject.c)
 *     AMLIInitialize @ 0x1C0084CC0 (AMLIInitialize.c)
 * Callees:
 *     HeapAlloc @ 0x1C0011E70 (HeapAlloc.c)
 *     memset @ 0x1C00251C0 (memset.c)
 */

_DWORD *__fastcall NewNameSpaceObject(__int64 a1)
{
  _DWORD *v1; // rax
  _DWORD *v2; // rbx

  v1 = (_DWORD *)HeapAlloc(a1, 1330859592LL, 136LL);
  v2 = v1;
  if ( v1 )
  {
    memset(v1, 0, 0x88uLL);
    v2[26] = 2;
    v2[30] = 1;
    *((_QWORD *)v2 + 14) = v2;
  }
  return v2;
}
