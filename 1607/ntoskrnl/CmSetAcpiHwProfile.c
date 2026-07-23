/*
 * XREFs of CmSetAcpiHwProfile @ 0x14055BF28
 * Callers:
 *     IopExecuteHardwareProfileChange @ 0x14064CEC0 (IopExecuteHardwareProfileChange.c)
 *     CmpCreateControlSet @ 0x1407AC02C (CmpCreateControlSet.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     swprintf_s @ 0x140151F20 (swprintf_s.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwOpenKey @ 0x14015A430 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x14015A4D0 (ZwQueryValueKey.c)
 *     ZwCreateKey @ 0x14015A590 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x14015ADF0 (ZwSetValueKey.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     CmpFilterAcpiDockingState @ 0x14055C414 (CmpFilterAcpiDockingState.c)
 *     CmpGetAcpiProfileInformation @ 0x14055C5D8 (CmpGetAcpiProfileInformation.c)
 *     CmpAddAcpiAliasEntry @ 0x140607008 (CmpAddAcpiAliasEntry.c)
 *     CmpCloneHwProfile @ 0x140607264 (CmpCloneHwProfile.c)
 *     CmpMoveBiosAliasTable @ 0x140607C78 (CmpMoveBiosAliasTable.c)
 */

__int64 __fastcall CmSetAcpiHwProfile(
        unsigned __int16 *a1,
        __int64 (__fastcall *a2)(_DWORD *, unsigned int *, _QWORD),
        __int64 a3,
        HANDLE *a4,
        _BYTE *a5)
{
  HANDLE *v7; // r14
  PVOID PoolWithTag; // rsi
  _DWORD *v9; // rdi
  NTSTATUS AcpiProfileInformation; // ebx
  int v11; // r9d
  int v12; // ebx
  unsigned int v13; // r14d
  int v14; // eax
  __int64 v15; // rax
  int v16; // r15d
  unsigned int v17; // ecx
  unsigned int v18; // ecx
  __int64 v19; // rax
  _DWORD *v20; // rdi
  unsigned int v21; // edx
  void *v22; // rcx
  HANDLE v24; // rcx
  NTSTATUS v25; // eax
  int Length; // [rsp+20h] [rbp-E0h]
  unsigned int v27; // [rsp+40h] [rbp-C0h] BYREF
  int Data; // [rsp+44h] [rbp-BCh] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-A8h] BYREF
  HANDLE KeyHandle; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE v32; // [rsp+68h] [rbp-98h] BYREF
  PVOID P; // [rsp+70h] [rbp-90h] BYREF
  HANDLE *v34; // [rsp+78h] [rbp-88h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-80h] BYREF
  ULONG ResultLength; // [rsp+B0h] [rbp-50h] BYREF
  unsigned int v37; // [rsp+B4h] [rbp-4Ch] BYREF
  HANDLE v38; // [rsp+B8h] [rbp-48h] BYREF
  PVOID v39; // [rsp+C0h] [rbp-40h] BYREF
  ULONG Disposition; // [rsp+C8h] [rbp-38h] BYREF
  HANDLE v41; // [rsp+D0h] [rbp-30h] BYREF
  int KeyValueInformation; // [rsp+E0h] [rbp-20h] BYREF
  int v43; // [rsp+E4h] [rbp-1Ch]
  unsigned int v44; // [rsp+E8h] [rbp-18h]
  SIZE_T NumberOfBytes; // [rsp+ECh] [rbp-14h]
  wchar_t Dst[128]; // [rsp+1E0h] [rbp+E0h] BYREF

  v34 = a4;
  KeyHandle = 0LL;
  v32 = 0LL;
  *a5 = 0;
  v7 = a4;
  Handle = 0LL;
  v41 = 0LL;
  PoolWithTag = 0LL;
  v38 = 0LL;
  v9 = 0LL;
  v39 = 0LL;
  P = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\IDConfigDB");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  AcpiProfileInformation = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( AcpiProfileInformation < 0 )
  {
    KeyHandle = 0LL;
  }
  else
  {
    AcpiProfileInformation = CmpGetAcpiProfileInformation((int)KeyHandle, (int)&P, (int)&v39, v11, &KeyValueInformation);
    if ( AcpiProfileInformation < 0 )
    {
LABEL_53:
      v9 = P;
      goto LABEL_54;
    }
    RtlInitUnicodeString(
      &DestinationString,
      L"\\Registry\\Machine\\System\\CurrentControlSet\\Hardware Profiles\\Current");
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    AcpiProfileInformation = ZwOpenKey(&v32, 0x20019u, &ObjectAttributes);
    if ( AcpiProfileInformation < 0 )
    {
      v32 = 0LL;
    }
    else
    {
      RtlInitUnicodeString(&DestinationString, L"CurrentDockInfo");
      ObjectAttributes.RootDirectory = KeyHandle;
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      AcpiProfileInformation = ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes);
      if ( AcpiProfileInformation < 0 )
      {
        Handle = 0LL;
      }
      else
      {
        RtlInitUnicodeString(&DestinationString, L"DockingState");
        if ( ZwQueryValueKey(
               Handle,
               &DestinationString,
               KeyValueFullInformation,
               &KeyValueInformation,
               0x100u,
               &ResultLength) >= 0
          && v43 == 4 )
        {
          v12 = *(int *)((char *)&KeyValueInformation + v44);
          RtlInitUnicodeString(&DestinationString, L"AcpiSerialNumber");
          if ( ZwQueryValueKey(
                 Handle,
                 &DestinationString,
                 KeyValueFullInformation,
                 &KeyValueInformation,
                 0x100u,
                 &ResultLength) >= 0
            && v43 == 3 )
          {
            PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x20204D43u);
            if ( !PoolWithTag )
            {
              AcpiProfileInformation = -1073741670;
              goto LABEL_53;
            }
            memmove(PoolWithTag, (char *)&KeyValueInformation + v44, (unsigned int)NumberOfBytes);
          }
          RtlInitUnicodeString(&DestinationString, L"CurrentConfig");
          if ( ZwQueryValueKey(
                 KeyHandle,
                 &DestinationString,
                 KeyValueFullInformation,
                 &KeyValueInformation,
                 0x100u,
                 &ResultLength) < 0
            || v43 != 4 )
          {
            AcpiProfileInformation = -1073741492;
            goto LABEL_53;
          }
          v9 = P;
          v13 = *(int *)((char *)&KeyValueInformation + v44);
          AcpiProfileInformation = CmpFilterAcpiDockingState(
                                     (_DWORD)a1,
                                     v12,
                                     (_DWORD)PoolWithTag,
                                     v13,
                                     (__int64)P,
                                     (__int64)v39);
          if ( AcpiProfileInformation < 0 )
            goto LABEL_54;
          v14 = a2(v9, &v37, 0LL);
          AcpiProfileInformation = v14;
          if ( v37 == -1 )
            goto LABEL_21;
          if ( v14 < 0 )
            goto LABEL_54;
          RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Hardware Profiles");
          ObjectAttributes.RootDirectory = 0LL;
          ObjectAttributes.ObjectName = &DestinationString;
          ObjectAttributes.Length = 48;
          ObjectAttributes.Attributes = 576;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          AcpiProfileInformation = ZwOpenKey(&v38, 0x20019u, &ObjectAttributes);
          if ( AcpiProfileInformation < 0 )
          {
            v38 = 0LL;
          }
          else
          {
            v15 = 8LL * v37;
            v16 = v9[v15 + 8];
            v17 = v9[v15 + 7];
            v27 = v17;
            if ( (v16 & 8) != 0 )
            {
              AcpiProfileInformation = CmpMoveBiosAliasTable(KeyHandle, Handle, v13, v17, Dst);
              if ( AcpiProfileInformation < 0 )
                goto LABEL_54;
              v17 = v27;
            }
            if ( (v16 & 4) == 0 && v17 == v13 )
            {
LABEL_17:
              Data = *a1;
              RtlInitUnicodeString(&DestinationString, L"DockingState");
              ZwSetValueKey(Handle, &DestinationString, 0, 4u, &Data, 4u);
              RtlInitUnicodeString(&DestinationString, L"AcpiSerialNumber");
              AcpiProfileInformation = ZwSetValueKey(Handle, &DestinationString, 0, 3u, a1 + 2, a1[1]);
              if ( (v16 & 2) == 0 )
                AcpiProfileInformation = CmpAddAcpiAliasEntry(KeyHandle, a1, v27, Dst);
              if ( v27 != v13 )
              {
                RtlInitUnicodeString(
                  &DestinationString,
                  L"\\Registry\\Machine\\System\\CurrentControlSet\\Hardware Profiles\\Current");
                ObjectAttributes.RootDirectory = 0LL;
                ObjectAttributes.ObjectName = &DestinationString;
                ObjectAttributes.Length = 48;
                ObjectAttributes.Attributes = 832;
                *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
                ZwCreateKey(&v41, 0x20u, &ObjectAttributes, 0, 0LL, 8u, &Disposition);
                swprintf_s(
                  Dst,
                  0x80uLL,
                  L"\\Registry\\Machine\\System\\CurrentControlSet\\Hardware Profiles\\%04d",
                  v27);
                RtlInitUnicodeString(&DestinationString, Dst);
                AcpiProfileInformation = ZwSetValueKey(
                                           v41,
                                           &CmSymbolicLinkValueName,
                                           0,
                                           6u,
                                           DestinationString.Buffer,
                                           DestinationString.Length);
              }
              goto LABEL_21;
            }
            v24 = Handle;
            *a5 = 1;
            ZwClose(v24);
            Handle = 0LL;
            if ( (v16 & 4) != 0 )
            {
              LOWORD(Length) = *a1;
              v25 = CmpCloneHwProfile(KeyHandle, v38, v32, v27, Length, &v32, &v27);
            }
            else
            {
              ZwClose(v32);
              swprintf_s(Dst, 0x80uLL, L"%04d", v27);
              RtlInitUnicodeString(&DestinationString, Dst);
              ObjectAttributes.RootDirectory = v38;
              ObjectAttributes.Length = 48;
              ObjectAttributes.ObjectName = &DestinationString;
              ObjectAttributes.Attributes = 576;
              *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
              v25 = ZwOpenKey(&v32, 0x20019u, &ObjectAttributes);
            }
            AcpiProfileInformation = v25;
            if ( v25 >= 0 )
            {
              RtlInitUnicodeString(&DestinationString, L"CurrentDockInfo");
              ObjectAttributes.RootDirectory = KeyHandle;
              ObjectAttributes.Length = 48;
              ObjectAttributes.ObjectName = &DestinationString;
              ObjectAttributes.Attributes = 576;
              *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
              AcpiProfileInformation = ZwCreateKey(&Handle, 0x2001Fu, &ObjectAttributes, 0, 0LL, 1u, &Disposition);
              if ( AcpiProfileInformation >= 0 )
              {
                RtlInitUnicodeString(&DestinationString, L"CurrentConfig");
                if ( ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, &v27, 4u) < 0 )
                {
                  AcpiProfileInformation = -1073741492;
                  goto LABEL_54;
                }
                goto LABEL_17;
              }
              Handle = 0LL;
            }
            else
            {
              v32 = 0LL;
            }
          }
LABEL_21:
          v7 = v34;
          goto LABEL_22;
        }
        AcpiProfileInformation = -1073741492;
      }
    }
    v9 = P;
  }
