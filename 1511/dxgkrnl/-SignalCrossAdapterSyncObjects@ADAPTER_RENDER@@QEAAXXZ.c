/*
 * XREFs of ?SignalCrossAdapterSyncObjects@ADAPTER_RENDER@@QEAAXXZ @ 0x1C012F268
 * Callers:
 *     ?NotifyAdapterRemoval@DXGGLOBAL@@QEAAXXZ @ 0x1C0145C98 (-NotifyAdapterRemoval@DXGGLOBAL@@QEAAXXZ.c)
 * Callees:
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C00070F0 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0007138 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0011220 (-AcquireExclusive@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

void __fastcall ADAPTER_RENDER::SignalCrossAdapterSyncObjects(ADAPTER_RENDER *this)
{
  struct DXGGLOBAL *Global; // rax
  __int64 *i; // rbx
  __int64 v4; // rax
  _BYTE v5[24]; // [rsp+40h] [rbp-18h] BYREF
  __int64 v6; // [rsp+60h] [rbp+8h] BYREF
  __int64 v7; // [rsp+68h] [rbp+10h] BYREF

  Global = DXGGLOBAL::GetGlobal((__int64)this);
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v5, Global);
  DXGSYNCOBJECTLOCK::AcquireExclusive((DXGSYNCOBJECTLOCK *)v5);
  for ( i = (__int64 *)*((_QWORD *)this + 25); i != (__int64 *)((char *)this + 200) && i; i = (__int64 *)*i )
  {
    if ( *((_BYTE *)i + 26) )
    {
      v4 = i[4];
      v6 = -1LL;
      v7 = v4;
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64 *, _DWORD, __int64 *))(*(_QWORD *)(*((_QWORD *)this + 50)
                                                                                                + 8LL)
                                                                                    + 544LL))(
        0LL,
        0LL,
        1LL,
        &v7,
        0,
        &v6);
    }
  }
  if ( v5[8] )
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v5);
}
