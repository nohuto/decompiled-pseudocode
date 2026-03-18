/*
 * XREFs of _PnpCtxOpenContextBaseKey @ 0x1407122B4
 * Callers:
 *     PiCMOpenClassKey @ 0x1404428B0 (PiCMOpenClassKey.c)
 *     PiDevCfgEnumDeviceKeys @ 0x140685D00 (PiDevCfgEnumDeviceKeys.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x14068BFB8 (PiDevCfgResolveVariableKeyHandle.c)
 * Callees:
 *     _SysCtxRegOpenKey @ 0x140435B90 (_SysCtxRegOpenKey.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x14043D1B0 (_PnpCtxGetCachedContextBaseKey.c)
 */

__int64 __fastcall PnpCtxOpenContextBaseKey(__int64 a1, int a2, __int64 a3, ACCESS_MASK a4, HANDLE *a5)
{
  __int64 *v5; // rdi
  int CachedContextBaseKey; // ebx
  __int64 v8; // rcx
  int v9; // eax
  char *v11; // [rsp+40h] [rbp+8h] BYREF

  v5 = *(__int64 **)&PiPnpRtlCtx;
  v11 = 0LL;
  CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(*(_QWORD **)&PiPnpRtlCtx, a2, &v11);
  if ( CachedContextBaseKey >= 0 )
  {
    if ( v5 )
      v8 = *v5;
    else
      v8 = 0LL;
    v9 = SysCtxRegOpenKey(v8, v11, &word_1405C95F0, 0, a4, a5);
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
