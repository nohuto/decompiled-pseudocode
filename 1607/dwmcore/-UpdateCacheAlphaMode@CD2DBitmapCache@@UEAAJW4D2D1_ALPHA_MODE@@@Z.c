/*
 * XREFs of ?UpdateCacheAlphaMode@CD2DBitmapCache@@UEAAJW4D2D1_ALPHA_MODE@@@Z @ 0x180132D70
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DBitmapCache::UpdateCacheAlphaMode(CD2DBitmapCache *this, __int64 a2)
{
  unsigned int v3; // edi
  __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // rcx

  v3 = 0;
  v4 = *((_QWORD *)this + 5);
  if ( v4 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 64LL))(v4, a2);
    v3 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x3Au);
      v6 = *((_QWORD *)this + 4);
      if ( v6 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
        *((_QWORD *)this + 4) = 0LL;
      }
    }
  }
  (*(void (__fastcall **)(CD2DBitmapCache *, _QWORD))(*(_QWORD *)this + 24LL))(this, *((_QWORD *)this + 4));
  return v3;
}
