/*
 * XREFs of PiCMGenerateDeviceInstance @ 0x1406132A8
 * Callers:
 *     PiCMCreateDevice @ 0x140611DAC (PiCMCreateDevice.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14008FB20 (RtlInitUnicodeStringEx.c)
 *     RtlStringCchPrintfExW @ 0x14008FB80 (RtlStringCchPrintfExW.c)
 *     RtlStringCchCopyExW @ 0x140090110 (RtlStringCchCopyExW.c)
 *     RtlStringCchLengthW @ 0x140090A3C (RtlStringCchLengthW.c)
 *     RtlStringCchCatExW @ 0x140133FA8 (RtlStringCchCatExW.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     _CmValidateDeviceName @ 0x14043BC80 (_CmValidateDeviceName.c)
 *     _CmGetDeviceStatus @ 0x14045BF1C (_CmGetDeviceStatus.c)
 *     _PnpCtxRegSetValue @ 0x14045D128 (_PnpCtxRegSetValue.c)
 *     RtlUpcaseUnicodeString @ 0x1404D6BE0 (RtlUpcaseUnicodeString.c)
 *     _CmCreateDevice @ 0x1404F0DA8 (_CmCreateDevice.c)
 *     _CmDeleteDevice @ 0x140692D94 (_CmDeleteDevice.c)
 */

__int64 __fastcall PiCMGenerateDeviceInstance(NTSTRSAFE_PCWSTR pszSrc, char a2, wchar_t *a3, int a4)
{
  void *v7; // rdi
  int inited; // ebx
  wchar_t v9; // ax
  NTSTRSAFE_PCWSTR v10; // rcx
  NTSTRSAFE_PWSTR *v11; // r9
  NTSTRSAFE_PWSTR *v12; // r9
  wchar_t *PoolWithTag; // rsi
  unsigned int v14; // r14d
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rcx
  size_t *pcchRemaining; // [rsp+20h] [rbp-50h]
  size_t *pcchRemaininga; // [rsp+20h] [rbp-50h]
  ULONG dwFlags; // [rsp+28h] [rbp-48h]
  ULONG dwFlagsa; // [rsp+28h] [rbp-48h]
  int v23; // [rsp+40h] [rbp-30h] BYREF
  int v24; // [rsp+44h] [rbp-2Ch] BYREF
  int v25; // [rsp+48h] [rbp-28h] BYREF
  void *v26; // [rsp+50h] [rbp-20h] BYREF
  UNICODE_STRING pcchLength; // [rsp+58h] [rbp-18h] BYREF
  int v28; // [rsp+C0h] [rbp+50h] BYREF
  int v29; // [rsp+C8h] [rbp+58h] BYREF

  v29 = a4;
  *a3 = 0;
  v26 = 0LL;
  v7 = 0LL;
  inited = RtlStringCchLengthW(pszSrc, 0xC8uLL, (size_t *)&pcchLength.Length);
  if ( inited >= 0 )
  {
    v9 = *pszSrc;
    v10 = pszSrc;
    while ( v9 )
    {
      if ( v9 <= 0x20u || v9 > 0x7Fu || v9 == 44 || v9 == 92 )
      {
        inited = -1073741773;
        break;
      }
      v9 = *++v10;
    }
    if ( inited >= 0 )
    {
      inited = RtlStringCchCopyExW(a3, 0xC8uLL, L"Root", 0LL, 0LL, 0x800u);
      if ( inited >= 0 )
      {
        inited = RtlInitUnicodeStringEx(&pcchLength, a3);
        if ( inited >= 0 )
        {
          inited = RtlUpcaseUnicodeString(&pcchLength, &pcchLength, 0);
          if ( inited >= 0 )
          {
            inited = RtlStringCchCatExW(a3, 0xC8uLL, L"\\", v11, pcchRemaining, dwFlags);
            if ( inited >= 0 )
            {
              inited = RtlStringCchCatExW(a3, 0xC8uLL, pszSrc, v12, pcchRemaininga, dwFlagsa);
              if ( inited >= 0 )
              {
                PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x190uLL, 0x34706E50u);
                if ( !PoolWithTag )
                  return (unsigned int)-1073741670;
                v14 = 0;
                while ( 1 )
                {
                  if ( v7 )
                  {
                    ZwClose(v7);
                    v7 = 0LL;
                    v26 = 0LL;
                  }
                  inited = RtlStringCchPrintfExW(PoolWithTag, 0xC8uLL, 0LL, 0LL, 0x800u, L"%s\\%04u");
                  if ( inited < 0 )
                    break;
                  if ( (int)CmGetDeviceStatus(
                              *(__int64 *)&PiPnpRtlCtx,
                              PoolWithTag,
                              0LL,
                              &v25,
                              &v24,
                              &v23,
                              (unsigned int)a3) >= 0 )
                    goto LABEL_42;
                  LOBYTE(v29) = 0;
                  v16 = CmCreateDevice(*(__int64 *)&PiPnpRtlCtx, (__int64)PoolWithTag, 131078, &v26, &v29, 0);
                  v7 = v26;
                  inited = v16;
                  if ( v16 < 0 )
                    break;
                  if ( !(_BYTE)v29 )
                  {
LABEL_42:
                    if ( ++v14 <= 0x270F )
                      continue;
                  }
                  if ( v14 <= 0x270F )
                  {
                    inited = CmValidateDeviceName(v15, PoolWithTag);
                    if ( inited < 0
                      || (inited = RtlStringCchCopyExW(a3, 0xC8uLL, PoolWithTag, 0LL, 0LL, 0x800u), inited < 0) )
                    {
                      CmDeleteDevice(*(_QWORD *)&PiPnpRtlCtx, PoolWithTag, 0LL);
                    }
                    else if ( a2 )
                    {
                      v28 = 1;
                      inited = PnpCtxRegSetValue(v17, v7, (__int64)L"Phantom", 4LL, (__int64)&v28, 4u);
                    }
                  }
                  else
                  {
                    inited = -2147483622;
                  }
                  break;
                }
                if ( v7 )
                  ZwClose(v7);
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
