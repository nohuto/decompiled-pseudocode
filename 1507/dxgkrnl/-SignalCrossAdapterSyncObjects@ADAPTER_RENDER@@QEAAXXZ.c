/*
 * XREFs of ?SignalCrossAdapterSyncObjects@ADAPTER_RENDER@@QEAAXXZ @ 0x1C0128C0C
 * Callers:
 *     ?NotifyAdapterRemoval@DXGGLOBAL@@QEAAXXZ @ 0x1C013F7C0 (-NotifyAdapterRemoval@DXGGLOBAL@@QEAAXXZ.c)
 * Callees:
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C0004BE0 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0004C68 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0004C9C (-AcquireExclusive@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

void __fastcall ADAPTER_RENDER::SignalCrossAdapterSyncObjects(ADAPTER_RENDER *this, __int64 a2, __int64 a3, __int64 a4)
{
  struct DXGGLOBAL *Global; // rax
  __int64 *i; // rbx
  __int64 v7; // rax
  _BYTE v8[24]; // [rsp+40h] [rbp-18h] BYREF
  __int64 v9; // [rsp+60h] [rbp+8h] BYREF
  __int64 v10; // [rsp+68h] [rbp+10h] BYREF

  Global = DXGGLOBAL::GetGlobal((__int64)this, a2, a3, a4);
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v8, Global);
  DXGSYNCOBJECTLOCK::AcquireExclusive((DXGSYNCOBJECTLOCK *)v8);
  for ( i = (__int64 *)*((_QWORD *)this + 22); i != (__int64 *)((char *)this + 176) && i; i = (__int64 *)*i )
  {
    if ( *((_BYTE *)i + 26) )
    {
      v7 = i[4];
      v9 = -1LL;
      v10 = v7;
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64 *, _DWORD, __int64 *))(*(_QWORD *)(*((_QWORD *)this + 47)
                                                                                                + 8LL)
                                                                                    + 544LL))(
        0LL,
        0LL,
        1LL,
        &v10,
        0,
        &v9);
    }
  }
  if ( v8[8] )
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v8);
}
