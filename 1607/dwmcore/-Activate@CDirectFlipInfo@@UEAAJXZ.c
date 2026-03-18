/*
 * XREFs of ?Activate@CDirectFlipInfo@@UEAAJXZ @ 0x18012C870
 * Callers:
 *     <none>
 * Callees:
 *     ?GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ @ 0x180005F0C (-GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?CheckIndependentFlipSupport@CDirectFlipInfo@@IEAAJPEA_N@Z @ 0x18012CB24 (-CheckIndependentFlipSupport@CDirectFlipInfo@@IEAAJPEA_N@Z.c)
 *     ?EnsureIndependentFlipState@CDirectFlipInfo@@IEAAJ_N0@Z @ 0x18012CDE8 (-EnsureIndependentFlipState@CDirectFlipInfo@@IEAAJ_N0@Z.c)
 *     ?GetCurrentDXGIResource@CDirectFlipInfo@@IEAAJU_LUID@@PEAPEAUIDXGIResource@@@Z @ 0x18012CF88 (-GetCurrentDXGIResource@CDirectFlipInfo@@IEAAJU_LUID@@PEAPEAUIDXGIResource@@@Z.c)
 *     ?RecordDirectFlipState@CCompositionSurfaceInfo@@QEBAJ_K_N@Z @ 0x180152670 (-RecordDirectFlipState@CCompositionSurfaceInfo@@QEBAJ_K_N@Z.c)
 */

__int64 __fastcall CDirectFlipInfo::Activate(CDirectFlipInfo *this)
{
  bool v2; // si
  int v3; // eax
  unsigned int v4; // ebx
  int v5; // eax
  bool v6; // dl
  int v7; // eax
  int CurrentDXGIResource; // eax
  int v9; // eax
  int v10; // eax
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF
  struct IDXGIResource *v13; // [rsp+58h] [rbp+10h] BYREF
  struct _LUID v14; // [rsp+60h] [rbp+18h] BYREF

  v12 = 0LL;
  v13 = 0LL;
  v2 = *((_DWORD *)this + 14) == 4;
  v3 = (*(__int64 (__fastcall **)(_QWORD, struct _LUID *, _QWORD, _QWORD))(**((_QWORD **)this + 2) + 104LL))(
         *((_QWORD *)this + 2),
         &v14,
         0LL,
         0LL);
  v4 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x117u);
  }
  else if ( v2 || (v5 = CDirectFlipInfo::CheckIndependentFlipSupport(this, (bool *)this + 77), v4 = v5, v5 >= 0) )
  {
    CCompositionSurfaceInfo::GetRenderingRealizationNoRef(*((CCompositionSurfaceInfo **)this + 4));
    v6 = !*((_BYTE *)this + 40) && *(_DWORD *)(*((_QWORD *)this + 4) + 76LL) != -1;
    v7 = CDirectFlipInfo::EnsureIndependentFlipState(this, v6, 0);
    v4 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x12Cu);
    }
    else
    {
      CurrentDXGIResource = CDirectFlipInfo::GetCurrentDXGIResource(this, v14, &v13);
      v4 = CurrentDXGIResource;
      if ( CurrentDXGIResource < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, CurrentDXGIResource, 0x12Eu);
      }
      else
      {
        v9 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 2))(
               *((_QWORD *)this + 2),
               &GUID_d96ea0e9_6207_4781_b3d6_49c499730deb,
               &v12);
        v4 = v9;
        if ( v9 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x131u);
        }
        else
        {
          v10 = (*(__int64 (__fastcall **)(__int64, struct IDXGIResource *))(*(_QWORD *)v12 + 344LL))(v12, v13);
          v4 = v10;
          if ( v10 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x133u);
          }
          else
          {
            *((_DWORD *)this + 14) = 4;
            if ( !v2 )
              CCompositionSurfaceInfo::RecordDirectFlipState(
                *((CCompositionSurfaceInfo **)this + 4),
                *((_QWORD *)this + 8),
                1);
          }
        }
      }
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x11Bu);
  }
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  if ( v13 )
    ((void (__fastcall *)(struct IDXGIResource *))v13->lpVtbl->Release)(v13);
  return v4;
}
