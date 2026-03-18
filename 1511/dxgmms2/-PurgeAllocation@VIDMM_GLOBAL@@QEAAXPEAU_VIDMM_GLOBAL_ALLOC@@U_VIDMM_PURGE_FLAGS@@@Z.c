/*
 * XREFs of ?PurgeAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@U_VIDMM_PURGE_FLAGS@@@Z @ 0x1C0062B34
 * Callers:
 *     ?PurgeContent@VIDMM_SEGMENT@@QEAAXU_VIDMM_PURGE_FLAGS@@PEAVVIDMM_PROCESS@@@Z @ 0x1C00624B4 (-PurgeContent@VIDMM_SEGMENT@@QEAAXU_VIDMM_PURGE_FLAGS@@PEAVVIDMM_PROCESS@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0016890 (_guard_dispatch_icall_nop.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@IEAAXKEP6AXPEAX@Z0E@Z @ 0x1C0047410 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@IEAAXKEP6AXPEAX@Z0E@Z.c)
 */

void __fastcall VIDMM_GLOBAL::PurgeAllocation(VIDMM_GLOBAL *a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // al
  __int64 v7; // rcx
  _QWORD *v8; // rax
  __int64 v9; // rdx
  _QWORD *v10; // rcx
  __int64 v11; // rcx
  char v12; // [rsp+20h] [rbp-28h]

  v4 = 0;
  if ( !*(_DWORD *)(a2 + 152) )
  {
    v7 = *(_QWORD *)(a2 + 128);
    if ( v7 )
    {
      if ( (a3 & 2) != 0 || (a3 & 4) != 0 || (a3 & 0x20) != 0 )
        LOBYTE(a4) = 1;
      else
        a4 = 0LL;
      LOBYTE(a3) = a3 & 1;
      v12 = 0;
      (*(void (__fastcall **)(__int64, __int64, __int64, __int64, char, _QWORD))(*(_QWORD *)v7 + 48LL))(
        v7,
        a2,
        a3,
        a4,
        v12,
        0LL);
      v4 = 1;
    }
    if ( *(_QWORD *)(a2 + 256) )
    {
      if ( v4 == 1 )
        VIDMM_GLOBAL::FlushPagingBufferInternal(a1, *(_DWORD *)(a2 + 76) & 0x3F, 0LL, 0LL, 0LL, 0);
      v8 = (_QWORD *)(a2 + 224);
      v9 = *(_QWORD *)(a2 + 224);
      v10 = *(_QWORD **)(a2 + 232);
      if ( *(_QWORD *)(v9 + 8) != a2 + 224 || (_QWORD *)*v10 != v8 )
        __fastfail(3u);
      *v10 = v9;
      *(_QWORD *)(v9 + 8) = v10;
      *v8 = 0LL;
      v11 = *(_QWORD *)(a2 + 256);
      *(_QWORD *)(a2 + 232) = 0LL;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 88LL))(v11, a2);
    }
    else if ( v4 != 1 )
    {
      return;
    }
    VIDMM_GLOBAL::FlushPagingBufferInternal(a1, *(_DWORD *)(a2 + 76) & 0x3F, 0LL, 0LL, 0LL, 0);
  }
}
