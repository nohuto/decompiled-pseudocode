/*
 * XREFs of ?ProbeAndDeepCaptureWinStaDesktopObjectAttributes@@YAJHPEAU_OBJECT_ATTRIBUTES@@AEAY0BAA@GAEAU1@AEAU_SECURITY_QUALITY_OF_SERVICE@@AEAPEAXAEAU_UNICODE_STRING@@AEAPEAG@Z @ 0x1C01E9E50
 * Callers:
 *     _OpenDesktop @ 0x1C00DAFEC (_OpenDesktop.c)
 *     NtUserCreateWindowStation @ 0x1C0138AC0 (NtUserCreateWindowStation.c)
 * Callees:
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C00DCB5C (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     memmove @ 0x1C015D180 (memmove.c)
 */

__int64 __fastcall ProbeAndDeepCaptureWinStaDesktopObjectAttributes(
        int a1,
        struct _OBJECT_ATTRIBUTES *a2,
        wchar_t *a3,
        struct _OBJECT_ATTRIBUTES *a4,
        struct _SECURITY_QUALITY_OF_SERVICE *a5,
        void **a6,
        struct _UNICODE_STRING *DestinationString,
        unsigned __int16 **a8)
{
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  PUNICODE_STRING ObjectName; // rdx
  int ProcessLuid; // edi
  WCHAR *Buffer; // r8
  __int64 Length; // rcx
  char *v16; // r9
  USHORT v17; // cx
  USHORT v18; // ax
  unsigned __int16 *v19; // rax
  char *SecurityQualityOfService; // rcx
  __int64 v21; // xmm0_8
  int v22; // ecx
  PVOID SecurityDescriptor; // rcx
  __int64 v24; // rdx
  _DWORD v26[4]; // [rsp+38h] [rbp-50h] BYREF
  struct _OBJECT_ATTRIBUTES v27; // [rsp+48h] [rbp-40h]

  if ( &a2[1] < a2 || (unsigned __int64)&a2[1] > W32UserProbeAddress )
    a2 = (struct _OBJECT_ATTRIBUTES *)W32UserProbeAddress;
  v27 = *a2;
  v10 = *(_OWORD *)&v27.ObjectName;
  v11 = *(_OWORD *)&v27.SecurityDescriptor;
  *(_OWORD *)&a4->Length = *(_OWORD *)&v27.Length;
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
    v16 = (char *)Buffer + Length + 2;
    ObjectName = (PUNICODE_STRING)W32UserProbeAddress;
    if ( (unsigned __int64)v16 >= W32UserProbeAddress
      || (unsigned __int16)Length > DestinationString->MaximumLength
      || (Length & 1) != 0
      || v16 <= (char *)Buffer )
    {
      *W32UserProbeAddress = 0;
    }
    v17 = DestinationString->Length;
    if ( DestinationString->Length && (v17 & 1) == 0 )
    {
      v18 = 522;
      if ( v17 < 0x20Au )
        v18 = DestinationString->Length;
      DestinationString->Length = v18;
      v19 = (unsigned __int16 *)Win32AllocPoolWithQuotaZInit(DestinationString->MaximumLength, 2037674837LL);
      *a8 = v19;
      if ( v19 )
      {
        memmove(v19, DestinationString->Buffer, DestinationString->Length);
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
    ProcessLuid = GetProcessLuid(0LL, v26);
    if ( ProcessLuid >= 0 )
    {
      RtlStringCchPrintfW(a3, 256LL, L"%ws\\Service-0x%x-%x$", szWindowStationDirectory, v26[1], v26[0], ProcessLuid);
      RtlInitUnicodeString(DestinationString, a3);
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
      v21 = *(_QWORD *)SecurityQualityOfService;
      v22 = *((_DWORD *)SecurityQualityOfService + 2);
      *(_QWORD *)&a5->Length = v21;
      *(_DWORD *)&a5->ContextTrackingMode = v22;
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
          LOBYTE(v24) = 1;
          SeReleaseSecurityDescriptor(*a6, v24, 0LL);
          *a6 = 0LL;
        }
      }
      a4->SecurityDescriptor = *a6;
    }
  }
  if ( ProcessLuid < 0 && *a8 )
  {
    Win32FreePool(*a8);
    *a8 = 0LL;
  }
  return (unsigned int)ProcessLuid;
}
