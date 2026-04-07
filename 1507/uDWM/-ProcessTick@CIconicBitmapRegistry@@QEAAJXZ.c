/*
 * XREFs of ?ProcessTick@CIconicBitmapRegistry@@QEAAJXZ @ 0x18006F138
 * Callers:
 *     ?DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z @ 0x1800424A0 (-DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ClearBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@@Z @ 0x180030D04 (-ClearBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?RegisterBitmapPending@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@_N@Z @ 0x180030D40 (-RegisterBitmapPending@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@_N@Z.c)
 *     ?ShiftLeft@?$DynArray@VCIconicBitmapPending@@$0A@@@QEAAJI@Z @ 0x18006FB08 (-ShiftLeft@-$DynArray@VCIconicBitmapPending@@$0A@@@QEAAJI@Z.c)
 *     ?OnRepresentationTypeUpdated@CWindowIconic@@QEAAJXZ @ 0x18007AA98 (-OnRepresentationTypeUpdated@CWindowIconic@@QEAAJXZ.c)
 */

__int64 __fastcall CIconicBitmapRegistry::ProcessTick(CIconicBitmapRegistry *this)
{
  unsigned int v1; // edi
  double i; // xmm6_8
  __int64 v4; // rax
  __int64 v5; // rdx
  CWindowIconic *v6; // rsi
  int v7; // eax
  int v8; // eax
  unsigned int v9; // edi

  v1 = 0;
  for ( i = *((double *)CDesktopManager::s_pDesktopManagerInstance + 31); v1 < *((_DWORD *)this + 18); ++v1 )
  {
    v4 = *((_QWORD *)this + 6);
    if ( *(double *)(v4 + 16LL * v1) > i )
      break;
    v5 = *(_QWORD *)(v4 + 16LL * v1 + 8);
    if ( v5 == -1 )
    {
      v6 = (CWindowIconic *)*((_QWORD *)this + 12);
      *(_WORD *)((char *)this + 89) = 256;
    }
    else
    {
      CIconicBitmapRegistry::RegisterBitmapPending(this, (struct CWindowData *)v5, 0);
      *(_BYTE *)(v5 + 554) |= 8u;
      v6 = *(CWindowIconic **)(v5 + 392);
    }
    CIconicBitmapRegistry::ClearBitmap(this, (CWindowIconic **)v5);
    if ( v6 )
    {
      v7 = CWindowIconic::OnRepresentationTypeUpdated(v6);
      if ( v7 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v7, 0x376u);
    }
  }
  v8 = DynArray<CIconicBitmapPending,0>::ShiftLeft((char *)this + 48, v1);
  v9 = v8;
  if ( v8 >= 0 )
    *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 22) = *((_DWORD *)this + 18) != 0;
  else
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v8, 0x37Cu);
  return v9;
}
