/*
 * XREFs of ??0DXGDEVICE@@QEAA@PEAVADAPTER_RENDER@@PEAVDXGPROCESS@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@@Z @ 0x1C0081C8C
 * Callers:
 *     ?CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@EE@Z @ 0x1C0094690 (-CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@EE@.c)
 * Callees:
 *     ?AcquireReference@DXGADAPTER@@QEAAXXZ @ 0x1C0002490 (-AcquireReference@DXGADAPTER@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000250C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0010C80 (memset.c)
 */

__int64 __fastcall DXGDEVICE::DXGDEVICE(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  bool v17; // zf
  char v18; // al
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax

  *(_QWORD *)(a1 + 16) = a2;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 40) = a3;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 1LL;
  *(_DWORD *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_DWORD *)(a1 + 104) = 56;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_DWORD *)(a1 + 128) = -1;
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_DWORD *)(a1 + 152) = 41;
  *(_QWORD *)(a1 + 168) = 0LL;
  *(_QWORD *)(a1 + 160) = 0LL;
  *(_DWORD *)(a1 + 176) = 55;
  *(_DWORD *)(a1 + 200) = -1;
  *(_QWORD *)(a1 + 192) = 0LL;
  *(_QWORD *)(a1 + 184) = 0LL;
  *(_QWORD *)(a1 + 216) = 0LL;
  *(_QWORD *)(a1 + 208) = 0LL;
  *(_DWORD *)(a1 + 224) = 57;
  *(_QWORD *)(a1 + 240) = 0LL;
  *(_QWORD *)(a1 + 232) = 0LL;
  *(_DWORD *)(a1 + 248) = 58;
  *(_DWORD *)(a1 + 272) = -1;
  *(_QWORD *)(a1 + 264) = 0LL;
  *(_QWORD *)(a1 + 256) = 0LL;
  *(_DWORD *)(a1 + 280) = a4;
  *(_DWORD *)(a1 + 284) = 0;
  *(_QWORD *)(a1 + 296) = a1 + 288;
  *(_QWORD *)(a1 + 288) = a1 + 288;
  *(_QWORD *)(a1 + 312) = a1 + 304;
  *(_QWORD *)(a1 + 304) = a1 + 304;
  *(_QWORD *)(a1 + 328) = a1 + 320;
  *(_QWORD *)(a1 + 320) = a1 + 320;
  *(_QWORD *)(a1 + 344) = a1 + 336;
  *(_QWORD *)(a1 + 336) = a1 + 336;
  *(_DWORD *)(a1 + 352) = 0;
  *(_QWORD *)(a1 + 360) = 0LL;
  *(_QWORD *)(a1 + 536) = 0LL;
  *(_QWORD *)(a1 + 544) = 0LL;
  *(_DWORD *)(a1 + 568) = -1;
  *(_QWORD *)(a1 + 560) = 0LL;
  *(_QWORD *)(a1 + 552) = 0LL;
  *(_QWORD *)(a1 + 18704) = a5;
  *(_DWORD *)(a1 + 18712) = 0;
  *(_DWORD *)(a1 + 18716) = 0x1000000;
  *(_WORD *)(a1 + 18721) = 0;
  *(_DWORD *)(a1 + 18724) = 0;
  *(_QWORD *)(a1 + 18728) = 0LL;
  *(_QWORD *)(a1 + 18736) = 0LL;
  *(_QWORD *)(a1 + 18744) = 1LL;
  *(_QWORD *)(a1 + 368) = 0LL;
  *(_QWORD *)(a1 + 376) = 0LL;
  *(_QWORD *)(a1 + 384) = 0LL;
  memset((void *)(a1 + 408), 0, 0x80uLL);
  *(_QWORD *)(a1 + 392) = 0LL;
  *(_QWORD *)(a1 + 400) = 0LL;
  memset((void *)(a1 + 592), 0, 0xF80uLL);
  memset((void *)(a1 + 4560), 0, 0x80uLL);
  memset((void *)(a1 + 4688), 0, 0x40uLL);
  memset((void *)(a1 + 4752), 0, 0x40uLL);
  memset((void *)(a1 + 4816), 0, 0x3000uLL);
  memset((void *)(a1 + 17104), 0, 0x40uLL);
  memset((void *)(a1 + 17168), 0, 0x400uLL);
  memset((void *)(a1 + 18192), 0, 0x40uLL);
  memset((void *)(a1 + 18256), 0, 0x80uLL);
  memset((void *)(a1 + 18384), 0, 0x40uLL);
  memset((void *)(a1 + 18448), 0, 0x40uLL);
  memset((void *)(a1 + 18512), 0, 0x80uLL);
  memset((void *)(a1 + 18640), 0, 0x40uLL);
  *(_QWORD *)(a1 + 584) = a1 + 576;
  *(_QWORD *)(a1 + 576) = a1 + 576;
  if ( !*(_QWORD *)(a1 + 18704) )
  {
    v9 = *(_QWORD *)(a2 + 16);
    v20 = *(_QWORD *)(a1 + 18704);
    if ( *(_QWORD *)(v9 + 1976) )
      v20 = *(_QWORD *)(a2 + 16);
    *(_QWORD *)(a1 + 18704) = v20;
  }
  v12 = *(_QWORD *)(a1 + 18704);
  if ( v12 )
  {
    if ( !*(_QWORD *)(v12 + 1976) )
    {
      v22 = WdLogNewEntry5_WdAssertion(v9, v8, v10, v11);
      *(_QWORD *)(v22 + 24) = 588LL;
      WdLogEvent5_WdAssertion(v22);
    }
    if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(a1 + 18704)) )
    {
      v23 = WdLogNewEntry5_WdAssertion(v14, v13, v15, v16);
      *(_QWORD *)(v23 + 24) = 589LL;
      WdLogEvent5_WdAssertion(v23);
    }
    DXGADAPTER::AcquireReference(*(DXGADAPTER **)(a1 + 18704));
    *(_DWORD *)(a1 + 18712) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 18704) + 1976LL) + 80LL);
  }
  if ( !a3 || (v17 = (*(unsigned int (**)(void))(*(_QWORD *)(a3 + 80) + 216LL))() == 0, v18 = 1, v17) )
    v18 = 0;
  *(_BYTE *)(a1 + 18720) = v18;
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL) + 1940LL) )
  {
    v21 = *(_QWORD *)(a1 + 40);
    *(_BYTE *)(a1 + 18722) = 1;
    *(_BYTE *)(v21 + 264) = 1;
  }
  return a1;
}
