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

__int64 __fastcall LdrpLoadResourceFromAlternativeModule(PVOID DllHandle, __int64 a2, __int64 a3, ULONG a4, _QWORD *a5)
{
  int v6; // r9d
  LANGID v7; // bx
  char v8; // r11
  int v9; // r15d
  unsigned int v10; // r13d
  unsigned int v11; // edi
  __int64 RcConfig; // r12
  PVOID v13; // r10
  int MessageInAlternateModule; // esi
  __int64 v15; // rdx
  int v16; // ecx
  int v17; // ecx
  __int64 v18; // rcx
  int v19; // ecx
  unsigned __int16 *MergedPrefLanguages; // rcx
  unsigned int v21; // ecx
  _WORD *v22; // rax
  __int64 v23; // rax
  NTSTATUS v24; // eax
  int ParentLangId; // eax
  PVOID v26; // rdi
  __int64 v27; // rdx
  int v28; // eax
  char v30; // [rsp+30h] [rbp-D0h]
  char v31; // [rsp+31h] [rbp-CFh]
  _WORD v32[2]; // [rsp+34h] [rbp-CCh] BYREF
  unsigned __int16 v33; // [rsp+38h] [rbp-C8h]
  _BYTE v34[6]; // [rsp+3Ah] [rbp-C6h] BYREF
  PVOID DllHandlea; // [rsp+40h] [rbp-C0h]
  unsigned int v36; // [rsp+48h] [rbp-B8h]
  _QWORD *v37; // [rsp+50h] [rbp-B0h]
  int v38; // [rsp+58h] [rbp-A8h]
  DWORD Lcid; // [rsp+5Ch] [rbp-A4h] BYREF
  __int64 v40; // [rsp+60h] [rbp-A0h]
  PVOID ResourceDllBase; // [rsp+68h] [rbp-98h] BYREF
  ULONG_PTR ResourceOffset; // [rsp+70h] [rbp-90h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+78h] [rbp-88h] BYREF
  _WORD v44[64]; // [rsp+90h] [rbp-70h] BYREF

  v6 = a3;
  v37 = a5;
  v38 = a3;
  ResourceDllBase = 0LL;
  v7 = 0;
  v32[0] = 0;
  v8 = 0;
  v30 = 0;
  v9 = 0;
  v10 = 0;
  v36 = 0;
  v11 = 0;
  v31 = 0;
  RcConfig = 0LL;
  v40 = a2;
  LOBYTE(a3) = 0;
  DllHandlea = DllHandle;
  v13 = DllHandle;
  MessageInAlternateModule = -1073020927;
  if ( (unsigned int)(v6 - 3) > 1 )
    return (unsigned int)-1073741583;
  v15 = *(unsigned __int16 *)(a2 + 16);
  v33 = v15;
  v34[0] = 0;
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
                v32[0] = 0;
                if ( (unsigned __int8)LdrpSetThreadPreferredLangList(v18, v15, a3, 0LL)
                  && (MergedPrefLanguages = (unsigned __int16 *)NtCurrentTeb()->MergedPrefLanguages,
                      v11 < MergedPrefLanguages[2]) )
                {
                  GetLCIDFromLangListNodeWithLICCheck(
                    (_DWORD)MergedPrefLanguages,
                    NtCurrentTeb()->MergedPrefLanguages,
                    v11,
                    (unsigned int)v32,
                    (__int64)v34);
                  v7 = v32[0];
                }
                else
                {
                  v7 = 0;
                  v32[0] = 0;
                }
                if ( !v7 )
                  goto LABEL_24;
                if ( v34[0] && (a4 & 0x100000) != 0 )
                {
                  v7 = -4370;
                  v32[0] = -4370;
                }
                v36 = ++v11;
                --v9;
                goto LABEL_34;
              }
              if ( (_DWORD)v18 == 1 )
              {
                if ( !RcConfig )
                {
                  RcConfig = LdrpGetRcConfig(v13);
                  if ( !RcConfig )
                    goto LABEL_24;
                }
                if ( *(_DWORD *)RcConfig != -20054323
                  || (*(_BYTE *)(RcConfig + 24) & 2) == 0
                  || !*(_DWORD *)(RcConfig + 124) )
                {
                  goto LABEL_24;
                }
                RtlInitUnicodeString(&DestinationString, (PCWSTR)(RcConfig + *(unsigned int *)(RcConfig + 124)));
                if ( !RtlCultureNameToLCID(&DestinationString, &Lcid) )
                {
                  MessageInAlternateModule = -1073020923;
LABEL_24:
                  v7 = -4370;
                  v32[0] = -4370;
LABEL_70:
                  LOBYTE(a3) = v31;
                  goto LABEL_12;
                }
                v7 = Lcid;
                v32[0] = Lcid;
                if ( (a4 & 0x100000) != 0 )
                {
                  GetLCIDFromLangListNodeWithLICCheck(
                    v19,
                    NtCurrentTeb()->MergedPrefLanguages,
                    0,
                    (unsigned int)v32,
                    (__int64)v34);
                  v13 = DllHandlea;
                  LOBYTE(a3) = v31;
                  v8 = v30;
                  if ( v34[0] )
                  {
                    v7 = -4370;
                    v32[0] = -4370;
                  }
                  else
                  {
                    v7 = v32[0];
                  }
                  goto LABEL_35;
                }
LABEL_34:
                v8 = v30;
                LOBYTE(a3) = v31;
                v13 = DllHandlea;
LABEL_35:
                v15 = v33;
                goto LABEL_36;
              }
              if ( (_BYTE)a3 || v8 || (int)LdrpIsReparsePoint(v13) < 0 )
                return (unsigned int)MessageInAlternateModule;
              LOBYTE(a3) = 1;
              v36 = 0;
              v31 = 1;
              a4 |= 0x400000u;
              v9 = 0;
              v10 = 0;
              v11 = 0;
