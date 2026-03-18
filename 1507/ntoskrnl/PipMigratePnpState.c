/*
 * XREFs of PipMigratePnpState @ 0x1407E75D0
 * Callers:
 *     IopInitializePlugPlayServices @ 0x1407BF6F0 (IopInitializePlugPlayServices.c)
 * Callees:
 *     RtlCompareMemory @ 0x14018BAA0 (RtlCompareMemory.c)
 *     _PnpCtxRegOpenKey @ 0x140435B7C (_PnpCtxRegOpenKey.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x14043D1B0 (_PnpCtxGetCachedContextBaseKey.c)
 *     _PnpCtxRegQueryValue @ 0x14043E1AC (_PnpCtxRegQueryValue.c)
 *     _PnpCtxRegCreateKey @ 0x1404DDA14 (_PnpCtxRegCreateKey.c)
 *     _PnpCtxRegSetValue @ 0x1405575A0 (_PnpCtxRegSetValue.c)
 *     _CmGetMatchingDeviceList @ 0x1405A7E2C (_CmGetMatchingDeviceList.c)
 *     _PnpCtxOpenMachine @ 0x1405BBB38 (_PnpCtxOpenMachine.c)
 *     _PnpCtxCloseMachine @ 0x14071221C (_PnpCtxCloseMachine.c)
 *     _PnpCtxRegCloseKey @ 0x14071233C (_PnpCtxRegCloseKey.c)
 *     _PnpCtxRegCopyTree @ 0x140712344 (_PnpCtxRegCopyTree.c)
 */

