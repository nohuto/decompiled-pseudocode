/*
 * XREFs of LdrpLoadResourceFromAlternativeModule @ 0x18003A5C8
 * Callers:
 *     LdrpSearchResourceSection_U @ 0x180030670 (LdrpSearchResourceSection_U.c)
 * Callees:
 *     RtlCultureNameToLCID @ 0x18001CFF0 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x18001D1D0 (RtlInitUnicodeString.c)
 *     LdrpSearchResourceSection_U @ 0x180030670 (LdrpSearchResourceSection_U.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x18003AB60 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpSetThreadPreferredLangList @ 0x18003B354 (LdrpSetThreadPreferredLangList.c)
 *     GetLCIDFromLangListNodeWithLICCheck @ 0x18003BB00 (GetLCIDFromLangListNodeWithLICCheck.c)
 *     LdrpGetRcConfig @ 0x18003C440 (LdrpGetRcConfig.c)
 *     LdrpFindMessageInAlternateModule @ 0x18003D460 (LdrpFindMessageInAlternateModule.c)
 *     LdrpCompareServiceChecksum @ 0x18003F134 (LdrpCompareServiceChecksum.c)
 *     LdrpIsReparsePoint @ 0x180042D10 (LdrpIsReparsePoint.c)
 *     DbgPrintEx @ 0x1800492F0 (DbgPrintEx.c)
 *     LdrpGetParentLangId @ 0x180082FF0 (LdrpGetParentLangId.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     LdrpMUIEtwOutput @ 0x1800D420C (LdrpMUIEtwOutput.c)
 */

