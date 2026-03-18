/*
 * XREFs of DrvDbSetDriverDatabaseMappedProperty @ 0x14071C048
 * Callers:
 *     DrvDbDispatchDriverDatabase @ 0x1404DD3CC (DrvDbDispatchDriverDatabase.c)
 *     DrvDbCreateDatabaseNode @ 0x1405BB0F0 (DrvDbCreateDatabaseNode.c)
 *     DrvDbInitializeDatabaseNodeVersion @ 0x14071D464 (DrvDbInitializeDatabaseNodeVersion.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     _wcsicmp @ 0x1401723FC (_wcsicmp.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     RtlFreeAnsiString @ 0x140450CB8 (RtlFreeAnsiString.c)
 *     DrvDbOpenObjectRegKey @ 0x1404DDA8C (DrvDbOpenObjectRegKey.c)
 *     DrvDbLoadDatabaseNode @ 0x1404DDF80 (DrvDbLoadDatabaseNode.c)
 *     DrvDbUnloadDatabaseNode @ 0x1404DE1B0 (DrvDbUnloadDatabaseNode.c)
 *     RtlCreateUnicodeString @ 0x1404FFE30 (RtlCreateUnicodeString.c)
 *     DrvDbFindDatabaseNode @ 0x140553AE0 (DrvDbFindDatabaseNode.c)
 *     DrvDbOpenDriverDatabaseRegKey @ 0x1405BAD40 (DrvDbOpenDriverDatabaseRegKey.c)
 *     DrvDbSetRegValueMappedProperty @ 0x14071CE8C (DrvDbSetRegValueMappedProperty.c)
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
  const UNICODE_STRING *v11; // r15
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
  _UNKNOWN **v22; // r9
  _UNKNOWN **v23; // r13
  unsigned int v24; // edx
  _QWORD *v25; // r8
  int v26; // ecx
  __int64 v27; // rax
  struct _KTHREAD *CurrentThread; // rax
  const UNICODE_STRING *v29; // rbx
  int v30; // eax
  struct _KTHREAD *v31; // rcx
  __int16 v32; // ax
  bool v33; // zf
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  _UNKNOWN **v37; // r9
  unsigned int v38; // edx
  _QWORD *v39; // r8
  __int64 v40; // rcx
  int v41; // r13d
  int v42; // eax
  __int64 v43; // rax
  struct _KTHREAD *v44; // rax
  const UNICODE_STRING *v45; // rdi
  UNICODE_STRING v46; // xmm0
  struct _KTHREAD *v47; // rcx
  __int16 v48; // ax
  const UNICODE_STRING *v50; // [rsp+40h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-18h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-8h] BYREF

  Handle = 0LL;
  v50 = 0LL;
  DatabaseNode = 0;
  v11 = 0LL;
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
          goto LABEL_127;
        }
LABEL_126:
        DatabaseNode = -1073741811;
        goto LABEL_127;
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
      goto LABEL_127;
    }
    if ( a5 != 7 || a7 != 4 || !SourceString )
      goto LABEL_126;
    v16 = *(_DWORD *)SourceString;
LABEL_19:
    v17 = v16 & 0xD0000000;
    *(_DWORD *)(a1 + 12) = v17;
    if ( v17 == 0x10000000 )
      *(_DWORD *)(a1 + 12) = -805306368;
    goto LABEL_127;
  }
  v18 = *(_DWORD *)(a4 + 16);
  v19 = off_14031EEA0;
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
        DatabaseNode = DrvDbFindDatabaseNode(a1, a2, &v50);
        if ( DatabaseNode < 0 )
          goto LABEL_127;
        v26 = *(_DWORD *)(a4 + 16);
        if ( v26 == 5 )
        {
          v27 = *(_QWORD *)a4 - DEVPKEY_DriverDatabase_Loaded;
          if ( *(_QWORD *)a4 == DEVPKEY_DriverDatabase_Loaded )
            v27 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
          if ( !v27 )
          {
            if ( a5 != 17 || a7 != 1 || !SourceString )
              goto LABEL_126;
            if ( ((__int64)v50[3].Buffer & 1) != 0 )
              goto LABEL_44;
            CurrentThread = KeGetCurrentThread();
            --CurrentThread->KernelApcDisable;
            v29 = v50;
            ExAcquireResourceExclusiveLite((PERESOURCE)v50[8].Buffer, 1u);
            if ( *(_BYTE *)SourceString == 0xFF )
              v30 = DrvDbLoadDatabaseNode((_QWORD **)a1, (__int64)v29);
            else
              v30 = DrvDbUnloadDatabaseNode(a1, (__int64)v29);
            DatabaseNode = v30;
            ExReleaseResourceLite((PERESOURCE)v29[8].Buffer);
            v31 = KeGetCurrentThread();
            v32 = v31->KernelApcDisable + 1;
            v31->KernelApcDisable = v32;
            if ( v32 || ($CD287064E7C9F7953DE243E927CFCB99 *)v31->ApcState.ApcListHead[0].Flink == &v31->152 )
              goto LABEL_127;
            v33 = v31->SpecialApcDisable == 0;
            goto LABEL_124;
          }
        }
        if ( v26 == 6 )
        {
          v34 = *(_QWORD *)a4 - DEVPKEY_DriverDatabase_Selected;
          if ( *(_QWORD *)a4 == DEVPKEY_DriverDatabase_Selected )
            v34 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
          if ( !v34 )
          {
            if ( a5 != 17 || a7 != 1 || !SourceString )
              goto LABEL_126;
            if ( *(_BYTE *)SourceString == 0xFF )
            {
              *(_QWORD *)(a1 + 40) = v50;
            }
            else if ( v50 == *(const UNICODE_STRING **)(a1 + 40) || !v50 )
            {
              *(_QWORD *)(a1 + 40) = 0LL;
            }
            goto LABEL_127;
          }
        }
        if ( v26 == 7 )
        {
          v35 = *(_QWORD *)a4 - DEVPKEY_DriverDatabase_Disabled;
          if ( *(_QWORD *)a4 == DEVPKEY_DriverDatabase_Disabled )
            v35 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
          if ( !v35 )
          {
            if ( a5 == 17 && a7 == 1 && SourceString )
            {
              if ( *(_BYTE *)SourceString == 0xFF )
                LODWORD(v50[3].Buffer) |= 4u;
              else
                LODWORD(v50[3].Buffer) &= ~4u;
              goto LABEL_127;
            }
            goto LABEL_126;
          }
        }
        if ( v26 != 11 )
          goto LABEL_127;
        v36 = *(_QWORD *)a4 - DEVPKEY_DriverDatabase_AccessMask;
        if ( *(_QWORD *)a4 == DEVPKEY_DriverDatabase_AccessMask )
          v36 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
        if ( v36 )
          goto LABEL_127;
        if ( a5 != 7 || a7 != 4 || !SourceString )
          goto LABEL_126;
        if ( v50 != *(const UNICODE_STRING **)(a1 + 32) )
          goto LABEL_44;
        v16 = *(_DWORD *)SourceString;
        goto LABEL_19;
      }
    }
    ++v19;
  }
  *(_QWORD *)&DestinationString.Length = 0LL;
  v22 = &off_140291D50;
  v23 = 0LL;
  v24 = 0;
  while ( 1 )
  {
    v25 = *v22;
    if ( *((_DWORD *)*v22 + 4) == v18 )
    {
      v12 = *v25 - *(_QWORD *)a4;
      if ( *v25 == *(_QWORD *)a4 )
        v12 = v25[1] - *(_QWORD *)(a4 + 8);
      if ( !v12 )
        break;
    }
    ++v24;
    v22 += 5;
    if ( v24 >= 7 )
      goto LABEL_83;
  }
  LODWORD(v12) = 5 * v24;
  v23 = &off_140291D50 + 5 * v24;
  *(_QWORD *)&DestinationString.Length = v23;
LABEL_83:
  if ( !v23 )
  {
    *(_QWORD *)&DestinationString.Length = 0LL;
    v37 = &off_1402AE6E0;
    v23 = 0LL;
    v38 = 0;
    while ( 1 )
    {
      v39 = *v37;
      if ( *((_DWORD *)*v37 + 4) == v18 )
      {
        v40 = *v39 - *(_QWORD *)a4;
        if ( *v39 == *(_QWORD *)a4 )
          v40 = v39[1] - *(_QWORD *)(a4 + 8);
        if ( !v40 )
          break;
      }
      ++v38;
      v37 += 5;
      if ( v38 >= 2 )
        goto LABEL_92;
    }
    v23 = &off_1402AE6E0 + 5 * v38;
    *(_QWORD *)&DestinationString.Length = v23;
LABEL_92:
    if ( !v23 )
    {
      DatabaseNode = -1073741802;
      goto LABEL_127;
    }
    DatabaseNode = DrvDbFindDatabaseNode(a1, a2, &v50);
    if ( DatabaseNode >= 0 )
    {
      v11 = v50;
      if ( ((__int64)v50[3].Buffer & 0x10) != 0 )
        goto LABEL_96;
LABEL_44:
      DatabaseNode = -1073741790;
      goto LABEL_127;
    }
    goto LABEL_127;
  }
LABEL_96:
  if ( a5 != *((_DWORD *)v23 + 2) && a5 )
    goto LABEL_126;
  v41 = a3;
  if ( a3 && (!v11 || ((__int64)v11[3].Buffer & 0x10) == 0)
    || (!v11 || ((__int64)v11[3].Buffer & 0x10) == 0
      ? (v42 = DrvDbOpenDriverDatabaseRegKey((__int64 **)a1, a2, 2u, 0, &Handle, 0LL))
      : (v42 = DrvDbOpenObjectRegKey((__int64 **)a1, *(__int64 **)(a1 + 32), 1u, a2, 2, 0, &Handle, 0LL)),
        DatabaseNode = v42,
        v42 >= 0) )
  {
    if ( Handle )
      v41 = (int)Handle;
    DatabaseNode = DrvDbSetRegValueMappedProperty(
                     v12,
                     v41,
                     *(_DWORD *)&DestinationString.Length,
                     a5,
                     (__int64)SourceString,
                     a7);
    if ( DatabaseNode >= 0 && v11 && ((__int64)v11[3].Buffer & 0x10) != 0 && *(_DWORD *)(a4 + 16) == 14 )
    {
      v43 = *(_QWORD *)a4 - DEVPKEY_DriverDatabase_RegistryPath;
      if ( *(_QWORD *)a4 == DEVPKEY_DriverDatabase_RegistryPath )
        v43 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
      if ( !v43 && a5 )
      {
        if ( a7 < 2 || !SourceString || *((_BYTE *)SourceString + ((unsigned __int64)a7 >> 1) - 1) )
          goto LABEL_126;
        if ( !RtlCreateUnicodeString(&DestinationString, SourceString) )
        {
          DatabaseNode = -1073741670;
          goto LABEL_127;
        }
        v44 = KeGetCurrentThread();
        --v44->KernelApcDisable;
        v45 = v50;
        ExAcquireResourceExclusiveLite((PERESOURCE)v50[8].Buffer, 1u);
        RtlFreeAnsiString((PUNICODE_STRING)&v45[2].Buffer);
        v46 = DestinationString;
        *(_DWORD *)&v45[2].Length = 0;
        *(UNICODE_STRING *)&v45[2].Buffer = v46;
        ExReleaseResourceLite((PERESOURCE)v45[8].Buffer);
        v47 = KeGetCurrentThread();
        v48 = v47->KernelApcDisable + 1;
        v47->KernelApcDisable = v48;
        if ( !v48 && ($CD287064E7C9F7953DE243E927CFCB99 *)v47->ApcState.ApcListHead[0].Flink != &v47->152 )
        {
          v33 = v47->SpecialApcDisable == 0;
LABEL_124:
          if ( v33 )
            KiCheckForKernelApcDelivery();
        }
      }
    }
  }
LABEL_127:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)DatabaseNode;
}
