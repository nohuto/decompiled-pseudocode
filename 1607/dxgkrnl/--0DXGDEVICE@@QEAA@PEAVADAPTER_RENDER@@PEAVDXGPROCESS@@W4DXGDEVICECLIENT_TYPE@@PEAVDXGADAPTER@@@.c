/*
 * XREFs of ??0DXGDEVICE@@QEAA@PEAVADAPTER_RENDER@@PEAVDXGPROCESS@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@@Z @ 0x1C009CAB8
 * Callers:
 *     ?CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@EE@Z @ 0x1C00937EC (-CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@EE@.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00127C0 (memset.c)
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
  *(_DWORD *)(a1 + 296) = -1;
  *(_QWORD *)(a1 + 288) = 0LL;
  *(_QWORD *)(a1 + 280) = 0LL;
  *(_DWORD *)(a1 + 304) = a4;
  *(_DWORD *)(a1 + 308) = 0;
  *(_QWORD *)(a1 + 320) = a1 + 312;
  *(_QWORD *)(a1 + 312) = a1 + 312;
  *(_QWORD *)(a1 + 336) = a1 + 328;
  *(_QWORD *)(a1 + 328) = a1 + 328;
  *(_QWORD *)(a1 + 352) = a1 + 344;
  *(_QWORD *)(a1 + 344) = a1 + 344;
  *(_QWORD *)(a1 + 368) = a1 + 360;
  *(_QWORD *)(a1 + 360) = a1 + 360;
  *(_DWORD *)(a1 + 376) = 0;
  *(_QWORD *)(a1 + 384) = 0LL;
  *(_QWORD *)(a1 + 560) = 0LL;
  *(_QWORD *)(a1 + 568) = 0LL;
  *(_DWORD *)(a1 + 592) = -1;
  *(_QWORD *)(a1 + 584) = 0LL;
  *(_QWORD *)(a1 + 576) = 0LL;
  *(_QWORD *)(a1 + 2856) = a5;
  *(_DWORD *)(a1 + 2864) = 0;
  *(_DWORD *)(a1 + 2868) = 0x1000000;
  *(_WORD *)(a1 + 2873) = 0;
  *(_DWORD *)(a1 + 2876) = 0;
  *(_QWORD *)(a1 + 2880) = 0LL;
  *(_QWORD *)(a1 + 2888) = 0LL;
  *(_QWORD *)(a1 + 2896) = 1LL;
  *(_WORD *)(a1 + 2904) = 0;
  *(_QWORD *)(a1 + 392) = 0LL;
  *(_QWORD *)(a1 + 400) = 0LL;
  *(_QWORD *)(a1 + 408) = 0LL;
  memset((void *)(a1 + 432), 0, 0x80uLL);
  *(_QWORD *)(a1 + 416) = 0LL;
  *(_QWORD *)(a1 + 424) = 0LL;
  memset((void *)(a1 + 616), 0, 0x80uLL);
  memset((void *)(a1 + 744), 0, 0x840uLL);
  *(_QWORD *)(a1 + 608) = a1 + 600;
  *(_QWORD *)(a1 + 600) = a1 + 600;
  if ( !*(_QWORD *)(a1 + 2856) )
  {
    v8 = *(_QWORD *)(a2 + 16);
    v15 = *(_QWORD *)(a1 + 2856);
    if ( *(_QWORD *)(v8 + 2128) )
      v15 = *(_QWORD *)(a2 + 16);
    *(_QWORD *)(a1 + 2856) = v15;
  }
  v9 = *(_QWORD *)(a1 + 2856);
  if ( v9 )
  {
    if ( !*(_QWORD *)(v9 + 2128) )
    {
      v16 = WdLogNewEntry5_WdAssertion(v8);
      *(_QWORD *)(v16 + 24) = 646LL;
      WdLogEvent5_WdAssertion(v16);
    }
    if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(a1 + 2856)) )
    {
      v17 = WdLogNewEntry5_WdAssertion(v10);
      *(_QWORD *)(v17 + 24) = 647LL;
      WdLogEvent5_WdAssertion(v17);
    }
    _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(a1 + 2856) + 24LL));
    *(_DWORD *)(a1 + 2864) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 2856) + 2128LL) + 80LL);
  }
  if ( !a3 || (v11 = (*(unsigned int (**)(void))(*(_QWORD *)(a3 + 72) + 216LL))() == 0, v12 = 1, v11) )
    v12 = 0;
  *(_BYTE *)(a1 + 2872) = v12;
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL) + 2084LL) )
  {
    v13 = *(_QWORD *)(a1 + 40);
    *(_BYTE *)(a1 + 2874) = 1;
    *(_BYTE *)(v13 + 256) = 1;
  }
  return a1;
}
