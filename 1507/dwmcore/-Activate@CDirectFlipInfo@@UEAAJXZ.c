/*
 * XREFs of ?Activate@CDirectFlipInfo@@UEAAJXZ @ 0x1800066B0
 * Callers:
 *     ?Activate@COutOfFrameDirectFlipInfo@@UEAAJXZ @ 0x180005EC0 (-Activate@COutOfFrameDirectFlipInfo@@UEAAJXZ.c)
 * Callees:
 *     ?CheckIndependentFlipSupport@CDirectFlipInfo@@IEAAJPEA_N@Z @ 0x180006244 (-CheckIndependentFlipSupport@CDirectFlipInfo@@IEAAJPEA_N@Z.c)
 *     ?EnsureIndependentFlipState@CDirectFlipInfo@@IEAAJ_N0@Z @ 0x18000632C (-EnsureIndependentFlipState@CDirectFlipInfo@@IEAAJ_N0@Z.c)
 *     ?GetCurrentDXGIResource@CDirectFlipInfo@@IEAAJU_LUID@@PEAPEAUIDXGIResource@@@Z @ 0x180006488 (-GetCurrentDXGIResource@CDirectFlipInfo@@IEAAJU_LUID@@PEAPEAUIDXGIResource@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CDirectFlipInfo::Activate(CDirectFlipInfo *this)
{
  __int64 v1; // rdi
  int v3; // eax
  unsigned int v4; // edi
  int v5; // eax
  int CurrentDXGIResource; // eax
  int v7; // eax
  int v8; // eax
  int v10; // eax
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF
  struct IDXGIResource *v12; // [rsp+58h] [rbp+10h] BYREF
  struct _LUID v13; // [rsp+60h] [rbp+18h] BYREF

  v1 = *((_QWORD *)this + 2);
  v11 = 0LL;
  v12 = 0LL;
  v3 = (*(__int64 (__fastcall **)(__int64, struct _LUID *, _QWORD))(*(_QWORD *)v1 + 104LL))(v1, &v13, 0LL);
  v4 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x104u);
  }
  else if ( *((_DWORD *)this + 14) == 4
         || (v10 = CDirectFlipInfo::CheckIndependentFlipSupport(this, (bool *)this + 88), v4 = v10, v10 >= 0) )
  {
    v5 = CDirectFlipInfo::EnsureIndependentFlipState(this, *((_BYTE *)this + 40) == 0, 0);
    v4 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x10Bu);
    }
    else
    {
      CurrentDXGIResource = CDirectFlipInfo::GetCurrentDXGIResource((CCompositionSurfaceInfo **)this, v13, &v12);
      v4 = CurrentDXGIResource;
      if ( CurrentDXGIResource < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, CurrentDXGIResource, 0x10Du);
      }
      else
      {
        v7 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 2))(
               *((_QWORD *)this + 2),
               &GUID_d96ea0e9_6207_4781_b3d6_49c499730deb,
               &v11);
        v4 = v7;
        if ( v7 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x110u);
        }
        else
        {
          v8 = (*(__int64 (__fastcall **)(__int64, struct IDXGIResource *))(*(_QWORD *)v11 + 320LL))(v11, v12);
          v4 = v8;
          if ( v8 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x112u);
          else
            *((_DWORD *)this + 14) = 4;
        }
      }
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x108u);
  }
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  if ( v12 )
    ((void (__fastcall *)(struct IDXGIResource *))v12->lpVtbl->Release)(v12);
  return v4;
}
