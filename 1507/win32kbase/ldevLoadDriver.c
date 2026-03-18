/*
 * XREFs of ldevLoadDriver @ 0x1C005EA30
 * Callers:
 *     ?ldevGetDriverModes@@YAKPEAUtagGRAPHICS_DEVICE@@PEBGPEAXPEAPEAU_devicemodeW@@@Z @ 0x1C005E7E0 (-ldevGetDriverModes@@YAKPEAUtagGRAPHICS_DEVICE@@PEBGPEAXPEAPEAU_devicemodeW@@@Z.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C0063F40 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0008270 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C000B590 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EngAcquireSemaphore @ 0x1C000D220 (EngAcquireSemaphore.c)
 *     GreReleaseSemaphoreInternal @ 0x1C003AA20 (GreReleaseSemaphoreInternal.c)
 *     ldevUnloadImage @ 0x1C005E930 (ldevUnloadImage.c)
 *     ldevLoadImage @ 0x1C005EC70 (ldevLoadImage.c)
 *     MakeSystemRelativePath @ 0x1C005EEB0 (MakeSystemRelativePath.c)
 *     FreeSystemRelativePath @ 0x1C005EFB0 (FreeSystemRelativePath.c)
 *     ?ldevFillTable@@YAHPEAU_LDEV@@PEAUtagDRVENABLEDATA@@W4_LDEVTYPE@@@Z @ 0x1C007EB74 (-ldevFillTable@@YAHPEAU_LDEV@@PEAUtagDRVENABLEDATA@@W4_LDEVTYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 *     WinSqmSetString @ 0x1C00AE52C (WinSqmSetString.c)
 */

__int64 __fastcall ldevLoadDriver(PCWSTR Source, __int64 a2, int a3)
{
  int v4; // r14d
  __int64 v6; // rax
  int v7; // r15d
  const WCHAR *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 Image; // rbx
  __int64 v12; // r8
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rax
  unsigned int (__fastcall *v19)(__int64, _QWORD, _QWORD *); // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  unsigned int (__fastcall *v23)(__int64, __int64, PFILE_OBJECT, __int64); // rax
  __int64 v24; // rax
  __int64 v25; // rax
  struct _UNICODE_STRING Destination; // [rsp+30h] [rbp-30h] BYREF
  _QWORD v27[3]; // [rsp+40h] [rbp-20h] BYREF
  BOOL v28; // [rsp+58h] [rbp-8h]
  int v29; // [rsp+90h] [rbp+30h]

  v4 = a2;
  v6 = WdLogNewEntry5_WdEvent(Source, a2);
  *(_QWORD *)(v6 + 24) = Source;
  WdLogEvent5_WdEvent(v6);
  if ( !Source || !*Source )
    return 0LL;
  EngAcquireSemaphore(ghsemDriverMgmt);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 12);
  Destination.Length = 0;
  v7 = 0;
  *(_QWORD *)&Destination.MaximumLength = 0LL;
  *(_DWORD *)((char *)&Destination.Buffer + 2) = 0;
  HIWORD(Destination.Buffer) = 0;
  if ( gbDisableCddRemoteSessionFiltering || v4 != 1 || (unsigned int)(a3 - 2) > 1 )
  {
    v8 = Source;
    goto LABEL_7;
  }
  v7 = 1;
  if ( gbForceCddRemoteSessionBitmapSupport )
    a3 = 3;
  if ( !(unsigned int)MakeSystemRelativePath(Source, &Destination) )
  {
    v25 = WdLogNewEntry5_WdError();
    WdLogEvent5_WdError(v25);
    return 0LL;
  }
  v8 = L"cdd";
LABEL_7:
  Image = ldevLoadImage(v8, v7);
  if ( Image )
  {
    if ( v29 )
    {
      v13 = WdLogNewEntry5_WdTrace(v10, v9, v12);
      WdLogEvent5_WdTrace(v13);
      goto LABEL_10;
    }
    v27[2] = Destination.Buffer;
    v27[0] = 0LL;
    v28 = a3 == 3;
    v27[1] = 0LL;
    if ( v4 == 4 )
      WinSqmSetString(v10, v9, Source);
    v19 = *(unsigned int (__fastcall **)(__int64, _QWORD, _QWORD *))(*(_QWORD *)(Image + 16) + 32LL);
    if ( v19
      && v19(196865LL, v7 != 0 ? 32 : 16, v27)
      && (unsigned int)(LODWORD(v27[0]) - 0x20000) <= 0x10101
      && (unsigned int)ldevFillTable(Image, v27) )
    {
      *(_DWORD *)(Image + 24) = v4;
      EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (__int64)ghsemDriverMgmt, v12);
      GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemDriverMgmt);
      v23 = *(unsigned int (__fastcall **)(__int64, __int64, PFILE_OBJECT, __int64))(*(_QWORD *)(Image + 888) + 616LL);
      if ( !v23 )
      {
LABEL_21:
        v24 = WdLogNewEntry5_WdTrace(v21, v20, v22);
        WdLogEvent5_WdTrace(v24);
        goto LABEL_11;
      }
      if ( v23(qword_1C0102058, qword_1C0102050, FileObject, qword_1C0102060) )
      {
        *(_DWORD *)(Image + 896) = 1;
        goto LABEL_21;
      }
    }
    else
    {
      EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (__int64)ghsemDriverMgmt, v12);
      GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemDriverMgmt);
    }
    ldevUnloadImage(Image);
    Image = 0LL;
    goto LABEL_21;
  }
LABEL_10:
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (__int64)ghsemDriverMgmt, v12);
  GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemDriverMgmt);
LABEL_11:
  if ( v7 )
    FreeSystemRelativePath(&Destination);
  v17 = WdLogNewEntry5_WdTrace(v15, v14, v16);
  *(_QWORD *)(v17 + 24) = Image;
  WdLogEvent5_WdTrace(v17);
  return Image;
}
