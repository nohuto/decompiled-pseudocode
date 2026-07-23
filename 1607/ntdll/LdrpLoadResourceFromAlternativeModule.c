/*
 * XREFs of LdrpLoadResourceFromAlternativeModule @ 0x180010818
 * Callers:
 *     LdrpSearchResourceSection_U @ 0x180030398 (LdrpSearchResourceSection_U.c)
 * Callees:
 *     LdrpFindMessageInAlternateModule @ 0x18000D970 (LdrpFindMessageInAlternateModule.c)
 *     GetLCIDFromLangListNodeWithLICCheck @ 0x1800104C8 (GetLCIDFromLangListNodeWithLICCheck.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x180012AA0 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpSetThreadPreferredLangList @ 0x1800134AC (LdrpSetThreadPreferredLangList.c)
 *     LdrpSearchResourceSection_U @ 0x180030398 (LdrpSearchResourceSection_U.c)
 *     LdrpGetRcConfig @ 0x18003F1C4 (LdrpGetRcConfig.c)
 *     RtlCultureNameToLCID @ 0x180043F60 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x180044140 (RtlInitUnicodeString.c)
 *     DbgPrintEx @ 0x18005BFB0 (DbgPrintEx.c)
 *     LdrpIsReparsePoint @ 0x180075EE4 (LdrpIsReparsePoint.c)
 *     LdrpCompareServiceChecksum @ 0x180085990 (LdrpCompareServiceChecksum.c)
 *     LdrpGetParentLangId @ 0x1800885C8 (LdrpGetParentLangId.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     LdrpMUIEtwOutput @ 0x1800DC68C (LdrpMUIEtwOutput.c)
 */

