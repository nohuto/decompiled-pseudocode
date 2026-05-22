/*
 * XREFs of ?UnInitialize3DComponents@MPCInputRouter@@AEAAXXZ @ 0x18008513C
 * Callers:
 *     ?On3DCompositorRunningChanged@MPCInputRouter@@AEAAX_N@Z @ 0x180085570 (-On3DCompositorRunningChanged@MPCInputRouter@@AEAAX_N@Z.c)
 * Callees:
 *     memset @ 0x18009D814 (memset.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

void __fastcall MPCInputRouter::UnInitialize3DComponents(MPCInputRouter *this)
{
  __int128 v2; // xmm1
  __int64 v3; // xmm0_8
  __int64 v4; // rcx
  __int64 v5; // rcx
  _OWORD v6[3]; // [rsp+20h] [rbp-38h] BYREF

  if ( *((_BYTE *)this + 1044) )
  {
    memset(v6, 0, 0x28uLL);
    v2 = v6[1];
    *((_OWORD *)this + 62) = v6[0];
    v3 = *(_QWORD *)&v6[2];
    *((_OWORD *)this + 63) = v2;
    *((_QWORD *)this + 128) = v3;
    v4 = *((_QWORD *)this + 122);
    if ( v4 )
    {
      *((_QWORD *)this + 122) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    }
    v5 = *((_QWORD *)this + 121);
    if ( v5 )
    {
      *((_QWORD *)this + 121) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
    *((_BYTE *)this + 1044) = 0;
  }
}
