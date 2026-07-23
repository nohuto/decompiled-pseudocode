/*
 * XREFs of PiPnpRtlGetFilteredDeviceList @ 0x1404C5784
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x1404DFF48 (PiPnpRtlCmActionCallback.c)
 * Callees:
 *     RtlStringCchCopyExW @ 0x1400C1338 (RtlStringCchCopyExW.c)
 *     RtlInitUnicodeStringEx @ 0x1400C1850 (RtlInitUnicodeStringEx.c)
 *     wcschr @ 0x14014F504 (wcschr.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     PiDmGetCmObjectListFromCache @ 0x1404C5A0C (PiDmGetCmObjectListFromCache.c)
 *     PiDmGetCmObjectConstraintListFromCache @ 0x1404E8D78 (PiDmGetCmObjectConstraintListFromCache.c)
 */

__int64 __fastcall PiPnpRtlGetFilteredDeviceList(__int64 a1)
{
  int v1; // ebx
  wchar_t *PoolWithTag; // rsi
  __int64 v4; // rsi
  NTSTATUS inited; // ebx
  __int64 v8; // r9
  const wchar_t *v9; // rax
  int v10; // ebx
  wchar_t *v11; // rax
  __int64 v12; // r9
  ULONG v13; // edx
  wchar_t *v14; // rcx
  const WCHAR *v15; // rdx
  __int64 v16; // r9
  char v17; // al
  NTSTATUS CmObjectListFromCache; // eax
  size_t *pcchRemaining; // [rsp+20h] [rbp-49h]
  int pcchRemaininga; // [rsp+20h] [rbp-49h]
  int pcchRemainingb; // [rsp+20h] [rbp-49h]
  int dwFlags; // [rsp+28h] [rbp-41h]
  __int64 dwFlagsa; // [rsp+28h] [rbp-41h]
  __int64 dwFlagsb; // [rsp+28h] [rbp-41h]
  __int64 v25; // [rsp+30h] [rbp-39h]
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-29h] BYREF
  _QWORD v27[4]; // [rsp+50h] [rbp-19h] BYREF
  _QWORD v28[6]; // [rsp+70h] [rbp+7h] BYREF
  size_t v29; // [rsp+D0h] [rbp+67h] BYREF
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+D8h] [rbp+6Fh] BYREF

  v1 = *(_DWORD *)(a1 + 24);
  *(_QWORD *)&DestinationString.MaximumLength = 0LL;
  DestinationString.Length = 0;
  *(_DWORD *)((char *)&DestinationString.Buffer + 2) = 0;
  PoolWithTag = 0LL;
  HIWORD(DestinationString.Buffer) = 0;
  if ( (v1 & 0x7C) != 0 )
  {
    inited = -1073741802;
LABEL_21:
    if ( PoolWithTag )
    {
      v13 = 1198550608;
      v14 = PoolWithTag;
LABEL_23:
      ExFreePoolWithTag(v14, v13);
    }
  }
  else
  {
    if ( (v1 & 1) != 0 )
    {
      v9 = *(const wchar_t **)(a1 + 16);
      if ( v9 )
      {
        v10 = 0;
        while ( *v9 )
        {
          if ( *v9 == 92 )
            break;
          if ( (unsigned int)++v10 > 2 )
            break;
          v11 = wcschr(v9, 0x5Cu);
          if ( v11 )
          {
            v9 = v11 + 1;
            if ( v9 )
              continue;
          }
          PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x190uLL, 0x47706E50u);
          if ( !PoolWithTag )
            return (unsigned int)-1073741670;
          inited = RtlStringCchCopyExW(PoolWithTag, 0xC8uLL, *(NTSTRSAFE_PCWSTR *)(a1 + 16), &ppszDestEnd, &v29, 0x800u);
          if ( inited >= 0 )
          {
            if ( v29 < 2 )
            {
              inited = -1073741811;
            }
            else
            {
              *(_DWORD *)ppszDestEnd = 92;
              inited = RtlInitUnicodeStringEx(&DestinationString, PoolWithTag);
              if ( inited >= 0 )
              {
                memset(v27, 0, sizeof(v27));
                v12 = *(_QWORD *)(a1 + 48);
                v27[0] = &DestinationString;
                LOBYTE(v27[1]) = BYTE1(*(_DWORD *)(a1 + 24)) & 1;
                v27[2] = *(_QWORD *)(a1 + 32);
                v27[3] = *(_QWORD *)(a1 + 40);
                inited = PiDmGetCmObjectListFromCache(
                           1,
                           (unsigned int)&PiPnpRtlEnumeratorFilterCallback,
                           (unsigned int)v27,
                           v12,
                           *(_DWORD *)(a1 + 56),
                           *(_QWORD *)(a1 + 64));
              }
            }
          }
          goto LABEL_21;
        }
      }
      return (unsigned int)-1073741811;
    }
    if ( (v1 & 2) == 0 )
    {
      if ( (v1 & 0x80u) == 0 )
      {
        memset(v27, 0, sizeof(v27));
        v8 = *(_QWORD *)(a1 + 48);
        v27[2] = *(_QWORD *)(a1 + 32);
        v27[3] = *(_QWORD *)(a1 + 40);
        dwFlagsa = *(_QWORD *)(a1 + 64);
        pcchRemaininga = *(_DWORD *)(a1 + 56);
        v27[0] = 0LL;
        LOBYTE(v27[1]) = BYTE1(v1) & 1;
        return (unsigned int)PiDmGetCmObjectListFromCache(
                               1,
                               (unsigned int)&PiPnpRtlEnumeratorFilterCallback,
                               (unsigned int)v27,
                               v8,
                               pcchRemaininga,
                               dwFlagsa);
      }
      v4 = *(_QWORD *)(a1 + 16);
      if ( v4 )
      {
        memset(v27, 0, sizeof(v27));
        v27[2] = *(_QWORD *)(a1 + 32);
        v27[3] = *(_QWORD *)(a1 + 40);
        v25 = *(_QWORD *)(a1 + 64);
        dwFlags = *(_DWORD *)(a1 + 56);
        pcchRemaining = *(size_t **)(a1 + 48);
        v27[0] = 0LL;
        LOBYTE(v27[1]) = BYTE1(v1) & 1;
        return (unsigned int)PiDmGetCmObjectConstraintListFromCache(
                               4,
                               v4,
                               (unsigned int)&PiPnpRtlEnumeratorFilterCallback,
                               (unsigned int)v27,
                               (__int64)pcchRemaining,
                               dwFlags,
                               v25);
      }
      return (unsigned int)-1073741811;
    }
    v15 = *(const WCHAR **)(a1 + 16);
    if ( !v15 )
      return (unsigned int)-1073741811;
    inited = RtlInitUnicodeStringEx(&DestinationString, v15);
    if ( inited >= 0 )
    {
      memset(v28, 0, sizeof(v28));
      v16 = *(_QWORD *)(a1 + 48);
      v28[0] = &DestinationString;
      v17 = BYTE1(*(_DWORD *)(a1 + 24)) & 1;
      v28[2] = 0LL;
      LOBYTE(v28[1]) = v17;
      v28[4] = *(_QWORD *)(a1 + 32);
      v28[5] = *(_QWORD *)(a1 + 40);
      dwFlagsb = *(_QWORD *)(a1 + 64);
      pcchRemainingb = *(_DWORD *)(a1 + 56);
      LODWORD(v28[3]) = 0;
      CmObjectListFromCache = PiDmGetCmObjectListFromCache(
                                1,
                                (unsigned int)PiPnpRtlServiceFilterCallback,
                                (unsigned int)v28,
                                v16,
                                pcchRemainingb,
                                dwFlagsb);
      v14 = (wchar_t *)v28[2];
      inited = CmObjectListFromCache;
      if ( v28[2] )
      {
        v13 = 0;
        goto LABEL_23;
      }
    }
  }
  return (unsigned int)inited;
}
