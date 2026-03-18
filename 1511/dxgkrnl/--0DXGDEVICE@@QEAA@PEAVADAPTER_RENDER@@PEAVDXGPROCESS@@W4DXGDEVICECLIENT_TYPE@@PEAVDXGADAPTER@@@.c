/*
 * XREFs of ??0DXGDEVICE@@QEAA@PEAVADAPTER_RENDER@@PEAVDXGPROCESS@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@@Z @ 0x1C006B110
 * Callers:
 *     ?CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@EE@Z @ 0x1C006AF64 (-CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@EE@.c)
 * Callees:
 *     ?AcquireReference@DXGADAPTER@@QEAAXXZ @ 0x1C0002428 (-AcquireReference@DXGADAPTER@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031F4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0012400 (memset.c)
 */

__int64 __fastcall DXGDEVICE::DXGDEVICE(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  bool v11; // zf
  char v12; // al
  __int64 v13; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax

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
  *(_QWORD *)(a1 + 2832) = a5;
  *(_DWORD *)(a1 + 2840) = 0;
  *(_DWORD *)(a1 + 2844) = 0x1000000;
  *(_WORD *)(a1 + 2849) = 0;
  *(_DWORD *)(a1 + 2852) = 0;
  *(_QWORD *)(a1 + 2856) = 0LL;
  *(_QWORD *)(a1 + 2864) = 0LL;
  *(_QWORD *)(a1 + 2872) = 1LL;
  *(_QWORD *)(a1 + 368) = 0LL;
  *(_QWORD *)(a1 + 376) = 0LL;
  *(_QWORD *)(a1 + 384) = 0LL;
  memset((void *)(a1 + 408), 0, 0x80uLL);
  *(_QWORD *)(a1 + 392) = 0LL;
  *(_QWORD *)(a1 + 400) = 0LL;
  memset((void *)(a1 + 592), 0, 0x80uLL);
  memset((void *)(a1 + 720), 0, 0x40uLL);
  memset((void *)(a1 + 784), 0, 0x80uLL);
  memset((void *)(a1 + 912), 0, 0x40uLL);
  memset((void *)(a1 + 976), 0, 0x40uLL);
  memset((void *)(a1 + 1040), 0, 0x80uLL);
  memset((void *)(a1 + 1168), 0, 0x40uLL);
  memset((void *)(a1 + 1232), 0, 0x40uLL);
  memset((void *)(a1 + 1296), 0, 0x400uLL);
  memset((void *)(a1 + 2320), 0, 0x40uLL);
  memset((void *)(a1 + 2384), 0, 0x80uLL);
  memset((void *)(a1 + 2512), 0, 0x40uLL);
  memset((void *)(a1 + 2576), 0, 0x40uLL);
  memset((void *)(a1 + 2640), 0, 0x80uLL);
  memset((void *)(a1 + 2768), 0, 0x40uLL);
  *(_QWORD *)(a1 + 584) = a1 + 576;
  *(_QWORD *)(a1 + 576) = a1 + 576;
  if ( !*(_QWORD *)(a1 + 2832) )
  {
    v8 = *(_QWORD *)(a2 + 16);
    v15 = *(_QWORD *)(a1 + 2832);
    if ( *(_QWORD *)(v8 + 1984) )
      v15 = *(_QWORD *)(a2 + 16);
    *(_QWORD *)(a1 + 2832) = v15;
  }
  v9 = *(_QWORD *)(a1 + 2832);
  if ( v9 )
  {
    if ( !*(_QWORD *)(v9 + 1984) )
    {
      v16 = WdLogNewEntry5_WdAssertion(v8);
      *(_QWORD *)(v16 + 24) = 587LL;
      WdLogEvent5_WdAssertion(v16);
    }
    if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(a1 + 2832)) )
    {
      v17 = WdLogNewEntry5_WdAssertion(v10);
      *(_QWORD *)(v17 + 24) = 588LL;
      WdLogEvent5_WdAssertion(v17);
    }
    DXGADAPTER::AcquireReference(*(DXGADAPTER **)(a1 + 2832));
    *(_DWORD *)(a1 + 2840) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 2832) + 1984LL) + 104LL);
  }
  if ( !a3 || (v11 = (*(unsigned int (**)(void))(*(_QWORD *)(a3 + 80) + 216LL))() == 0, v12 = 1, v11) )
    v12 = 0;
  *(_BYTE *)(a1 + 2848) = v12;
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL) + 1948LL) )
  {
    v13 = *(_QWORD *)(a1 + 40);
    *(_BYTE *)(a1 + 2850) = 1;
    *(_BYTE *)(v13 + 264) = 1;
  }
  return a1;
}
