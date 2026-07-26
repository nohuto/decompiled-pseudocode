/*
 * XREFs of ndisMAllocateRequest @ 0x1C00408E4
 * Callers:
 *     ndisIndicateStatusInternal @ 0x1C00152FC (ndisIndicateStatusInternal.c)
 *     ndisMRestoreFilterSettings @ 0x1C00413D4 (ndisMRestoreFilterSettings.c)
 * Callees:
 *     memmove @ 0x1C0023700 (memmove.c)
 *     memset @ 0x1C0023A40 (memset.c)
 */

_DWORD *__fastcall ndisMAllocateRequest(void *a1, int a2, int a3, const void *a4, unsigned int Size)
{
  _DWORD *result; // rax
  _DWORD *v10; // rbx
  void *v11; // rax

  result = ExAllocatePoolWithTag(NonPagedPoolNx, Size + 248LL, 0x7172444Eu);
  v10 = result;
  if ( result )
  {
    memset(result, 0, Size + 248LL);
    v10[1] = a3;
    *((_QWORD *)v10 + 5) = v10 + 62;
    *v10 = 16253334;
    v10[8] = a2;
    v10[12] = Size;
    if ( a4 )
      memmove(v10 + 62, a4, Size);
    v11 = &ndisIntReqGeneric;
    if ( a1 )
      v11 = a1;
    *((_QWORD *)v10 + 13) = v11;
    return v10;
  }
  return result;
}
