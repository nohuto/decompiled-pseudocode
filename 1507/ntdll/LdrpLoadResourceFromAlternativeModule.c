/*
 * XREFs of LdrpLoadResourceFromAlternativeModule @ 0x18001B314
 * Callers:
 *     LdrpSearchResourceSection_U @ 0x18001778C (LdrpSearchResourceSection_U.c)
 * Callees:
 *     DbgPrintEx @ 0x18000F9B0 (DbgPrintEx.c)
 *     LdrpSearchResourceSection_U @ 0x18001778C (LdrpSearchResourceSection_U.c)
 *     LdrpGetRcConfig @ 0x180018978 (LdrpGetRcConfig.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x18001C5F0 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpSetThreadPreferredLangList @ 0x18001DB80 (LdrpSetThreadPreferredLangList.c)
 *     RtlCultureNameToLCID @ 0x18001F170 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x18001F3D0 (RtlInitUnicodeString.c)
 *     LdrpGetParentLangId @ 0x180047C8C (LdrpGetParentLangId.c)
 *     LdrpFindMessageInAlternateModule @ 0x180065170 (LdrpFindMessageInAlternateModule.c)
 *     LdrpCompareServiceChecksum @ 0x180066950 (LdrpCompareServiceChecksum.c)
 *     GetLCIDFromLangListNodeWithLICCheck @ 0x1800669C0 (GetLCIDFromLangListNodeWithLICCheck.c)
 *     LdrpIsReparsePoint @ 0x180069B2C (LdrpIsReparsePoint.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     LdrpMUIEtwOutput @ 0x1800CB9D0 (LdrpMUIEtwOutput.c)
 */

