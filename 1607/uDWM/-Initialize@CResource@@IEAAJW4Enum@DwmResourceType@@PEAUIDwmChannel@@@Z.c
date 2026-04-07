/*
 * XREFs of ?Initialize@CResource@@IEAAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@@Z @ 0x18001A094
 * Callers:
 *     ?Create@CGaussianBlurEffect@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180005520 (-Create@CGaussianBlurEffect@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?Create@CCachedVisualImageBrushResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180009BEC (-Create@CCachedVisualImageBrushResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CResource::Initialize(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v3; // rdi
  int v4; // eax
  unsigned int v5; // ebx

  *(_QWORD *)(a1 + 16) = a3;
  v3 = (_DWORD *)(a1 + 24);
  v4 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a3 + 88LL))(a3, a2, a1 + 24);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x44u);
  }
  else if ( !*v3 )
  {
    v5 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x45u);
  }
  return v5;
}
