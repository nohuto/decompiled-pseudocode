/*
 * XREFs of ?VidMmPurgeAllSegments@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@U_VIDMM_PURGE_FLAGS@@PEAVDXGPROCESS@@@Z @ 0x1C000D568
 * Callers:
 *     ?PurgeSegments@ADAPTER_RENDER@@AEAAXU_VIDMM_PURGE_FLAGS@@PEAVDXGPROCESS@@@Z @ 0x1C00CC378 (-PurgeSegments@ADAPTER_RENDER@@AEAAXU_VIDMM_PURGE_FLAGS@@PEAVDXGPROCESS@@@Z.c)
 * Callees:
 *     ??1DXGPROCESSVIDMMLOCK@@QEAA@XZ @ 0x1C00047F4 (--1DXGPROCESSVIDMMLOCK@@QEAA@XZ.c)
 *     ??0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000481C (--0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

void __fastcall VIDMM_EXPORT::VidMmPurgeAllSegments(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  struct _KTHREAD **Current; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  char v10; // [rsp+30h] [rbp+8h] BYREF
  unsigned int v11; // [rsp+40h] [rbp+18h]

  v11 = a3;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  DXGPROCESSVIDMMLOCK::DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v10, Current);
  v8 = 0LL;
  if ( a4 )
  {
    v9 = *(_QWORD *)(a4 + 72);
    if ( v9 )
      v8 = *(_QWORD *)(v9 + 8LL * (unsigned int)(*(_DWORD *)a1 - 1));
  }
  (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)(a1 + 8) + 80LL))(a2, v11, v8);
  DXGPROCESSVIDMMLOCK::~DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v10);
}
