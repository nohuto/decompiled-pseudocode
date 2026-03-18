/*
 * XREFs of ldevLoadDriver @ 0x1C006C3D0
 * Callers:
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C0068660 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     ?ldevGetDriverModes@@YAKPEAUtagGRAPHICS_DEVICE@@PEBGPEAXPEAPEAU_devicemodeW@@@Z @ 0x1C0069B4C (-ldevGetDriverModes@@YAKPEAUtagGRAPHICS_DEVICE@@PEBGPEAXPEAPEAU_devicemodeW@@@Z.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C0025AF0 (EngAcquireSemaphore.c)
 *     GreReleaseSemaphoreInternal @ 0x1C0026BF0 (GreReleaseSemaphoreInternal.c)
 *     ldevUnloadImage @ 0x1C006C2D0 (ldevUnloadImage.c)
 *     ldevLoadImage @ 0x1C006C610 (ldevLoadImage.c)
 *     MakeSystemRelativePath @ 0x1C006C850 (MakeSystemRelativePath.c)
 *     FreeSystemRelativePath @ 0x1C006C950 (FreeSystemRelativePath.c)
 *     ?ldevFillTable@@YAHPEAU_LDEV@@PEAUtagDRVENABLEDATA@@W4_LDEVTYPE@@@Z @ 0x1C006CBC4 (-ldevFillTable@@YAHPEAU_LDEV@@PEAUtagDRVENABLEDATA@@W4_LDEVTYPE@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0073A30 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C00740D0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 *     WinSqmSetString @ 0x1C00BC59C (WinSqmSetString.c)
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
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  unsigned int (__fastcall *v16)(__int64, _QWORD, _QWORD *); // rax
  __int64 v17; // rcx
  unsigned int (__fastcall *v18)(__int64, __int64, PFILE_OBJECT, __int64); // rax
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  struct _UNICODE_STRING Destination; // [rsp+30h] [rbp-30h] BYREF
  _QWORD v26[3]; // [rsp+40h] [rbp-20h] BYREF
  BOOL v27; // [rsp+58h] [rbp-8h]
  int v28; // [rsp+90h] [rbp+30h]

  v4 = a2;
  v6 = WdLogNewEntry5_WdEvent(Source, a2);
  *(_QWORD *)(v6 + 24) = Source;
  WdLogEvent5_WdEvent(v6);
  if ( !Source || !*Source )
    return 0LL;
  EngAcquireSemaphore(ghsemDriverMgmt);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 12LL);
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
    v24 = WdLogNewEntry5_WdError(v21, v20, v22, v23);
    WdLogEvent5_WdError(v24);
    return 0LL;
  }
  v8 = L"cdd";
LABEL_7:
  Image = ldevLoadImage(v8, v7);
  if ( Image )
  {
    if ( v28 )
    {
      v12 = WdLogNewEntry5_WdTrace(v10);
      WdLogEvent5_WdTrace(v12);
      goto LABEL_10;
    }
    v26[2] = Destination.Buffer;
    v26[0] = 0LL;
    v27 = a3 == 3;
    v26[1] = 0LL;
    if ( v4 == 4 )
      WinSqmSetString(v10, v9, Source);
    v16 = *(unsigned int (__fastcall **)(__int64, _QWORD, _QWORD *))(*(_QWORD *)(Image + 16) + 32LL);
    if ( v16
      && v16(196865LL, v7 != 0 ? 32 : 16, v26)
      && (unsigned int)(LODWORD(v26[0]) - 0x20000) <= 0x10101
      && (unsigned int)ldevFillTable(Image, v26) )
    {
      *(_DWORD *)(Image + 24) = v4;
      EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt");
      GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemDriverMgmt);
      v18 = *(unsigned int (__fastcall **)(__int64, __int64, PFILE_OBJECT, __int64))(*(_QWORD *)(Image + 888) + 616LL);
      if ( !v18 )
      {
LABEL_21:
        v19 = WdLogNewEntry5_WdTrace(v17);
        WdLogEvent5_WdTrace(v19);
        goto LABEL_11;
      }
      if ( v18(qword_1C011BC48, qword_1C011BC40, FileObject, qword_1C011BC50) )
      {
        *(_DWORD *)(Image + 896) = 1;
        goto LABEL_21;
      }
    }
    else
    {
      EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt");
      GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemDriverMgmt);
    }
    ldevUnloadImage(Image);
    Image = 0LL;
    goto LABEL_21;
  }
LABEL_10:
  EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt");
  GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemDriverMgmt);
LABEL_11:
  if ( v7 )
    FreeSystemRelativePath(&Destination);
  v14 = WdLogNewEntry5_WdTrace(v13);
  *(_QWORD *)(v14 + 24) = Image;
  WdLogEvent5_WdTrace(v14);
  return Image;
}
