/*
 * XREFs of CcRecalculateVacbArrayHighwaterMark @ 0x1401B26D0
 * Callers:
 *     CcUnmapInactiveViews @ 0x140141F0C (CcUnmapInactiveViews.c)
 *     CcGetRandomVacbArrayWithReference @ 0x1401B2638 (CcGetRandomVacbArrayWithReference.c)
 * Callees:
 *     <none>
 */

void __fastcall CcRecalculateVacbArrayHighwaterMark(__int64 a1)
{
  __int64 v1; // rdx

  LODWORD(v1) = *(_DWORD *)(a1 + 8) + 1;
  if ( *(_DWORD *)(a1 + 8) != -1 )
  {
    do
    {
      v1 = (unsigned int)(v1 - 1);
      if ( *(_QWORD *)(a1 + 40 * v1 + 24) )
        break;
      *(_DWORD *)(a1 + 8) = v1;
    }
    while ( (_DWORD)v1 );
  }
}