__int64 __fastcall LdrpLoadResourceFromAlternativeModule(
        unsigned __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        unsigned __int64 *a5)
{
  int v6; // r9d
  unsigned __int16 v7; // bx
  char v8; // r11
  int v9; // r15d
  unsigned int v10; // r13d
  unsigned int v11; // edi
  _DWORD *RcConfig; // r12
  unsigned __int64 v13; // r10
  int MessageInAlternateModule; // esi
  __int64 v15; // rdx
  int v16; // ecx
  int v17; // ecx
  __int64 v18; // rcx
  unsigned __int16 *MergedPrefLanguages; // rcx
  unsigned int v20; // ecx
  __int64 v21; // rax
  int AlternateResourceModule; // eax
  unsigned __int64 v23; // rdi
  __int64 v24; // rdx
  int v25; // eax
  _WORD *v27; // rax
  int v28; // ecx
  int ParentLangId; // eax
  __int64 v30; // r9
  char v31; // [rsp+30h] [rbp-D0h]
  char v32; // [rsp+31h] [rbp-CFh]
  _WORD v33[2]; // [rsp+34h] [rbp-CCh] BYREF
  unsigned __int16 v34; // [rsp+38h] [rbp-C8h]
  _BYTE v35[6]; // [rsp+3Ah] [rbp-C6h] BYREF
  unsigned __int64 v36; // [rsp+40h] [rbp-C0h]
  unsigned int v37; // [rsp+48h] [rbp-B8h]
  unsigned __int64 *v38; // [rsp+50h] [rbp-B0h]
  unsigned int v39; // [rsp+58h] [rbp-A8h]
  unsigned __int16 v40; // [rsp+5Ch] [rbp-A4h] BYREF
  __int64 v41; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v42; // [rsp+68h] [rbp-98h] BYREF
  __int64 v43; // [rsp+70h] [rbp-90h] BYREF
  UNICODE_STRING DestinationString; // [rsp+78h] [rbp-88h] BYREF
  _WORD v45[64]; // [rsp+90h] [rbp-70h] BYREF

  v6 = a3;
  v38 = a5;
  v39 = a3;
  v42 = 0LL;
  v7 = 0;
  v33[0] = 0;
  v8 = 0;
  v31 = 0;
  v9 = 0;
  v10 = 0;
  v37 = 0;
  v11 = 0;
  v32 = 0;
  RcConfig = 0LL;
  v41 = a2;
  LOBYTE(a3) = 0;
  v36 = a1;
  v13 = a1;
  MessageInAlternateModule = -1073020927;
  if ( (unsigned int)(v6 - 3) > 1 )
    return (unsigned int)-1073741583;
  v15 = *(unsigned __int16 *)(a2 + 16);
  v34 = v15;
  v35[0] = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        do
        {
          while ( 1 )
          {
            v16 = v9++;
            if ( !v16 )
              break;
            v17 = v16 - 1;
            if ( v17 )
            {
              v18 = (unsigned int)(v17 - 1);
              if ( !(_DWORD)v18 )
              {
                v33[0] = 0;
                if ( (unsigned __int8)LdrpSetThreadPreferredLangList(v18, v15, a3)
                  && (MergedPrefLanguages = (unsigned __int16 *)NtCurrentTeb()->MergedPrefLanguages,
                      v11 < MergedPrefLanguages[2]) )
                {
                  GetLCIDFromLangListNodeWithLICCheck(
                    (_DWORD)MergedPrefLanguages,
                    NtCurrentTeb()->MergedPrefLanguages,
                    v11,
                    (unsigned int)v33,
                    (__int64)v35);
                  v7 = v33[0];
                }
                else
                {
                  v7 = 0;
                  v33[0] = 0;
                }
                if ( !v7 )
                  goto LABEL_50;
                if ( v35[0] && (a4 & 0x100000) != 0 )
                {
                  v7 = -4370;
                  v33[0] = -4370;
                }
                v37 = ++v11;
                --v9;
                goto LABEL_12;
              }
              if ( (_DWORD)v18 == 1 )
              {
                if ( !RcConfig )
                {
                  RcConfig = LdrpGetRcConfig(v13, v15, 0, 1);
                  if ( !RcConfig )
                    goto LABEL_50;
                }
                if ( *RcConfig != -20054323 || (RcConfig[6] & 2) == 0 || !RcConfig[31] )
                  goto LABEL_50;
                RtlInitUnicodeString(&DestinationString, (PCWSTR)((char *)RcConfig + (unsigned int)RcConfig[31]));
                if ( !(unsigned __int8)RtlCultureNameToLCID(&DestinationString, &v40) )
                {
                  MessageInAlternateModule = -1073020923;
LABEL_50:
                  v7 = -4370;
                  v33[0] = -4370;
LABEL_51:
                  LOBYTE(a3) = v32;
                  goto LABEL_52;
                }
                v7 = v40;
                v33[0] = v40;
                if ( (a4 & 0x100000) != 0 )
                {
                  GetLCIDFromLangListNodeWithLICCheck(
                    v28,
                    NtCurrentTeb()->MergedPrefLanguages,
                    0,
                    (unsigned int)v33,
                    (__int64)v35);
                  v13 = v36;
                  LOBYTE(a3) = v32;
                  v8 = v31;
                  if ( v35[0] )
                  {
                    v7 = -4370;
                    v33[0] = -4370;
                  }
                  else
                  {
                    v7 = v33[0];
                  }
                  goto LABEL_13;
                }
LABEL_12:
                v8 = v31;
                LOBYTE(a3) = v32;
                v13 = v36;
LABEL_13:
                v15 = v34;
                goto LABEL_14;
              }
              if ( (_BYTE)a3 || v8 || (int)LdrpIsReparsePoint(v13, v15, a3, 0LL) < 0 )
                return (unsigned int)MessageInAlternateModule;
              LOBYTE(a3) = 1;
              v37 = 0;
              v32 = 1;
              a4 |= 0x400000u;
              v9 = 0;
              v10 = 0;
              v11 = 0;
LABEL_52:
              v15 = v34;
              v13 = v36;
              v8 = v31;
            }
            else
            {
              if ( v7 == 0xEEEE )
                goto LABEL_31;
              if ( (a4 & 4) != 0 )
              {
                v7 = -4370;
                v33[0] = -4370;
                v9 = -2;
              }
              else
              {
                if ( (v15 & 0x3FF) == 0 )
                  goto LABEL_31;
                ParentLangId = LdrpGetParentLangId(v7, v33, a3);
                v13 = v36;
                v15 = v34;
                LOBYTE(a3) = v32;
                v8 = v31;
                if ( ParentLangId >= 0 )
                {
                  v7 = v33[0];
                  if ( v33[0] )
                  {
                    --v9;
                    goto LABEL_14;
                  }
                }
                v9 = -2;
LABEL_31:
                v7 = -4370;
                v33[0] = -4370;
              }
            }
          }
          if ( (v15 & 0xF3FF) != 0 || (_WORD)v15 == 3072 )
          {
            v7 = v15;
            v33[0] = v15;
          }
          else
          {
            v7 = -4370;
            v33[0] = -4370;
          }
LABEL_14:
          ;
        }
        while ( v7 == 0xEEEE );
        v20 = 0;
        if ( !v10 )
          break;
        v27 = v45;
        while ( *v27 != v7 )
        {
          ++v20;
          ++v27;
          if ( v20 >= v10 )
            goto LABEL_16;
        }
      }
