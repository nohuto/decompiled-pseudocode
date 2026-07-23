/*
 * XREFs of RtlSparseBitmapCtxInitializeRange @ 0x1800514F8
 * Callers:
 *     RtlSparseBitmapCtxAllocateRange @ 0x180050F70 (RtlSparseBitmapCtxAllocateRange.c)
 * Callees:
 *     RtlSetAllBits @ 0x1800813A0 (RtlSetAllBits.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 */

void __fastcall RtlSparseBitmapCtxInitializeRange(__int64 a1, __int64 a2)
{
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_DWORD *)(a2 + 8) = *(_DWORD *)(a1 + 56);
  *(_QWORD *)(a2 + 16) = a2 + 24;
  if ( (*(_BYTE *)(a1 + 72) & 1) != 0 )
    RtlSetAllBits((PRTL_BITMAP)(a2 + 8));
  else
    memset(*(void **)(a2 + 16), 0, 4 * ((unsigned int)((*(_DWORD *)(a2 + 8) & 0x1F) != 0) + (*(_DWORD *)(a2 + 8) >> 5)));
  if ( *(_DWORD *)(a1 + 68) )
    memset((void *)(a2 + *(unsigned int *)(a1 + 64)), 0, (unsigned int)(*(_DWORD *)(a1 + 68) * *(_DWORD *)(a1 + 56)));
  *(_QWORD *)a2 = 0LL;
}
