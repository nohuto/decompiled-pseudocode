/*
 * XREFs of LdrLoadAlternateResourceModule @ 0x180066760
 * Callers:
 *     <none>
 * Callees:
 *     LdrpGetRcConfig @ 0x180018978 (LdrpGetRcConfig.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x18001C5F0 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpSetThreadPreferredLangList @ 0x18001DB80 (LdrpSetThreadPreferredLangList.c)
 *     RtlCultureNameToLCID @ 0x18001F170 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x18001F3D0 (RtlInitUnicodeString.c)
 *     LdrpCompareServiceChecksum @ 0x180066950 (LdrpCompareServiceChecksum.c)
 *     GetLCIDFromLangListNodeWithLICCheck @ 0x1800669C0 (GetLCIDFromLangListNodeWithLICCheck.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     memset @ 0x180098540 (memset.c)
 */

NTSTATUS __cdecl LdrLoadAlternateResourceModule(
        PVOID DllHandle,
        PVOID *ResourceDllBase,
        ULONG_PTR *ResourceOffset,
        ULONG Flags)
{
  PVOID v6; // rbx
  NTSTATUS v8; // esi
  __int64 v9; // rdx
  _DWORD *v10; // rdi
  PVOID v11; // r15
  int v12; // ecx
  char v13; // al
  unsigned int v14; // r8d
  unsigned __int16 *MergedPrefLanguages; // rcx
  __int16 v16; // bx
  unsigned int v17; // r8d
  unsigned int v18; // ecx
  LANGID v19; // dx
  NTSTATUS AlternateResourceModule; // eax
  _DWORD *RcConfig; // rax
  BOOLEAN v23; // al
  _WORD *v24; // rax
  _BYTE v25[4]; // [rsp+30h] [rbp-D0h] BYREF
  int v26; // [rsp+34h] [rbp-CCh]
  _WORD v27[2]; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v28; // [rsp+3Ch] [rbp-C4h]
  __int64 v29; // [rsp+40h] [rbp-C0h]
  unsigned int v30; // [rsp+48h] [rbp-B8h]
  PVOID DllHandlea; // [rsp+50h] [rbp-B0h]
  DWORD Lcid; // [rsp+58h] [rbp-A8h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A0h] BYREF
  _WORD v34[64]; // [rsp+70h] [rbp-90h] BYREF

  DllHandlea = DllHandle;
  memset(v34, 0, sizeof(v34));
  v6 = DllHandle;
  v8 = -1073020927;
  v30 = 0;
  v9 = 0LL;
  v29 = 0LL;
  v10 = 0LL;
  v28 = 0;
  v11 = 0LL;
  if ( !DllHandle || !ResourceDllBase )
    return -1073741811;
  v25[0] = 0;
  v12 = 0;
  while ( 1 )
  {
    do
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v26 = v12 + 1;
          if ( !v12 )
            break;
          if ( v12 != 1 )
            goto LABEL_18;
          RcConfig = LdrpGetRcConfig(v6, v9, 1, 1);
          v12 = v26;
          v9 = v29;
          v10 = RcConfig;
          if ( RcConfig )
          {
            if ( *RcConfig == -20054323 && (RcConfig[6] & 2) != 0 )
            {
              if ( RcConfig[31] )
              {
                RtlInitUnicodeString(&DestinationString, (PCWSTR)((char *)RcConfig + (unsigned int)RcConfig[31]));
                v23 = RtlCultureNameToLCID(&DestinationString, &Lcid);
                v12 = v26;
                v9 = v29;
                if ( v23 )
                {
                  v16 = Lcid;
                  v27[0] = Lcid;
                  if ( (Flags & 0x80u) == 0 && (v10[5] & 0x100) != 0 )
                  {
                    GetLCIDFromLangListNodeWithLICCheck(
                      v26,
                      NtCurrentTeb()->MergedPrefLanguages,
                      0,
                      (unsigned int)v27,
                      (__int64)v25);
                    v12 = v26;
                    if ( v25[0] )
                      v16 = -4370;
                    else
                      v16 = v27[0];
                  }
                  goto LABEL_11;
                }
              }
            }
          }
        }
        v27[0] = 0;
        v13 = LdrpSetThreadPreferredLangList();
        v14 = v28;
        if ( v13
          && (MergedPrefLanguages = (unsigned __int16 *)NtCurrentTeb()->MergedPrefLanguages, v28 < MergedPrefLanguages[2]) )
        {
          GetLCIDFromLangListNodeWithLICCheck(
            (_DWORD)MergedPrefLanguages,
            NtCurrentTeb()->MergedPrefLanguages,
            v28,
            (unsigned int)v27,
            (__int64)v25);
          v14 = v28;
          v16 = v27[0];
        }
        else
        {
          v16 = 0;
        }
        v12 = v26;
        v9 = v29;
        if ( !v16 )
          goto LABEL_22;
        if ( (Flags & 0x80u) == 0 && v25[0] )
        {
          if ( (v10 || (v10 = LdrpGetRcConfig(DllHandlea, v29, 0, 1)) != 0LL) && *v10 == -20054323 )
          {
            v14 = v28;
            if ( (v10[5] & 0x100) != 0 )
              v16 = -4370;
          }
          else
          {
            v14 = v28;
          }
        }
        v12 = v26 - 1;
        v28 = v14 + 1;
        --v26;
LABEL_11:
        v9 = v29;
        if ( v16 == -4370 )
          goto LABEL_22;
        v17 = v30;
        v18 = 0;
        if ( !v30 )
          break;
        v24 = v34;
        while ( 1 )
        {
          v9 = v29;
          if ( *v24 == v16 )
            break;
          ++v18;
          ++v24;
          if ( v18 >= v30 )
            goto LABEL_13;
        }
        v12 = v26;
LABEL_22:
        v6 = DllHandlea;
      }
LABEL_13:
      if ( v30 >= 0x40 )
        goto LABEL_17;
      v34[v30] = v16;
      v19 = v16;
      v6 = DllHandlea;
      v30 = v17 + 1;
      AlternateResourceModule = LdrLoadAlternateResourceModuleEx(
                                  DllHandlea,
                                  v19,
                                  ResourceDllBase,
                                  ResourceOffset,
                                  Flags);
      v12 = v26;
      v9 = v29;
      v8 = AlternateResourceModule;
    }
    while ( AlternateResourceModule < 0 );
    if ( (Flags & 0x80u) == 0 )
      goto LABEL_18;
    if ( (unsigned __int8)LdrpCompareServiceChecksum(v6, *ResourceDllBase) )
      break;
    if ( v11 )
    {
      v9 = v29;
    }
    else
    {
      v11 = *ResourceDllBase;
      if ( ResourceOffset )
        v9 = *ResourceOffset;
      else
        v9 = 0LL;
      v29 = v9;
    }
    v12 = v26;
    v8 = -1073020927;
  }
LABEL_17:
  v9 = v29;
LABEL_18:
  if ( v8 < 0 && (Flags & 0x80u) != 0 && v11 )
  {
    *ResourceDllBase = v11;
    if ( ResourceOffset )
      *ResourceOffset = v9;
    return 0;
  }
  return v8;
}
