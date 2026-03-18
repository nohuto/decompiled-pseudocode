/*
 * XREFs of ?Deactivate@CDirectFlipInfo@@MEAAJXZ @ 0x180006800
 * Callers:
 *     ?Deactivate@COutOfFrameDirectFlipInfo@@MEAAJXZ @ 0x180005E70 (-Deactivate@COutOfFrameDirectFlipInfo@@MEAAJXZ.c)
 * Callees:
 *     ?EnsureIndependentFlipState@CDirectFlipInfo@@IEAAJ_N0@Z @ 0x18000632C (-EnsureIndependentFlipState@CDirectFlipInfo@@IEAAJ_N0@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CDirectFlipInfo::Deactivate(CDirectFlipInfo *this)
{
  int v2; // eax
  unsigned int v3; // esi
  int v4; // eax
  int v5; // eax
  __int64 v7; // [rsp+50h] [rbp+8h] BYREF
  char v8; // [rsp+58h] [rbp+10h] BYREF

  v7 = 0LL;
  v2 = CDirectFlipInfo::EnsureIndependentFlipState(this, 0, 0);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x126u);
  }
  else
  {
    v4 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 2))(
           *((_QWORD *)this + 2),
           &GUID_d96ea0e9_6207_4781_b3d6_49c499730deb,
           &v7);
    v3 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x129u);
    }
    else
    {
      v5 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v7 + 320LL))(v7, 0LL);
      v3 = v5;
      if ( v5 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x12Bu);
    }
  }
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  (*(void (__fastcall **)(_QWORD, char *, _QWORD))(**((_QWORD **)this + 2) + 104LL))(*((_QWORD *)this + 2), &v8, 0LL);
  *((_DWORD *)this + 14) = (*(_BYTE *)(*((_QWORD *)this + 4) + 180LL) != 0) + 2;
  return v3;
}
