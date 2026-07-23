/*
 * XREFs of DrvDbGetObjectSubKeyCallback @ 0x1406E1C00
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCchCopyExW @ 0x1400C1338 (RtlStringCchCopyExW.c)
 *     RtlInitUnicodeStringEx @ 0x1400C1850 (RtlInitUnicodeStringEx.c)
 *     RtlStringCchCopyW @ 0x14010B1EC (RtlStringCchCopyW.c)
 *     _wcsicmp @ 0x14014DD0C (_wcsicmp.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     _PnpCtxRegQueryInfoKey @ 0x1404B910C (_PnpCtxRegQueryInfoKey.c)
 *     _SysCtxRegOpenKey @ 0x1404E0B1C (_SysCtxRegOpenKey.c)
 *     _PnpCtxRegEnumKeyWithCallback @ 0x1405634B4 (_PnpCtxRegEnumKeyWithCallback.c)
 */

__int64 __fastcall DrvDbGetObjectSubKeyCallback(__int64 *a1, __int64 a2, const wchar_t *a3, __int64 a4)
{
  const wchar_t **v4; // r14
  __int64 v5; // rsi
  int v6; // edi
  unsigned int v11; // edi
  wchar_t *PoolWithTag; // rax
  wchar_t *v13; // r14
  wchar_t *v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // r9
  _OWORD *v20; // rax
  __int64 v21; // rdx
  _OWORD *v22; // rcx
  _OWORD *v23; // rax
  __int128 v24; // xmm1
  unsigned __int8 (__fastcall *v25)(__int64 *, wchar_t *, _QWORD, _QWORD); // rax
  unsigned int v26; // eax
  unsigned int v27; // edi
  int v29; // [rsp+40h] [rbp-30h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-28h] BYREF
  size_t pcchRemaining; // [rsp+50h] [rbp-20h] BYREF
  UNICODE_STRING ppszDestEnd; // [rsp+58h] [rbp-18h] BYREF
  int v33; // [rsp+B8h] [rbp+48h] BYREF

  v4 = (const wchar_t **)&off_14025C2E8;
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
               (NTSTRSAFE_PWSTR *)&ppszDestEnd,
               &pcchRemaining,
               0x900u) >= 0 )
        {
          v15 = pcchRemaining;
          if ( pcchRemaining >= 2 )
          {
            v16 = *(_QWORD *)&ppszDestEnd.Length;
            **(_WORD **)&ppszDestEnd.Length = 92;
            v14 = (wchar_t *)(v16 + 2);
            *v14 = 0;
            v11 = v15 - 2;
            goto LABEL_10;
          }
        }
      }
      else
      {
        v14 = PoolWithTag;
LABEL_10:
        if ( RtlStringCchCopyW(v14, v11, a3) >= 0 )
        {
          v17 = 0LL;
          if ( a1 )
            v17 = *a1;
          if ( (int)SysCtxRegOpenKey(v17, a2, (__int64)a3, 8u, 0x20019u, (__int64)&Handle) >= 0
            && (int)PnpCtxRegQueryInfoKey(v18, (int)Handle, (int)&v33, v19, (__int64)&v29, 0LL) >= 0 )
          {
            if ( !v33 || *(_DWORD *)(a4 + 4) >= *(_DWORD *)a4 )
              goto LABEL_21;
            v20 = ExAllocatePoolWithTag(PagedPool, 0x228uLL, 0x42444450u);
            v5 = (__int64)v20;
            if ( v20 )
            {
              v21 = 4LL;
              v22 = v20;
              v23 = (_OWORD *)a4;
              do
              {
                *v22 = *v23;
                v22[1] = v23[1];
                v22[2] = v23[2];
                v22[3] = v23[3];
                v22[4] = v23[4];
                v22[5] = v23[5];
                v22[6] = v23[6];
                v22 += 8;
                v24 = v23[7];
                v23 += 8;
                *(v22 - 1) = v24;
                --v21;
              }
              while ( v21 );
              *v22 = *v23;
              v22[1] = v23[1];
              *((_QWORD *)v22 + 4) = *((_QWORD *)v23 + 4);
              ++*(_DWORD *)(v5 + 4);
              RtlStringCchCopyExW((NTSTRSAFE_PWSTR)(v5 + 8), 0x100uLL, v13, 0LL, 0LL, 0x900u);
              PnpCtxRegEnumKeyWithCallback(a1, Handle, (__int64)&DrvDbGetObjectSubKeyCallback, v5);
              *(_QWORD *)(a4 + 536) = *(_QWORD *)(v5 + 536);
              *(_DWORD *)(a4 + 544) = *(_DWORD *)(v5 + 544);
              *(_DWORD *)(a4 + 548) = *(_DWORD *)(v5 + 548);
LABEL_21:
              if ( v29 )
              {
                v25 = *(unsigned __int8 (__fastcall **)(__int64 *, wchar_t *, _QWORD, _QWORD))(a4 + 520);
                if ( (!v25 || v25(a1, v13, 0LL, *(_QWORD *)(a4 + 528)))
                  && RtlInitUnicodeStringEx(&ppszDestEnd, v13) >= 0 )
                {
                  v26 = *(_DWORD *)(a4 + 544);
                  v27 = ppszDestEnd.MaximumLength >> 1;
                  *(_DWORD *)(a4 + 548) += v27;
                  if ( v26 > v27 )
                  {
                    RtlStringCchCopyExW(*(NTSTRSAFE_PWSTR *)(a4 + 536), v26, v13, 0LL, 0LL, 0x900u);
                    *(_QWORD *)(a4 + 536) += 2LL * v27;
                    *(_DWORD *)(a4 + 544) -= v27;
                  }
                }
              }
              if ( v5 )
                ExFreePoolWithTag((PVOID)v5, 0);
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
