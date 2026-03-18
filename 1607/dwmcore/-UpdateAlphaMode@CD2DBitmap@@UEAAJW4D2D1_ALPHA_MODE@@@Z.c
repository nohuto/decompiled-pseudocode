/*
 * XREFs of ?UpdateAlphaMode@CD2DBitmap@@UEAAJW4D2D1_ALPHA_MODE@@@Z @ 0x180178DA0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?InitializeBitmaps@CD2DBitmap@@IEAAJXZ @ 0x18009FE8C (-InitializeBitmaps@CD2DBitmap@@IEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DBitmap::UpdateAlphaMode(CD2DBitmap *this, enum D2D1_ALPHA_MODE a2)
{
  unsigned int v2; // edi
  __int64 v4; // rcx
  __int64 v5; // rcx
  int v6; // eax

  v2 = 0;
  if ( *((_DWORD *)this + 29) != a2 )
  {
    *((_DWORD *)this + 29) = a2;
    v4 = *((_QWORD *)this + 6);
    if ( v4 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
      *((_QWORD *)this + 6) = 0LL;
    }
    v5 = *((_QWORD *)this + 7);
    if ( v5 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
      *((_QWORD *)this + 7) = 0LL;
    }
    v6 = CD2DBitmap::InitializeBitmaps((CD2DBitmap *)((char *)this - 104));
    v2 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x1D7u);
  }
  return v2;
}