__int64 PipMigratePnpState()
{
  char v0; // si
  PVOID *v1; // rdi
  int v2; // eax
  __int64 v3; // rcx
  int CachedContextBaseKey; // ebx
  int Value; // eax
  int v7; // eax
  __int64 v8; // r9
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // r8
  int v12; // eax
  int MatchingDeviceList; // eax
  __int64 v14; // [rsp+20h] [rbp-60h]
  __int64 v15; // [rsp+28h] [rbp-58h]
  int v16; // [rsp+40h] [rbp-40h] BYREF
  void *v17; // [rsp+48h] [rbp-38h] BYREF
  void *v18; // [rsp+50h] [rbp-30h] BYREF
  void *v19; // [rsp+58h] [rbp-28h] BYREF
  __int64 v20; // [rsp+60h] [rbp-20h] BYREF
  PVOID *v21; // [rsp+68h] [rbp-18h] BYREF
  _BYTE Source2[8]; // [rsp+70h] [rbp-10h] BYREF
  _BYTE Source1[8]; // [rsp+78h] [rbp-8h] BYREF
  int v24; // [rsp+C0h] [rbp+40h] BYREF
  int v25; // [rsp+C8h] [rbp+48h] BYREF
  int v26; // [rsp+D0h] [rbp+50h] BYREF
  int v27; // [rsp+D8h] [rbp+58h] BYREF

  v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v0 = 0;
  v25 = 0;
  v1 = 0LL;
  v26 = 0;
  v27 = 0;
  v17 = 0LL;
  v21 = 0LL;
  v16 = 0;
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
    v24 = 4;
    Value = PnpCtxRegQueryValue(v3, v18, (__int64)L"MigrationStatus", (__int64)&v25, (__int64)&v26, (__int64)&v24);
    CachedContextBaseKey = Value;
    if ( Value != -1073741772 )
    {
      if ( Value < 0 )
        goto LABEL_3;
      if ( v25 != 4 || v24 != 4 )
      {
        CachedContextBaseKey = -1073741823;
        goto LABEL_42;
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
        v24 = 8;
        CachedContextBaseKey = PnpCtxRegQueryValue(
                                 v3,
                                 v17,
                                 (__int64)L"MigrationTime",
                                 (__int64)&v25,
                                 (__int64)Source2,
                                 (__int64)&v24);
        if ( CachedContextBaseKey >= 0 )
        {
          if ( v25 == 3 && v24 == 8 )
          {
            PnpCtxRegCloseKey(v3, v17);
            v17 = 0LL;
            CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(*(_QWORD **)&PiPnpRtlCtx, 4, &v20);
            if ( CachedContextBaseKey < 0 )
              goto LABEL_3;
            CachedContextBaseKey = PnpCtxRegCreateKey(
                                     *(__int64 *)&PiPnpRtlCtx,
                                     v20,
                                     (__int64)L"Control\\DeviceMigration",
                                     v8,
                                     0x20006u,
                                     0LL,
                                     (__int64)&v17,
                                     0LL);
            if ( CachedContextBaseKey < 0 )
              goto LABEL_3;
            v24 = 8;
            v9 = PnpCtxRegQueryValue(v3, v17, (__int64)L"MigrationTime", (__int64)&v25, (__int64)Source1, (__int64)&v24);
            CachedContextBaseKey = v9;
            if ( v9 == -1073741772 )
              goto LABEL_30;
            if ( v9 < 0 )
              goto LABEL_3;
            if ( v25 == 3 && v24 == 8 )
            {
              if ( RtlCompareMemory(Source1, Source2, 8uLL) == 8 )
              {
                CachedContextBaseKey = -1073741791;
                goto LABEL_3;
              }
LABEL_30:
              v26 = 259;
              CachedContextBaseKey = PnpCtxRegSetValue(v3, v18, L"MigrationStatus", 4u, &v26, 4u);
              if ( CachedContextBaseKey < 0 )
                goto LABEL_3;
              CachedContextBaseKey = PnpCtxRegSetValue(v3, v17, L"MigrationTime", 3u, Source2, 8u);
              if ( CachedContextBaseKey < 0 )
                goto LABEL_3;
              v24 = 4;
              v0 = 1;
              CachedContextBaseKey = PnpCtxRegQueryValue(
                                       v3,
                                       v18,
                                       (__int64)L"TargetVersion",
                                       (__int64)&v25,
                                       (__int64)&v27,
                                       (__int64)&v24);
              if ( CachedContextBaseKey < 0 )
                goto LABEL_45;
              if ( v25 != 4 || v24 != 4 )
              {
                CachedContextBaseKey = -1073741823;
                goto LABEL_45;
              }
              if ( (v27 & 0xFFFF0000) != 0xA000000 )
              {
                CachedContextBaseKey = -1073741735;
                goto LABEL_45;
              }
              CachedContextBaseKey = PnpCtxRegCopyTree(v3, (int)v19, 0, v20, 0LL);
              if ( CachedContextBaseKey < 0 )
                goto LABEL_45;
              v12 = PnpCtxOpenMachine(v3, v10, v11, -1, v14, v15, &v21);
              v1 = v21;
              CachedContextBaseKey = v12;
              if ( v12 < 0 )
                goto LABEL_45;
              MatchingDeviceList = CmGetMatchingDeviceList(
                                     (__int64)v21,
                                     (__int64)&PipMigrateResetDeviceCallback,
                                     0LL,
                                     0LL,
                                     0,
                                     (__int64)&v16,
                                     0);
              CachedContextBaseKey = MatchingDeviceList;
              if ( MatchingDeviceList == -1073741789 )
              {
                CachedContextBaseKey = 0;
                goto LABEL_45;
              }
              if ( MatchingDeviceList < 0 )
                goto LABEL_45;
LABEL_42:
              if ( !v0 )
              {
LABEL_46:
                if ( v1 )
                  PnpCtxCloseMachine(v1);
                goto LABEL_3;
              }
LABEL_45:
              v26 = CachedContextBaseKey;
              PnpCtxRegSetValue(v3, v18, L"MigrationStatus", 4u, &v26, 4u);
              goto LABEL_46;
            }
          }
          CachedContextBaseKey = -1073741823;
        }
      }
    }
  }
LABEL_3:
  if ( v17 )
    PnpCtxRegCloseKey(v3, v17);
  if ( v19 )
    PnpCtxRegCloseKey(v3, v19);
  if ( v18 )
    PnpCtxRegCloseKey(v3, v18);
  return (unsigned int)CachedContextBaseKey;
}
