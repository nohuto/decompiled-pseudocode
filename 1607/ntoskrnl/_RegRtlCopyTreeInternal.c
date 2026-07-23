/*
 * XREFs of _RegRtlCopyTreeInternal @ 0x1406E0260
 * Callers:
 *     _PnpCtxRegCopyTree @ 0x1406D7158 (_PnpCtxRegCopyTree.c)
 *     _RegRtlCopyTreeInternal @ 0x1406E0260 (_RegRtlCopyTreeInternal.c)
 * Callees:
 *     IoGetStackLimits @ 0x14004EEE0 (IoGetStackLimits.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwQueryKey @ 0x14015A4B0 (ZwQueryKey.c)
 *     ZwQuerySecurityObject @ 0x14015CAF0 (ZwQuerySecurityObject.c)
 *     ZwSetSecurityObject @ 0x14015D470 (ZwSetSecurityObject.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     _RegRtlEnumValue @ 0x1404C26F0 (_RegRtlEnumValue.c)
 *     _RegRtlQueryInfoKey @ 0x1404C5308 (_RegRtlQueryInfoKey.c)
 *     _RegRtlSetValue @ 0x1404D0124 (_RegRtlSetValue.c)
 *     _RegRtlCreateKeyTransacted @ 0x1404DD8A0 (_RegRtlCreateKeyTransacted.c)
 *     _RegRtlOpenKeyTransacted @ 0x1404E0B64 (_RegRtlOpenKeyTransacted.c)
 *     _RegRtlEnumKey @ 0x140562BA4 (_RegRtlEnumKey.c)
 *     _RegRtlCopyTreeInternal @ 0x1406E0260 (_RegRtlCopyTreeInternal.c)
 */

