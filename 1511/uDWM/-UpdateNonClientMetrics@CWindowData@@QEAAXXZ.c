/*
 * XREFs of ?UpdateNonClientMetrics@CWindowData@@QEAAXXZ @ 0x18001D870
 * Callers:
 *     ?EstablishPixelAlignedScale@CWindowData@@QEAAXPEA_N@Z @ 0x18001E6B4 (-EstablishPixelAlignedScale@CWindowData@@QEAAXPEA_N@Z.c)
 *     ?SettingsChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE@@@Z @ 0x18002D3AC (-SettingsChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE@@@Z.c)
 *     ?DPIChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002DF80 (-DPIChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z @ 0x180032060 (-SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CWindowData::UpdateNonClientMetrics(CWindowData *this)
{
  int v1; // eax
  double v2; // xmm2_8
  char *v3; // rdx
  char *v4; // rax
  __int64 v5; // r8
  __int128 v6; // xmm0
  double v7; // xmm0_8
  int v8; // eax
  double v9; // xmm0_8
  int v10; // eax
  double v11; // xmm0_8
  int v12; // eax
  double v13; // xmm0_8
  int v14; // eax
  double v15; // xmm0_8
  int v16; // eax
  double v17; // xmm0_8
  int v18; // eax
  double v19; // xmm0_8
  int v20; // eax
  double v21; // xmm0_8
  int v22; // eax
  double v23; // xmm0_8
  int v24; // eax
  double v25; // xmm0_8
  int v26; // eax
  double v27; // xmm0_8
  int v28; // eax
  double v29; // xmm0_8
  __int64 v30; // r8
  __int128 v31; // xmm0

  v1 = *((_DWORD *)this + 76);
  v2 = DOUBLE_1_0;
  if ( v1 )
  {
    if ( v1 == 1 || *((_DWORD *)this + 82) )
      v2 = (double)*((int *)this + 77) / (double)*((int *)CDesktopManager::s_pDesktopManagerInstance + 365);
    v4 = (char *)CDesktopManager::s_pDesktopManagerInstance + 280;
    v30 = 3LL;
    v3 = (char *)this + 660;
    do
    {
      v3 += 128;
      v31 = *(_OWORD *)v4;
      v4 += 128;
      *((_OWORD *)v3 - 8) = v31;
      *((_OWORD *)v3 - 7) = *((_OWORD *)v4 - 7);
      *((_OWORD *)v3 - 6) = *((_OWORD *)v4 - 6);
      *((_OWORD *)v3 - 5) = *((_OWORD *)v4 - 5);
      *((_OWORD *)v3 - 4) = *((_OWORD *)v4 - 4);
      *((_OWORD *)v3 - 3) = *((_OWORD *)v4 - 3);
      *((_OWORD *)v3 - 2) = *((_OWORD *)v4 - 2);
      *((_OWORD *)v3 - 1) = *((_OWORD *)v4 - 1);
      --v30;
    }
    while ( v30 );
  }
  else
  {
    v3 = (char *)this + 660;
    v2 = *((double *)this + 37);
    v4 = (char *)CDesktopManager::s_pDesktopManagerInstance + 784;
    v5 = 3LL;
    do
    {
      v3 += 128;
      v6 = *(_OWORD *)v4;
      v4 += 128;
      *((_OWORD *)v3 - 8) = v6;
      *((_OWORD *)v3 - 7) = *((_OWORD *)v4 - 7);
      *((_OWORD *)v3 - 6) = *((_OWORD *)v4 - 6);
      *((_OWORD *)v3 - 5) = *((_OWORD *)v4 - 5);
      *((_OWORD *)v3 - 4) = *((_OWORD *)v4 - 4);
      *((_OWORD *)v3 - 3) = *((_OWORD *)v4 - 3);
      *((_OWORD *)v3 - 2) = *((_OWORD *)v4 - 2);
      *((_OWORD *)v3 - 1) = *((_OWORD *)v4 - 1);
      --v5;
    }
    while ( v5 );
  }
  *(_OWORD *)v3 = *(_OWORD *)v4;
  *((_OWORD *)v3 + 1) = *((_OWORD *)v4 + 1);
  *((_OWORD *)v3 + 2) = *((_OWORD *)v4 + 2);
  *((_OWORD *)v3 + 3) = *((_OWORD *)v4 + 3);
  *((_OWORD *)v3 + 4) = *((_OWORD *)v4 + 4);
  *((_OWORD *)v3 + 5) = *((_OWORD *)v4 + 5);
  *((_OWORD *)v3 + 6) = *((_OWORD *)v4 + 6);
  *((_QWORD *)v3 + 14) = *((_QWORD *)v4 + 14);
  v7 = (double)*((int *)this + 170);
  *((_DWORD *)this + 169) = (int)((double)*((int *)this + 169) * v2);
  v8 = (int)(v7 * v2);
  v9 = (double)*((int *)this + 171);
  *((_DWORD *)this + 170) = v8;
  v10 = (int)(v9 * v2);
  v11 = (double)*((int *)this + 172);
  *((_DWORD *)this + 171) = v10;
  v12 = (int)(v11 * v2);
  v13 = (double)*((int *)this + 195);
  *((_DWORD *)this + 172) = v12;
  v14 = (int)(v13 * v2);
  v15 = (double)*((int *)this + 194);
  *((_DWORD *)this + 195) = v14;
  v16 = (int)(v15 * v2);
  v17 = (double)*((int *)this + 196);
  *((_DWORD *)this + 194) = v16;
  v18 = (int)(v17 * v2);
  v19 = (double)*((int *)this + 197);
  *((_DWORD *)this + 196) = v18;
  v20 = (int)(v19 * v2);
  v21 = (double)*((int *)this + 220);
  *((_DWORD *)this + 197) = v20;
  v22 = (int)(v21 * v2);
  v23 = (double)*((int *)this + 221);
  *((_DWORD *)this + 220) = v22;
  v24 = (int)(v23 * v2);
  v25 = (double)*((int *)this + 222);
  *((_DWORD *)this + 221) = v24;
  v26 = (int)(v25 * v2);
  v27 = (double)*((int *)this + 166);
  *((_DWORD *)this + 222) = v26;
  v28 = (int)(v27 * v2);
  v29 = (double)*((int *)this + 290);
  *((_DWORD *)this + 166) = v28;
  *((_DWORD *)this + 290) = (int)(v29 * v2);
}
