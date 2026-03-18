/*
 * XREFs of PiRegStateReadStackCreationSettingsFromKey @ 0x1C00D768C
 * Callers:
 *     PpRegStateReadCreateClassCreationSettings @ 0x1C00D7844 (PpRegStateReadCreateClassCreationSettings.c)
 * Callees:
 *     WdmlibRtlInitUnicodeStringEx @ 0x1C00A1A14 (WdmlibRtlInitUnicodeStringEx.c)
 *     SeUtilSecurityInfoFromSecurityDescriptor @ 0x1C00D66AC (SeUtilSecurityInfoFromSecurityDescriptor.c)
 *     CmRegUtilUcValueGetFullBuffer @ 0x1C00D7CD4 (CmRegUtilUcValueGetFullBuffer.c)
 *     CmRegUtilWstrValueGetDword @ 0x1C00D7F18 (CmRegUtilWstrValueGetDword.c)
 */

__int64 __fastcall PiRegStateReadStackCreationSettingsFromKey(
        void *ClassOrDeviceKey,
        STACK_CREATION_SETTINGS *StackCreationSettings)
{
  unsigned int *p_DeviceType; // r13
  _KEY_VALUE_FULL_INFORMATION *v3; // rsi
  unsigned int *p_Characteristics; // r15
  unsigned int *p_Exclusivity; // r12
  int inited; // ebx
  unsigned int v9; // r8d
  __int64 v10; // r9
  int FullBuffer; // eax
  void *v12; // rax
  int Dword; // eax
  unsigned int v14; // r8d
  int v15; // eax
  unsigned int v16; // r8d
  int v17; // eax
  void *SecurityDescriptor; // rcx
  _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF
  _KEY_VALUE_FULL_INFORMATION *daclFromDefaultMechanism; // [rsp+88h] [rbp+48h] BYREF
  unsigned int securityInformation; // [rsp+90h] [rbp+50h] BYREF
  void *newSecurityDescriptor; // [rsp+98h] [rbp+58h] BYREF

  newSecurityDescriptor = 0LL;
  p_DeviceType = &StackCreationSettings->DeviceType;
  v3 = 0LL;
  p_Characteristics = &StackCreationSettings->Characteristics;
  StackCreationSettings->Flags = 0;
  p_Exclusivity = &StackCreationSettings->Exclusivity;
  StackCreationSettings->SecurityDescriptor = 0LL;
  StackCreationSettings->DeviceType = 0;
  StackCreationSettings->Characteristics = 0;
  StackCreationSettings->Exclusivity = 0;
  daclFromDefaultMechanism = 0LL;
  inited = WdmlibRtlInitUnicodeStringEx(&DestinationString, (wchar_t *)L"Security");
  if ( inited >= 0 )
  {
    FullBuffer = CmRegUtilUcValueGetFullBuffer(ClassOrDeviceKey, &DestinationString, v9, v10, &daclFromDefaultMechanism);
    v3 = daclFromDefaultMechanism;
    inited = FullBuffer;
  }
  if ( inited < 0 )
  {
    if ( inited == -1073741772 )
    {
      newSecurityDescriptor = 0LL;
      inited = 0;
    }
  }
  else
  {
    LOBYTE(v10) = 1;
    inited = SeCaptureSecurityDescriptor((char *)v3 + v3->DataOffset, 0LL, 1LL, v10, &newSecurityDescriptor);
  }
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  if ( inited < 0 )
    goto $ErrorExit;
  if ( newSecurityDescriptor )
  {
    inited = SeUtilSecurityInfoFromSecurityDescriptor(
               newSecurityDescriptor,
               (unsigned __int8 *)&daclFromDefaultMechanism,
               &securityInformation);
    if ( inited < 0 )
      goto $ErrorExit;
    if ( (_BYTE)daclFromDefaultMechanism )
    {
      ExFreePoolWithTag(newSecurityDescriptor, 0);
    }
    else
    {
      v12 = newSecurityDescriptor;
      StackCreationSettings->Flags |= 2u;
      StackCreationSettings->SecurityDescriptor = v12;
    }
  }
  Dword = CmRegUtilWstrValueGetDword(ClassOrDeviceKey, (wchar_t *)L"DeviceType", v9, p_DeviceType);
  inited = Dword;
  if ( Dword < 0 )
  {
    if ( Dword != -1073741772 )
      goto $ErrorExit;
  }
  else
  {
    StackCreationSettings->Flags |= 1u;
  }
  v15 = CmRegUtilWstrValueGetDword(ClassOrDeviceKey, (wchar_t *)L"DeviceCharacteristics", v14, p_Characteristics);
  inited = v15;
  if ( v15 < 0 )
  {
    if ( v15 != -1073741772 )
      goto $ErrorExit;
  }
  else
  {
    StackCreationSettings->Flags |= 4u;
  }
  v17 = CmRegUtilWstrValueGetDword(ClassOrDeviceKey, (wchar_t *)L"Exclusive", v16, p_Exclusivity);
  inited = v17;
  if ( v17 >= 0 )
  {
    StackCreationSettings->Flags |= 8u;
    return (unsigned int)inited;
  }
  if ( v17 == -1073741772 )
    return 0;
$ErrorExit:
  SecurityDescriptor = StackCreationSettings->SecurityDescriptor;
  if ( SecurityDescriptor )
    ExFreePoolWithTag(SecurityDescriptor, 0);
  StackCreationSettings->Flags = 0;
  StackCreationSettings->SecurityDescriptor = 0LL;
  *p_DeviceType = 0;
  *p_Characteristics = 0;
  *p_Exclusivity = 0;
  return (unsigned int)inited;
}