__int64 __fastcall RegRtlCopyTreeInternal(
        char *a1,
        __int64 a2,
        char *a3,
        const WCHAR *a4,
        char a5,
        __int64 a6,
        char a7)
{
  ULONG v8; // edi
  unsigned int *PoolWithTag; // rsi
  int v10; // ebx
  char v11; // al
  PVOID v12; // rax
  unsigned __int64 v13; // rdi
  unsigned int v14; // eax
  int v15; // eax
  ULONG v16; // ecx
  int v17; // eax
  unsigned __int64 v18; // rax
  int v19; // eax
  const WCHAR *v20; // rax
  PVOID v21; // r9
  ULONG v22; // r8d
  unsigned __int64 LowLimit; // [rsp+50h] [rbp-61h] BYREF
  char *v25; // [rsp+58h] [rbp-59h] BYREF
  ULONG Index[2]; // [rsp+60h] [rbp-51h]
  HANDLE KeyHandle; // [rsp+68h] [rbp-49h] BYREF
  const WCHAR *v28; // [rsp+70h] [rbp-41h] BYREF
  __int64 v29; // [rsp+78h] [rbp-39h] BYREF
  unsigned __int64 HighLimit; // [rsp+80h] [rbp-31h] BYREF
  ULONG LengthNeeded; // [rsp+88h] [rbp-29h] BYREF
  PVOID v32; // [rsp+90h] [rbp-21h]
  PVOID P; // [rsp+98h] [rbp-19h]
  HANDLE Handle; // [rsp+A0h] [rbp-11h] BYREF
  ULONG v35; // [rsp+A8h] [rbp-9h] BYREF
  ULONG ResultLength; // [rsp+ACh] [rbp-5h] BYREF
  _BYTE KeyInformation[4]; // [rsp+B0h] [rbp-1h] BYREF
  char v38; // [rsp+B4h] [rbp+3h]

  *(_QWORD *)Index = a6;
  v29 = a2;
  KeyHandle = 0LL;
  Handle = 0LL;
  v8 = 0;
  P = 0LL;
  PoolWithTag = 0LL;
  LengthNeeded = 0;
  v32 = 0LL;
  v28 = a4;
  v25 = a3;
  IoGetStackLimits(&LowLimit, &HighLimit);
  if ( (unsigned __int64)&HighLimit - LowLimit < 0x400 )
  {
    v10 = -1073741670;
    goto LABEL_76;
  }
  v10 = RegRtlOpenKeyTransacted(a1, (const WCHAR *)v29, 8, 0x20019u, &KeyHandle, *(HANDLE *)Index);
  if ( v10 >= 0 )
  {
    if ( !ZwQueryKey(KeyHandle, KeyFlagsInformation, KeyInformation, 0xCu, &ResultLength) )
    {
      if ( (v38 & 2) != 0 )
      {
        v10 = -2147483603;
        goto LABEL_76;
      }
      v8 = (v38 & 1) != 0;
    }
    v11 = a5;
    if ( !a5 )
    {
LABEL_17:
      v10 = RegRtlCreateKeyTransacted(
              v25,
              v28,
              v8,
              0x6001Fu,
              (void *)((unsigned __int64)P & -(__int64)(v11 != 0)),
              0,
              &Handle,
              &v35,
              *(HANDLE *)Index);
      if ( v10 < 0 )
        goto LABEL_76;
      if ( a5 && P && v35 == 2 )
        ZwSetSecurityObject(Handle, 4u, P);
      LODWORD(v13) = 0;
      if ( (unsigned int)RegRtlQueryInfoKey(KeyHandle, 0LL, (unsigned int *)&v29, 0LL, (unsigned int *)&v25, &v28) )
      {
        v15 = 0;
        goto LABEL_32;
      }
      v14 = v29;
      if ( (unsigned int)v29 <= (unsigned int)v25 )
        v14 = (unsigned int)v25;
      if ( v14 )
      {
        if ( v14 + 1 < v14 )
          goto LABEL_30;
        ++v14;
      }
      v13 = 2LL * v14;
      if ( v13 <= 0xFFFFFFFF )
      {
        v10 = 0;
        v15 = (int)v28;
LABEL_32:
        LODWORD(HighLimit) = v15;
        if ( !(_DWORD)v13
          || (PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, (unsigned int)v13, 0x4C474552u)) != 0LL )
        {
          if ( !(_DWORD)HighLimit
            || (v32 = ExAllocatePoolWithTag(PagedPool, (unsigned int)HighLimit, 0x4C474552u)) != 0LL )
          {
            v16 = 0;
            LODWORD(LowLimit) = 0;
            while ( 1 )
            {
              LODWORD(v25) = (unsigned int)v13 >> 1;
              v17 = RegRtlEnumKey(KeyHandle, v16, PoolWithTag, (unsigned int *)&v25);
              LODWORD(LowLimit) = LowLimit + 1;
              if ( v17 == -2147483622 )
                break;
              if ( v17 == -1073741789 )
              {
                v18 = 2LL * (unsigned int)v25;
                v29 = v18;
                if ( v18 > 0xFFFFFFFF )
                {
LABEL_50:
                  v10 = -1073741675;
                  goto LABEL_72;
                }
                LODWORD(v13) = 2 * (_DWORD)v25;
                v10 = 0;
                if ( PoolWithTag )
                {
                  ExFreePoolWithTag(PoolWithTag, 0);
                  LODWORD(v18) = v29;
                }
                PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, (unsigned int)v18, 0x4C474552u);
                if ( !PoolWithTag )
                {
LABEL_70:
                  v10 = -1073741801;
                  goto LABEL_72;
                }
                v16 = LowLimit - 1;
                LODWORD(LowLimit) = LowLimit - 1;
              }
              else if ( v17
                     || (*((_WORD *)PoolWithTag + ((unsigned __int64)(unsigned int)v13 >> 1) - 1) = 0,
                         v17 = RegRtlCopyTreeInternal(
                                 (_DWORD)KeyHandle,
                                 (_DWORD)PoolWithTag,
                                 (_DWORD)Handle,
                                 (_DWORD)PoolWithTag,
                                 a5,
                                 *(__int64 *)Index,
                                 a7),
                         v16 = LowLimit,
                         v17 != -2147483603)
                     && v17 )
              {
                v10 = v17;
                break;
              }
            }
            if ( v10 >= 0 )
            {
              LODWORD(v28) = (unsigned int)v13 >> 1;
              LODWORD(v25) = (unsigned int)v13 >> 1;
              LODWORD(LowLimit) = HighLimit;
              v19 = RegRtlEnumValue(
                      KeyHandle,
                      0,
                      PoolWithTag,
                      (unsigned int *)&v25,
                      &v29,
                      v32,
                      (unsigned int *)&LowLimit);
              Index[0] = 1;
              while ( v19 != -2147483622 )
              {
                if ( v19 == -1073741789 )
                {
                  if ( (unsigned int)v25 > (unsigned int)v28 )
                  {
                    v20 = (const WCHAR *)(2LL * (unsigned int)v25);
                    v28 = v20;
                    if ( (unsigned __int64)v20 > 0xFFFFFFFF )
                      goto LABEL_50;
                    LODWORD(v13) = 2 * (_DWORD)v25;
                    v10 = 0;
                    if ( PoolWithTag )
                    {
                      ExFreePoolWithTag(PoolWithTag, 0);
                      LODWORD(v20) = (_DWORD)v28;
                    }
                    PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, (unsigned int)v20, 0x4C474552u);
                    if ( !PoolWithTag )
                      goto LABEL_70;
                  }
                  if ( (unsigned int)LowLimit > (unsigned int)HighLimit )
                  {
                    LODWORD(HighLimit) = LowLimit;
                    if ( v32 )
                      ExFreePoolWithTag(v32, 0);
                    v32 = ExAllocatePoolWithTag(PagedPool, (unsigned int)LowLimit, 0x4C474552u);
                    if ( !v32 )
                      goto LABEL_37;
                  }
                  --Index[0];
                }
                else if ( v19
                       || (v21 = v32,
                           v22 = v29,
                           *((_WORD *)PoolWithTag + ((unsigned __int64)(unsigned int)v13 >> 1) - 1) = 0,
                           (v19 = RegRtlSetValue(Handle, (const WCHAR *)PoolWithTag, v22, v21, LowLimit)) != 0) )
                {
                  v10 = v19;
                  break;
                }
                LODWORD(v28) = (unsigned int)v13 >> 1;
                LODWORD(v25) = (unsigned int)v13 >> 1;
                LODWORD(LowLimit) = HighLimit;
                v19 = RegRtlEnumValue(
                        KeyHandle,
                        Index[0]++,
                        PoolWithTag,
                        (unsigned int *)&v25,
                        &v29,
                        v32,
                        (unsigned int *)&LowLimit);
              }
            }
LABEL_72:
            if ( v32 )
              ExFreePoolWithTag(v32, 0);
          }
          else
          {
LABEL_37:
            v10 = -1073741801;
          }
          if ( PoolWithTag )
            ExFreePoolWithTag(PoolWithTag, 0);
        }
        else
        {
          v10 = -1073741801;
        }
        goto LABEL_76;
      }
LABEL_30:
      v10 = -1073741675;
      goto LABEL_76;
    }
    v12 = 0LL;
    while ( ZwQuerySecurityObject(KeyHandle, 4u, v12, LengthNeeded, &LengthNeeded) == -1073741789 )
    {
      if ( P )
        ExFreePoolWithTag(P, 0);
      v12 = ExAllocatePoolWithTag(PagedPool, LengthNeeded, 0x4C474552u);
      P = v12;
      if ( !v12 )
      {
        v10 = -1073741801;
        break;
      }
    }
    if ( v10 >= 0 )
    {
      v11 = a5;
      goto LABEL_17;
    }
  }
LABEL_76:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( Handle )
    ZwClose(Handle);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)v10;
}
