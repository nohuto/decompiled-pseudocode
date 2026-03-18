/*
 * XREFs of DrvDbSetDriverDatabaseMappedProperty @ 0x14069BA8C
 * Callers:
 *     DrvDbDispatchDriverDatabase @ 0x140443694 (DrvDbDispatchDriverDatabase.c)
 *     DrvDbCreateDatabaseNode @ 0x140524640 (DrvDbCreateDatabaseNode.c)
 *     DrvDbInitializeDatabaseNodeVersion @ 0x14069CE08 (DrvDbInitializeDatabaseNodeVersion.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14003F890 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     _wcsicmp @ 0x14014437C (_wcsicmp.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     DrvDbOpenObjectRegKey @ 0x1404442A0 (DrvDbOpenObjectRegKey.c)
 *     DrvDbLoadDatabaseNode @ 0x14044473C (DrvDbLoadDatabaseNode.c)
 *     DrvDbUnloadDatabaseNode @ 0x14044496C (DrvDbUnloadDatabaseNode.c)
 *     RtlFreeAnsiString @ 0x140445624 (RtlFreeAnsiString.c)
 *     DrvDbFindDatabaseNode @ 0x140447070 (DrvDbFindDatabaseNode.c)
 *     RtlCreateUnicodeString @ 0x140447238 (RtlCreateUnicodeString.c)
 *     DrvDbOpenDriverDatabaseRegKey @ 0x140549920 (DrvDbOpenDriverDatabaseRegKey.c)
 *     DrvDbSetRegValueMappedProperty @ 0x14069C830 (DrvDbSetRegValueMappedProperty.c)
 */

