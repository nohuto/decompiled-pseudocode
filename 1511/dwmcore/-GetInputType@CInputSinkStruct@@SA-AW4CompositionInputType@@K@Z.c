/*
 * XREFs of ?GetInputType@CInputSinkStruct@@SA?AW4CompositionInputType@@K@Z @ 0x180005024
 * Callers:
 *     ?HitTestPoint@CHitTestContext@@QEAAJPEAVCVisual@@PEAVCVisualTree@@HHK_NPEAUHMONITOR__@@PEAPEAXPEAI4PEAU_LUID@@PEAVCMILMatrix@@5PEA_N5@Z @ 0x180008B40 (-HitTestPoint@CHitTestContext@@QEAAJPEAVCVisual@@PEAVCVisualTree@@HHK_NPEAUHMONITOR__@@PEAPEAXPE.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CInputSinkStruct::GetInputType(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
  int v5; // ecx

  v1 = a1 - 2;
  if ( !v1 )
    return 3LL;
  v2 = v1 - 1;
  if ( !v2 )
    return 4LL;
  v3 = v2 - 1;
  if ( !v3 )
    return 1LL;
  v5 = v3 - 1;
  if ( !v5 )
    return 3LL;
  if ( v5 == 1 )
    return 5LL;
  else
    return 0LL;
}
