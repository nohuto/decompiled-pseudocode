/*
 * XREFs of ?Deactivate@CDirectFlipInfo@@MEAAJXZ @ 0x18012CCF0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?EnsureIndependentFlipState@CDirectFlipInfo@@IEAAJ_N0@Z @ 0x18012CDE8 (-EnsureIndependentFlipState@CDirectFlipInfo@@IEAAJ_N0@Z.c)
 *     ?RecordDirectFlipState@CCompositionSurfaceInfo@@QEBAJ_K_N@Z @ 0x180152670 (-RecordDirectFlipState@CCompositionSurfaceInfo@@QEBAJ_K_N@Z.c)
 */

__int64 __fastcall CDirectFlipInfo::Deactivate(CDirectFlipInfo *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v4; // eax
  CCompositionSurfaceInfo *v5; // rcx
  unsigned int v7; // [rsp+20h] [rbp-18h]
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF
  char v9; // [rsp+48h] [rbp+10h] BYREF

  v8 = 0LL;
  v2 = CDirectFlipInfo::EnsureIndependentFlipState(this, 0, 0);
  v3 = v2;
  if ( v2 < 0 )
  {
    v7 = 332;
  }
  else
  {
    v4 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 2))(
           *((_QWORD *)this + 2),
           &GUID_d96ea0e9_6207_4781_b3d6_49c499730deb,
           &v8);
    v3 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x14Fu);
      goto LABEL_8;
    }
    v2 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 344LL))(v8, 0LL);
    v3 = v2;
    if ( v2 >= 0 )
      goto LABEL_8;
    v7 = 337;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, v7);
LABEL_8:
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  (*(void (__fastcall **)(_QWORD, char *, _QWORD, _QWORD))(**((_QWORD **)this + 2) + 104LL))(
    *((_QWORD *)this + 2),
    &v9,
    0LL,
    0LL);
  v5 = (CCompositionSurfaceInfo *)*((_QWORD *)this + 4);
  *((_DWORD *)this + 14) = (*((_BYTE *)v5 + 220) != 0) + 2;
  CCompositionSurfaceInfo::RecordDirectFlipState(v5, *((_QWORD *)this + 8), 0);
  return v3;
}