LABEL_22:
  if ( AcpiProfileInformation >= 0 )
  {
    *v7 = v32;
    goto LABEL_24;
  }
LABEL_54:
  if ( v32 )
    ZwClose(v32);
LABEL_24:
  if ( v41 )
    ZwClose(v41);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( Handle )
    ZwClose(Handle);
  if ( v38 )
    ZwClose(v38);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  if ( v9 )
  {
    v18 = 0;
    for ( Data = 0; v18 < v9[1]; Data = v18 )
    {
      v19 = 8LL * v18;
      if ( *(_QWORD *)&v9[v19 + 4] )
      {
        ExFreePoolWithTag(*(PVOID *)&v9[v19 + 4], 0);
        v18 = Data;
      }
      ++v18;
    }
    ExFreePoolWithTag(v9, 0);
  }
  v20 = v39;
  if ( v39 )
  {
    v21 = 0;
    Data = 0;
    if ( *((_DWORD *)v39 + 1) )
    {
      do
      {
        v22 = (void *)*((_QWORD *)v39 + 3 * v21 + 3);
        if ( v22 )
        {
          ExFreePoolWithTag(v22, 0);
          v21 = Data;
        }
        Data = ++v21;
      }
      while ( v21 < v20[1] );
    }
    ExFreePoolWithTag(v39, 0);
  }
  return (unsigned int)AcpiProfileInformation;
}
