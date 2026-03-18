/*
 * XREFs of _RegRtlCopyTreeInternal @ 0x140719E28
 * Callers:
 *     _PnpCtxRegCopyTree @ 0x140712344 (_PnpCtxRegCopyTree.c)
 *     _RegRtlCopyTreeInternal @ 0x140719E28 (_RegRtlCopyTreeInternal.c)
 * Callees:
 *     RtlpGetStackLimits @ 0x14001D5A0 (RtlpGetStackLimits.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ZwQueryKey @ 0x14017F2B0 (ZwQueryKey.c)
 *     ZwQuerySecurityObject @ 0x140181830 (ZwQuerySecurityObject.c)
 *     ZwSetSecurityObject @ 0x140182150 (ZwSetSecurityObject.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     _RegRtlOpenKeyTransacted @ 0x140435A8C (_RegRtlOpenKeyTransacted.c)
 *     _RegRtlCreateKeyTransacted @ 0x1404DE7D8 (_RegRtlCreateKeyTransacted.c)
 *     _RegRtlSetValue @ 0x140556964 (_RegRtlSetValue.c)
 *     _RegRtlEnumValue @ 0x14058B9D0 (_RegRtlEnumValue.c)
 *     _RegRtlEnumKey @ 0x1405A8C6C (_RegRtlEnumKey.c)
 *     _RegRtlQueryInfoKey @ 0x1405A928C (_RegRtlQueryInfoKey.c)
 *     _RegRtlCopyTreeInternal @ 0x140719E28 (_RegRtlCopyTreeInternal.c)
 */

