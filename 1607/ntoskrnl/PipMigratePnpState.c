/*
 * XREFs of PipMigratePnpState @ 0x1407BBCE0
 * Callers:
 *     IopInitializePlugPlayServices @ 0x14079CCD4 (IopInitializePlugPlayServices.c)
 * Callees:
 *     RtlCompareMemory @ 0x140167460 (RtlCompareMemory.c)
 *     _PnpCtxRegCreateKey @ 0x14048706C (_PnpCtxRegCreateKey.c)
 *     _PnpCtxRegSetValue @ 0x1404870E4 (_PnpCtxRegSetValue.c)
 *     _PnpCtxRegOpenKey @ 0x1404FCD1C (_PnpCtxRegOpenKey.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x1404FDCC4 (_PnpCtxGetCachedContextBaseKey.c)
 *     _PnpCtxRegQueryValue @ 0x140504098 (_PnpCtxRegQueryValue.c)
 *     _CmGetMatchingDeviceList @ 0x140561984 (_CmGetMatchingDeviceList.c)
 *     _PnpCtxRegEnumKeyWithCallback @ 0x140562F74 (_PnpCtxRegEnumKeyWithCallback.c)
 *     _PnpCtxOpenMachine @ 0x140579548 (_PnpCtxOpenMachine.c)
 *     _PnpCtxCloseMachine @ 0x1406D6EA4 (_PnpCtxCloseMachine.c)
 *     _PnpCtxRegCloseKey @ 0x1406D7018 (_PnpCtxRegCloseKey.c)
 *     _PnpCtxRegCopyTree @ 0x1406D7020 (_PnpCtxRegCopyTree.c)
 */

