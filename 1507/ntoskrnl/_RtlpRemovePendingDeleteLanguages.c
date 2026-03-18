/*
 * XREFs of _RtlpRemovePendingDeleteLanguages @ 0x14015E290
 * Callers:
 *     _RtlpMuiRegValidateInstalled @ 0x140591CE8 (_RtlpMuiRegValidateInstalled.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwEnumerateKey @ 0x14017F630 (ZwEnumerateKey.c)
 *     NtClose @ 0x14049BE90 (NtClose.c)
 *     LdrpOpenKey @ 0x140591F2C (LdrpOpenKey.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByName @ 0x14071FCE8 (RtlpMuiRegGetInstalledLanguageIndexByName.c)
 */

__int64 __fastcall RtlpRemovePendingDeleteLanguages(__int64 a1, __int16 a2)
{
  __int16 *v2; // rbp
  ULONG v6; // ebx
  NTSTATUS v7; // esi
  __int64 v8; // r8
  unsigned __int64 v9; // rdx
  __int16 v10; // ax
  void *v11; // rcx
  __int16 v12; // [rsp+50h] [rbp+0h] BYREF

  v2 = (__int16 *)((unsigned __int64)&v12 & 0xFFFFFFFFFFFFFFE0uLL);
  *((_QWORD *)v2 + 1) = 0LL;
  *((_DWORD *)v2 + 4) = 0;
  *v2 = -1;
  if ( !a1 )
    return 3221225485LL;
  RtlInitUnicodeString(
    (PUNICODE_STRING)(v2 + 12),
    L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\UILanguages\\PendingDelete");
  if ( (int)LdrpOpenKey(v2 + 12, 0LL, 131097LL, v2 + 4) >= 0 )
  {
    v6 = 0;
    do
    {
      v7 = ZwEnumerateKey(
             *(HANDLE *)(((unsigned __int64)&v12 & 0xFFFFFFFFFFFFFFE0uLL) + 8),
             v6,
             KeyBasicInformation,
             v2 + 32,
             0x200u,
             (PULONG)v2 + 4);
      if ( v7 >= 0 )
      {
        v9 = *(unsigned int *)(((unsigned __int64)&v12 & 0xFFFFFFFFFFFFFFE0uLL) + 0x4C);
        if ( v9 + 24 < 0x1FE )
        {
          *(_WORD *)(((unsigned __int64)&v12 & 0xFFFFFFFFFFFFFFE0uLL) + 0x50 + 2 * (v9 >> 1)) = 0;
          if ( (int)RtlpMuiRegGetInstalledLanguageIndexByName(
                      a1,
                      v2 + 40,
                      v8,
                      (unsigned __int64)&v12 & 0xFFFFFFFFFFFFFFE0uLL) >= 0 )
          {
            v10 = *v2;
            if ( *v2 != -1 && v10 != a2 )
            {
              *(_WORD *)(28LL * v10 + *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL)) &= ~0x20u;
              *(_WORD *)(28LL * *v2 + *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL)) |= 0x8000u;
            }
          }
        }
      }
      ++v6;
    }
    while ( v7 != -2147483622 );
    v11 = *(void **)(((unsigned __int64)&v12 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
    if ( v11 )
      NtClose(v11);
  }
  return 0LL;
}
