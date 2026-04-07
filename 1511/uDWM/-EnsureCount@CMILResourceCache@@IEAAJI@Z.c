/*
 * XREFs of ?EnsureCount@CMILResourceCache@@IEAAJI@Z @ 0x180042AE0
 * Callers:
 *     ?SetResource@CMILResourceCache@@UEAAJKPEAUIMILCacheableResource@@@Z @ 0x180042A30 (-SetResource@CMILResourceCache@@UEAAJKPEAUIMILCacheableResource@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18002B0D0 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     memset_0 @ 0x18004FF66 (memset_0.c)
 */

__int64 __fastcall CMILResourceCache::EnsureCount(CMILResourceCache *this, unsigned int a2)
{
  unsigned int v2; // esi
  unsigned int v5; // edi
  signed __int32 v6; // edx
  int v8; // eax

  _InterlockedDecrement((volatile signed __int32 *)this + 14);
  v2 = 0;
  while ( _InterlockedCompareExchange((volatile signed __int32 *)this + 14, 0x80000000, 0) )
    SleepEx(0, 1);
  if ( a2 > *((_DWORD *)this + 8) )
  {
    v5 = a2 - *((_DWORD *)this + 8);
    if ( a2 <= *((_DWORD *)this + 7)
      || (v8 = DynArrayImpl<0>::Grow((__int64)this + 8, 8u, v5, 1, 0LL), v2 = v8, v8 >= 0) )
    {
      memset_0((void *)(*((_QWORD *)this + 1) + 8LL * *((unsigned int *)this + 8)), 0, 8LL * v5);
      *((_DWORD *)this + 8) = a2;
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v8, 0x346u);
    }
  }
  _m_prefetchw((char *)this + 56);
  do
    v6 = *((_DWORD *)this + 14);
  while ( v6 != _InterlockedCompareExchange((volatile signed __int32 *)this + 14, v6 - 0x7FFFFFFF, v6) );
  return v2;
}
