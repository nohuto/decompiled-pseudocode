/*
 * XREFs of _CmEnumSubkeyCallback @ 0x140532164
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCchCopyW @ 0x140002AB0 (RtlStringCchCopyW.c)
 *     RtlInitUnicodeStringEx @ 0x14008FB20 (RtlInitUnicodeStringEx.c)
 *     RtlStringCchCopyExW @ 0x140090110 (RtlStringCchCopyExW.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     _CmValidateDeviceName @ 0x14043BC80 (_CmValidateDeviceName.c)
 *     _SysCtxRegOpenKey @ 0x14043BE70 (_SysCtxRegOpenKey.c)
 *     _CmIsDevicePresent @ 0x1404B01E0 (_CmIsDevicePresent.c)
 *     _PnpCtxRegEnumKeyWithCallback @ 0x140532440 (_PnpCtxRegEnumKeyWithCallback.c)
 */

__int64 __fastcall CmEnumSubkeyCallback(__int64 *a1, __int64 a2, const wchar_t *a3, __int64 a4)
{
  wchar_t *v8; // r14
  wchar_t *PoolWithTag; // rax
  wchar_t *v10; // rdi
  size_t v11; // rdx
  __int64 v12; // rdx
  NTSTRSAFE_PWSTR v13; // rcx
  wchar_t *v14; // rcx
  NTSTATUS v15; // eax
  __int64 v16; // rcx
  unsigned int v17; // esi
  unsigned __int8 (__fastcall *v18)(__int64 *, wchar_t *, __int64, _QWORD); // rax
  unsigned int v19; // eax
  wchar_t *v21; // rax
  HANDLE Handle; // [rsp+30h] [rbp-20h] BYREF
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+38h] [rbp-18h] BYREF
  UNICODE_STRING pcchRemaining; // [rsp+40h] [rbp-10h] BYREF
  char v25; // [rsp+98h] [rbp+48h] BYREF

  Handle = 0LL;
  ppszDestEnd = 0LL;
  v25 = 0;
  v8 = 0LL;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x190uLL, 0x52504E50u);
  v10 = PoolWithTag;
  if ( PoolWithTag )
  {
    v11 = 200LL;
    if ( *(_WORD *)(a4 + 4) )
    {
      if ( RtlStringCchCopyExW(
             PoolWithTag,
             0xC8uLL,
             (NTSTRSAFE_PCWSTR)(a4 + 4),
             &ppszDestEnd,
             (size_t *)&pcchRemaining.Length,
             0x900u) < 0 )
        goto LABEL_16;
      v12 = *(_QWORD *)&pcchRemaining.Length;
      if ( *(_QWORD *)&pcchRemaining.Length < 2uLL )
        goto LABEL_16;
      v13 = ppszDestEnd;
      *ppszDestEnd = 92;
      v14 = v13 + 1;
      v11 = v12 - 2;
      *v14 = 0;
    }
    else
    {
      v14 = PoolWithTag;
    }
    v15 = RtlStringCchCopyW(v14, v11, a3);
    v16 = 0LL;
    if ( v15 >= 0 )
    {
      if ( *(_DWORD *)a4 < 3u )
      {
        if ( a1 )
          v16 = *a1;
        if ( (int)SysCtxRegOpenKey(v16, a2, (__int64)a3, 8u, 0x20019u, (__int64)&Handle) < 0 )
          goto LABEL_16;
        v21 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x1B8uLL, 0x52504E50u);
        v8 = v21;
        if ( !v21 )
          goto LABEL_16;
        memset(v21, 0, 0x1B8uLL);
        *(_DWORD *)v8 = *(_DWORD *)a4 + 1;
        RtlStringCchCopyExW(v8 + 2, 0xC8uLL, v10, 0LL, 0LL, 0x900u);
        *((_BYTE *)v8 + 404) = *(_BYTE *)(a4 + 404);
        *((_QWORD *)v8 + 51) = *(_QWORD *)(a4 + 408);
        *((_QWORD *)v8 + 52) = *(_QWORD *)(a4 + 416);
        *((_QWORD *)v8 + 53) = *(_QWORD *)(a4 + 424);
        *((_DWORD *)v8 + 108) = *(_DWORD *)(a4 + 432);
        *((_DWORD *)v8 + 109) = *(_DWORD *)(a4 + 436);
        PnpCtxRegEnumKeyWithCallback(a1, Handle, &CmEnumSubkeyCallback, v8);
        *(_DWORD *)(a4 + 436) = *((_DWORD *)v8 + 109);
        *(_QWORD *)(a4 + 424) = *((_QWORD *)v8 + 53);
        *(_DWORD *)(a4 + 432) = *((_DWORD *)v8 + 108);
        goto LABEL_14;
      }
      if ( (int)CmValidateDeviceName(0LL, v10) >= 0 && RtlInitUnicodeStringEx(&pcchRemaining, v10) >= 0 )
      {
        v17 = pcchRemaining.MaximumLength >> 1;
        if ( !*(_BYTE *)(a4 + 404) || CmIsDevicePresent((__int64)a1, v10, &v25) >= 0 && v25 )
        {
          v18 = *(unsigned __int8 (__fastcall **)(__int64 *, wchar_t *, __int64, _QWORD))(a4 + 408);
          if ( !v18 || v18(a1, v10, 1LL, *(_QWORD *)(a4 + 416)) )
          {
            *(_DWORD *)(a4 + 436) += v17;
            v19 = *(_DWORD *)(a4 + 432);
            if ( v19 > v17 )
            {
              RtlStringCchCopyExW(*(NTSTRSAFE_PWSTR *)(a4 + 424), v19, v10, 0LL, 0LL, 0x900u);
              *(_QWORD *)(a4 + 424) += 2LL * v17;
              *(_DWORD *)(a4 + 432) -= v17;
LABEL_14:
              if ( v8 )
                ExFreePoolWithTag(v8, 0);
            }
          }
        }
      }
    }
LABEL_16:
    ExFreePoolWithTag(v10, 0);
  }
  if ( Handle )
    ZwClose(Handle);
  return 0LL;
}