LABEL_16:
      if ( v10 >= 0x40 )
        return (unsigned int)MessageInAlternateModule;
      v21 = v10;
      v43 = 0LL;
      ++v10;
      v45[v21] = v7;
      AlternateResourceModule = LdrLoadAlternateResourceModuleEx(v13, v7, (unsigned int)&v42, (unsigned int)&v43, a4);
      MessageInAlternateModule = AlternateResourceModule;
      if ( AlternateResourceModule >= 0 )
        break;
      if ( AlternateResourceModule != -1073741772 )
      {
        v13 = v36;
        v15 = v34;
        LOBYTE(a3) = v32;
        v8 = v31;
        if ( AlternateResourceModule != -1073741766 )
          continue;
      }
      MessageInAlternateModule = -1073020927;
      goto LABEL_51;
    }
    v23 = v42;
    v24 = v41;
    v31 = 1;
    *(_QWORD *)(v41 + 16) = v7;
    v25 = LdrpSearchResourceSection_U(v23, v24, 3u, 0x30u, v38);
    MessageInAlternateModule = v25;
    if ( (a4 & 0x40) != 0 )
    {
      if ( v25 < 0 )
      {
LABEL_36:
        if ( (unsigned __int8)LdrpCompareServiceChecksum(v36, v23) )
          return (unsigned int)MessageInAlternateModule;
        v11 = v37;
        goto LABEL_51;
      }
      MessageInAlternateModule = LdrpFindMessageInAlternateModule(v23, *v38, 0, *(_DWORD *)(v41 + 24), 0);
      if ( MessageInAlternateModule >= 0 )
        goto LABEL_20;
      *v38 = 0LL;
    }
    if ( MessageInAlternateModule < 0 )
      goto LABEL_36;
LABEL_20:
    if ( *v38 > v23 && (!v43 || *v38 < v23 + v43) )
      break;
    *v38 = 0LL;
    MessageInAlternateModule = -1073741701;
    DbgPrintEx(85, 2, "'LDR: %s(), invalid image format of MUI file \n", "LdrpLoadResourceFromAlternativeModule");
    v13 = v36;
    v15 = v34;
    LOBYTE(a3) = v32;
    v8 = 1;
    v11 = v37;
  }
  if ( (MEMORY[0x7FFE0385] & 2) != 0 )
  {
    if ( (a4 & 0x40) != 0 )
      v30 = 9LL;
    else
      v30 = (a4 & 1) != 0 ? 5 : 3;
    LdrpMUIEtwOutput(v23, v41, v39, v30);
  }
  if ( NtCurrentTeb()->ResourceRetValue )
    *(_QWORD *)NtCurrentTeb()->ResourceRetValue = v36;
  return (unsigned int)MessageInAlternateModule;
}
