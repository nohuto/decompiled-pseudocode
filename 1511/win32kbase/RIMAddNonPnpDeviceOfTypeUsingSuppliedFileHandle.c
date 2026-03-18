/*
 * XREFs of RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1C0087110
 * Callers:
 *     <none>
 * Callees:
 *     RIMFreeDev @ 0x1C000F020 (RIMFreeDev.c)
 *     DeviceTypeToRimInputType @ 0x1C000FDE0 (DeviceTypeToRimInputType.c)
 *     rimOnPnpArrived @ 0x1C0010120 (rimOnPnpArrived.c)
 *     RIMCreateDev @ 0x1C0011060 (RIMCreateDev.c)
 *     rimDoRimDevChangeCallback @ 0x1C0011374 (rimDoRimDevChangeCallback.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C00115F0 (RawInputManagerObjectResolveHandle.c)
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     Win32AllocPool @ 0x1C0020C90 (Win32AllocPool.c)
 *     WPP_RECORDER_SF_D @ 0x1C004695C (WPP_RECORDER_SF_D.c)
 *     RIMUnlockExclusive @ 0x1C0046AD0 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x1C0046AF0 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_ @ 0x1C0046B20 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle(
        void *a1,
        const UNICODE_STRING *a2,
        int a3,
        void *a4,
        char a5,
        _QWORD *a6)
{
  int v10; // ebx
  PVOID v11; // rdi
  __int64 v12; // rsi
  int v14; // edx
  WCHAR *Buffer; // rcx
  unsigned __int64 v16; // r8
  _QWORD *v17; // rcx
  unsigned __int16 v18; // r9
  __int64 v19; // [rsp+28h] [rbp-80h]
  int v20; // [rsp+44h] [rbp-64h]
  PVOID Object; // [rsp+48h] [rbp-60h] BYREF
  const UNICODE_STRING *p_DestinationString; // [rsp+50h] [rbp-58h]
  __int64 v23; // [rsp+58h] [rbp-50h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-48h] BYREF
  UNICODE_STRING SourceString; // [rsp+70h] [rbp-38h] BYREF

  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    4u,
    0x22u,
    (__int64)&WPP_b7afe0d2946a99936bddfefe20d700ac_Traceguids);
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
          if ( a2 >= W32UserProbeAddress )
            a2 = (const UNICODE_STRING *)W32UserProbeAddress;
          v14 = *(_DWORD *)&a2->Length;
          v20 = *(_DWORD *)&a2->Length;
          *(_DWORD *)&SourceString.Length = *(_DWORD *)&a2->Length;
          Buffer = a2->Buffer;
          SourceString.Buffer = Buffer;
          if ( ((unsigned __int8)Buffer & 1) != 0 )
            ExRaiseDatatypeMisalignment();
          v16 = (unsigned __int64)Buffer + (unsigned __int16)v14 + 2;
          if ( v16 >= (unsigned __int64)W32UserProbeAddress
            || (unsigned __int16)v14 > HIWORD(v20)
            || v16 <= (unsigned __int64)Buffer )
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
          p_DestinationString = a2;
        }
        if ( v10 >= 0 )
        {
          v10 = RIMCreateDev(v11, a3, p_DestinationString, 1, 0, 0LL, &v23);
          if ( v10 >= 0 )
          {
            v12 = v23;
            *(_DWORD *)(v23 + 176) |= 1u;
            v10 = rimOnPnpArrived((__int64)v11, v12, a4);
            if ( v10 >= 0 )
            {
              rimDoRimDevChangeCallback((__int64)v11, v12, 2);
              if ( a5 )
              {
                v17 = a6;
                if ( a6 >= W32UserProbeAddress )
                  v17 = W32UserProbeAddress;
                *v17 = *(_QWORD *)(v12 + 16);
              }
              else
              {
                *a6 = *(_QWORD *)(v12 + 16);
              }
            }
            if ( v10 < 0 )
              RIMFreeDev((__int64)v11, v12);
          }
        }
        if ( DestinationString.Buffer )
          Win32FreePool();
        goto LABEL_14;
      }
      v10 = -1073741637;
      v18 = 35;
    }
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      3u,
      v18,
      (__int64)&WPP_b7afe0d2946a99936bddfefe20d700ac_Traceguids);
LABEL_14:
    RIMUnlockExclusive((__int64)v11 + 96);
    ObfDereferenceObject(v11);
  }
  LODWORD(v19) = v10;
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    4u,
    0x25u,
    (__int64)&WPP_b7afe0d2946a99936bddfefe20d700ac_Traceguids,
    v19);
  return (unsigned int)v10;
}
