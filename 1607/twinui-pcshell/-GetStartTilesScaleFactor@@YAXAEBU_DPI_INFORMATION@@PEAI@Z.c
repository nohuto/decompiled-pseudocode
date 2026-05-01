/*
 * XREFs of ?GetStartTilesScaleFactor@@YAXAEBU_DPI_INFORMATION@@PEAI@Z @ 0x18001AF78
 * Callers:
 *     ?_initimpl@CImmersiveOrPrimaryMonitor@@CAJPEAUHMONITOR__@@QEAUSCALINGINFO@@@Z @ 0x18001B0B8 (-_initimpl@CImmersiveOrPrimaryMonitor@@CAJPEAUHMONITOR__@@QEAUSCALINGINFO@@@Z.c)
 * Callees:
 *     _DisableIndependentStartTiles @ 0x18001AEF0 (_DisableIndependentStartTiles.c)
 *     ?GetLegacyModernScaleFactor@@YA?AW4DEVICE_SCALE_FACTOR@@K@Z @ 0x18001B2BC (-GetLegacyModernScaleFactor@@YA-AW4DEVICE_SCALE_FACTOR@@K@Z.c)
 *     MulDiv_0 @ 0x18002F670 (MulDiv_0.c)
 */

void __fastcall GetStartTilesScaleFactor(const struct _DPI_INFORMATION *a1, enum DEVICE_SCALE_FACTOR *a2)
{
  enum DEVICE_SCALE_FACTOR LegacyModernScaleFactor; // r14d
  enum DEVICE_SCALE_FACTOR v5; // esi
  char v6; // cl
  int v7; // ebx
  int v8; // ecx
  const wchar_t *v9; // r8
  int v10; // edi
  int v11; // edx
  bool v12; // zf
  int v13; // edi
  int v14; // r14d
  float v15; // xmm1_4
  float v16; // xmm0_4
  const wchar_t *v17; // rcx
  int v18; // ebx

  LegacyModernScaleFactor = GetLegacyModernScaleFactor(*((_DWORD *)a1 + 2));
  v5 = GetLegacyModernScaleFactor(*((_DWORD *)a1 + 3));
  v7 = 0;
  if ( DisableIndependentStartTiles(v6) )
  {
    *a2 = LegacyModernScaleFactor;
  }
  else
  {
    v8 = 0;
    v9 = L"P";
    v10 = 0;
    v11 = 0;
    do
    {
      if ( *(_DWORD *)v9 == v5 )
        v8 = v11;
      v12 = *(_DWORD *)v9 == LegacyModernScaleFactor;
      v9 += 2;
      if ( v12 )
        v10 = v11;
      ++v11;
    }
    while ( (unsigned __int64)v11 < 4 );
    v13 = v10 - v8;
    v14 = (*((_DWORD *)a1 + 10) + *((_DWORD *)a1 + 11)) / 2;
    if ( !v14
      || ((v15 = (float)MulDiv_0(150, *((_DWORD *)a1 + 1), 100) / (float)v14,
           (float)((float)*((int *)a1 + 16) / 10.0) < 28.0)
        ? (v16 = FLOAT_1_1538)
        : (v16 = FLOAT_1_259843),
          v15 > v16) )
    {
      if ( v13 >= 0 )
        --v13;
    }
    v17 = L"P";
    do
    {
      if ( *(_DWORD *)v17 == v5 )
        break;
      ++v7;
      v17 += 2;
    }
    while ( (unsigned __int64)v7 < 4 );
    v18 = v13 + v7;
    if ( v18 >= 0 && (unsigned __int64)v18 < 4 )
      v5 = *(_DWORD *)&aP[2 * v18];
    *a2 = v5;
  }
}
