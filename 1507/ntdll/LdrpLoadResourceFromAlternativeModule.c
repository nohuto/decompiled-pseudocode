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
        PVOID BaseOfImage,
        __int64 a2,
        __int64 a3,
        ULONG a4,
        _QWORD *a5)
{
  int v6; // r9d
  LANGID v7; // bx
  char v8; // r11
  int v9; // r15d
  unsigned int v10; // r13d
  unsigned int v11; // edi
  _DWORD *RcConfig; // r12
  PVOID v13; // r10
  int MessageInAlternateModule; // esi
  __int64 v15; // rdx
  int v16; // ecx
  int v17; // ecx
  __int64 v18; // rcx
  unsigned __int16 *MergedPrefLanguages; // rcx
  unsigned int v20; // ecx
  __int64 v21; // rax
  NTSTATUS v22; // eax
  PVOID v23; // rdi
  __int64 v24; // rdx
  int v25; // eax
  _WORD *v27; // rax
  int v28; // ecx
  int ParentLangId; // eax
  char v30; // [rsp+30h] [rbp-D0h]
  char v31; // [rsp+31h] [rbp-CFh]
  _WORD v32[2]; // [rsp+34h] [rbp-CCh] BYREF
  unsigned __int16 v33; // [rsp+38h] [rbp-C8h]
  _BYTE v34[6]; // [rsp+3Ah] [rbp-C6h] BYREF
  PVOID DllHandle; // [rsp+40h] [rbp-C0h]
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
  DllHandle = BaseOfImage;
  v13 = BaseOfImage;
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
                if ( (unsigned __int8)LdrpSetThreadPreferredLangList(v18, v15, a3)
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
                  goto LABEL_51;
                if ( v34[0] && (a4 & 0x100000) != 0 )
                {
                  v7 = -4370;
                  v32[0] = -4370;
                }
                v36 = ++v11;
                --v9;
                goto LABEL_12;
              }
              if ( (_DWORD)v18 == 1 )
              {
                if ( !RcConfig )
                {
                  RcConfig = LdrpGetRcConfig(v13, v15, 0, 1);
                  if ( !RcConfig )
                    goto LABEL_51;
                }
                if ( *RcConfig != -20054323 || (RcConfig[6] & 2) == 0 || !RcConfig[31] )
                  goto LABEL_51;
                RtlInitUnicodeString(&DestinationString, (PCWSTR)((char *)RcConfig + (unsigned int)RcConfig[31]));
                if ( !RtlCultureNameToLCID(&DestinationString, &Lcid) )
                {
                  MessageInAlternateModule = -1073020923;
LABEL_51:
                  v7 = -4370;
                  v32[0] = -4370;
LABEL_52:
                  LOBYTE(a3) = v31;
                  goto LABEL_53;
                }
                v7 = Lcid;
                v32[0] = Lcid;
                if ( (a4 & 0x100000) != 0 )
                {
                  GetLCIDFromLangListNodeWithLICCheck(
                    v28,
                    NtCurrentTeb()->MergedPrefLanguages,
                    0,
                    (unsigned int)v32,
                    (__int64)v34);
                  v13 = DllHandle;
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
                  goto LABEL_13;
                }
LABEL_12:
                v8 = v30;
                LOBYTE(a3) = v31;
                v13 = DllHandle;
LABEL_13:
                v15 = v33;
                goto LABEL_14;
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
LABEL_53:
              v15 = v33;
              v13 = DllHandle;
              v8 = v30;
            }
            else
            {
              if ( v7 == 0xEEEE )
                goto LABEL_32;
              if ( (a4 & 4) != 0 )
              {
                v7 = -4370;
                v32[0] = -4370;
                v9 = -2;
              }
              else
              {
                if ( (v15 & 0x3FF) == 0 )
                  goto LABEL_32;
                ParentLangId = LdrpGetParentLangId(v7, v32, a3);
                v13 = DllHandle;
                v15 = v33;
                LOBYTE(a3) = v31;
                v8 = v30;
                if ( ParentLangId >= 0 )
                {
                  v7 = v32[0];
                  if ( v32[0] )
                  {
                    --v9;
                    goto LABEL_14;
                  }
                }
                v9 = -2;
LABEL_32:
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
LABEL_14:
          ;
        }
        while ( v7 == 0xEEEE );
        v20 = 0;
        if ( !v10 )
          break;
        v27 = v44;
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
      ResourceOffset = 0LL;
      ++v10;
      v44[v21] = v7;
      v22 = LdrLoadAlternateResourceModuleEx(v13, v7, &ResourceDllBase, &ResourceOffset, a4);
      MessageInAlternateModule = v22;
      if ( v22 >= 0 )
        break;
      if ( v22 != -1073741772 )
      {
        v13 = DllHandle;
        v15 = v33;
        LOBYTE(a3) = v31;
        v8 = v30;
        if ( v22 != -1073741766 )
          continue;
      }
      MessageInAlternateModule = -1073020927;
      goto LABEL_52;
    }
    v23 = ResourceDllBase;
    v24 = v40;
    v30 = 1;
    *(_QWORD *)(v40 + 16) = v7;
    v25 = LdrpSearchResourceSection_U(v23, v24, 3u, 0x30u, (__int64)v37);
    MessageInAlternateModule = v25;
    if ( (a4 & 0x40) != 0 )
    {
      if ( v25 < 0 )
      {
LABEL_37:
        if ( (unsigned __int8)LdrpCompareServiceChecksum(DllHandle, v23) )
          return (unsigned int)MessageInAlternateModule;
        v11 = v36;
        goto LABEL_52;
      }
      MessageInAlternateModule = LdrpFindMessageInAlternateModule((_DWORD)v23, *v37, 0, *(_DWORD *)(v40 + 24), 0);
      if ( MessageInAlternateModule >= 0 )
        goto LABEL_20;
      *v37 = 0LL;
    }
    if ( MessageInAlternateModule < 0 )
      goto LABEL_37;
LABEL_20:
    if ( *v37 > (unsigned __int64)v23 && (!ResourceOffset || *v37 < (unsigned __int64)v23 + ResourceOffset) )
      break;
    *v37 = 0LL;
    MessageInAlternateModule = -1073741701;
    DbgPrintEx(0x55u, 2u, "'LDR: %s(), invalid image format of MUI file \n", "LdrpLoadResourceFromAlternativeModule");
    v13 = DllHandle;
    v15 = v33;
    LOBYTE(a3) = v31;
    v8 = 1;
    v11 = v36;
  }
  if ( (MEMORY[0x7FFE0385] & 2) != 0 )
    LdrpMUIEtwOutput(v23);
  if ( NtCurrentTeb()->ResourceRetValue )
    *(_QWORD *)NtCurrentTeb()->ResourceRetValue = DllHandle;
  return (unsigned int)MessageInAlternateModule;
}
