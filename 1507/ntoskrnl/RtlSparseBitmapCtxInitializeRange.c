/*
 * XREFs of RtlSparseBitmapCtxInitializeRange @ 0x140273064
 * Callers:
 *     RtlSparseBitmapCtxAllocateRange @ 0x140272FA0 (RtlSparseBitmapCtxAllocateRange.c)
 * Callees:
 *     RtlSetAllBits @ 0x1400D8FF8 (RtlSetAllBits.c)
 *     memset @ 0x140195A80 (memset.c)
 */

void __fastcall RtlSparseBitmapCtxInitializeRange(_DWORD *a1, __int64 a2)
{
  int v4; // ecx

  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_DWORD *)(a2 + 8) = a1[14];
  *(_QWORD *)(a2 + 16) = a2 + 24;
  if ( (a1[18] & 1) != 0 )
    RtlSetAllBits((PRTL_BITMAP)(a2 + 8));
  else
    memset(*(void **)(a2 + 16), 0, 4 * ((unsigned int)((*(_DWORD *)(a2 + 8) & 0x1F) != 0) + (*(_DWORD *)(a2 + 8) >> 5)));
  v4 = a1[17];
  if ( v4 )
    memset((void *)(a2 + (unsigned int)a1[16]), 0, (unsigned int)(v4 * a1[14]));
  *(_DWORD *)a2 = 0;
}
