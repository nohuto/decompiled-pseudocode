/*
 * XREFs of ?GetSingleContributorToRealizationAreaNoRef@CBitmapOfDeviceBitmaps@@QEAA_NAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@AEAPEAVCHwDeviceBitmapColorSource@@@Z @ 0x1800F3514
 * Callers:
 *     ?TryFastWarpLock@CBitmapOfDeviceBitmaps@@AEAA_NAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAEPEAI2PEAPEAUIUnknown@@@Z @ 0x1801496C0 (-TryFastWarpLock@CBitmapOfDeviceBitmaps@@AEAA_NAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniquen.c)
 * Callees:
 *     <none>
 */

char __fastcall CBitmapOfDeviceBitmaps::GetSingleContributorToRealizationAreaNoRef(
        __int64 a1,
        const RECT *a2,
        _QWORD *a3)
{
  unsigned int v3; // r12d
  char v4; // di
  unsigned int v5; // ebp
  __int64 v9; // rbx
  __int64 v10; // rsi
  unsigned int v11; // ecx
  unsigned int v12; // edx
  unsigned int bottom; // r8d
  HRGN v14; // rcx

  v3 = *(_DWORD *)(a1 + 320);
  v4 = 0;
  v5 = 0;
  if ( !v3 )
    goto LABEL_19;
  v9 = 0LL;
  while ( 1 )
  {
    v10 = *(_QWORD *)(a1 + 296);
    v11 = *(_DWORD *)(v9 + v10 + 24);
    if ( *(_DWORD *)(v9 + v10 + 32) <= v11 )
      goto LABEL_15;
    v12 = *(_DWORD *)(v9 + v10 + 36);
    if ( v12 <= *(_DWORD *)(v9 + v10 + 28) )
      goto LABEL_15;
    if ( a2->right <= (unsigned int)a2->left )
      goto LABEL_15;
    bottom = a2->bottom;
    if ( bottom <= a2->top )
      goto LABEL_15;
    if ( *(_DWORD *)(v9 + v10 + 32) <= a2->left )
      goto LABEL_15;
    if ( a2->right <= v11 )
      goto LABEL_15;
    if ( v12 <= a2->top )
      goto LABEL_15;
    if ( bottom <= *(_DWORD *)(v9 + v10 + 28) )
      goto LABEL_15;
    v14 = *(HRGN *)(v9 + v10 + 40);
    if ( v14 )
    {
      if ( !RectInRegion(v14, a2) )
        goto LABEL_15;
    }
    if ( v4 )
      break;
    v4 = 1;
    *a3 = *(_QWORD *)(v9 + v10 + 16);
LABEL_15:
    ++v5;
    v9 += 96LL;
    if ( v5 >= v3 )
      goto LABEL_18;
  }
  v4 = 0;
LABEL_18:
  if ( !v4 )
LABEL_19:
    *a3 = 0LL;
  return v4;
}
