/*
 * XREFs of ?GetVidSchCompanionContext@DXGCONTEXT@@QEAAPEAU_VIDSCH_CONTEXT@@XZ @ 0x1C0156838
 * Callers:
 *     DxgkUpdateGpuVirtualAddress @ 0x1C0154480 (DxgkUpdateGpuVirtualAddress.c)
 *     ?GetVidMmCompanionContext@DXGCONTEXT@@QEAAPEAUVIDMM_COMPANION_CONTEXT@@XZ @ 0x1C01567D0 (-GetVidMmCompanionContext@DXGCONTEXT@@QEAAPEAUVIDMM_COMPANION_CONTEXT@@XZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 */

struct _VIDSCH_CONTEXT *__fastcall DXGCONTEXT::GetVidSchCompanionContext(DXGCONTEXT *this)
{
  int v2; // eax
  _BYTE v4[12]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+2Ch] [rbp-1Ch]
  int v6; // [rsp+34h] [rbp-14h]

  if ( !*((_QWORD *)this + 28) )
  {
    memset(v4, 0, sizeof(v4));
    v5 = 0LL;
    v6 = 0;
    v2 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 40LL) + 292LL);
    *(_QWORD *)v4 = 64LL;
    HIDWORD(v5) = v2;
    *(_DWORD *)&v4[4] = *((_DWORD *)this + 51);
    *(_DWORD *)&v4[8] = *((_DWORD *)this + 82);
    *((_QWORD *)this + 28) = (*(__int64 (__fastcall **)(DXGCONTEXT *, _BYTE *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 376LL)
                                                                                          + 8LL)
                                                                              + 216LL))(
                               this,
                               v4);
  }
  return (struct _VIDSCH_CONTEXT *)*((_QWORD *)this + 28);
}
