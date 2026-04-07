/*
 * XREFs of ?Translate2D@CThumbnailAnimatedVisual@@UEAAJPEBUTA_TRANSFORM_2D@@@Z @ 0x180098860
 * Callers:
 *     <none>
 * Callees:
 *     ?RoundToNearestInt@@YAHM@Z @ 0x18001517C (-RoundToNearestInt@@YAHM@Z.c)
 */

__int64 __fastcall CThumbnailAnimatedVisual::Translate2D(
        CThumbnailAnimatedVisual *this,
        const struct TA_TRANSFORM_2D *a2)
{
  *((_DWORD *)this + 17) = RoundToNearestInt(*((float *)a2 + 5));
  *((_DWORD *)this + 18) = RoundToNearestInt(*((float *)a2 + 6));
  return 0LL;
}
