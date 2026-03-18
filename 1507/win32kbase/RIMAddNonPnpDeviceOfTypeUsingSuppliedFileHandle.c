/*
 * XREFs of RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1C006F3B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C001A90C (WPP_RECORDER_SF_D.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C001A9C0 (RawInputManagerObjectResolveHandle.c)
 *     WPP_RECORDER_SF_ @ 0x1C001AA20 (WPP_RECORDER_SF_.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     Win32AllocPool @ 0x1C004C2C0 (Win32AllocPool.c)
 *     RIMUnlockExclusive @ 0x1C00523F0 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x1C0052410 (RIMLockExclusive.c)
 *     RIMFreeDev @ 0x1C00759DC (RIMFreeDev.c)
 *     RIMCreateDev @ 0x1C0076274 (RIMCreateDev.c)
 *     rimDoRimDevChangeCallback @ 0x1C0076588 (rimDoRimDevChangeCallback.c)
 *     rimOnPnpArrived @ 0x1C00769E4 (rimOnPnpArrived.c)
 *     DeviceTypeToRimInputType @ 0x1C0077280 (DeviceTypeToRimInputType.c)
 */

__int64 __fastcall RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle(
        void *a1,
        struct _UNICODE_STRING *a2,
        unsigned int a3,
        __int64 a4,
        char a5,
        _QWORD *a6)
{
  int v10; // ebx
  PVOID v11; // rdi
  int v12; // ecx
  WCHAR *Buffer; // rdx
  unsigned __int64 v14; // r8
  __int64 v15; // rsi
  _QWORD *v16; // rcx
  unsigned __int16 v17; // r9
  __int64 v19; // [rsp+28h] [rbp-80h]
  int v20; // [rsp+44h] [rbp-64h]
  PVOID Object; // [rsp+48h] [rbp-60h] BYREF
  struct _UNICODE_STRING *p_DestinationString; // [rsp+50h] [rbp-58h]
  __int64 v23; // [rsp+58h] [rbp-50h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-48h] BYREF
  UNICODE_STRING SourceString; // [rsp+70h] [rbp-38h] BYREF

  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    4u,
    0x22u,
    (__int64)&WPP_dd9f0c7a0f42e4329fa71b586c89d33f_Traceguids);
  v10 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v10 >= 0 )
  {
    v11 = Object;
    RIMLockExclusive((__int64)Object + 96);
    if ( *((_BYTE *)v11 + 73) || *((_BYTE *)v11 + 74) )
    {
      v10 = -1073741637;
      v17 = 36;
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
            a2 = (struct _UNICODE_STRING *)W32UserProbeAddress;
          v12 = *(_DWORD *)&a2->Length;
          v20 = *(_DWORD *)&a2->Length;
          *(_DWORD *)&SourceString.Length = *(_DWORD *)&a2->Length;
          Buffer = a2->Buffer;
          SourceString.Buffer = Buffer;
          if ( ((unsigned __int8)Buffer & 1) != 0 )
            ExRaiseDatatypeMisalignment();
          v14 = (unsigned __int64)Buffer + (unsigned __int16)v12 + 2;
          if ( v14 >= (unsigned __int64)W32UserProbeAddress
            || (unsigned __int16)v12 > HIWORD(v20)
            || (v12 & 1) != 0
            || v14 <= (unsigned __int64)Buffer )
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
          v10 = RIMCreateDev(v11, 0, 0LL, (__int64)&v23);
          if ( v10 >= 0 )
          {
            v15 = v23;
            *(_DWORD *)(v23 + 184) |= 1u;
            v10 = rimOnPnpArrived(v11, v15, a4);
            if ( v10 >= 0 )
            {
              rimDoRimDevChangeCallback(v11, v15, 2LL);
              if ( a5 )
              {
                v16 = a6;
                if ( a6 >= W32UserProbeAddress )
                  v16 = W32UserProbeAddress;
                *v16 = *(_QWORD *)(v15 + 16);
              }
              else
              {
                *a6 = *(_QWORD *)(v15 + 16);
              }
            }
            if ( v10 < 0 )
              RIMFreeDev(v11, v15);
          }
        }
        if ( DestinationString.Buffer )
          Win32FreePool();
        goto LABEL_35;
      }
      v10 = -1073741637;
      v17 = 35;
    }
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      3u,
      v17,
      (__int64)&WPP_dd9f0c7a0f42e4329fa71b586c89d33f_Traceguids);
LABEL_35:
    RIMUnlockExclusive((__int64)v11 + 96);
    ObfDereferenceObject(v11);
  }
  LODWORD(v19) = v10;
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    4u,
    0x25u,
    (__int64)&WPP_dd9f0c7a0f42e4329fa71b586c89d33f_Traceguids,
    v19);
  return (unsigned int)v10;
}