LABEL_12:
              v15 = v33;
              v13 = DllHandlea;
              v8 = v30;
            }
            else
            {
              if ( v7 == 0xEEEE )
                goto LABEL_54;
              if ( (a4 & 4) != 0 )
              {
                v7 = -4370;
                v32[0] = -4370;
                v9 = -2;
              }
              else
              {
                if ( (v15 & 0x3FF) != 0 )
                {
                  ParentLangId = LdrpGetParentLangId(v7, v32, a3, 0LL);
                  v13 = DllHandlea;
                  v15 = v33;
                  LOBYTE(a3) = v31;
                  v8 = v30;
                  if ( ParentLangId >= 0 )
                  {
                    v7 = v32[0];
                    if ( v32[0] )
                    {
                      --v9;
                      goto LABEL_36;
                    }
                  }
                  v9 = -2;
                }
LABEL_54:
                v7 = -4370;
                v32[0] = -4370;
              }
            }
          }
          if ( (v15 & 0xF3FF) != 0 || (_WORD)v15 == 3072 )
          {
            v7 = v15;
            v32[0] = v15;
          }
          else
          {
            v7 = -4370;
            v32[0] = -4370;
          }
LABEL_36:
          ;
        }
        while ( v7 == 0xEEEE );
        v21 = 0;
        if ( !v10 )
          break;
        v22 = v44;
        while ( *v22 != v7 )
        {
          ++v21;
          ++v22;
          if ( v21 >= v10 )
            goto LABEL_41;
        }
      }
LABEL_41:
      if ( v10 >= 0x40 )
        return (unsigned int)MessageInAlternateModule;
      v23 = v10;
      ResourceOffset = 0LL;
      ++v10;
      v44[v23] = v7;
      v24 = LdrLoadAlternateResourceModuleEx(v13, v7, &ResourceDllBase, &ResourceOffset, a4);
      MessageInAlternateModule = v24;
      if ( v24 >= 0 )
        break;
      if ( v24 != -1073741772 )
      {
        v13 = DllHandlea;
        v15 = v33;
        LOBYTE(a3) = v31;
        v8 = v30;
        if ( v24 != -1073741766 )
          continue;
      }
      MessageInAlternateModule = -1073020927;
      goto LABEL_70;
    }
    v26 = ResourceDllBase;
    v27 = v40;
    v30 = 1;
    *(_QWORD *)(v40 + 16) = v7;
    v28 = LdrpSearchResourceSection_U(v26, v27, 3LL, 0x30u, (__int64)v37);
    MessageInAlternateModule = v28;
    if ( (a4 & 0x40) != 0 )
    {
      if ( v28 < 0 )
        goto LABEL_68;
      MessageInAlternateModule = LdrpFindMessageInAlternateModule((_DWORD)v26, *v37, 0, *(_DWORD *)(v40 + 24), 0);
      if ( MessageInAlternateModule >= 0 )
        goto LABEL_64;
      *v37 = 0LL;
    }
    if ( MessageInAlternateModule < 0 )
    {
LABEL_68:
      if ( (unsigned __int8)LdrpCompareServiceChecksum(DllHandlea, v26) )
        return (unsigned int)MessageInAlternateModule;
      v11 = v36;
      goto LABEL_70;
    }
LABEL_64:
    if ( *v37 > (unsigned __int64)v26 && (!ResourceOffset || *v37 < (unsigned __int64)v26 + ResourceOffset) )
      break;
    *v37 = 0LL;
    MessageInAlternateModule = -1073741701;
    DbgPrintEx(0x55u, 2u, "'LDR: %s(), invalid image format of MUI file \n", "LdrpLoadResourceFromAlternativeModule");
    v13 = DllHandlea;
    v15 = v33;
    LOBYTE(a3) = v31;
    v8 = 1;
    v11 = v36;
  }
  if ( (MEMORY[0x7FFE0385] & 2) != 0 )
    LdrpMUIEtwOutput(v26);
  if ( NtCurrentTeb()->ResourceRetValue )
    *(_QWORD *)NtCurrentTeb()->ResourceRetValue = DllHandlea;
  return (unsigned int)MessageInAlternateModule;
}