__int64 __fastcall LdrpLoadResourceFromAlternativeModule(
        PVOID DllHandle,
        __int64 a2,
        DWORD a3,
        ULONG a4,
        unsigned int **a5)
{
  LANGID v7; // bx
  char v8; // r11
  int v9; // r15d
  unsigned int v10; // r13d
  unsigned int v11; // edi
  __int64 RcConfig; // r12
  char v13; // r8
  PVOID v14; // r10
  int MessageInAlternateModule; // esi
  unsigned __int16 v16; // dx
  int v17; // ecx
  int v18; // ecx
  __int64 v19; // rcx
  unsigned __int16 *MergedPrefLanguages; // rcx
  unsigned int v21; // ecx
  __int64 v22; // rax
  NTSTATUS v23; // eax
  unsigned int *v24; // rdi
  int v25; // edx
  int v26; // eax
  _WORD *v28; // rax
  __int64 v29; // rcx
  int ParentLangId; // eax
  char v31; // [rsp+30h] [rbp-D0h]
  char v32; // [rsp+31h] [rbp-CFh]
  unsigned __int16 v33[2]; // [rsp+34h] [rbp-CCh] BYREF
  unsigned __int16 v34; // [rsp+38h] [rbp-C8h]
  bool v35[6]; // [rsp+3Ah] [rbp-C6h] BYREF
  PVOID DllHandlea; // [rsp+40h] [rbp-C0h]
  unsigned int v37; // [rsp+48h] [rbp-B8h]
  unsigned int **v38; // [rsp+50h] [rbp-B0h]
  DWORD Lcid[2]; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v40; // [rsp+60h] [rbp-A0h]
  PVOID ResourceDllBase; // [rsp+68h] [rbp-98h] BYREF
  ULONG_PTR ResourceOffset; // [rsp+70h] [rbp-90h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+78h] [rbp-88h] BYREF
  _WORD v44[64]; // [rsp+90h] [rbp-70h] BYREF

  v38 = a5;
  Lcid[1] = a3;
  ResourceDllBase = 0LL;
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
  v40 = a2;
  v13 = 0;
  DllHandlea = DllHandle;
  v14 = DllHandle;
  MessageInAlternateModule = -1073020927;
  if ( a3 - 3 > 1 )
    return (unsigned int)-1073741583;
  v16 = *(_WORD *)(a2 + 16);
  v34 = v16;
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
            v17 = v9++;
            if ( !v17 )
              break;
            v18 = v17 - 1;
            if ( v18 )
            {
              v19 = (unsigned int)(v18 - 1);
              if ( !(_DWORD)v19 )
              {
                v33[0] = 0;
                if ( (unsigned __int8)LdrpSetThreadPreferredLangList(v19)
                  && (MergedPrefLanguages = (unsigned __int16 *)NtCurrentTeb()->MergedPrefLanguages,
                      v11 < MergedPrefLanguages[2]) )
                {
                  GetLCIDFromLangListNodeWithLICCheck(
                    (__int64)MergedPrefLanguages,
                    (__int64)NtCurrentTeb()->MergedPrefLanguages,
                    v11,
                    v33,
                    v35);
                  v7 = v33[0];
                }
                else
                {
                  v7 = 0;
                  v33[0] = 0;
                }
                if ( !v7 )
                  goto LABEL_47;
                if ( v35[0] && (a4 & 0x100000) != 0 )
                {
                  v7 = -4370;
                  v33[0] = -4370;
                }
                v37 = ++v11;
                --v9;
                goto LABEL_12;
              }
              if ( (_DWORD)v19 == 1 )
              {
                if ( !RcConfig )
                {
                  RcConfig = LdrpGetRcConfig(v14);
                  if ( !RcConfig )
                    goto LABEL_47;
                }
                if ( *(_DWORD *)RcConfig != -20054323
                  || (*(_BYTE *)(RcConfig + 24) & 2) == 0
                  || !*(_DWORD *)(RcConfig + 124) )
                {
                  goto LABEL_47;
                }
                RtlInitUnicodeString(&DestinationString, (PCWSTR)(RcConfig + *(unsigned int *)(RcConfig + 124)));
                if ( !RtlCultureNameToLCID(&DestinationString, Lcid) )
                {
                  MessageInAlternateModule = -1073020923;
LABEL_47:
                  v7 = -4370;
                  v33[0] = -4370;
LABEL_48:
                  v13 = v32;
                  goto LABEL_49;
                }
                v7 = Lcid[0];
                v33[0] = Lcid[0];
                if ( (a4 & 0x100000) != 0 )
                {
                  GetLCIDFromLangListNodeWithLICCheck(v29, (__int64)NtCurrentTeb()->MergedPrefLanguages, 0, v33, v35);
                  v14 = DllHandlea;
                  v13 = v32;
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
                v13 = v32;
                v14 = DllHandlea;
LABEL_13:
                v16 = v34;
                goto LABEL_14;
              }
              if ( v13 || v8 || (int)LdrpIsReparsePoint(v14) < 0 )
                return (unsigned int)MessageInAlternateModule;
              v13 = 1;
              v37 = 0;
              v32 = 1;
              a4 |= 0x400000u;
              v9 = 0;
              v10 = 0;
              v11 = 0;
LABEL_49:
              v16 = v34;
              v14 = DllHandlea;
              v8 = v31;
            }
            else
            {
              if ( v7 == 0xEEEE )
                goto LABEL_32;
              if ( (a4 & 4) != 0 )
              {
                v7 = -4370;
                v33[0] = -4370;
                v9 = -2;
              }
              else
              {
                if ( (v16 & 0x3FF) == 0 )
                  goto LABEL_32;
                ParentLangId = LdrpGetParentLangId(v7, v33);
                v14 = DllHandlea;
                v16 = v34;
                v13 = v32;
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
LABEL_32:
                v7 = -4370;
                v33[0] = -4370;
              }
            }
          }
          if ( (v16 & 0xF3FF) != 0 || v16 == 3072 )
          {
            v7 = v16;
            v33[0] = v16;
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
        v21 = 0;
        if ( !v10 )
          break;
        v28 = v44;
        while ( *v28 != v7 )
        {
          ++v21;
          ++v28;
          if ( v21 >= v10 )
            goto LABEL_16;
        }
      }
LABEL_16:
      if ( v10 >= 0x40 )
        return (unsigned int)MessageInAlternateModule;
      v22 = v10;
      ResourceOffset = 0LL;
      ++v10;
      v44[v22] = v7;
      v23 = LdrLoadAlternateResourceModuleEx(v14, v7, &ResourceDllBase, &ResourceOffset, a4);
      MessageInAlternateModule = v23;
      if ( v23 >= 0 )
        break;
      if ( v23 != -1073741772 )
      {
        v14 = DllHandlea;
        v16 = v34;
        v13 = v32;
        v8 = v31;
        if ( v23 != -1073741766 )
          continue;
      }
      MessageInAlternateModule = -1073020927;
      goto LABEL_48;
    }
    v24 = (unsigned int *)ResourceDllBase;
    v25 = v40;
    v31 = 1;
    *(_QWORD *)(v40 + 16) = v7;
    v26 = LdrpSearchResourceSection_U((_DWORD)v24, v25, 3, 48, (__int64)v38);
    MessageInAlternateModule = v26;
    if ( (a4 & 0x40) != 0 )
    {
      if ( v26 < 0 )
      {
LABEL_37:
        if ( (unsigned __int8)LdrpCompareServiceChecksum(DllHandlea, v24) )
          return (unsigned int)MessageInAlternateModule;
        v11 = v37;
        goto LABEL_48;
      }
      MessageInAlternateModule = LdrpFindMessageInAlternateModule(v24, *v38, 0LL, *(_DWORD *)(v40 + 24), 0);
      if ( MessageInAlternateModule >= 0 )
        goto LABEL_20;
      *v38 = 0LL;
    }
    if ( MessageInAlternateModule < 0 )
      goto LABEL_37;
LABEL_20:
    if ( *v38 > v24 && (!ResourceOffset || *v38 < (unsigned int *)((char *)v24 + ResourceOffset)) )
      break;
    *v38 = 0LL;
    MessageInAlternateModule = -1073741701;
    DbgPrintEx(0x55u, 2u, "'LDR: %s(), invalid image format of MUI file \n", "LdrpLoadResourceFromAlternativeModule");
    v14 = DllHandlea;
    v16 = v34;
    v13 = v32;
    v8 = 1;
    v11 = v37;
  }
  if ( (MEMORY[0x7FFE0385] & 2) != 0 )
    LdrpMUIEtwOutput(v24);
  if ( NtCurrentTeb()->ResourceRetValue )
    *(_QWORD *)NtCurrentTeb()->ResourceRetValue = DllHandlea;
  return (unsigned int)MessageInAlternateModule;
}
