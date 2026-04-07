/*
 * XREFs of ?GetResource@CMILResourceCache@@UEAAJKPEAPEAUIMILCacheableResource@@@Z @ 0x18003CE60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMILResourceCache::GetResource(
        CMILResourceCache *this,
        unsigned int a2,
        struct IMILCacheableResource **a3)
{
  __int64 v4; // rbx
  int v6; // eax
  volatile signed __int64 *v7; // rsi
  struct IMILCacheableResource *v8; // rbx
  bool v9; // zf
  void (__fastcall **v10)(struct IMILCacheableResource *); // rax

  v4 = a2;
  v6 = _InterlockedIncrement((volatile signed __int32 *)this + 14);
  if ( v6 < 0 )
  {
    if ( (v6 & 0x40000000) != 0 )
      return 2147942405LL;
    while ( *((int *)this + 14) < 0 )
      SleepEx(0, 1);
  }
  *a3 = 0LL;
  if ( (unsigned int)v4 < *((_DWORD *)this + 8) )
  {
    v7 = (volatile signed __int64 *)(*((_QWORD *)this + 1) + 8 * v4);
    do
    {
      v8 = (struct IMILCacheableResource *)*v7;
      if ( *(void ****)v7 == &g_MILCacheableResourceDummy )
      {
        SleepEx(0, 1);
        v8 = 0LL;
      }
    }
    while ( v8 != (struct IMILCacheableResource *)_InterlockedCompareExchange64(
                                                    v7,
                                                    (signed __int64)&g_MILCacheableResourceDummy,
                                                    (signed __int64)v8) );
    if ( v8 )
    {
      v9 = (*(unsigned __int8 (__fastcall **)(struct IMILCacheableResource *))(*(_QWORD *)v8 + 32LL))(v8) == 0;
      v10 = *(void (__fastcall ***)(struct IMILCacheableResource *))v8;
      if ( v9 )
      {
        v10[3](v8);
        v8 = 0LL;
      }
      else
      {
        (*v10)(v8);
        *a3 = v8;
      }
    }
    if ( &g_MILCacheableResourceDummy != (void ***)_InterlockedCompareExchange64(
                                                     v7,
                                                     (signed __int64)v8,
                                                     (signed __int64)&g_MILCacheableResourceDummy) )
    {
      if ( v8 )
        (*(void (__fastcall **)(struct IMILCacheableResource *))(*(_QWORD *)v8 + 24LL))(v8);
    }
  }
  _InterlockedDecrement((volatile signed __int32 *)this + 14);
  return 0LL;
}
