/*
 * XREFs of UsbhCalculateInterfaceBandwidth @ 0x1C003B528
 * Callers:
 *     UsbhSelectConfigOrInterfaceComplete @ 0x1C001F190 (UsbhSelectConfigOrInterfaceComplete.c)
 * Callees:
 *     PdoExt @ 0x1C000D6E0 (PdoExt.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028E30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall UsbhCalculateInterfaceBandwidth(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // edi
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  _DWORD *i; // r15
  unsigned int v12; // r12d
  int v13; // ebp
  _DWORD *v14; // rax

  v6 = 0;
  v7 = 0;
  for ( i = PdoExt(a2, a2, a3, a4); v7 < *(_DWORD *)(a3 + 16); ++v7 )
  {
    v12 = i[290];
    v13 = 0;
    v14 = FdoExt(a1, v8, v9, v10);
    v10 = *((_QWORD *)v14 + 551);
    if ( v10 )
      v13 = (*((__int64 (__fastcall **)(_QWORD, __int64, _QWORD))v14 + 551))(
              *((_QWORD *)v14 + 529),
              a3 + 24 * (v7 + 1LL),
              v12);
    v6 += v13;
  }
  return v6 / 0x3E8;
}
