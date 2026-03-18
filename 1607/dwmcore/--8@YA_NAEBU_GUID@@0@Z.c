/*
 * XREFs of ??8@YA_NAEBU_GUID@@0@Z @ 0x1800A19A0
 * Callers:
 *     ?HrFindInterface@CRenderTargetBitmap@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180132830 (-HrFindInterface@CRenderTargetBitmap@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall operator==(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // r8

  v2 = *a1 - *a2;
  if ( *a1 == *a2 )
    v2 = a1[1] - a2[1];
  return v2 == 0;
}
