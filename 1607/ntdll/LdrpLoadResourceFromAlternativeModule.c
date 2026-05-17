/*
 * XREFs of LdrpLoadResourceFromAlternativeModule @ 0x180010828
 * Callers:
 *     LdrpSearchResourceSection_U @ 0x1800303A8 (LdrpSearchResourceSection_U.c)
 * Callees:
 *     LdrpFindMessageInAlternateModule @ 0x18000D980 (LdrpFindMessageInAlternateModule.c)
 *     GetLCIDFromLangListNodeWithLICCheck @ 0x1800104D8 (GetLCIDFromLangListNodeWithLICCheck.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x180012AB0 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpSetThreadPreferredLangList @ 0x1800134BC (LdrpSetThreadPreferredLangList.c)
 *     LdrpSearchResourceSection_U @ 0x1800303A8 (LdrpSearchResourceSection_U.c)
 *     LdrpGetRcConfig @ 0x18003F1D4 (LdrpGetRcConfig.c)
 *     RtlCultureNameToLCID @ 0x180043F70 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x180044150 (RtlInitUnicodeString.c)
 *     DbgPrintEx @ 0x18005BFC0 (DbgPrintEx.c)
 *     LdrpIsReparsePoint @ 0x180075EF4 (LdrpIsReparsePoint.c)
 *     LdrpCompareServiceChecksum @ 0x1800859A0 (LdrpCompareServiceChecksum.c)
 *     LdrpGetParentLangId @ 0x1800885D8 (LdrpGetParentLangId.c)
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     LdrpMUIEtwOutput @ 0x1800DC5CC (LdrpMUIEtwOutput.c)
 */

__int64 __fastcall LdrpLoadResourceFromAlternativeModule(__int64 a1, __int64 a2, __int64 a3, int a4, unsigned int **a5)
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
  char v20; // al
  unsigned __int16 *MergedPrefLanguages; // rcx
  unsigned int v22; // ecx
  __int64 v23; // rax
  int AlternateResourceModule; // eax
  unsigned __int64 v25; // rdi
  int v26; // edx
  int v27; // eax
  char v29; // al
  int IsReparsePoint; // eax
  _WORD *v31; // rax
  __int64 RcConfig; // rax
  char v33; // al
  __int64 v34; // rcx
  int ParentLangId; // eax
  __int64 v36; // r9
  char v37; // [rsp+30h] [rbp-D0h]
  char v38; // [rsp+31h] [rbp-CFh]
  unsigned __int16 v39[2]; // [rsp+34h] [rbp-CCh] BYREF
  unsigned __int16 v40; // [rsp+38h] [rbp-C8h]
  bool v41[6]; // [rsp+3Ah] [rbp-C6h] BYREF
  __int64 v42; // [rsp+40h] [rbp-C0h]
  unsigned int v43; // [rsp+48h] [rbp-B8h]
  unsigned int **v44; // [rsp+50h] [rbp-B0h]
  unsigned __int16 v45[2]; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v46; // [rsp+5Ch] [rbp-A4h]
  __int64 v47; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v48; // [rsp+68h] [rbp-98h] BYREF
  __int64 v49; // [rsp+70h] [rbp-90h] BYREF
  UNICODE_STRING DestinationString; // [rsp+78h] [rbp-88h] BYREF
  _WORD v51[64]; // [rsp+90h] [rbp-70h] BYREF

  v6 = a3;
  v44 = a5;
  v46 = a3;
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
                v20 = LdrpSetThreadPreferredLangList(v19, v15, a3);
                v16 = 0LL;
                if ( v20
                  && (MergedPrefLanguages = (unsigned __int16 *)NtCurrentTeb()->MergedPrefLanguages,
                      v11 < MergedPrefLanguages[2]) )
                {
                  GetLCIDFromLangListNodeWithLICCheck(
                    (__int64)MergedPrefLanguages,
                    (__int64)NtCurrentTeb()->MergedPrefLanguages,
                    v11,
                    v39,
                    v41);
                  v7 = v39[0];
                  v16 = 0LL;
                }
                else
                {
                  v7 = 0;
                  v39[0] = 0;
                }
                if ( !v7 )
                  goto LABEL_46;
                if ( v41[0] && (a4 & 0x100000) != 0 )
                {
                  v7 = -4370;
                  v39[0] = -4370;
                }
                v43 = ++v11;
                --v9;
                goto LABEL_12;
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
                    goto LABEL_46;
                }
                if ( *(_DWORD *)v12 != -20054323 || (*(_BYTE *)(v12 + 24) & 2) == 0 || !*(_DWORD *)(v12 + 124) )
                  goto LABEL_46;
                RtlInitUnicodeString(&DestinationString, (PCWSTR)(v12 + *(unsigned int *)(v12 + 124)));
                v33 = RtlCultureNameToLCID(&DestinationString, v45);
                v16 = 0LL;
                if ( !v33 )
                {
                  MessageInAlternateModule = -1073020923;
LABEL_46:
                  v7 = -4370;
                  v39[0] = -4370;
LABEL_47:
                  LOBYTE(a3) = v38;
                  goto LABEL_48;
                }
                v7 = v45[0];
                v39[0] = v45[0];
                if ( (a4 & 0x100000) != 0 )
                {
                  GetLCIDFromLangListNodeWithLICCheck(v34, (__int64)NtCurrentTeb()->MergedPrefLanguages, 0, v39, v41);
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
                  goto LABEL_13;
                }
