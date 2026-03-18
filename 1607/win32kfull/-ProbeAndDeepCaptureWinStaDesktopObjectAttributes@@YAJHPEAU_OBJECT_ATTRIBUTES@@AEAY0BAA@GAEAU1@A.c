/*
 * XREFs of ?ProbeAndDeepCaptureWinStaDesktopObjectAttributes@@YAJHPEAU_OBJECT_ATTRIBUTES@@AEAY0BAA@GAEAU1@AEAU_SECURITY_QUALITY_OF_SERVICE@@AEAPEAXAEAU_UNICODE_STRING@@AEAPEAG@Z @ 0x1C01E0EE0
 * Callers:
 *     _OpenDesktop @ 0x1C00D9150 (_OpenDesktop.c)
 *     NtUserCreateWindowStation @ 0x1C00E9E50 (NtUserCreateWindowStation.c)
 * Callees:
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C00DAA3C (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     memmove @ 0x1C015A040 (memmove.c)
 */

__int64 __fastcall ProbeAndDeepCaptureWinStaDesktopObjectAttributes(
        int a1,
        struct _OBJECT_ATTRIBUTES *a2,
        WCHAR *Buffer,
        struct _OBJECT_ATTRIBUTES *a4,
        struct _SECURITY_QUALITY_OF_SERVICE *a5,
        void **a6,
        struct _UNICODE_STRING *DestinationString,
        unsigned __int16 **a8)
{
  wchar_t *v9; // rbx
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  PUNICODE_STRING ObjectName; // rdx
  int ProcessLuid; // edi
  __int64 Length; // rcx
  char *v15; // r9
  USHORT v16; // cx
  USHORT v17; // ax
  unsigned __int16 *v18; // rax
  char *SecurityQualityOfService; // rcx
  __int64 v20; // xmm0_8
  int v21; // ecx
  PVOID SecurityDescriptor; // rcx
  _DWORD v24[4]; // [rsp+38h] [rbp-50h] BYREF
  struct _OBJECT_ATTRIBUTES v25; // [rsp+48h] [rbp-40h]

  v9 = Buffer;
  if ( &a2[1] < a2 || (unsigned __int64)&a2[1] > W32UserProbeAddress )
    a2 = (struct _OBJECT_ATTRIBUTES *)W32UserProbeAddress;
  v25 = *a2;
  v10 = *(_OWORD *)&v25.ObjectName;
  v11 = *(_OWORD *)&v25.SecurityDescriptor;
  *(_OWORD *)&a4->Length = *(_OWORD *)&v25.Length;
  *(_OWORD *)&a4->ObjectName = v10;
  *(_OWORD *)&a4->SecurityDescriptor = v11;
  a4->Attributes &= ~0x200u;
  if ( !a1 || a4->ObjectName || a4->RootDirectory )
  {
    ObjectName = a4->ObjectName;
    if ( !ObjectName )
      goto LABEL_26;
    if ( (unsigned __int64)ObjectName >= W32UserProbeAddress )
      ObjectName = (PUNICODE_STRING)W32UserProbeAddress;
    *(_DWORD *)&DestinationString->Length = *(_DWORD *)&ObjectName->Length;
    Buffer = ObjectName->Buffer;
    DestinationString->Buffer = Buffer;
    if ( ((unsigned __int8)Buffer & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    Length = DestinationString->Length;
    v15 = (char *)Buffer + Length + 2;
    ObjectName = (PUNICODE_STRING)W32UserProbeAddress;
    if ( (unsigned __int64)v15 >= W32UserProbeAddress
      || (unsigned __int16)Length > DestinationString->MaximumLength
      || (Length & 1) != 0
      || v15 <= (char *)Buffer )
    {
      *W32UserProbeAddress = 0;
    }
    v16 = DestinationString->Length;
    if ( DestinationString->Length && (v16 & 1) == 0 )
    {
      v17 = 522;
      if ( v16 < 0x20Au )
        v17 = DestinationString->Length;
      DestinationString->Length = v17;
      v18 = (unsigned __int16 *)Win32AllocPoolWithQuotaZInit(DestinationString->MaximumLength, 2037674837LL);
      *a8 = v18;
      if ( v18 )
      {
        memmove(v18, DestinationString->Buffer, DestinationString->Length);
        DestinationString->Buffer = *a8;
        a4->ObjectName = DestinationString;
        ProcessLuid = 0;
      }
      else
      {
        ProcessLuid = -1073741801;
      }
    }
    else
    {
LABEL_26:
      ProcessLuid = -1073741811;
    }
  }
  else
  {
    ProcessLuid = GetProcessLuid(0LL, v24);
    if ( ProcessLuid >= 0 )
    {
      RtlStringCchPrintfW(v9, 256LL, L"%ws\\Service-0x%x-%x$", szWindowStationDirectory, v24[1], v24[0], ProcessLuid);
      RtlInitUnicodeString(DestinationString, v9);
      a4->ObjectName = DestinationString;
    }
  }
  if ( ProcessLuid >= 0 )
  {
    SecurityQualityOfService = (char *)a4->SecurityQualityOfService;
    if ( SecurityQualityOfService )
    {
      ObjectName = (PUNICODE_STRING)(SecurityQualityOfService + 12);
      if ( SecurityQualityOfService + 12 < SecurityQualityOfService
        || (unsigned __int64)ObjectName > W32UserProbeAddress )
      {
        SecurityQualityOfService = (char *)W32UserProbeAddress;
      }
      v20 = *(_QWORD *)SecurityQualityOfService;
      v21 = *((_DWORD *)SecurityQualityOfService + 2);
      *(_QWORD *)&a5->Length = v20;
      *(_DWORD *)&a5->ContextTrackingMode = v21;
      a4->SecurityQualityOfService = a5;
    }
    SecurityDescriptor = a4->SecurityDescriptor;
    if ( SecurityDescriptor )
    {
      LOBYTE(ObjectName) = 1;
      ProcessLuid = SeCaptureSecurityDescriptor(SecurityDescriptor, ObjectName);
      if ( ProcessLuid < 0 )
      {
        ProcessLuid = 0;
        if ( *a6 )
        {
          LOBYTE(ObjectName) = 1;
          SeReleaseSecurityDescriptor(*a6, ObjectName, 0LL);
          *a6 = 0LL;
        }
      }
      a4->SecurityDescriptor = *a6;
    }
  }
  if ( ProcessLuid < 0 && *a8 )
  {
    Win32FreePool(*a8, ObjectName, Buffer);
    *a8 = 0LL;
  }
  return (unsigned int)ProcessLuid;
}
