/*
 * XREFs of RtlpPopulateLanguageConfigList @ 0x180004D08
 * Callers:
 *     RtlpLoadLanguageConfigList @ 0x180004EE8 (RtlpLoadLanguageConfigList.c)
 * Callees:
 *     RtlpMuiRegCreateLanguageConfigList @ 0x180004E1C (RtlpMuiRegCreateLanguageConfigList.c)
 *     RtlpMuiRegGetLanguageSpec @ 0x18003E62C (RtlpMuiRegGetLanguageSpec.c)
 *     RtlpMuiRegConfigNodePopulate @ 0x18007729C (RtlpMuiRegConfigNodePopulate.c)
 *     RtlpMuiRegValidateConfigNode @ 0x180085780 (RtlpMuiRegValidateConfigNode.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     ZwEnumerateValueKey @ 0x1800A5320 (ZwEnumerateValueKey.c)
 *     RtlpMuiRegConfigListAddLanguage @ 0x1800EB43C (RtlpMuiRegConfigListAddLanguage.c)
 */

__int64 __fastcall RtlpPopulateLanguageConfigList(HANDLE KeyHandle, __int64 *a2, __int64 a3)
{
  ULONG *v3; // rbp
  __int64 v7; // rdi
  ULONG v8; // r14d
  NTSTATUS v9; // eax
  int v10; // r9d
  int LanguageSpec; // ebx
  __int64 v12; // rax
  unsigned int v14; // ecx
  __int64 v15; // rcx
  __int64 v16; // r12
  __int16 v17; // cx
  __int16 v18; // cx
  __int64 v19; // r9
  __int64 v20; // r8
  __int64 LanguageConfigList; // rax
  int v22; // eax
  _BYTE v23[4]; // [rsp+50h] [rbp+0h] BYREF

  v3 = (ULONG *)((unsigned __int64)v23 & 0xFFFFFFFFFFFFFFE0uLL);
  v7 = 0LL;
  if ( KeyHandle && a2 && a3 )
  {
    v7 = *a2;
    v8 = 0;
    *(_QWORD *)(((unsigned __int64)v23 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = *a2;
    while ( 1 )
    {
      v9 = ZwEnumerateValueKey(KeyHandle, v8, KeyValueFullInformation, v3 + 16, 0x200u, v3 + 6);
      LanguageSpec = v9;
      if ( v9 >= 0 )
      {
        if ( *(_DWORD *)(((unsigned __int64)v23 & 0xFFFFFFFFFFFFFFE0uLL) + 0x44) != 7 )
          goto LABEL_8;
        v14 = *(_DWORD *)(((unsigned __int64)v23 & 0xFFFFFFFFFFFFFFE0uLL) + 0x50);
        if ( v14 + 24 > 0x200 )
          goto LABEL_8;
        v15 = v14 >> 1;
        v16 = (unsigned int)v15;
        *(_WORD *)(((unsigned __int64)v23 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = *(_WORD *)(((unsigned __int64)v23 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                                   + 0x54
                                                                                   + 2 * v15);
        *(_WORD *)(((unsigned __int64)v23 & 0xFFFFFFFFFFFFFFE0uLL) + 0x54 + 2 * v15) = 0;
        LanguageSpec = RtlpMuiRegGetLanguageSpec(
                         a3,
                         (int)v3 + 84,
                         (unsigned __int64)v23 & 0xFFFFFFFFFFFFFFE0uLL,
                         v10,
                         (__int64)(v3 + 1));
        if ( LanguageSpec >= 0 )
        {
          v17 = *(unsigned __int8 *)v3;
          *(_QWORD *)(((unsigned __int64)v23 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20) = 0LL;
          *(_DWORD *)(((unsigned __int64)v23 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28) = 0;
          v18 = *(_WORD *)(((unsigned __int64)v23 & 0xFFFFFFFFFFFFFFE0uLL) + 0x22) & 0x3FFF | (v17 << 14);
          *(_WORD *)(((unsigned __int64)v23 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20) = *(_WORD *)(((unsigned __int64)v23 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                                        + 4);
          *(_WORD *)(((unsigned __int64)v23 & 0xFFFFFFFFFFFFFFE0uLL) + 0x54 + 2 * v16) = *(_WORD *)(((unsigned __int64)v23 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                                                  + 8);
          v19 = *(unsigned int *)(((unsigned __int64)v23 & 0xFFFFFFFFFFFFFFE0uLL) + 0x4C);
          v20 = (__int64)v3 + *(unsigned int *)(((unsigned __int64)v23 & 0xFFFFFFFFFFFFFFE0uLL) + 0x48) + 64;
          *(_WORD *)(((unsigned __int64)v23 & 0xFFFFFFFFFFFFFFE0uLL) + 0x22) = v18;
          LanguageSpec = RtlpMuiRegConfigNodePopulate(v3 + 8, a3, v20, v19);
          if ( LanguageSpec >= 0 )
          {
            LanguageSpec = RtlpMuiRegValidateConfigNode(a3, v3 + 8);
            if ( LanguageSpec >= 0 )
            {
              if ( !v7 )
              {
                LanguageConfigList = RtlpMuiRegCreateLanguageConfigList(0xFFFFFFFFLL);
                *(_QWORD *)(((unsigned __int64)v23 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = LanguageConfigList;
                if ( !LanguageConfigList )
                {
                  LanguageSpec = -1073741801;
                  goto LABEL_12;
                }
                *a2 = LanguageConfigList;
              }
              v22 = RtlpMuiRegConfigListAddLanguage(v3 + 4, v3 + 8);
              v7 = *(_QWORD *)(((unsigned __int64)v23 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10);
              LanguageSpec = v22;
              if ( v22 >= 0 )
                *a2 = v7;
            }
          }
        }
      }
      else if ( v9 != -2147483622 )
      {
        goto LABEL_10;
      }
      ++v8;
LABEL_8:
      if ( LanguageSpec == -2147483622 )
      {
        LanguageSpec = 0;
        goto LABEL_10;
      }
    }
  }
  LanguageSpec = -1073741811;
LABEL_10:
  if ( !v7 && LanguageSpec != -1073741811 )
  {
LABEL_12:
    v12 = RtlpMuiRegCreateLanguageConfigList(1LL);
    *a2 = v12;
    v7 = v12;
    if ( !v12 )
      LanguageSpec = -1073741801;
  }
  if ( LanguageSpec < 0 && v7 )
    *(_WORD *)(v7 + 4) = 0;
  return (unsigned int)LanguageSpec;
}
