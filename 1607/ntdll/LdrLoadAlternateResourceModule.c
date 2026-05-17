/*
 * XREFs of LdrLoadAlternateResourceModule @ 0x1800857B0
 * Callers:
 *     <none>
 * Callees:
 *     GetLCIDFromLangListNodeWithLICCheck @ 0x1800104D8 (GetLCIDFromLangListNodeWithLICCheck.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x180012AB0 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpSetThreadPreferredLangList @ 0x1800134BC (LdrpSetThreadPreferredLangList.c)
 *     LdrpGetRcConfig @ 0x18003F1D4 (LdrpGetRcConfig.c)
 *     RtlCultureNameToLCID @ 0x180043F70 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x180044150 (RtlInitUnicodeString.c)
 *     LdrpCompareServiceChecksum @ 0x1800859A0 (LdrpCompareServiceChecksum.c)
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 */

__int64 __fastcall LdrLoadAlternateResourceModule(__int64 a1, __int64 *a2, __int64 *a3, unsigned int a4)
{
  __int64 v6; // rbx
  int v8; // esi
  __int64 v9; // rdx
  _DWORD *v10; // rdi
  __int64 v11; // r15
  unsigned int v12; // ecx
  char v13; // al
  unsigned int v14; // r8d
  unsigned __int16 *MergedPrefLanguages; // rcx
  unsigned __int16 v16; // bx
  unsigned int v17; // r8d
  unsigned int v18; // ecx
  unsigned __int16 v19; // dx
  int AlternateResourceModule; // eax
  _DWORD *RcConfig; // rax
  char v23; // al
  _WORD *v24; // rax
  bool v25[4]; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v26; // [rsp+34h] [rbp-CCh]
  unsigned __int16 v27[2]; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v28; // [rsp+3Ch] [rbp-C4h]
  __int64 v29; // [rsp+40h] [rbp-C0h]
  unsigned int v30; // [rsp+48h] [rbp-B8h]
  __int64 v31; // [rsp+50h] [rbp-B0h]
  int v32; // [rsp+58h] [rbp-A8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A0h] BYREF
  _WORD v34[64]; // [rsp+70h] [rbp-90h] BYREF

  v26 = 0;
  v31 = a1;
  v6 = a1;
  memset(v34, 0, sizeof(v34));
  v8 = -1073020927;
  v30 = 0;
  v9 = 0LL;
  v29 = 0LL;
  v10 = 0LL;
  v28 = 0;
  v11 = 0LL;
  if ( !v6 || !a2 )
    return 3221225485LL;
  v25[0] = 0;
  while ( 2 )
  {
    v12 = v26;
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
            goto LABEL_19;
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
                v23 = RtlCultureNameToLCID(&DestinationString.Length, &v32);
                v12 = v26;
                v9 = v29;
                if ( v23 )
                {
                  v16 = v32;
                  v27[0] = v32;
                  if ( (a4 & 0x80u) == 0 && (v10[5] & 0x100) != 0 )
                  {
                    GetLCIDFromLangListNodeWithLICCheck(v26, (__int64)NtCurrentTeb()->MergedPrefLanguages, 0, v27, v25);
                    v12 = v26;
                    if ( v25[0] )
                      v16 = -4370;
                    else
                      v16 = v27[0];
                  }
                  goto LABEL_12;
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
            (__int64)MergedPrefLanguages,
            (__int64)NtCurrentTeb()->MergedPrefLanguages,
            v28,
            v27,
            v25);
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
          goto LABEL_23;
        if ( (a4 & 0x80u) == 0 && v25[0] )
        {
          if ( (v10 || (v10 = LdrpGetRcConfig(v31, v29, 0, 1)) != 0LL) && *v10 == -20054323 )
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
LABEL_12:
        v9 = v29;
        if ( v16 == 0xEEEE )
          goto LABEL_23;
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
            goto LABEL_14;
        }
        v12 = v26;
LABEL_23:
        v6 = v31;
      }
LABEL_14:
      if ( v30 >= 0x40 )
        goto LABEL_18;
      v34[v30] = v16;
      v19 = v16;
      v6 = v31;
      v30 = v17 + 1;
      AlternateResourceModule = LdrLoadAlternateResourceModuleEx(v31, v19, a2, a3, a4);
      v12 = v26;
      v9 = v29;
      v8 = AlternateResourceModule;
    }
    while ( AlternateResourceModule < 0 );
    if ( (a4 & 0x80u) == 0 )
      goto LABEL_19;
    if ( !(unsigned __int8)LdrpCompareServiceChecksum(v6, *a2) )
    {
      if ( v11 )
      {
        v9 = v29;
      }
      else
      {
        v11 = *a2;
        if ( a3 )
          v9 = *a3;
        else
          v9 = 0LL;
        v29 = v9;
      }
      v8 = -1073020927;
      continue;
    }
    break;
  }
LABEL_18:
  v9 = v29;
LABEL_19:
  if ( v8 < 0 && (a4 & 0x80u) != 0 && v11 )
  {
    *a2 = v11;
    if ( a3 )
      *a3 = v9;
    return 0;
  }
  return (unsigned int)v8;
}