__int64 __fastcall LdrpLoadResourceFromAlternativeModule(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 *a5)
{
  int v6; // r9d
  unsigned __int16 v7; // bx
  char v8; // r11
  int v9; // r15d
  unsigned int v10; // r13d
  unsigned int v11; // edi
  __int64 v12; // r12
  __int64 v13; // r10
  unsigned int MessageInAlternateModule; // esi
  __int64 v15; // rdx
  __int64 v16; // r9
  int v17; // ecx
  int v18; // ecx
  __int64 v19; // rcx
  int IsReparsePoint; // eax
  __int64 RcConfig; // rax
  char v22; // al
  int v23; // ecx
  char v24; // al
  unsigned __int16 *MergedPrefLanguages; // rcx
  unsigned int v26; // ecx
  _WORD *v27; // rax
  __int64 v28; // rax
  int AlternateResourceModule; // eax
  int ParentLangId; // eax
  unsigned __int64 v31; // rdi
  __int64 v32; // rdx
  int v33; // eax
  char v34; // al
  __int64 v35; // r9
  char v37; // [rsp+30h] [rbp-D0h]
  char v38; // [rsp+31h] [rbp-CFh]
  _WORD v39[2]; // [rsp+34h] [rbp-CCh] BYREF
  unsigned __int16 v40; // [rsp+38h] [rbp-C8h]
  _BYTE v41[6]; // [rsp+3Ah] [rbp-C6h] BYREF
  __int64 v42; // [rsp+40h] [rbp-C0h]
  unsigned int v43; // [rsp+48h] [rbp-B8h]
  __int64 *v44; // [rsp+50h] [rbp-B0h]
  unsigned int v45; // [rsp+58h] [rbp-A8h]
  int v46; // [rsp+5Ch] [rbp-A4h] BYREF
  __int64 v47; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v48; // [rsp+68h] [rbp-98h] BYREF
  __int64 v49; // [rsp+70h] [rbp-90h] BYREF
  UNICODE_STRING DestinationString; // [rsp+78h] [rbp-88h] BYREF
  _WORD v51[64]; // [rsp+90h] [rbp-70h] BYREF

  v6 = a3;
  v44 = a5;
  v45 = a3;
  v48 = 0LL;
  v7 = 0;
  v39[0] = 0;
  v8 = 0;
  v37 = 0;
  v9 = 0;
  v10 = 0;
  v43 = 0;
  v11 = 0;
  v38 = 0;
  v12 = 0LL;
  v47 = a2;
  LOBYTE(a3) = 0;
  v42 = a1;
  v13 = a1;
  MessageInAlternateModule = -1073020927;
  if ( (unsigned int)(v6 - 3) > 1 )
    return (unsigned int)-1073741583;
  v15 = *(unsigned __int16 *)(a2 + 16);
  v16 = 0LL;
  v40 = v15;
  v41[0] = 0;
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
            v17 = v9++;
            if ( !v17 )
              break;
            v18 = v17 - 1;
            if ( v18 )
            {
              v19 = (unsigned int)(v18 - 1);
              if ( !(_DWORD)v19 )
              {
                v39[0] = 0;
                v24 = LdrpSetThreadPreferredLangList(v19, v15, a3, 0LL);
                v16 = 0LL;
                if ( v24
                  && (MergedPrefLanguages = (unsigned __int16 *)NtCurrentTeb()->MergedPrefLanguages,
                      v11 < MergedPrefLanguages[2]) )
                {
                  GetLCIDFromLangListNodeWithLICCheck(
                    (_DWORD)MergedPrefLanguages,
                    NtCurrentTeb()->MergedPrefLanguages,
                    v11,
                    (unsigned int)v39,
                    (__int64)v41);
                  v7 = v39[0];
                  v16 = 0LL;
                }
                else
                {
                  v7 = 0;
                  v39[0] = 0;
                }
                if ( !v7 )
                  goto LABEL_24;
                if ( v41[0] && (a4 & 0x100000) != 0 )
                {
                  v7 = -4370;
                  v39[0] = -4370;
                }
                v43 = ++v11;
                --v9;
                goto LABEL_34;
              }
              if ( (_DWORD)v19 == 1 )
              {
                if ( !v12 )
                {
                  LOBYTE(v16) = 1;
                  RcConfig = LdrpGetRcConfig(v13, v15, 0LL, v16);
                  v16 = 0LL;
                  v12 = RcConfig;
                  if ( !RcConfig )
                    goto LABEL_24;
                }
                if ( *(_DWORD *)v12 != -20054323 || (*(_BYTE *)(v12 + 24) & 2) == 0 || !*(_DWORD *)(v12 + 124) )
                  goto LABEL_24;
                RtlInitUnicodeString(&DestinationString, (PCWSTR)(v12 + *(unsigned int *)(v12 + 124)));
                v22 = RtlCultureNameToLCID(&DestinationString.Length, &v46);
                v16 = 0LL;
                if ( !v22 )
                {
                  MessageInAlternateModule = -1073020923;
LABEL_24:
                  v7 = -4370;
                  v39[0] = -4370;
LABEL_70:
                  LOBYTE(a3) = v38;
                  goto LABEL_12;
                }
                v7 = v46;
                v39[0] = v46;
                if ( (a4 & 0x100000) != 0 )
                {
                  GetLCIDFromLangListNodeWithLICCheck(
                    v23,
                    NtCurrentTeb()->MergedPrefLanguages,
                    0,
                    (unsigned int)v39,
                    (__int64)v41);
                  v13 = v42;
                  v16 = 0LL;
                  LOBYTE(a3) = v38;
                  v8 = v37;
                  if ( v41[0] )
                  {
                    v7 = -4370;
                    v39[0] = -4370;
                  }
                  else
                  {
                    v7 = v39[0];
                  }
                  goto LABEL_35;
                }
LABEL_34:
                v8 = v37;
                LOBYTE(a3) = v38;
                v13 = v42;
LABEL_35:
                v15 = v40;
                goto LABEL_36;
              }
              if ( (_BYTE)a3 )
                return MessageInAlternateModule;
              if ( v8 )
                return MessageInAlternateModule;
              IsReparsePoint = LdrpIsReparsePoint(v13, v15, a3, 0LL);
              v16 = 0LL;
              if ( IsReparsePoint < 0 )
                return MessageInAlternateModule;
              LOBYTE(a3) = 1;
              v43 = 0;
              v38 = 1;
              a4 |= 0x400000u;
              v9 = 0;
              v10 = 0;
              v11 = 0;
LABEL_12:
              v15 = v40;
              v13 = v42;
              v8 = v37;
            }
            else
            {
              if ( v7 == 0xEEEE )
                goto LABEL_54;
              if ( (a4 & 4) != 0 )
              {
                v7 = -4370;
                v39[0] = -4370;
                v9 = -2;
              }
              else
              {
                if ( (v15 & 0x3FF) != 0 )
                {
                  ParentLangId = LdrpGetParentLangId(v7, v39, a3, 0LL);
                  v13 = v42;
                  v16 = 0LL;
                  v15 = v40;
                  LOBYTE(a3) = v38;
                  v8 = v37;
                  if ( ParentLangId >= 0 )
                  {
                    v7 = v39[0];
                    if ( v39[0] )
                    {
                      --v9;
                      goto LABEL_36;
                    }
                  }
                  v9 = -2;
                }
LABEL_54:
                v7 = -4370;
                v39[0] = -4370;
              }
            }
          }
          if ( (v15 & 0xF3FF) != 0 || (_WORD)v15 == 3072 )
          {
            v7 = v15;
            v39[0] = v15;
          }
          else
          {
            v7 = -4370;
            v39[0] = -4370;
          }
