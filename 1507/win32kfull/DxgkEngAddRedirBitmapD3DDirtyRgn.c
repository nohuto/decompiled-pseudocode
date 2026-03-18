/*
 * XREFs of DxgkEngAddRedirBitmapD3DDirtyRgn @ 0x1C0264180
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C0016C48 (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C0019E80 (-vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 *     GreAddBitmapD3DDirtyRgn @ 0x1C0262294 (GreAddBitmapD3DDirtyRgn.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C0290DF0 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 */

__int64 __fastcall DxgkEngAddRedirBitmapD3DDirtyRgn(HDC a1, __int64 a2)
{
  __int64 v3; // r9
  __int64 v4; // rax
  __int64 v5; // rdx
  void (__fastcall *v6)(__int64, __int64); // r8
  __int64 v7; // rcx
  _QWORD v9[2]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v10[40]; // [rsp+30h] [rbp-28h] BYREF

  DCOBJA::DCOBJA((DCOBJA *)v9, a1);
  v3 = v9[0];
  if ( v9[0] )
  {
    v4 = *(_QWORD *)(v9[0] + 48LL);
    if ( v4 )
    {
      v5 = *(_QWORD *)(v9[0] + 512LL);
      if ( (*(_DWORD *)(v5 + 116) & 1) != 0 )
      {
        ++*(_DWORD *)(v5 + 92);
        v6 = *(void (__fastcall **)(__int64, __int64))(v4 + 3504);
        if ( v6 )
        {
          v7 = *(_QWORD *)(v9[0] + 512LL);
          if ( v7 )
            v7 += 24LL;
          v6(v7, a2);
        }
        v3 = v9[0];
      }
    }
    if ( a2 )
      GreAddBitmapD3DDirtyRgn(*(HWND *)(v3 + 488), *(_DWORD *)a2, *(struct _RECTL **)(a2 + 8));
  }
  XDCOBJ::vAltUnlockNoNullSet((XDCOBJ *)v9);
  return UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v10);
}
