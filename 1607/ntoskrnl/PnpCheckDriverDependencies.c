/*
 * XREFs of PnpCheckDriverDependencies @ 0x14062D430
 * Callers:
 *     PiDevCfgResolveDeviceDependencies @ 0x14063DBB0 (PiDevCfgResolveDeviceDependencies.c)
 *     PiDevCfgResolveDriverDependencies @ 0x14063DE54 (PiDevCfgResolveDriverDependencies.c)
 *     PipProcessPendingObjects @ 0x1407CF6C0 (PipProcessPendingObjects.c)
 * Callees:
 *     _wcsicmp @ 0x14014DD0C (_wcsicmp.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     _SysCtxRegOpenKey @ 0x1404E0B1C (_SysCtxRegOpenKey.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x1404E0C54 (_PnpCtxGetCachedContextBaseKey.c)
 *     _PnpCtxRegQueryValue @ 0x1404E7028 (_PnpCtxRegQueryValue.c)
 */

__int64 __fastcall PnpCheckDriverDependencies(wchar_t *Str1, _BYTE *a2, _BYTE *a3)
{
  char v6; // r15
  int CachedContextBaseKey; // ebx
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  int v15; // eax
  __int64 v17; // rax
  int v18; // [rsp+30h] [rbp-20h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-18h] BYREF
  HANDLE v20; // [rsp+40h] [rbp-10h] BYREF
  __int64 v21; // [rsp+48h] [rbp-8h] BYREF
  unsigned int v22; // [rsp+98h] [rbp+48h] BYREF
  int v23; // [rsp+A0h] [rbp+50h] BYREF
  int v24; // [rsp+A8h] [rbp+58h] BYREF

  v21 = 0LL;
  v20 = 0LL;
  Handle = 0LL;
  v6 = 0;
  v24 = 0;
  v23 = 0;
  *a2 = 0;
  if ( a3 )
    *a3 = 0;
  CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(*(__int64 **)&PiPnpRtlCtx, 4, &v21);
  if ( CachedContextBaseKey >= 0 )
  {
    for ( ; *Str1; Str1 += v17 + 1 )
    {
      if ( !wcsicmp(Str1, L"*") )
      {
        if ( a3 )
          *a3 = 1;
        goto LABEL_40;
      }
      if ( !v6 )
      {
        if ( !v20 )
        {
          v8 = 0LL;
          if ( *(_QWORD *)&PiPnpRtlCtx )
            v8 = **(_QWORD **)&PiPnpRtlCtx;
          v9 = SysCtxRegOpenKey(v8, v21, (__int64)L"Control\\FirmwareResources", 0, 0x20019u, (__int64)&v20);
          CachedContextBaseKey = v9;
          if ( v9 == -1073741772 || v9 == -1073741444 )
          {
            v6 = 1;
LABEL_39:
            CachedContextBaseKey = 0;
            goto LABEL_40;
          }
          if ( v9 < 0 )
            goto LABEL_33;
        }
        if ( Handle )
        {
          ZwClose(Handle);
          Handle = 0LL;
        }
        v10 = 0LL;
        if ( *(_QWORD *)&PiPnpRtlCtx )
          v10 = **(_QWORD **)&PiPnpRtlCtx;
        v11 = SysCtxRegOpenKey(v10, (__int64)v20, (__int64)Str1, 0, 1u, (__int64)&Handle);
        CachedContextBaseKey = v11;
        if ( v11 == -1073741772 || v11 == -1073741444 )
          goto LABEL_39;
        if ( v11 < 0 )
          goto LABEL_33;
        v22 = 4;
        v13 = PnpCtxRegQueryValue(v12, Handle, L"Phase", &v18, &v23, &v22);
        CachedContextBaseKey = v13;
        if ( v13 == -1073741772 )
        {
          CachedContextBaseKey = 0;
          goto LABEL_31;
        }
        if ( v13 == -1073741444 )
          goto LABEL_39;
        if ( v13 < 0 )
          goto LABEL_33;
        if ( v23 != 2 )
          break;
        v22 = 4;
        v15 = PnpCtxRegQueryValue(v14, Handle, L"LastAttemptStatus", &v18, &v24, &v22);
        CachedContextBaseKey = v15;
        if ( v15 == -1073741772 )
        {
          CachedContextBaseKey = 0;
          break;
        }
        if ( v15 == -1073741444 )
          goto LABEL_39;
        if ( v15 < 0 )
          goto LABEL_33;
        if ( v24 )
          break;
      }
LABEL_40:
      v17 = -1LL;
      do
        ++v17;
      while ( Str1[v17] );
    }
    if ( CachedContextBaseKey >= 0 )
    {
LABEL_31:
      if ( !*Str1 )
        *a2 = 1;
    }
  }
LABEL_33:
  if ( v20 )
    ZwClose(v20);
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)CachedContextBaseKey;
}