LABEL_12:
                v8 = v37;
                LOBYTE(a3) = v38;
                v13 = v42;
LABEL_13:
                v15 = v40;
                goto LABEL_14;
              }
              if ( (_BYTE)a3 )
                return MessageInAlternateModule;
              if ( v8 )
                return MessageInAlternateModule;
              IsReparsePoint = LdrpIsReparsePoint(v13, v15);
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
LABEL_48:
              v15 = v40;
              v13 = v42;
              v8 = v37;
            }
            else
            {
              if ( v7 == 0xEEEE )
                goto LABEL_31;
              if ( (a4 & 4) != 0 )
              {
                v7 = -4370;
                v39[0] = -4370;
                v9 = -2;
              }
              else
              {
                if ( (v15 & 0x3FF) == 0 )
                  goto LABEL_31;
                ParentLangId = LdrpGetParentLangId(v7, v39);
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
                    goto LABEL_14;
                  }
                }
                v9 = -2;
LABEL_31:
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
LABEL_14:
          ;
        }
        while ( v7 == 0xEEEE );
        v22 = 0;
        if ( !v10 )
          break;
        v31 = v51;
        while ( *v31 != v7 )
        {
          ++v22;
          ++v31;
          if ( v22 >= v10 )
            goto LABEL_16;
        }
      }
LABEL_16:
      if ( v10 >= 0x40 )
        return MessageInAlternateModule;
      v23 = v10;
      v49 = 0LL;
      ++v10;
      v51[v23] = v7;
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
      goto LABEL_47;
    }
    v25 = v48;
    v26 = v47;
    v37 = 1;
    *(_QWORD *)(v47 + 16) = v7;
    v27 = LdrpSearchResourceSection_U(v25, v26, 3, 48, (__int64)v44);
    MessageInAlternateModule = v27;
    if ( (a4 & 0x40) != 0 )
    {
      if ( v27 < 0 )
      {
LABEL_36:
        v29 = LdrpCompareServiceChecksum(v42, v25);
        v16 = 0LL;
        if ( v29 )
          return MessageInAlternateModule;
        v11 = v43;
        goto LABEL_47;
      }
      MessageInAlternateModule = LdrpFindMessageInAlternateModule(v25, *v44, 0LL, *(_DWORD *)(v47 + 24), 0);
      if ( (MessageInAlternateModule & 0x80000000) == 0 )
        goto LABEL_20;
      *v44 = 0LL;
    }
    if ( (MessageInAlternateModule & 0x80000000) != 0 )
      goto LABEL_36;
LABEL_20:
    if ( (unsigned __int64)*v44 > v25 && (!v49 || (unsigned __int64)*v44 < v25 + v49) )
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
      v36 = 9LL;
    else
      v36 = (a4 & 1) != 0 ? 5 : 3;
    LdrpMUIEtwOutput(v25, v47, v46, v36);
  }
  if ( NtCurrentTeb()->ResourceRetValue )
    *(_QWORD *)NtCurrentTeb()->ResourceRetValue = v42;
  return MessageInAlternateModule;
}