__int64 __fastcall RegRtlCopyTreeInternal(char *a1, __int64 a2, char *a3, const WCHAR *a4, char a5, void *a6, char a7)
{
  ULONG v8; // edi
  unsigned int *PoolWithTag; // rsi
  char StackLimits; // al
  int v11; // ebx
  char v12; // al
  PVOID v13; // rax
  unsigned int v14; // eax
  unsigned __int64 v15; // rdi
  int v16; // eax
  unsigned __int64 v17; // rax
  int v18; // eax
  void *v19; // rax
  PVOID v20; // r9
  ULONG v21; // r8d
  SIZE_T v23; // [rsp+50h] [rbp-61h] BYREF
  ULONG Index[2]; // [rsp+58h] [rbp-59h] BYREF
  HANDLE KeyHandle; // [rsp+60h] [rbp-51h] BYREF
  char *v26; // [rsp+68h] [rbp-49h] BYREF
  __int64 v27; // [rsp+70h] [rbp-41h] BYREF
  SIZE_T NumberOfBytes; // [rsp+78h] [rbp-39h] BYREF
  ULONG LengthNeeded; // [rsp+80h] [rbp-31h] BYREF
  PVOID v30; // [rsp+88h] [rbp-29h]
  PVOID P; // [rsp+90h] [rbp-21h]
  const WCHAR *v32; // [rsp+98h] [rbp-19h] BYREF
  HANDLE v33; // [rsp+A0h] [rbp-11h]
  HANDLE Handle; // [rsp+A8h] [rbp-9h] BYREF
  ULONG v35; // [rsp+B0h] [rbp-1h] BYREF
  ULONG ResultLength; // [rsp+B4h] [rbp+3h] BYREF
  _BYTE KeyInformation[4]; // [rsp+B8h] [rbp+7h] BYREF
  int v38; // [rsp+BCh] [rbp+Bh]

  v33 = a6;
  v27 = a2;
  KeyHandle = 0LL;
  Handle = 0LL;
  v8 = 0;
  P = 0LL;
  PoolWithTag = 0LL;
  LengthNeeded = 0;
  v30 = 0LL;
  v32 = a4;
  v26 = a3;
  StackLimits = RtlpGetStackLimits((__int64)Index, (__int64)&NumberOfBytes);
  if ( (unsigned __int64)&NumberOfBytes - (*(_QWORD *)Index & -(__int64)(StackLimits != 0)) < 0x400 )
  {
    v11 = -1073741670;
    goto LABEL_75;
  }
  v11 = RegRtlOpenKeyTransacted(a1, (const WCHAR *)v27, 8, 0x20019u, &KeyHandle, v33);
  if ( v11 >= 0 )
  {
    if ( !ZwQueryKey(KeyHandle, KeyFlagsInformation, KeyInformation, 0xCu, &ResultLength) )
    {
      if ( (v38 & 2) != 0 )
      {
        v11 = -2147483603;
        goto LABEL_75;
      }
      v8 = (v38 & 1) != 0;
    }
    v12 = a5;
    if ( !a5 )
    {
LABEL_17:
      v11 = RegRtlCreateKeyTransacted(
              v26,
              v32,
              v8,
              0x6001Fu,
              (void *)((unsigned __int64)P & -(__int64)(v12 != 0)),
              0,
              &Handle,
              &v35,
              v33);
      if ( v11 < 0 )
        goto LABEL_75;
      if ( a5 && P && v35 == 2 )
        ZwSetSecurityObject(Handle, 4u, P);
      if ( (unsigned int)RegRtlQueryInfoKey(KeyHandle, 0LL, (unsigned int *)&v27, 0LL, (unsigned int *)&v26, &v32) )
      {
        LODWORD(v15) = 0;
        LODWORD(NumberOfBytes) = 0;
        goto LABEL_32;
      }
      v14 = v27;
      if ( (unsigned int)v27 <= (unsigned int)v26 )
        v14 = (unsigned int)v26;
      if ( v14 )
      {
        if ( v14 + 1 < v14 )
          goto LABEL_30;
        ++v14;
      }
      v15 = 2LL * v14;
      if ( v15 <= 0xFFFFFFFF )
      {
        v11 = 0;
        LODWORD(NumberOfBytes) = (_DWORD)v32;
LABEL_32:
        if ( !(_DWORD)v15
          || (PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, (unsigned int)v15, 0x4C474552u)) != 0LL )
        {
          if ( !(_DWORD)NumberOfBytes
            || (v30 = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x4C474552u)) != 0LL )
          {
            Index[0] = (unsigned int)v15 >> 1;
            v16 = RegRtlEnumKey(KeyHandle, 0, PoolWithTag, Index);
            LODWORD(v23) = 1;
            while ( v16 != -2147483622 )
            {
              if ( v16 == -1073741789 )
              {
                v17 = 2LL * Index[0];
                v27 = v17;
                if ( v17 > 0xFFFFFFFF )
                {
LABEL_50:
                  v11 = -1073741675;
                  goto LABEL_71;
                }
                LODWORD(v15) = 2 * Index[0];
                v11 = 0;
                if ( PoolWithTag )
                {
                  ExFreePoolWithTag(PoolWithTag, 0);
                  LODWORD(v17) = v27;
                }
                PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, (unsigned int)v17, 0x4C474552u);
                if ( !PoolWithTag )
                {
LABEL_69:
                  v11 = -1073741801;
                  goto LABEL_71;
                }
                LODWORD(v23) = v23 - 1;
              }
              else if ( v16
                     || (*((_WORD *)PoolWithTag + ((unsigned __int64)(unsigned int)v15 >> 1) - 1) = 0,
                         v16 = RegRtlCopyTreeInternal(
                                 (_DWORD)KeyHandle,
                                 (_DWORD)PoolWithTag,
                                 (_DWORD)Handle,
                                 (_DWORD)PoolWithTag,
                                 a5,
                                 (__int64)v33,
                                 a7),
                         v16 != -2147483603)
                     && v16 )
              {
                v11 = v16;
                break;
              }
              Index[0] = (unsigned int)v15 >> 1;
              v16 = RegRtlEnumKey(KeyHandle, v23, PoolWithTag, Index);
              LODWORD(v23) = v23 + 1;
            }
            if ( v11 >= 0 )
            {
              LODWORD(v32) = (unsigned int)v15 >> 1;
              LODWORD(v26) = (unsigned int)v15 >> 1;
              LODWORD(v23) = NumberOfBytes;
              v18 = RegRtlEnumValue(KeyHandle, 0, PoolWithTag, (unsigned int *)&v26, &v27, v30, (unsigned int *)&v23);
              Index[0] = 1;
              while ( v18 != -2147483622 )
              {
                if ( v18 == -1073741789 )
                {
                  if ( (unsigned int)v26 > (unsigned int)v32 )
                  {
                    v19 = (void *)(2LL * (unsigned int)v26);
                    v33 = v19;
                    if ( (unsigned __int64)v19 > 0xFFFFFFFF )
                      goto LABEL_50;
                    LODWORD(v15) = 2 * (_DWORD)v26;
                    v11 = 0;
                    if ( PoolWithTag )
                    {
                      ExFreePoolWithTag(PoolWithTag, 0);
                      LODWORD(v19) = (_DWORD)v33;
                    }
                    PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, (unsigned int)v19, 0x4C474552u);
                    if ( !PoolWithTag )
                      goto LABEL_69;
                  }
                  if ( (unsigned int)v23 > (unsigned int)NumberOfBytes )
                  {
                    LODWORD(NumberOfBytes) = v23;
                    if ( v30 )
                      ExFreePoolWithTag(v30, 0);
                    v30 = ExAllocatePoolWithTag(PagedPool, (unsigned int)v23, 0x4C474552u);
                    if ( !v30 )
                      goto LABEL_37;
                  }
                  --Index[0];
                }
                else if ( v18
                       || (v20 = v30,
                           v21 = v27,
                           *((_WORD *)PoolWithTag + ((unsigned __int64)(unsigned int)v15 >> 1) - 1) = 0,
                           (v18 = RegRtlSetValue(Handle, (const WCHAR *)PoolWithTag, v21, v20, v23)) != 0) )
                {
                  v11 = v18;
                  break;
                }
                LODWORD(v32) = (unsigned int)v15 >> 1;
                LODWORD(v26) = (unsigned int)v15 >> 1;
                LODWORD(v23) = NumberOfBytes;
                v18 = RegRtlEnumValue(
                        KeyHandle,
                        Index[0]++,
                        PoolWithTag,
                        (unsigned int *)&v26,
                        &v27,
                        v30,
                        (unsigned int *)&v23);
              }
            }
LABEL_71:
            if ( v30 )
              ExFreePoolWithTag(v30, 0);
          }
          else
          {
LABEL_37:
            v11 = -1073741801;
          }
          if ( PoolWithTag )
            ExFreePoolWithTag(PoolWithTag, 0);
        }
        else
        {
          v11 = -1073741801;
        }
        goto LABEL_75;
      }
LABEL_30:
      v11 = -1073741675;
      goto LABEL_75;
    }
    v13 = 0LL;
    while ( ZwQuerySecurityObject(KeyHandle, 4u, v13, LengthNeeded, &LengthNeeded) == -1073741789 )
    {
      if ( P )
        ExFreePoolWithTag(P, 0);
      v13 = ExAllocatePoolWithTag(PagedPool, LengthNeeded, 0x4C474552u);
      P = v13;
      if ( !v13 )
      {
        v11 = -1073741801;
        break;
      }
    }
    if ( v11 >= 0 )
    {
      v12 = a5;
      goto LABEL_17;
    }
  }
LABEL_75:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( Handle )
    ZwClose(Handle);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)v11;
}
