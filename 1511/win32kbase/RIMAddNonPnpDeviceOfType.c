/*
 * XREFs of RIMAddNonPnpDeviceOfType @ 0x1C0010980
 * Callers:
 *     <none>
 * Callees:
 *     RIMFreeDev @ 0x1C000F020 (RIMFreeDev.c)
 *     DeviceTypeToRimInputType @ 0x1C000FDE0 (DeviceTypeToRimInputType.c)
 *     rimOnPnpArrived @ 0x1C0010120 (rimOnPnpArrived.c)
 *     RIMCreateDev @ 0x1C0011060 (RIMCreateDev.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C00115F0 (RawInputManagerObjectResolveHandle.c)
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     Win32AllocPool @ 0x1C0020C90 (Win32AllocPool.c)
 *     WPP_RECORDER_SF_D @ 0x1C004695C (WPP_RECORDER_SF_D.c)
 *     RIMUnlockExclusive @ 0x1C0046AD0 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x1C0046AF0 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_ @ 0x1C0046B20 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall RIMAddNonPnpDeviceOfType(__int64 a1, struct _UNICODE_STRING *a2, int a3, char a4, _QWORD *a5)
{
  struct _UNICODE_STRING *v7; // rsi
  __int64 v9; // r8
  int v10; // edx
  int v11; // ebx
  char *v12; // rdi
  int v13; // edx
  __int64 v14; // rsi
  int v16; // edx
  WCHAR *Buffer; // rcx
  unsigned __int64 v18; // r8
  _QWORD *v19; // rcx
  int v20; // r9d
  int v21; // [rsp+44h] [rbp-64h]
  PVOID Object; // [rsp+48h] [rbp-60h] BYREF
  struct _UNICODE_STRING *p_DestinationString; // [rsp+50h] [rbp-58h]
  __int64 v24; // [rsp+58h] [rbp-50h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-48h] BYREF
  UNICODE_STRING SourceString; // [rsp+70h] [rbp-38h] BYREF

  v7 = a2;
  LOBYTE(a2) = 3;
  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    (_DWORD)a2,
    4,
    30,
    (__int64)&WPP_b7afe0d2946a99936bddfefe20d700ac_Traceguids);
  LOBYTE(v9) = 1;
  v11 = RawInputManagerObjectResolveHandle(a1, 3LL, v9, &Object);
  if ( v11 >= 0 )
  {
    v12 = (char *)Object;
    RIMLockExclusive((char *)Object + 96);
    if ( v12[73] || v12[74] )
    {
      v11 = -1073741637;
      v20 = 32;
    }
    else
    {
      if ( ((unsigned int)DeviceTypeToRimInputType(a3) & *((_DWORD *)v12 + 19)) != 0 )
      {
        p_DestinationString = 0LL;
        *(_QWORD *)&DestinationString.Length = 0LL;
        DestinationString.Buffer = 0LL;
        if ( a4 )
        {
          if ( v7 >= W32UserProbeAddress )
            v7 = (struct _UNICODE_STRING *)W32UserProbeAddress;
          v16 = *(_DWORD *)&v7->Length;
          v21 = *(_DWORD *)&v7->Length;
          *(_DWORD *)&SourceString.Length = *(_DWORD *)&v7->Length;
          Buffer = v7->Buffer;
          SourceString.Buffer = Buffer;
          if ( ((unsigned __int8)Buffer & 1) != 0 )
            ExRaiseDatatypeMisalignment();
          v18 = (unsigned __int64)Buffer + (unsigned __int16)v16 + 2;
          if ( v18 >= (unsigned __int64)W32UserProbeAddress
            || (unsigned __int16)v16 > HIWORD(v21)
            || v18 <= (unsigned __int64)Buffer )
          {
            *(_BYTE *)W32UserProbeAddress = 0;
          }
          DestinationString.MaximumLength = SourceString.Length;
          DestinationString.Length = SourceString.Length;
          DestinationString.Buffer = (PWSTR)Win32AllocPool(SourceString.Length, 1886221394LL);
          if ( DestinationString.Buffer )
          {
            RtlCopyUnicodeString(&DestinationString, &SourceString);
            p_DestinationString = &DestinationString;
          }
          else
          {
            v11 = -1073741801;
          }
          v12 = (char *)Object;
        }
        else
        {
          p_DestinationString = v7;
        }
        if ( v11 >= 0 )
        {
          v11 = RIMCreateDev(v12, 0, 0LL, (__int64)&v24);
          if ( v11 >= 0 )
          {
            v14 = v24;
            *(_DWORD *)(v24 + 176) |= 1u;
            v11 = rimOnPnpArrived((__int64)v12, v14, (void *)0xFFFFFFFFFFFFFFFFLL);
            if ( v11 >= 0 )
            {
              if ( a4 )
              {
                v19 = a5;
                if ( a5 >= W32UserProbeAddress )
                  v19 = W32UserProbeAddress;
                *v19 = *(_QWORD *)(v14 + 16);
              }
              else
              {
                *a5 = *(_QWORD *)(v14 + 16);
              }
            }
            if ( v11 < 0 )
              RIMFreeDev((__int64)v12, v14);
          }
        }
        if ( DestinationString.Buffer )
          Win32FreePool(DestinationString.Buffer);
        goto LABEL_14;
      }
      v11 = -1073741637;
      v20 = 31;
    }
    LOBYTE(v13) = 3;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v13,
      3,
      v20,
      (__int64)&WPP_b7afe0d2946a99936bddfefe20d700ac_Traceguids);
LABEL_14:
    RIMUnlockExclusive(v12 + 96);
    ObfDereferenceObject(v12);
  }
  LOBYTE(v10) = 3;
  WPP_RECORDER_SF_D(
    WPP_GLOBAL_Control->DeviceExtension,
    v10,
    4,
    33,
    (__int64)&WPP_b7afe0d2946a99936bddfefe20d700ac_Traceguids,
    v11);
  return (unsigned int)v11;
}