__int64 __fastcall DrvDbSetDriverDatabaseMappedProperty(
        __int64 a1,
        const wchar_t *a2,
        __int64 a3,
        __int64 a4,
        int a5,
        PCWSTR SourceString,
        unsigned int a7)
{
  int DatabaseNode; // esi
  const UNICODE_STRING *v10; // r15
  __int64 v12; // rcx
  int v13; // ecx
  __int64 v14; // rax
  __int64 v15; // rax
  int v16; // eax
  unsigned int v17; // eax
  int v18; // r10d
  __int64 **v19; // rdx
  unsigned int i; // r8d
  __int64 *v21; // r9
  _UNKNOWN **v22; // r13
  __int64 v23; // rdx
  _UNKNOWN **v24; // r9
  _QWORD *v25; // r8
  int v26; // ecx
  __int64 v27; // rax
  struct _KTHREAD *CurrentThread; // rax
  const UNICODE_STRING *v29; // rbx
  int v30; // eax
  struct _ERESOURCE *Buffer; // rcx
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  _UNKNOWN **v35; // r9
  __int64 v36; // rdx
  _QWORD *v37; // r8
  __int64 v38; // rcx
  int v39; // r13d
  int v40; // eax
  __int64 v41; // rax
  struct _KTHREAD *v42; // rax
  const UNICODE_STRING *v43; // rdi
  const UNICODE_STRING *v45; // [rsp+40h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-18h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-8h] BYREF

  DatabaseNode = 0;
  Handle = 0LL;
  v10 = 0LL;
  v45 = 0LL;
  if ( !wcsicmp(a2, L"*") )
  {
    v13 = *(_DWORD *)(a4 + 16);
    if ( v13 == 6 )
    {
      v14 = *(_QWORD *)a4 - DEVPKEY_DriverDatabase_Selected;
      if ( *(_QWORD *)a4 == DEVPKEY_DriverDatabase_Selected )
        v14 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
      if ( !v14 )
      {
        if ( a5 == 17 && a7 == 1 && SourceString )
        {
          if ( *(_BYTE *)SourceString == 0xFF )
            *(_QWORD *)(a1 + 40) = 0LL;
          goto LABEL_122;
        }
        goto LABEL_121;
      }
    }
    if ( v13 != 11 )
      goto LABEL_21;
    v15 = *(_QWORD *)a4 - DEVPKEY_DriverDatabase_AccessMask;
    if ( *(_QWORD *)a4 == DEVPKEY_DriverDatabase_AccessMask )
      v15 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
    if ( v15 )
    {
LABEL_21:
      DatabaseNode = -1073741637;
      goto LABEL_122;
    }
    if ( a5 != 7 || a7 != 4 || !SourceString )
      goto LABEL_121;
    v16 = *(_DWORD *)SourceString;
LABEL_19:
    v17 = v16 & 0xD0000000;
    *(_DWORD *)(a1 + 12) = v17;
    if ( v17 == 0x10000000 )
      *(_DWORD *)(a1 + 12) = -805306368;
    goto LABEL_122;
  }
  v18 = *(_DWORD *)(a4 + 16);
  v19 = off_1402D1A58;
  for ( i = 0; i < 5; ++i )
  {
    v21 = *v19;
    if ( *((_DWORD *)*v19 + 4) == v18 )
    {
      v12 = *v21 - *(_QWORD *)a4;
      if ( *v21 == *(_QWORD *)a4 )
        v12 = v21[1] - *(_QWORD *)(a4 + 8);
      if ( !v12 )
      {
        DatabaseNode = DrvDbFindDatabaseNode(a1, a2, &v45);
        if ( DatabaseNode < 0 )
          goto LABEL_122;
        v26 = *(_DWORD *)(a4 + 16);
        if ( v26 == 5 )
        {
          v27 = *(_QWORD *)a4 - DEVPKEY_DriverDatabase_Loaded;
          if ( *(_QWORD *)a4 == DEVPKEY_DriverDatabase_Loaded )
            v27 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
          if ( !v27 )
          {
            if ( a5 != 17 || a7 != 1 || !SourceString )
              goto LABEL_121;
            if ( ((__int64)v45[3].Buffer & 1) != 0 )
              goto LABEL_44;
            CurrentThread = KeGetCurrentThread();
            --CurrentThread->KernelApcDisable;
            v29 = v45;
            ExAcquireResourceExclusiveLite((PERESOURCE)v45[8].Buffer, 1u);
            if ( *(_BYTE *)SourceString == 0xFF )
              v30 = DrvDbLoadDatabaseNode((_QWORD **)a1, (__int64)v29);
            else
              v30 = DrvDbUnloadDatabaseNode(a1, (__int64)v29);
            Buffer = (struct _ERESOURCE *)v29[8].Buffer;
            DatabaseNode = v30;
LABEL_120:
            ExReleaseResourceLite(Buffer);
            KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
            goto LABEL_122;
          }
        }
        if ( v26 != 6 )
          goto LABEL_64;
        v32 = *(_QWORD *)a4 - DEVPKEY_DriverDatabase_Selected;
        if ( *(_QWORD *)a4 == DEVPKEY_DriverDatabase_Selected )
          v32 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
        if ( v32 )
        {
LABEL_64:
          if ( v26 == 7 )
          {
            v33 = *(_QWORD *)a4 - DEVPKEY_DriverDatabase_Disabled;
            if ( *(_QWORD *)a4 == DEVPKEY_DriverDatabase_Disabled )
              v33 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
            if ( !v33 )
            {
              if ( a5 == 17 && a7 == 1 && SourceString )
              {
                if ( *(_BYTE *)SourceString == 0xFF )
                  LODWORD(v45[3].Buffer) |= 4u;
                else
                  LODWORD(v45[3].Buffer) &= ~4u;
                goto LABEL_122;
              }
              goto LABEL_121;
            }
          }
          if ( v26 != 11 )
            goto LABEL_122;
          v34 = *(_QWORD *)a4 - DEVPKEY_DriverDatabase_AccessMask;
          if ( *(_QWORD *)a4 == DEVPKEY_DriverDatabase_AccessMask )
            v34 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
          if ( v34 )
            goto LABEL_122;
          if ( a5 == 7 && a7 == 4 && SourceString )
          {
            if ( v45 != *(const UNICODE_STRING **)(a1 + 32) )
              goto LABEL_44;
            v16 = *(_DWORD *)SourceString;
            goto LABEL_19;
          }
        }
        else if ( a5 == 17 && a7 == 1 && SourceString )
        {
          if ( *(_BYTE *)SourceString == 0xFF )
          {
            *(_QWORD *)(a1 + 40) = v45;
          }
          else if ( v45 == *(const UNICODE_STRING **)(a1 + 40) || !v45 )
          {
            *(_QWORD *)(a1 + 40) = 0LL;
          }
          goto LABEL_122;
        }
LABEL_121:
        DatabaseNode = -1073741811;
        goto LABEL_122;
      }
    }
    ++v19;
  }
  v22 = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  v23 = 0LL;
  v24 = &off_140243A70;
  while ( 1 )
  {
    v25 = *v24;
    if ( *((_DWORD *)*v24 + 4) == v18 )
    {
      v12 = *v25 - *(_QWORD *)a4;
      if ( *v25 == *(_QWORD *)a4 )
        v12 = v25[1] - *(_QWORD *)(a4 + 8);
      if ( !v12 )
        break;
    }
    v23 = (unsigned int)(v23 + 1);
    v24 += 5;
    if ( (unsigned int)v23 >= 7 )
      goto LABEL_81;
  }
  LODWORD(v12) = 5 * v23;
  v22 = &off_140243A70 + 5 * v23;
  *(_QWORD *)&DestinationString.Length = v22;
LABEL_81:
  if ( v22 )
  {
LABEL_94:
    if ( a5 == *((_DWORD *)v22 + 2) || !a5 )
    {
      v39 = a3;
      if ( !a3 || v10 && ((__int64)v10[3].Buffer & 0x10) != 0 )
      {
        v40 = v10 && ((__int64)v10[3].Buffer & 0x10) != 0
            ? DrvDbOpenObjectRegKey((__int64 **)a1, *(__int64 **)(a1 + 32), 1u, a2, 2, 0, &Handle, 0LL)
            : DrvDbOpenDriverDatabaseRegKey((__int64 **)a1, a2, 2u, 0, (__int64)&Handle, 0LL);
        DatabaseNode = v40;
        if ( v40 < 0 )
          goto LABEL_122;
      }
      if ( Handle )
        v39 = (int)Handle;
      DatabaseNode = DrvDbSetRegValueMappedProperty(
                       v12,
                       v39,
                       *(_DWORD *)&DestinationString.Length,
                       a5,
                       (__int64)SourceString,
                       a7);
      if ( DatabaseNode < 0 || !v10 || ((__int64)v10[3].Buffer & 0x10) == 0 || *(_DWORD *)(a4 + 16) != 14 )
        goto LABEL_122;
      v41 = *(_QWORD *)a4 - DEVPKEY_DriverDatabase_RegistryPath;
      if ( *(_QWORD *)a4 == DEVPKEY_DriverDatabase_RegistryPath )
        v41 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
      if ( v41 || !a5 )
        goto LABEL_122;
      if ( a7 >= 2 && SourceString && !*((_BYTE *)SourceString + ((unsigned __int64)a7 >> 1) - 1) )
      {
        if ( !RtlCreateUnicodeString(&DestinationString, SourceString) )
        {
          DatabaseNode = -1073741670;
          goto LABEL_122;
        }
        v42 = KeGetCurrentThread();
        --v42->KernelApcDisable;
        v43 = v45;
        ExAcquireResourceExclusiveLite((PERESOURCE)v45[8].Buffer, 1u);
        RtlFreeAnsiString((PUNICODE_STRING)&v43[2].Buffer);
        *(_DWORD *)&v43[2].Length = 0;
        *(UNICODE_STRING *)&v43[2].Buffer = DestinationString;
        Buffer = (struct _ERESOURCE *)v43[8].Buffer;
        goto LABEL_120;
      }
    }
    goto LABEL_121;
  }
  *(_QWORD *)&DestinationString.Length = 0LL;
  v35 = &off_14025E820;
  v36 = 0LL;
  while ( 1 )
  {
    v37 = *v35;
    if ( *((_DWORD *)*v35 + 4) == v18 )
    {
      v38 = *v37 - *(_QWORD *)a4;
      if ( *v37 == *(_QWORD *)a4 )
        v38 = v37[1] - *(_QWORD *)(a4 + 8);
      if ( !v38 )
        break;
    }
    v36 = (unsigned int)(v36 + 1);
    v35 += 5;
    if ( (unsigned int)v36 >= 2 )
      goto LABEL_90;
  }
  v22 = &off_14025E820 + 5 * v36;
  *(_QWORD *)&DestinationString.Length = v22;
LABEL_90:
  if ( !v22 )
  {
    DatabaseNode = -1073741802;
    goto LABEL_122;
  }
  DatabaseNode = DrvDbFindDatabaseNode(a1, a2, &v45);
  if ( DatabaseNode >= 0 )
  {
    v10 = v45;
    if ( ((__int64)v45[3].Buffer & 0x10) != 0 )
      goto LABEL_94;
LABEL_44:
    DatabaseNode = -1073741790;
  }
LABEL_122:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)DatabaseNode;
}
