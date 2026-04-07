/*
 * XREFs of ??$IntersectRectT@UMilPointAndSizeL@@@@YAHPEAUMilPointAndSizeL@@PEBU0@1@Z @ 0x1800092A8
 * Callers:
 *     ?UpdateDestinationRect@CThumbnailVisual@@QEAAJXZ @ 0x180016980 (-UpdateDestinationRect@CThumbnailVisual@@QEAAJXZ.c)
 *     ?ValidateVisual@CDesktopThumbnailCVIVisual@@UEAAJXZ @ 0x180097940 (-ValidateVisual@CDesktopThumbnailCVIVisual@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IntersectRectT<MilPointAndSizeL>(_DWORD *a1, int *a2, int *a3)
{
  int v3; // r11d
  int v6; // ebx
  int v7; // ebx
  __int64 result; // rax
  int v9; // r8d
  int v10; // edx
  int v11; // r9d
  int v12; // r9d

  v3 = *a3;
  v6 = *a3 + a3[2];
  if ( *a2 + a2[2] < v6 )
    v6 = *a2 + a2[2];
  if ( *a2 > v3 )
    v3 = *a2;
  v7 = v6 - v3;
  *a1 = v3;
  a1[2] = v7;
  if ( v7 > 0 )
  {
    v9 = a3[1];
    v10 = a2[1];
    v11 = v9 + a3[3];
    if ( v10 + a2[3] < v11 )
      v11 = v10 + a2[3];
    if ( v10 > v9 )
      v9 = v10;
    v12 = v11 - v9;
    a1[1] = v9;
    a1[3] = v12;
    if ( v12 > 0 )
      return 1LL;
  }
  result = 0LL;
  *(_QWORD *)a1 = 0LL;
  *((_QWORD *)a1 + 1) = 0LL;
  return result;
}
