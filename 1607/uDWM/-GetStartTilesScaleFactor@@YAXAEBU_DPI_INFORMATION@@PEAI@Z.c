/*
 * XREFs of ?GetStartTilesScaleFactor@@YAXAEBU_DPI_INFORMATION@@PEAI@Z @ 0x180042594
 * Callers:
 *     ?_initimpl@CImmersiveOrPrimaryMonitor@@CAJPEAUHMONITOR__@@QEAUSCALINGINFO@@@Z @ 0x1800424A0 (-_initimpl@CImmersiveOrPrimaryMonitor@@CAJPEAUHMONITOR__@@QEAUSCALINGINFO@@@Z.c)
 * Callees:
 *     ?GetLegacyModernScaleFactor@@YA?AW4DEVICE_SCALE_FACTOR@@K@Z @ 0x180042670 (-GetLegacyModernScaleFactor@@YA-AW4DEVICE_SCALE_FACTOR@@K@Z.c)
 *     _AreStartTilesTooBigAtScaleFactor @ 0x180042740 (_AreStartTilesTooBigAtScaleFactor.c)
 *     _DisableIndependentStartTiles @ 0x1800427CC (_DisableIndependentStartTiles.c)
 */

void __fastcall GetStartTilesScaleFactor(const struct _DPI_INFORMATION *a1, enum DEVICE_SCALE_FACTOR *a2)
{
  enum DEVICE_SCALE_FACTOR LegacyModernScaleFactor; // r15d
  enum DEVICE_SCALE_FACTOR v5; // esi
  int v6; // ebx
  int v7; // ecx
  _DWORD *v8; // r8
  int v9; // edi
  __int64 v10; // rdx
  int v12; // edi
  _DWORD *v13; // rcx
  int v14; // ebx

  LegacyModernScaleFactor = GetLegacyModernScaleFactor(*((_DWORD *)a1 + 2));
  v5 = GetLegacyModernScaleFactor(*((_DWORD *)a1 + 3));
  v6 = 0;
  if ( (unsigned __int8)DisableIndependentStartTiles() )
  {
    *a2 = LegacyModernScaleFactor;
  }
  else
  {
    v7 = 0;
    v8 = dword_1800A4E30;
    v9 = 0;
    LODWORD(v10) = 0;
    do
    {
      if ( *v8 == v5 )
        v7 = v10;
      if ( *v8++ == LegacyModernScaleFactor )
        v9 = v10;
      v10 = (unsigned int)(v10 + 1);
    }
    while ( (unsigned __int64)(int)v10 < 4 );
    v12 = v9 - v7;
    if ( (unsigned __int8)AreStartTilesTooBigAtScaleFactor(a1, v10, v8) && v12 >= 0 )
      --v12;
    v13 = dword_1800A4E30;
    do
    {
      if ( *v13 == v5 )
        break;
      ++v6;
      ++v13;
    }
    while ( (unsigned __int64)v6 < 4 );
    v14 = v12 + v6;
    if ( v14 >= 0 && (unsigned __int64)v14 < 4 )
      v5 = dword_1800A4E30[v14];
    *a2 = v5;
  }
}
