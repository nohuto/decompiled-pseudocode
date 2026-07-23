/*
 * XREFs of DrvDbLoadDatabaseNode @ 0x1404DD3F0
 * Callers:
 *     DrvDbAcquireDatabaseNodeBaseKey @ 0x1404DED30 (DrvDbAcquireDatabaseNodeBaseKey.c)
 *     DrvDbOpenContext @ 0x140578EA0 (DrvDbOpenContext.c)
 *     DrvDbOpenDriverDatabaseRegKey @ 0x14057EFFC (DrvDbOpenDriverDatabaseRegKey.c)
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x1406E260C (DrvDbSetDriverDatabaseMappedProperty.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     DrvDbUnloadDatabaseNode @ 0x1404DD61C (DrvDbUnloadDatabaseNode.c)
 *     _PnpCtxRegCreateTree @ 0x1404DD744 (_PnpCtxRegCreateTree.c)
 *     _SysCtxRegOpenKey @ 0x1404E0B1C (_SysCtxRegOpenKey.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x1404E0C54 (_PnpCtxGetCachedContextBaseKey.c)
 *     DrvDbGetDriverDatabaseMappedProperty @ 0x140576810 (DrvDbGetDriverDatabaseMappedProperty.c)
 *     DrvDbGetSecurityDescriptor @ 0x1406E3790 (DrvDbGetSecurityDescriptor.c)
 *     DrvDbInitializeDatabaseNodeVersion @ 0x1406E3B28 (DrvDbInitializeDatabaseNodeVersion.c)
 */

