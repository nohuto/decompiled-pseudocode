/*
 * XREFs of PiCMGenerateDeviceInstance @ 0x1406477EC
 * Callers:
 *     PiCMCreateDevice @ 0x1406461E4 (PiCMCreateDevice.c)
 * Callees:
 *     KeEnterCriticalRegion @ 0x14000AE80 (KeEnterCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x140068160 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140068940 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x140069D00 (KeLeaveCriticalRegion.c)
 *     RtlStringCchCopyExW @ 0x1400C34A8 (RtlStringCchCopyExW.c)
 *     RtlInitUnicodeStringEx @ 0x1400C39C0 (RtlInitUnicodeStringEx.c)
 *     RtlStringCchPrintfExW @ 0x1400C3A00 (RtlStringCchPrintfExW.c)
 *     RtlStringCchLengthW @ 0x1400C4760 (RtlStringCchLengthW.c)
 *     RtlStringCchCatExW @ 0x14013BD00 (RtlStringCchCatExW.c)
 *     ZwClose @ 0x140159E60 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     _PnpCtxRegSetValue @ 0x1404870E4 (_PnpCtxRegSetValue.c)
 *     _CmCreateDevice @ 0x1404E6E44 (_CmCreateDevice.c)
 *     _CmGetDeviceStatus @ 0x1404F78AC (_CmGetDeviceStatus.c)
 *     _CmValidateDeviceName @ 0x1404FD9C0 (_CmValidateDeviceName.c)
 *     RtlUpcaseUnicodeString @ 0x140514D50 (RtlUpcaseUnicodeString.c)
 *     _CmDeleteDevice @ 0x1406D7CC0 (_CmDeleteDevice.c)
 */

__int64 __fastcall PiCMGenerateDeviceInstance(NTSTRSAFE_PCWSTR pszSrc, char a2, wchar_t *a3, int a4)
{
  int v4; // r14d
  void *v8; // rdi
  char v9; // r12
  int inited; // ebx
  size_t v11; // r11
  wchar_t v12; // ax
  NTSTRSAFE_PCWSTR v13; // rcx
  NTSTRSAFE_PWSTR *v14; // r9
  NTSTRSAFE_PWSTR *v15; // r9
  wchar_t *PoolWithTag; // rsi
  __int64 v17; // rcx
  __int64 v18; // rcx
  size_t *pcchRemaining; // [rsp+20h] [rbp-50h]
  size_t *pcchRemaininga; // [rsp+20h] [rbp-50h]
  ULONG dwFlags; // [rsp+28h] [rbp-48h]
  ULONG dwFlagsa; // [rsp+28h] [rbp-48h]
  int v24; // [rsp+40h] [rbp-30h] BYREF
  int v25; // [rsp+44h] [rbp-2Ch] BYREF
  int v26; // [rsp+48h] [rbp-28h] BYREF
  void *v27; // [rsp+50h] [rbp-20h] BYREF
  UNICODE_STRING pcchLength; // [rsp+58h] [rbp-18h] BYREF
  int v29; // [rsp+C0h] [rbp+50h] BYREF
  size_t v30; // [rsp+C8h] [rbp+58h] BYREF

  LODWORD(v30) = a4;
  v4 = 0;
  *a3 = 0;
  v27 = 0LL;
  v8 = 0LL;
  v9 = 0;
  inited = RtlStringCchLengthW(pszSrc, 0xC8uLL, (size_t *)&pcchLength.Length);
  if ( inited >= 0 )
  {
    v12 = *pszSrc;
    v13 = pszSrc;
    while ( v12 )
    {
      if ( v12 <= 0x20u || v12 > 0x7Fu || v12 == 44 || v12 == 92 )
      {
        inited = -1073741773;
        break;
      }
      v12 = *++v13;
    }
    if ( inited >= 0 )
    {
      inited = RtlStringCchCopyExW(a3, v11, L"Root", 0LL, 0LL, 0x800u);
      if ( inited >= 0 )
      {
        inited = RtlInitUnicodeStringEx(&pcchLength, a3);
        if ( inited >= 0 )
        {
          inited = RtlUpcaseUnicodeString(&pcchLength, &pcchLength, 0);
          if ( inited >= 0 )
          {
            inited = RtlStringCchCatExW(a3, 0xC8uLL, L"\\", v14, pcchRemaining, dwFlags);
            if ( inited >= 0 )
            {
              inited = RtlStringCchCatExW(a3, 0xC8uLL, pszSrc, v15, pcchRemaininga, dwFlagsa);
              if ( inited >= 0 )
              {
                PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x190uLL, 0x34706E50u);
                if ( !PoolWithTag )
                  return (unsigned int)-1073741670;
                while ( 1 )
                {
                  if ( v8 )
                  {
                    ZwClose(v8);
                    v8 = 0LL;
                    v27 = 0LL;
                  }
                  inited = RtlStringCchPrintfExW(PoolWithTag, 0xC8uLL, 0LL, 0LL, 0x800u, L"%s\\%04u");
                  if ( inited < 0 )
                    break;
                  if ( (int)CmGetDeviceStatus(PiPnpRtlCtx, PoolWithTag, 0, &v26, &v25, &v24, (unsigned int)a3) < 0 )
                  {
                    KeEnterCriticalRegion();
                    ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
                    LOBYTE(v30) = 0;
                    v9 = 1;
                    inited = CmCreateDevice(*(__int64 *)&PiPnpRtlCtx, (__int64)PoolWithTag, 131078, &v27, &v30, 0);
                    if ( inited < 0 )
                    {
                      v8 = v27;
                      goto LABEL_37;
                    }
                    if ( (_BYTE)v30 )
                    {
                      v8 = v27;
                      inited = CmValidateDeviceName(v17, PoolWithTag);
                      if ( inited < 0
                        || (inited = RtlStringCchCopyExW(a3, 0xC8uLL, PoolWithTag, 0LL, 0LL, 0x800u), inited < 0) )
                      {
                        CmDeleteDevice(*(_QWORD *)&PiPnpRtlCtx, PoolWithTag, 0LL);
                      }
                      else if ( a2 )
                      {
                        v29 = 1;
                        inited = PnpCtxRegSetValue(v18, v8, (__int64)L"Phantom", 4LL, (__int64)&v29, 4u);
                      }
                      goto LABEL_36;
                    }
                    ExReleaseResourceLite(&PnpRegistryDeviceResource);
                    KeLeaveCriticalRegion();
                    v8 = v27;
                    v9 = 0;
                  }
                  if ( (unsigned int)++v4 > 0x270F )
                  {
                    inited = -2147483622;
LABEL_36:
                    if ( !v9 )
                      break;
LABEL_37:
                    ExReleaseResourceLite(&PnpRegistryDeviceResource);
                    KeLeaveCriticalRegion();
                    break;
                  }
                }
                if ( v8 )
                  ZwClose(v8);
                ExFreePoolWithTag(PoolWithTag, 0x34706E50u);
              }
            }
          }
        }
      }
    }
  }
  if ( inited == -2147483643 )
    return (unsigned int)-1073741789;
  return (unsigned int)inited;
}
