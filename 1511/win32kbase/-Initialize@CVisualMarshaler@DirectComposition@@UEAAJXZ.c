/*
 * XREFs of ?Initialize@CVisualMarshaler@DirectComposition@@UEAAJXZ @ 0x1C0017340
 * Callers:
 *     ?Create@CHostVisualMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C0004284 (-Create@CHostVisualMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z.c)
 *     ?Initialize@CDuplicatedVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@II@Z @ 0x1C0013CD0 (-Initialize@CDuplicatedVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@II@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CVisualMarshaler::Initialize(DirectComposition::CVisualMarshaler *this)
{
  __int64 v1; // rax
  int v3; // eax

  v1 = *(_QWORD *)this;
  *((_DWORD *)this + 23) = 1065353216;
  *((_DWORD *)this + 44) = (*(__int64 (**)(void))(v1 + 280))();
  *((_DWORD *)this + 45) = -1;
  *((_DWORD *)this + 46) = -1;
  *((_DWORD *)this + 47) = -1;
  *((_DWORD *)this + 48) = -1;
  *((_DWORD *)this + 49) = -1;
  v3 = (*(__int64 (__fastcall **)(DirectComposition::CVisualMarshaler *))(*(_QWORD *)this + 288LL))(this);
  *((_BYTE *)this + 220) |= 0x10u;
  *((_DWORD *)this + 54) = v3;
  return 0LL;
}
