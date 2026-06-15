/*
 * XREFs of ?InitializeSecurity@CAudioDGModule@@AEAAJKKK@Z @ 0x14001464C
 * Callers:
 *     ?PreMessageLoop@CAudioDGModule@@QEAAJH@Z @ 0x140014C0C (-PreMessageLoop@CAudioDGModule@@QEAAJH@Z.c)
 * Callees:
 *     WPP_SF_D @ 0x1400182E8 (WPP_SF_D.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall CAudioDGModule::InitializeSecurity(CAudioDGModule *this)
{
  void *pPrimaryGroup; // rbx
  HLOCAL v2; // r14
  struct _ACL *v3; // r15
  struct _ACL *pSacl; // r12
  void *pOwner; // r13
  signed int LastError; // eax
  int v7; // esi
  DWORD v8; // edx
  HLOCAL v9; // rax
  DWORD v10; // r8d
  HLOCAL v11; // rax
  __int64 v13; // rcx
  __int64 v14; // rdx
  DWORD dwAbsoluteSecurityDescriptorSize; // [rsp+68h] [rbp-9h] BYREF
  ULONG SecurityDescriptorSize; // [rsp+6Ch] [rbp-5h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+70h] [rbp-1h] BYREF
  LPVOID ppv; // [rsp+78h] [rbp+7h] BYREF
  HLOCAL hMem; // [rsp+80h] [rbp+Fh]
  DWORD dwDaclSize; // [rsp+D8h] [rbp+67h] BYREF
  int v21; // [rsp+DCh] [rbp+6Bh]
  DWORD dwSaclSize; // [rsp+E0h] [rbp+6Fh] BYREF
  DWORD dwPrimaryGroupSize; // [rsp+E8h] [rbp+77h] BYREF
  DWORD dwOwnerSize; // [rsp+F0h] [rbp+7Fh] BYREF

  v21 = HIDWORD(this);
  pPrimaryGroup = 0LL;
  SecurityDescriptor = 0LL;
  SecurityDescriptorSize = 0;
  dwAbsoluteSecurityDescriptorSize = 0;
  dwDaclSize = 0;
  v2 = 0LL;
  dwSaclSize = 0;
  v3 = 0LL;
  dwOwnerSize = 0;
  pSacl = 0LL;
  hMem = 0LL;
  pOwner = 0LL;
  dwPrimaryGroupSize = 0;
  if ( !ConvertStringSecurityDescriptorToSecurityDescriptorW(
          L"O:LSG:LSD:(A;;0x1;;;RC)(A;;0x1;;;AU)(A;;0x1;;;IU)(A;;0x1;;;AC)",
          1u,
          &SecurityDescriptor,
          &SecurityDescriptorSize) )
    goto LABEL_36;
  if ( MakeAbsoluteSD(
         SecurityDescriptor,
         0LL,
         &dwAbsoluteSecurityDescriptorSize,
         0LL,
         &dwDaclSize,
         0LL,
         &dwSaclSize,
         0LL,
         &dwOwnerSize,
         0LL,
         &dwPrimaryGroupSize) )
  {
    v7 = -2147418113;
    goto LABEL_31;
  }
  LastError = GetLastError();
  v7 = LastError;
  if ( LastError != 122 )
    goto LABEL_37;
  if ( dwAbsoluteSecurityDescriptorSize )
    v2 = LocalAlloc(0x40u, dwAbsoluteSecurityDescriptorSize);
  if ( dwDaclSize )
    v3 = (struct _ACL *)LocalAlloc(0x40u, dwDaclSize);
  if ( dwSaclSize )
    pSacl = (struct _ACL *)LocalAlloc(0x40u, dwSaclSize);
  v8 = dwOwnerSize;
  if ( dwOwnerSize )
  {
    v9 = LocalAlloc(0x40u, dwOwnerSize);
    v8 = dwOwnerSize;
    pOwner = v9;
  }
  v10 = dwPrimaryGroupSize;
  if ( dwPrimaryGroupSize )
  {
    v11 = LocalAlloc(0x40u, dwPrimaryGroupSize);
    v8 = dwOwnerSize;
    pPrimaryGroup = v11;
    v10 = dwPrimaryGroupSize;
    hMem = v11;
  }
  if ( dwAbsoluteSecurityDescriptorSize && !v2
    || dwDaclSize && !v3
    || dwSaclSize && !pSacl
    || v8 && !pOwner
    || v10 && !pPrimaryGroup )
  {
    v7 = -2147024882;
    goto LABEL_31;
  }
  if ( !MakeAbsoluteSD(
          SecurityDescriptor,
          v2,
          &dwAbsoluteSecurityDescriptorSize,
          v3,
          &dwDaclSize,
          pSacl,
          &dwSaclSize,
          pOwner,
          &dwOwnerSize,
          pPrimaryGroup,
          &dwPrimaryGroupSize) )
  {
LABEL_36:
    LastError = GetLastError();
    v7 = LastError;
LABEL_37:
    if ( LastError > 0 )
      v7 = (unsigned __int16)LastError | 0x80070000;
    goto LABEL_31;
  }
  if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x10) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
      33LL,
      &WPP_8e827d74b75d909828aa6999fde946fd_Traceguids,
      12320LL);
  }
  v7 = CoInitializeSecurity(v2, -1, 0LL, 0LL, 4u, 2u, 0LL, 0x3020u, 0LL);
  if ( v7 < 0 )
  {
    v13 = *(_QWORD *)&WPP_GLOBAL_Control;
    if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
      && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x10) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
    {
      v14 = 34LL;
LABEL_47:
      WPP_SF_D(*(_QWORD *)(v13 + 16), v14, &WPP_8e827d74b75d909828aa6999fde946fd_Traceguids, (unsigned int)v7);
    }
  }
  else
  {
    v7 = CoCreateInstance(&CLSID_GlobalOptions, 0LL, 1u, &IID_IGlobalOptions, &ppv);
    if ( v7 >= 0 )
    {
      v7 = (*(__int64 (__fastcall **)(LPVOID, __int64, __int64))(*(_QWORD *)ppv + 24LL))(ppv, 1LL, 1LL);
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
      goto LABEL_31;
    }
    v13 = *(_QWORD *)&WPP_GLOBAL_Control;
    if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
      && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x10) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
    {
      v14 = 35LL;
      goto LABEL_47;
    }
  }
LABEL_31:
  LocalFree(SecurityDescriptor);
  LocalFree(v2);
  LocalFree(v3);
  LocalFree(pSacl);
  LocalFree(pOwner);
  LocalFree(hMem);
  if ( v7 < 0
    && *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x40000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
      36LL,
      &WPP_8e827d74b75d909828aa6999fde946fd_Traceguids,
      (unsigned int)v7);
  }
  return (unsigned int)v7;
}
