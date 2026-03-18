/*
 * XREFs of _PnpCtxOpenContextBaseKey @ 0x1406D6F90
 * Callers:
 *     PiCMOpenClassKey @ 0x1404E6B44 (PiCMOpenClassKey.c)
 *     PiDevCfgEnumDeviceKeys @ 0x140637764 (PiDevCfgEnumDeviceKeys.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x14064041C (PiDevCfgResolveVariableKeyHandle.c)
 * Callees:
 *     _SysCtxRegOpenKey @ 0x1404FDB8C (_SysCtxRegOpenKey.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x1404FDCC4 (_PnpCtxGetCachedContextBaseKey.c)
 */

__int64 __fastcall PnpCtxOpenContextBaseKey(__int64 a1, int a2, __int64 a3, unsigned int a4, __int64 a5)
{
  __int64 *v5; // rdi
  int CachedContextBaseKey; // ebx
  __int64 v8; // rcx
  int v9; // eax
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  v5 = *(__int64 **)&PiPnpRtlCtx;
  v11 = 0LL;
  CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(*(__int64 **)&PiPnpRtlCtx, a2, &v11);
  if ( CachedContextBaseKey >= 0 )
  {
    if ( v5 )
      v8 = *v5;
    else
      v8 = 0LL;
    v9 = SysCtxRegOpenKey(v8, v11, (__int64)&word_140583CF0, 0, a4, a5);
    if ( v9 == -1073741444 )
    {
      return (unsigned int)-1073741595;
    }
    else if ( v9 < 0 )
    {
      return (unsigned int)v9;
    }
  }
  return (unsigned int)CachedContextBaseKey;
}
