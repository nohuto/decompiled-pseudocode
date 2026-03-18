/*
 * XREFs of DeleteHrgnClip @ 0x1C00EBEC0
 * Callers:
 *     xxxFreeWindow @ 0x1C0066C00 (xxxFreeWindow.c)
 * Callees:
 *     RevalidateDCE @ 0x1C004EEA0 (RevalidateDCE.c)
 */

__int64 __fastcall DeleteHrgnClip(__int64 a1)
{
  int v2; // eax
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx

  *(_DWORD *)(a1 + 64) &= 0xFFFFFF3F;
  v2 = *(_DWORD *)(a1 + 64);
  if ( (v2 & 0x40000) != 0 )
  {
    *(_DWORD *)(a1 + 64) = v2 & 0xFFFBFFFF;
  }
  else
  {
    if ( *(_QWORD *)(a1 + 40) > 2uLL )
      GreMarkDeletableRgn();
    DeleteMaybeSpecialRgn(*(_QWORD *)(a1 + 40));
  }
  result = DeleteMaybeSpecialRgn(*(_QWORD *)(a1 + 48));
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  if ( (*(_DWORD *)(a1 + 64) & 0x2000) == 0 )
  {
    v4 = *(_QWORD *)(a1 + 56);
    if ( !v4 )
      return result;
    result = GreSelectVisRgn(*(_QWORD *)(a1 + 8), v4, 1LL);
    goto LABEL_8;
  }
  result = RevalidateDCE(a1);
  v5 = *(_QWORD *)(a1 + 56);
  if ( v5 )
  {
    result = GreDeleteObject(v5);
LABEL_8:
    *(_QWORD *)(a1 + 56) = 0LL;
  }
  return result;
}