LABEL_36:
          ;
        }
        while ( v7 == 0xEEEE );
        v26 = 0;
        if ( !v10 )
          break;
        v27 = v51;
        while ( *v27 != v7 )
        {
          ++v26;
          ++v27;
          if ( v26 >= v10 )
            goto LABEL_41;
        }
      }
LABEL_41:
      if ( v10 >= 0x40 )
        return MessageInAlternateModule;
      v28 = v10;
      v49 = 0LL;
      ++v10;
      v51[v28] = v7;
      AlternateResourceModule = LdrLoadAlternateResourceModuleEx(v13, v7, (unsigned int)&v48, (unsigned int)&v49, a4);
      v16 = 0LL;
      MessageInAlternateModule = AlternateResourceModule;
      if ( AlternateResourceModule >= 0 )
        break;
      if ( AlternateResourceModule != -1073741772 )
      {
        v13 = v42;
        v15 = v40;
        LOBYTE(a3) = v38;
        v8 = v37;
        if ( AlternateResourceModule != -1073741766 )
          continue;
      }
      MessageInAlternateModule = -1073020927;
      goto LABEL_70;
    }
    v31 = v48;
    v32 = v47;
    v37 = 1;
    *(_QWORD *)(v47 + 16) = v7;
    v33 = LdrpSearchResourceSection_U(v31, v32, 3LL, 0x30u, v44);
    MessageInAlternateModule = v33;
    if ( (a4 & 0x40) != 0 )
    {
      if ( v33 < 0 )
        goto LABEL_68;
      MessageInAlternateModule = LdrpFindMessageInAlternateModule(v31, *v44, 0, *(_DWORD *)(v47 + 24), 0);
      if ( (MessageInAlternateModule & 0x80000000) == 0 )
        goto LABEL_64;
      *v44 = 0LL;
    }
    if ( (MessageInAlternateModule & 0x80000000) != 0 )
    {
LABEL_68:
      v34 = LdrpCompareServiceChecksum(v42, v31);
      v16 = 0LL;
      if ( v34 )
        return MessageInAlternateModule;
      v11 = v43;
      goto LABEL_70;
    }
LABEL_64:
    if ( *v44 > v31 && (!v49 || *v44 < v31 + v49) )
      break;
    *v44 = 0LL;
    MessageInAlternateModule = -1073741701;
    DbgPrintEx(85LL, 2LL, "'LDR: %s(), invalid image format of MUI file \n", "LdrpLoadResourceFromAlternativeModule");
    v13 = v42;
    v16 = 0LL;
    v15 = v40;
    LOBYTE(a3) = v38;
    v8 = 1;
    v11 = v43;
  }
  if ( (MEMORY[0x7FFE0385] & 2) != 0 )
  {
    if ( (a4 & 0x40) != 0 )
      v35 = 9LL;
    else
      v35 = (a4 & 1) != 0 ? 5 : 3;
    LdrpMUIEtwOutput(v31, v47, v45, v35);
  }
  if ( NtCurrentTeb()->ResourceRetValue )
    *(_QWORD *)NtCurrentTeb()->ResourceRetValue = v42;
  return MessageInAlternateModule;
}
