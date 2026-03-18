/*
 * XREFs of ?GetVidSchCompanionContext@DXGCONTEXT@@QEAAPEAU_VIDSCH_CONTEXT@@XZ @ 0x1C0132D90
 * Callers:
 *     DxgkUpdateGpuVirtualAddress @ 0x1C01304C0 (DxgkUpdateGpuVirtualAddress.c)
 *     ?GetVidMmCompanionContext@DXGCONTEXT@@QEAAPEAUVIDMM_COMPANION_CONTEXT@@XZ @ 0x1C0132D28 (-GetVidMmCompanionContext@DXGCONTEXT@@QEAAPEAUVIDMM_COMPANION_CONTEXT@@XZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 */

struct _VIDSCH_CONTEXT *__fastcall DXGCONTEXT::GetVidSchCompanionContext(DXGCONTEXT *this)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v5; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+28h] [rbp-20h]
  int v7; // [rsp+30h] [rbp-18h]

  if ( !*((_QWORD *)this + 28) )
  {
    v2 = *((_QWORD *)this + 2);
    v5 = 0LL;
    v6 = 0LL;
    v7 = 0;
    v7 = *(_DWORD *)(*(_QWORD *)(v2 + 40) + 316LL);
    HIDWORD(v5) = *((_DWORD *)this + 51);
    LODWORD(v6) = *((_DWORD *)this + 82);
    v3 = *((_QWORD *)this + 2);
    LODWORD(v5) = 64;
    *((_QWORD *)this + 28) = (*(__int64 (__fastcall **)(DXGCONTEXT *, __int64 *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 16) + 376LL)
                                                                                            + 8LL)
                                                                                + 216LL))(
                               this,
                               &v5);
  }
  return (struct _VIDSCH_CONTEXT *)*((_QWORD *)this + 28);
}
