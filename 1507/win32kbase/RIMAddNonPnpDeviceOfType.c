/*
 * XREFs of RIMAddNonPnpDeviceOfType @ 0x1C0084B00
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
 *     rimOnPnpArrived @ 0x1C00769E4 (rimOnPnpArrived.c)
 *     DeviceTypeToRimInputType @ 0x1C0077280 (DeviceTypeToRimInputType.c)
 */

__int64 __fastcall RIMAddNonPnpDeviceOfType(void *a1, struct _UNICODE_STRING *a2, int a3, char a4, _QWORD *a5)
{
  int v9; // ebx
  PVOID v10; // rdi
  int v11; // ecx
  WCHAR *Buffer; // rdx
  unsigned __int64 v13; // r8
  __int64 v14; // rsi
  _QWORD *v15; // rcx
  unsigned __int16 v16; // r9
  __int64 v18; // [rsp+28h] [rbp-80h]
  int v19; // [rsp+44h] [rbp-64h]
  PVOID Object; // [rsp+48h] [rbp-60h] BYREF
  struct _UNICODE_STRING *p_DestinationString; // [rsp+50h] [rbp-58h]
  __int64 v22; // [rsp+58h] [rbp-50h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-48h] BYREF
  UNICODE_STRING SourceString; // [rsp+70h] [rbp-38h] BYREF

  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    4u,
    0x1Eu,
    (__int64)&WPP_dd9f0c7a0f42e4329fa71b586c89d33f_Traceguids);
  v9 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v9 >= 0 )
  {
    v10 = Object;
    RIMLockExclusive((__int64)Object + 96);
    if ( *((_BYTE *)v10 + 73) || *((_BYTE *)v10 + 74) )
    {
      v9 = -1073741637;
      v16 = 32;
    }
    else
    {
      if ( ((unsigned int)DeviceTypeToRimInputType(a3) & *((_DWORD *)v10 + 19)) != 0 )
      {
        p_DestinationString = 0LL;
        *(_QWORD *)&DestinationString.Length = 0LL;
        DestinationString.Buffer = 0LL;
        if ( a4 )
        {
          if ( a2 >= W32UserProbeAddress )
            a2 = (struct _UNICODE_STRING *)W32UserProbeAddress;
          v11 = *(_DWORD *)&a2->Length;
          v19 = *(_DWORD *)&a2->Length;
          *(_DWORD *)&SourceString.Length = *(_DWORD *)&a2->Length;
          Buffer = a2->Buffer;
          SourceString.Buffer = Buffer;
          if ( ((unsigned __int8)Buffer & 1) != 0 )
            ExRaiseDatatypeMisalignment();
          v13 = (unsigned __int64)Buffer + (unsigned __int16)v11 + 2;
          if ( v13 >= (unsigned __int64)W32UserProbeAddress
            || (unsigned __int16)v11 > HIWORD(v19)
            || (v11 & 1) != 0
            || v13 <= (unsigned __int64)Buffer )
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
            v9 = -1073741801;
          }
          v10 = Object;
        }
        else
        {
          p_DestinationString = a2;
        }
        if ( v9 >= 0 )
        {
          v9 = RIMCreateDev(v10, a3, (__int64)p_DestinationString, 1, 0, 0LL, &v22);
          if ( v9 >= 0 )
          {
            v14 = v22;
            *(_DWORD *)(v22 + 184) |= 1u;
            v9 = rimOnPnpArrived((__int64)v10, v14, (void *)0xFFFFFFFFFFFFFFFFLL);
            if ( v9 >= 0 )
            {
              if ( a4 )
              {
                v15 = a5;
                if ( a5 >= W32UserProbeAddress )
                  v15 = W32UserProbeAddress;
                *v15 = *(_QWORD *)(v14 + 16);
              }
              else
              {
                *a5 = *(_QWORD *)(v14 + 16);
              }
            }
            if ( v9 < 0 )
              RIMFreeDev((__int64)v10, v14);
          }
        }
        if ( DestinationString.Buffer )
          Win32FreePool();
        goto LABEL_35;
      }
      v9 = -1073741637;
      v16 = 31;
    }
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      3u,
      v16,
      (__int64)&WPP_dd9f0c7a0f42e4329fa71b586c89d33f_Traceguids);
LABEL_35:
    RIMUnlockExclusive((__int64)v10 + 96);
    ObfDereferenceObject(v10);
  }
  LODWORD(v18) = v9;
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    4u,
    0x21u,
    (__int64)&WPP_dd9f0c7a0f42e4329fa71b586c89d33f_Traceguids,
    v18);
  return (unsigned int)v9;
}