__int64 PipMigratePnpState()
{
  char v0; // si
  PERESOURCE *v1; // rdi
  int v2; // eax
  __int64 v3; // rcx
  int CachedContextBaseKey; // ebx
  int v6; // eax
  int v7; // eax
  __int64 v8; // r9
  int v9; // eax
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // r8
  int v13; // eax
  int MatchingDeviceList; // eax
  __int64 v15; // [rsp+20h] [rbp-49h]
  __int64 v16; // [rsp+28h] [rbp-41h]
  void *v17; // [rsp+40h] [rbp-29h] BYREF
  void *v18; // [rsp+48h] [rbp-21h] BYREF
  void *v19; // [rsp+50h] [rbp-19h] BYREF
  int v20; // [rsp+58h] [rbp-11h] BYREF
  __int64 v21; // [rsp+60h] [rbp-9h] BYREF
  PERESOURCE *v22; // [rsp+68h] [rbp-1h] BYREF
  void *v23; // [rsp+70h] [rbp+7h] BYREF
  _BYTE Source2[8]; // [rsp+78h] [rbp+Fh] BYREF
  _BYTE Source1[64]; // [rsp+80h] [rbp+17h] BYREF
  unsigned int v26; // [rsp+D0h] [rbp+67h] BYREF
  int v27; // [rsp+D8h] [rbp+6Fh] BYREF
  int v28; // [rsp+E0h] [rbp+77h] BYREF
  int v29; // [rsp+E8h] [rbp+7Fh] BYREF

  v18 = 0LL;
  v19 = 0LL;
  v21 = 0LL;
  v0 = 0;
  v27 = 0;
  v1 = 0LL;
  v28 = 0;
  v29 = 0;
  v17 = 0LL;
  v23 = 0LL;
  v22 = 0LL;
  v20 = 0;
  v2 = PnpCtxRegOpenKey(
         *(_QWORD **)&PiPnpRtlCtx,
         -2147483646,
         (int)L"System\\Setup\\Upgrade\\Pnp",
         0,
         131103,
         (__int64)&v18);
  CachedContextBaseKey = v2;
  if ( v2 == -1073741772 )
    goto LABEL_2;
  if ( v2 >= 0 )
  {
    v26 = 4;
    v6 = PnpCtxRegQueryValue(v3, v18, L"MigrationStatus", &v27, &v28, &v26);
    CachedContextBaseKey = v6;
    if ( v6 != -1073741772 )
    {
      if ( v6 < 0 )
        goto LABEL_3;
      if ( v27 != 4 || v26 != 4 )
      {
        CachedContextBaseKey = -1073741823;
        goto LABEL_47;
      }
    }
    v7 = PnpCtxRegOpenKey(*(_QWORD **)&PiPnpRtlCtx, (int)v18, (int)L"CurrentControlSet", 0, 131103, (__int64)&v19);
    CachedContextBaseKey = v7;
    if ( v7 == -1073741772 )
    {
LABEL_2:
      CachedContextBaseKey = 0;
      goto LABEL_3;
    }
    if ( v7 >= 0 )
    {
      CachedContextBaseKey = PnpCtxRegOpenKey(
                               *(_QWORD **)&PiPnpRtlCtx,
                               (int)v19,
                               (int)L"Control\\DeviceMigration",
                               0,
                               131097,
                               (__int64)&v17);
      if ( CachedContextBaseKey >= 0 )
      {
        v26 = 8;
        CachedContextBaseKey = PnpCtxRegQueryValue(v3, v17, L"MigrationTime", &v27, Source2, &v26);
        if ( CachedContextBaseKey >= 0 )
        {
          if ( v27 == 3 && v26 == 8 )
          {
            PnpCtxRegCloseKey(v3, v17);
            v17 = 0LL;
            CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(*(__int64 **)&PiPnpRtlCtx, 4, &v21);
            if ( CachedContextBaseKey < 0 )
              goto LABEL_3;
            CachedContextBaseKey = PnpCtxRegCreateKey(
                                     *(__int64 *)&PiPnpRtlCtx,
                                     v21,
                                     (__int64)L"Control\\DeviceMigration",
                                     v8,
                                     0x20006u,
                                     0LL,
                                     (__int64)&v17,
                                     0LL);
            if ( CachedContextBaseKey < 0 )
              goto LABEL_3;
            v26 = 8;
            v9 = PnpCtxRegQueryValue(v3, v17, L"MigrationTime", &v27, Source1, &v26);
            CachedContextBaseKey = v9;
            if ( v9 == -1073741772 )
              goto LABEL_32;
            if ( v9 < 0 )
              goto LABEL_3;
            if ( v27 == 3 && v26 == 8 )
            {
              if ( RtlCompareMemory(Source1, Source2, 8uLL) == 8 )
              {
                CachedContextBaseKey = -1073741791;
                goto LABEL_3;
              }
LABEL_32:
              v28 = 259;
              CachedContextBaseKey = PnpCtxRegSetValue(v3, v18, (__int64)L"MigrationStatus", 4LL, (__int64)&v28, 4u);
              if ( CachedContextBaseKey < 0 )
                goto LABEL_3;
              CachedContextBaseKey = PnpCtxRegSetValue(v3, v17, (__int64)L"MigrationTime", 3LL, (__int64)Source2, 8u);
              if ( CachedContextBaseKey < 0 )
                goto LABEL_3;
              v26 = 4;
              v0 = 1;
              CachedContextBaseKey = PnpCtxRegQueryValue(v3, v18, L"TargetVersion", &v27, &v29, &v26);
              if ( CachedContextBaseKey < 0 )
                goto LABEL_50;
              if ( v27 != 4 || v26 != 4 )
              {
                CachedContextBaseKey = -1073741823;
                goto LABEL_50;
              }
              if ( (v29 & 0xFFFF0000) != 0xA000000 )
              {
                CachedContextBaseKey = -1073741735;
                goto LABEL_50;
              }
              CachedContextBaseKey = PnpCtxRegCopyTree(v3, (int)v19, 0, v21, 0LL);
              if ( CachedContextBaseKey < 0 )
                goto LABEL_50;
              v10 = PnpCtxRegOpenKey(*(_QWORD **)&PiPnpRtlCtx, (int)v17, (int)L"Services", 0, 131097, (__int64)&v23);
              CachedContextBaseKey = v10;
              if ( v10 != -1073741772 )
              {
                if ( v10 < 0 )
                  goto LABEL_50;
                CachedContextBaseKey = PnpCtxRegEnumKeyWithCallback(
                                         *(__int64 **)&PiPnpRtlCtx,
                                         v23,
                                         (__int64)PipMigrateServiceCallback,
                                         0LL);
                if ( CachedContextBaseKey < 0 )
                  goto LABEL_50;
              }
              v13 = PnpCtxOpenMachine(v3, v11, v12, -1, v15, v16, &v22);
              v1 = v22;
              CachedContextBaseKey = v13;
              if ( v13 < 0 )
                goto LABEL_50;
              MatchingDeviceList = CmGetMatchingDeviceList(
                                     (__int64)v22,
                                     (__int64)&PipMigrateResetDeviceCallback,
                                     0LL,
                                     0LL,
                                     0,
                                     (__int64)&v20,
                                     0);
              CachedContextBaseKey = MatchingDeviceList;
              if ( MatchingDeviceList == -1073741789 )
              {
                CachedContextBaseKey = 0;
                goto LABEL_50;
              }
              if ( MatchingDeviceList < 0 )
                goto LABEL_50;
LABEL_47:
              if ( !v0 )
              {
LABEL_51:
                if ( v1 )
                  PnpCtxCloseMachine(v1);
                goto LABEL_3;
              }
LABEL_50:
              v28 = CachedContextBaseKey;
              PnpCtxRegSetValue(v3, v18, (__int64)L"MigrationStatus", 4LL, (__int64)&v28, 4u);
              goto LABEL_51;
            }
          }
          CachedContextBaseKey = -1073741823;
        }
      }
    }
  }
LABEL_3:
  if ( v23 )
    PnpCtxRegCloseKey(v3, v23);
  if ( v17 )
    PnpCtxRegCloseKey(v3, v17);
  if ( v19 )
    PnpCtxRegCloseKey(v3, v19);
  if ( v18 )
    PnpCtxRegCloseKey(v3, v18);
  return (unsigned int)CachedContextBaseKey;
}
