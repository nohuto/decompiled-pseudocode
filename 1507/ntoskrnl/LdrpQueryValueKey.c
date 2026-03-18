/*
 * XREFs of LdrpQueryValueKey @ 0x140591BAC
 * Callers:
 *     RtlpMuiRegAddAlternateCodePage @ 0x14015E210 (RtlpMuiRegAddAlternateCodePage.c)
 *     RtlpMuiRegCreateKernelRegistryInfo @ 0x14015E3E4 (RtlpMuiRegCreateKernelRegistryInfo.c)
 *     RtlpLoadInstallLanguageFallback @ 0x140590CB0 (RtlpLoadInstallLanguageFallback.c)
 *     _RtlpMuiRegLoadInstalled @ 0x1405917F8 (_RtlpMuiRegLoadInstalled.c)
 *     RtlpLoadPolicyLanguageSpec @ 0x14071F328 (RtlpLoadPolicyLanguageSpec.c)
 *     _RtlpMuiRegInitLIPLanguage @ 0x1407207CC (_RtlpMuiRegInitLIPLanguage.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x140720A68 (_RtlpMuiRegPopulateBaseLanguages.c)
 * Callees:
 *     ZwQueryValueKey @ 0x14017F2D0 (ZwQueryValueKey.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall LdrpQueryValueKey(HANDLE KeyHandle, PUNICODE_STRING ValueName, _DWORD *a3, void *a4, ULONG *a5)
{
  ULONG *v5; // rdi
  ULONG v10; // ebp
  ULONG Length; // ebp
  _DWORD *PoolWithTag; // rax
  _DWORD *v13; // rbx
  NTSTATUS v14; // eax
  int v15; // esi
  ULONG v17; // eax
  ULONG ResultLength; // [rsp+78h] [rbp+20h] BYREF

  v5 = a5;
  if ( !a4 )
  {
    if ( !a5 )
    {
      v10 = 0;
LABEL_4:
      ResultLength = 0;
      Length = v10 + 12;
      if ( Length )
      {
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, Length, 0x72746C6Du);
        v13 = PoolWithTag;
        if ( PoolWithTag )
          memset(PoolWithTag, 0, Length);
      }
      else
      {
        v13 = 0LL;
      }
      if ( !v13 )
        return (unsigned int)-1073741670;
      v14 = ZwQueryValueKey(KeyHandle, ValueName, KeyValuePartialInformation, v13, Length, &ResultLength);
      v15 = v14;
      if ( v14 != -1073741772 )
      {
        if ( v14 < 0 )
        {
LABEL_10:
          if ( v15 != -2147483643 )
          {
LABEL_11:
            ExFreePoolWithTag(v13, 0);
            return (unsigned int)v15;
          }
LABEL_21:
          if ( v5 )
            *v5 = v13[2];
          if ( a3 )
            *a3 = v13[1];
          goto LABEL_11;
        }
        if ( a4 && v5 )
        {
          v17 = v13[2];
          if ( v17 > *v5 )
          {
            v15 = -2147483643;
            goto LABEL_21;
          }
          if ( v17 <= Length )
            memmove(a4, v13 + 3, v17);
        }
      }
      if ( v15 >= 0 )
        goto LABEL_21;
      goto LABEL_10;
    }
LABEL_3:
    v10 = *a5;
    goto LABEL_4;
  }
  if ( a5 )
    goto LABEL_3;
  return 3221225485LL;
}