__int64 __fastcall DrvDbLoadDatabaseNode(__int64 **a1, __int64 a2)
{
  int v2; // eax
  int CachedContextBaseKey; // ebx
  int v4; // r15d
  void *v5; // r13
  __int64 (__fastcall *v6)(__int64 **, _QWORD, __int64); // r12
  int v9; // eax
  __int64 *v10; // r14
  int v11; // eax
  int v12; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  int *v17; // r15
  __int64 v18; // rdx
  int DriverDatabaseMappedProperty; // eax
  int v20; // ecx
  unsigned int v21; // ecx
  int v22; // eax
  __int64 SecurityDescriptor; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  int v26; // ecx
  int v27; // [rsp+98h] [rbp+48h] BYREF
  int v28; // [rsp+A0h] [rbp+50h] BYREF
  __int64 v29; // [rsp+A8h] [rbp+58h] BYREF

  v2 = *(_DWORD *)(a2 + 56);
  CachedContextBaseKey = 0;
  v28 = 0;
  v4 = 0;
  v5 = 0LL;
  v29 = 0LL;
  v6 = 0LL;
  v27 = 1;
  if ( (v2 & 1) == 0 )
  {
    v6 = *(__int64 (__fastcall **)(__int64 **, _QWORD, __int64))(a2 + 64);
    if ( v6 )
    {
      v9 = v6(a1, *(_QWORD *)(a2 + 24), 1LL);
      if ( v9 == -1073741822 )
      {
        v6 = 0LL;
      }
      else if ( v9 < 0 )
      {
        CachedContextBaseKey = v9;
        goto LABEL_7;
      }
    }
    v10 = (__int64 *)(a2 + 80);
    if ( !*(_QWORD *)(a2 + 80) )
    {
      v24 = *(unsigned int *)(a2 + 32);
      if ( (_DWORD)v24 )
      {
        CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(*a1, v24, &v29);
        if ( CachedContextBaseKey < 0 )
          goto LABEL_7;
        v4 = v29;
      }
      if ( *a1 )
        v25 = **a1;
      else
        LODWORD(v25) = 0;
      CachedContextBaseKey = SysCtxRegOpenKey(v25, v4, *(_QWORD *)(a2 + 48), 0, 0x2000000, a2 + 80);
      if ( CachedContextBaseKey < 0 )
      {
LABEL_7:
        if ( v6 )
        {
          v12 = v6(a1, *(_QWORD *)(a2 + 24), 1LL);
          if ( (int)(v12 + 0x80000000) >= 0 && v12 != -1073741822 && !CachedContextBaseKey )
            CachedContextBaseKey = v12;
        }
        goto LABEL_9;
      }
    }
LABEL_6:
    v11 = *(_DWORD *)(a2 + 56);
    if ( (v11 & 8) != 0 )
      goto LABEL_7;
    v16 = *v10;
    v17 = (int *)(a2 + 60);
    v18 = *(_QWORD *)(a2 + 24);
    *(_DWORD *)(a2 + 56) = v11 | 8;
    DriverDatabaseMappedProperty = DrvDbGetDriverDatabaseMappedProperty(
                                     a1,
                                     v18,
                                     v16,
                                     &DEVPKEY_DriverDatabase_Version,
                                     &v27,
                                     a2 + 60,
                                     4,
                                     &v28);
    CachedContextBaseKey = DriverDatabaseMappedProperty;
    if ( DriverDatabaseMappedProperty == -1073741275 )
    {
      v26 = *((_DWORD *)a1 + 2);
      if ( (unsigned int)(v26 - 1) <= 0xFFFFFFFD )
      {
        *v17 = v26;
        DrvDbInitializeDatabaseNodeVersion(a1, a2);
LABEL_53:
        CachedContextBaseKey = 0;
LABEL_25:
        v20 = *v17;
        if ( *v17 )
        {
          if ( v20 == -1 || (v21 = v20 & 0xFFFF0000, v21 < 0x6020000) || v21 > ((_DWORD)a1[1] & 0xFFFF0000) )
          {
            DrvDbUnloadDatabaseNode(a1, a2);
            *(_DWORD *)(a2 + 56) |= 4u;
            CachedContextBaseKey = -1073740697;
          }
        }
        goto LABEL_7;
      }
    }
    else if ( DriverDatabaseMappedProperty >= 0 )
    {
      if ( v27 != 7 || v28 != 4 )
        *v17 = -1;
      goto LABEL_25;
    }
    *v17 = 0;
    goto LABEL_53;
  }
  v10 = (__int64 *)(a2 + 80);
  if ( *(_QWORD *)(a2 + 80) )
    goto LABEL_9;
  if ( a1[4] )
  {
    CachedContextBaseKey = -1073741811;
    goto LABEL_9;
  }
  v14 = *(unsigned int *)(a2 + 32);
  if ( (_DWORD)v14 )
  {
    CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(*a1, v14, &v29);
    if ( CachedContextBaseKey < 0 )
      goto LABEL_9;
    v4 = v29;
  }
  if ( *a1 )
    v15 = **a1;
  else
    LODWORD(v15) = 0;
  v22 = SysCtxRegOpenKey(v15, v4, *(_QWORD *)(a2 + 48), 0, 0x2000000, (__int64)v10);
  CachedContextBaseKey = v22;
  if ( v22 != -1073741772 )
  {
    if ( v22 < 0 )
      goto LABEL_9;
    goto LABEL_33;
  }
  SecurityDescriptor = DrvDbGetSecurityDescriptor();
  v5 = (void *)SecurityDescriptor;
  if ( !SecurityDescriptor )
  {
    CachedContextBaseKey = -1073741595;
    goto LABEL_9;
  }
  CachedContextBaseKey = PnpCtxRegCreateTree(
                           (unsigned int)*a1,
                           v4,
                           *(_QWORD *)(a2 + 48),
                           0,
                           0x2000000,
                           SecurityDescriptor,
                           (__int64)v10,
                           0LL);
  if ( CachedContextBaseKey >= 0 )
  {
    DrvDbInitializeDatabaseNodeVersion(a1, a2);
LABEL_33:
    a1[4] = (__int64 *)a2;
    goto LABEL_6;
  }
LABEL_9:
  *(_DWORD *)(a2 + 144) = CachedContextBaseKey;
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  return (unsigned int)CachedContextBaseKey;
}
