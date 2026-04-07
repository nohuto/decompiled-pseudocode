/*
 * XREFs of ?s_IsCloseEnoughToReuse@CThumbnailVisual@@CA_NPEBUtagRECT@@0@Z @ 0x18007D4F8
 * Callers:
 *     ?GetCVI@CThumbnailVisual@@QEAAJPEBUtagRECT@@PEAPEAVCResource@@PEAUMilPoint3F@@@Z @ 0x18007D128 (-GetCVI@CThumbnailVisual@@QEAAJPEBUtagRECT@@PEAPEAVCResource@@PEAUMilPoint3F@@@Z.c)
 * Callees:
 *     ?s_IsCloseEnoughToReuse@CThumbnailVisual@@CA_NNN@Z @ 0x18007D4C0 (-s_IsCloseEnoughToReuse@CThumbnailVisual@@CA_NNN@Z.c)
 */

bool __fastcall CThumbnailVisual::s_IsCloseEnoughToReuse(const struct tagRECT *a1, const struct tagRECT *a2)
{
  int v2; // r8d
  int v3; // eax
  __int64 v4; // rdx
  int v5; // r9d
  __int64 v6; // r10
  int v7; // ecx
  int v8; // eax

  v2 = a2->right - a2->left;
  if ( v2 < 0 )
    v2 = 0;
  v3 = a1->right - a1->left;
  if ( v3 < 0 )
    v3 = 0;
  if ( CThumbnailVisual::s_IsCloseEnoughToReuse((double)v3, (double)v2) )
  {
    v7 = *(_DWORD *)(v4 + 12) - *(_DWORD *)(v4 + 4);
    if ( v7 < 0 )
      v7 = v5;
    v8 = *(_DWORD *)(v6 + 12) - *(_DWORD *)(v6 + 4);
    if ( v8 < 0 )
      v8 = v5;
    if ( CThumbnailVisual::s_IsCloseEnoughToReuse((double)v8, (double)v7) )
      LOBYTE(v5) = 1;
  }
  return v5;
}
