/*
 * XREFs of ??0Lockable@@QEAA@XZ @ 0x1C00DBDAC
 * Callers:
 *     ??0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z @ 0x1C00DD684 (--0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z.c)
 * Callees:
 *     ??0DXGFASTMUTEX@@QEAA@W4_DXGK_BLOCK_THREAD_REASON@@W4DXGK_LOCK_ORDER@@@Z @ 0x1C0006DD4 (--0DXGFASTMUTEX@@QEAA@W4_DXGK_BLOCK_THREAD_REASON@@W4DXGK_LOCK_ORDER@@@Z.c)
 *     ??_GDXGFASTMUTEX@@QEAAPEAXI@Z @ 0x1C0006E44 (--_GDXGFASTMUTEX@@QEAAPEAXI@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

Lockable *__fastcall Lockable::Lockable(Lockable *this)
{
  PVOID v2; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rdi
  DXGFASTMUTEX *v7; // rcx
  __int64 v9; // rax

  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = &DMMVIDPN::`vftable'{for `FallibleConstruction'};
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 4) = 1;
  v2 = operator new[](0x40uLL, 0x4E506456u, (POOL_TYPE)512);
  if ( v2 )
    v6 = DXGFASTMUTEX::DXGFASTMUTEX((__int64)v2, 17, 13);
  else
    v6 = 0LL;
  v7 = (DXGFASTMUTEX *)*((_QWORD *)this + 3);
  if ( (DXGFASTMUTEX *)v6 != v7 && v7 )
    DXGFASTMUTEX::`scalar deleting destructor'(v7);
  *((_QWORD *)this + 3) = v6;
  if ( v6 )
  {
    *((_DWORD *)this + 4) = 2;
  }
  else
  {
    v9 = WdLogNewEntry5_WdLowResource(v7, v3, v4, v5);
    *(_QWORD *)(v9 + 24) = this;
    WdLogEvent5_WdLowResource(v9);
    *((_DWORD *)this + 2) = -1073741801;
  }
  return this;
}
