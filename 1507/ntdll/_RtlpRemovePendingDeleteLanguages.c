/*
 * XREFs of _RtlpRemovePendingDeleteLanguages @ 0x1800EA0D0
 * Callers:
 *     _RtlpMuiRegValidateInstalled @ 0x1800E999C (_RtlpMuiRegValidateInstalled.c)
 * Callees:
 *     RtlpMuiRegGetInstalledLanguageIndexByName @ 0x18001E1D8 (RtlpMuiRegGetInstalledLanguageIndexByName.c)
 *     RtlInitUnicodeString @ 0x18001F3D0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     NtClose @ 0x1800939F0 (NtClose.c)
 *     NtOpenKey @ 0x180093A20 (NtOpenKey.c)
 *     NtEnumerateKey @ 0x180093C20 (NtEnumerateKey.c)
 */

__int64 __fastcall RtlpRemovePendingDeleteLanguages(__int64 a1, __int16 a2)
{
  unsigned __int64 v2; // rbp
  ULONG v6; // ebx
  NTSTATUS v7; // esi
  unsigned __int64 v8; // rdx
  __int16 v9; // ax
  __int64 v10; // rdx
  void *v11; // rcx
  __int16 v12; // [rsp+50h] [rbp+0h] BYREF

  v2 = (unsigned __int64)&v12 & 0xFFFFFFFFFFFFFFE0uLL;
  *(_DWORD *)(v2 + 16) = 0;
  *(_WORD *)v2 = -1;
  if ( !a1 )
    return 3221225485LL;
  RtlInitUnicodeString(
    (PUNICODE_STRING)(v2 + 24),
    L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\UILanguages\\PendingDelete");
  *(_QWORD *)(((unsigned __int64)&v12 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = 0LL;
  *(_QWORD *)(((unsigned __int64)&v12 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38) = ((unsigned __int64)&v12 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                       + 24;
  *(_DWORD *)(((unsigned __int64)&v12 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28) = 48;
  *(_QWORD *)(((unsigned __int64)&v12 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30) = 0LL;
  *(_DWORD *)(((unsigned __int64)&v12 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40) = 64;
  *(_OWORD *)(((unsigned __int64)&v12 & 0xFFFFFFFFFFFFFFE0uLL) + 0x48) = 0LL;
  if ( NtOpenKey((PHANDLE)(v2 + 8), 0x20019u, (POBJECT_ATTRIBUTES)(v2 + 40)) >= 0 )
  {
    v6 = 0;
    do
    {
      v7 = NtEnumerateKey(
             *(HANDLE *)(((unsigned __int64)&v12 & 0xFFFFFFFFFFFFFFE0uLL) + 8),
             v6,
             KeyBasicInformation,
             (PVOID)(v2 + 96),
             0x200u,
             (PULONG)(v2 + 16));
      if ( v7 >= 0 )
      {
        v8 = *(unsigned int *)(((unsigned __int64)&v12 & 0xFFFFFFFFFFFFFFE0uLL) + 0x6C);
        if ( v8 + 24 < 0x1FE )
        {
          *(_WORD *)(((unsigned __int64)&v12 & 0xFFFFFFFFFFFFFFE0uLL) + 0x70 + 2 * (v8 >> 1)) = 0;
          if ( (int)RtlpMuiRegGetInstalledLanguageIndexByName(
                      a1,
                      (const WCHAR *)(v2 + 112),
                      0,
                      (_WORD *)((unsigned __int64)&v12 & 0xFFFFFFFFFFFFFFE0uLL)) >= 0 )
          {
            v9 = *(_WORD *)v2;
            if ( *(_WORD *)v2 != 0xFFFF && v9 != a2 )
            {
              v10 = 28LL * v9;
              *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) + v10) &= ~0x20u;
              *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) + v10) |= 0x8000u;
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
