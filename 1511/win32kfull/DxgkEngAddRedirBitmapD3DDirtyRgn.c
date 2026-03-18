/*
 * XREFs of DxgkEngAddRedirBitmapD3DDirtyRgn @ 0x1C02628E0
 * Callers:
 *     <none>
 * Callees:
 *     ?vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C002D9F0 (-vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??0MDCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C003A6FC (--0MDCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 *     GreAddBitmapD3DDirtyRgn @ 0x1C0260AF4 (GreAddBitmapD3DDirtyRgn.c)
 */

void __fastcall DxgkEngAddRedirBitmapD3DDirtyRgn(HDC a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rdx
  void (__fastcall *v6)(__int64, __int64); // r8
  __int64 v7; // rax
  __int64 v8; // rcx
  _QWORD v9[3]; // [rsp+20h] [rbp-18h] BYREF

  MDCOBJA::MDCOBJA((MDCOBJA *)v9, a1);
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
          v7 = *(_QWORD *)(v3 + 512);
          if ( v7 )
            v8 = v7 + 24;
          else
            v8 = 0LL;
          v6(v8, a2);
        }
      }
    }
    if ( a2 )
      GreAddBitmapD3DDirtyRgn(*(HWND *)(v3 + 488), *(_DWORD *)a2, *(struct _RECTL **)(a2 + 8));
  }
  XDCOBJ::vAltUnlockNoNullSet((XDCOBJ *)v9);
}
