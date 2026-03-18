/*
 * XREFs of DrvDbGetObjectSubKeyCallback @ 0x140517310
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCchCopyW @ 0x140002AB0 (RtlStringCchCopyW.c)
 *     RtlInitUnicodeStringEx @ 0x14008FB20 (RtlInitUnicodeStringEx.c)
 *     RtlStringCchCopyExW @ 0x140090110 (RtlStringCchCopyExW.c)
 *     _wcsicmp @ 0x14014437C (_wcsicmp.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     _SysCtxRegOpenKey @ 0x14043BE70 (_SysCtxRegOpenKey.c)
 *     _PnpCtxRegQueryInfoKey @ 0x1404C7040 (_PnpCtxRegQueryInfoKey.c)
 *     _PnpCtxRegEnumKeyWithCallback @ 0x140532440 (_PnpCtxRegEnumKeyWithCallback.c)
 */

__int64 __fastcall DrvDbGetObjectSubKeyCallback(__int64 *a1, __int64 a2, const wchar_t *a3, __int64 a4)
{
  const wchar_t **v4; // r14
  PVOID v5; // rsi
  int v6; // edi
  unsigned int v11; // edi
  wchar_t *PoolWithTag; // rax
  wchar_t *v13; // r14
  wchar_t *v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // r9
  unsigned __int8 (__fastcall *v18)(__int64 *, wchar_t *, _QWORD, _QWORD); // rax
  unsigned int v19; // eax
  unsigned int v20; // edi
  int v22; // eax
  __int64 v23; // rcx
  _OWORD *v24; // rax
  __int64 v25; // rdx
  _OWORD *v26; // rcx
  _OWORD *v27; // rax
  __int128 v28; // xmm1
  int v29; // [rsp+40h] [rbp-30h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-28h] BYREF
  size_t pcchRemaining; // [rsp+50h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-18h] BYREF
  int v33; // [rsp+B8h] [rbp+48h] BYREF

  v4 = (const wchar_t **)&off_140245670;
  Handle = 0LL;
  v5 = 0LL;
  v33 = 0;
  v6 = 0;
  v29 = 0;
  while ( wcsicmp(a3, *v4) )
  {
    ++v6;
    ++v4;
    if ( v6 )
    {
      v11 = 256;
      PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x200uLL, 0x42444450u);
      v13 = PoolWithTag;
      if ( !PoolWithTag )
        break;
      if ( *(_WORD *)(a4 + 8) )
      {
        if ( RtlStringCchCopyExW(
               PoolWithTag,
               0x100uLL,
               (NTSTRSAFE_PCWSTR)(a4 + 8),
               (NTSTRSAFE_PWSTR *)&DestinationString,
               &pcchRemaining,
               0x900u) >= 0 )
        {
          v22 = pcchRemaining;
          if ( pcchRemaining >= 2 )
          {
            v23 = *(_QWORD *)&DestinationString.Length;
            **(_WORD **)&DestinationString.Length = 92;
            v14 = (wchar_t *)(v23 + 2);
            *v14 = 0;
            v11 = v22 - 2;
            goto LABEL_7;
          }
        }
      }
      else
      {
        v14 = PoolWithTag;
LABEL_7:
        if ( RtlStringCchCopyW(v14, v11, a3) >= 0 )
        {
          v15 = 0LL;
          if ( a1 )
            v15 = *a1;
          if ( (int)SysCtxRegOpenKey(v15, a2, (__int64)a3, 8u, 0x20019u, (__int64)&Handle) >= 0
            && (int)PnpCtxRegQueryInfoKey(v16, Handle, &v33, v17, &v29, 0LL) >= 0 )
          {
            if ( !v33 || *(_DWORD *)(a4 + 4) >= *(_DWORD *)a4 )
              goto LABEL_13;
            v24 = ExAllocatePoolWithTag(PagedPool, 0x228uLL, 0x42444450u);
            v5 = v24;
            if ( v24 )
            {
              v25 = 4LL;
              v26 = v24;
              v27 = (_OWORD *)a4;
              do
              {
                *v26 = *v27;
                v26[1] = v27[1];
                v26[2] = v27[2];
                v26[3] = v27[3];
                v26[4] = v27[4];
                v26[5] = v27[5];
                v26[6] = v27[6];
                v26 += 8;
                v28 = v27[7];
                v27 += 8;
                *(v26 - 1) = v28;
                --v25;
              }
              while ( v25 );
              *v26 = *v27;
              v26[1] = v27[1];
              *((_QWORD *)v26 + 4) = *((_QWORD *)v27 + 4);
              ++*((_DWORD *)v5 + 1);
              RtlStringCchCopyExW((NTSTRSAFE_PWSTR)v5 + 4, 0x100uLL, v13, 0LL, 0LL, 0x900u);
              PnpCtxRegEnumKeyWithCallback(a1, Handle, &DrvDbGetObjectSubKeyCallback, v5);
              *(_QWORD *)(a4 + 536) = *((_QWORD *)v5 + 67);
              *(_DWORD *)(a4 + 544) = *((_DWORD *)v5 + 136);
              *(_DWORD *)(a4 + 548) = *((_DWORD *)v5 + 137);
LABEL_13:
              if ( v29 )
              {
                v18 = *(unsigned __int8 (__fastcall **)(__int64 *, wchar_t *, _QWORD, _QWORD))(a4 + 520);
                if ( (!v18 || v18(a1, v13, 0LL, *(_QWORD *)(a4 + 528)))
                  && RtlInitUnicodeStringEx(&DestinationString, v13) >= 0 )
                {
                  v19 = *(_DWORD *)(a4 + 544);
                  v20 = DestinationString.MaximumLength >> 1;
                  *(_DWORD *)(a4 + 548) += v20;
                  if ( v19 > v20 )
                  {
                    RtlStringCchCopyExW(*(NTSTRSAFE_PWSTR *)(a4 + 536), v19, v13, 0LL, 0LL, 0x900u);
                    *(_QWORD *)(a4 + 536) += 2LL * v20;
                    *(_DWORD *)(a4 + 544) -= v20;
                  }
                }
              }
              if ( v5 )
                ExFreePoolWithTag(v5, 0);
            }
          }
        }
      }
      ExFreePoolWithTag(v13, 0);
      break;
    }
  }
  if ( Handle )
    ZwClose(Handle);
  return 0LL;
}
