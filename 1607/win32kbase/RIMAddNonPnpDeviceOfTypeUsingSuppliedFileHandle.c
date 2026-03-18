/*
 * XREFs of RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1C0087FB0
 * Callers:
 *     <none>
 * Callees:
 *     RIMFreeDev @ 0x1C000B268 (RIMFreeDev.c)
 *     rimOnPnpArrived @ 0x1C000C7E8 (rimOnPnpArrived.c)
 *     RIMCreateDev @ 0x1C000E2BC (RIMCreateDev.c)
 *     rimDoRimDevChange @ 0x1C000FAC0 (rimDoRimDevChange.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C00107E0 (RawInputManagerObjectResolveHandle.c)
 *     DeviceTypeToRimInputType @ 0x1C0010A30 (DeviceTypeToRimInputType.c)
 *     WPP_RECORDER_SF_D @ 0x1C00128BC (WPP_RECORDER_SF_D.c)
 *     RIMUnlockExclusive @ 0x1C0012A60 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x1C0012A80 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_ @ 0x1C0012AB0 (WPP_RECORDER_SF_.c)
 *     Win32AllocPool @ 0x1C0034690 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 */

__int64 __fastcall RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle(
        void *a1,
        const UNICODE_STRING *a2,
        int a3,
        void *a4,
        char a5,
        _QWORD *a6)
{
  const UNICODE_STRING *v8; // rsi
  int v10; // ebx
  PVOID v11; // rdi
  int v12; // edx
  int v13; // ecx
  WCHAR *Buffer; // rdx
  unsigned __int64 v15; // r8
  __int64 v16; // rsi
  _QWORD *v17; // rcx
  int v18; // r9d
  __int64 v20; // [rsp+28h] [rbp-80h]
  int v21; // [rsp+44h] [rbp-64h]
  PVOID Object; // [rsp+48h] [rbp-60h] BYREF
  const UNICODE_STRING *p_DestinationString; // [rsp+50h] [rbp-58h]
  __int64 v24; // [rsp+58h] [rbp-50h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-48h] BYREF
  UNICODE_STRING SourceString; // [rsp+70h] [rbp-38h] BYREF

  v8 = a2;
  LOBYTE(a2) = 3;
  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    (_DWORD)a2,
    4,
    34,
    (__int64)&WPP_8442d383dc1b397dafeae95a129ca68e_Traceguids);
  v10 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v10 >= 0 )
  {
    v11 = Object;
    RIMLockExclusive((__int64)Object + 96);
    if ( *((_BYTE *)v11 + 73) || *((_BYTE *)v11 + 74) )
    {
      v10 = -1073741637;
      v18 = 36;
    }
    else
    {
      if ( ((unsigned int)DeviceTypeToRimInputType(a3) & *((_DWORD *)v11 + 19)) != 0 )
      {
        p_DestinationString = 0LL;
        *(_QWORD *)&DestinationString.Length = 0LL;
        DestinationString.Buffer = 0LL;
        if ( a5 )
        {
          if ( (unsigned __int64)v8 >= W32UserProbeAddress )
            v8 = (const UNICODE_STRING *)W32UserProbeAddress;
          v13 = *(_DWORD *)&v8->Length;
          v21 = *(_DWORD *)&v8->Length;
          *(_DWORD *)&SourceString.Length = *(_DWORD *)&v8->Length;
          Buffer = v8->Buffer;
          SourceString.Buffer = Buffer;
          if ( ((unsigned __int8)Buffer & 1) != 0 )
            ExRaiseDatatypeMisalignment();
          v15 = (unsigned __int64)Buffer + (unsigned __int16)v13 + 2;
          if ( v15 >= W32UserProbeAddress
            || (unsigned __int16)v13 > HIWORD(v21)
            || (v13 & 1) != 0
            || v15 <= (unsigned __int64)Buffer )
          {
            *(_BYTE *)W32UserProbeAddress = 0;
          }
          DestinationString.MaximumLength = SourceString.Length;
          DestinationString.Length = SourceString.Length;
          DestinationString.Buffer = (PWSTR)Win32AllocPool();
          if ( DestinationString.Buffer )
          {
            RtlCopyUnicodeString(&DestinationString, &SourceString);
            p_DestinationString = &DestinationString;
          }
          else
          {
            v10 = -1073741801;
          }
          v11 = Object;
        }
        else
        {
          p_DestinationString = v8;
        }
        if ( v10 >= 0 )
        {
          v10 = RIMCreateDev(v11, a3, p_DestinationString, 1, 0, 0LL, &v24);
          if ( v10 >= 0 )
          {
            v16 = v24;
            *(_DWORD *)(v24 + 184) |= 1u;
            v10 = rimOnPnpArrived((__int64)v11, v16, a4);
            if ( v10 >= 0 )
            {
              rimDoRimDevChange((__int64)v11, v16, 2);
              if ( a5 )
              {
                v17 = a6;
                if ( (unsigned __int64)a6 >= W32UserProbeAddress )
                  v17 = (_QWORD *)W32UserProbeAddress;
                *v17 = *(_QWORD *)(v16 + 16);
              }
              else
              {
                *a6 = *(_QWORD *)(v16 + 16);
              }
            }
            if ( v10 < 0 )
              RIMFreeDev((__int64)v11, v16);
          }
        }
        if ( DestinationString.Buffer )
          Win32FreePool();
        goto LABEL_35;
      }
      v10 = -1073741637;
      v18 = 35;
    }
    LOBYTE(v12) = 3;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v12,
      3,
      v18,
      (__int64)&WPP_8442d383dc1b397dafeae95a129ca68e_Traceguids);
LABEL_35:
    RIMUnlockExclusive((__int64)v11 + 96);
    ObfDereferenceObject(v11);
  }
  LODWORD(v20) = v10;
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    4u,
    0x25u,
    (__int64)&WPP_8442d383dc1b397dafeae95a129ca68e_Traceguids,
    v20);
  return (unsigned int)v10;
}
