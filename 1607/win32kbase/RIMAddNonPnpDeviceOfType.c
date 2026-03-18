/*
 * XREFs of RIMAddNonPnpDeviceOfType @ 0x1C0009D90
 * Callers:
 *     <none>
 * Callees:
 *     RIMFreeDev @ 0x1C000B268 (RIMFreeDev.c)
 *     rimOnPnpArrived @ 0x1C000C7E8 (rimOnPnpArrived.c)
 *     RIMCreateDev @ 0x1C000E2BC (RIMCreateDev.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C00107E0 (RawInputManagerObjectResolveHandle.c)
 *     DeviceTypeToRimInputType @ 0x1C0010A30 (DeviceTypeToRimInputType.c)
 *     WPP_RECORDER_SF_D @ 0x1C00128BC (WPP_RECORDER_SF_D.c)
 *     RIMUnlockExclusive @ 0x1C0012A60 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x1C0012A80 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_ @ 0x1C0012AB0 (WPP_RECORDER_SF_.c)
 *     Win32AllocPool @ 0x1C0034690 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 */

__int64 __fastcall RIMAddNonPnpDeviceOfType(__int64 a1, ULONGLONG a2, unsigned int a3, char a4, _QWORD *a5)
{
  ULONGLONG v7; // rsi
  __int64 v9; // r8
  int v10; // edx
  int v11; // ebx
  char *v12; // rdi
  int v13; // edx
  int v14; // ecx
  WCHAR *v15; // rdx
  unsigned __int64 v16; // r8
  __int64 v17; // rsi
  _QWORD *v18; // rcx
  int v19; // r9d
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
    a2,
    4,
    30,
    (__int64)&WPP_8442d383dc1b397dafeae95a129ca68e_Traceguids);
  LOBYTE(v9) = 1;
  v11 = RawInputManagerObjectResolveHandle(a1, 3LL, v9, &Object);
  if ( v11 >= 0 )
  {
    v12 = (char *)Object;
    RIMLockExclusive((char *)Object + 96);
    if ( v12[73] || v12[74] )
    {
      v11 = -1073741637;
      v19 = 32;
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
            v7 = W32UserProbeAddress;
          v14 = *(_DWORD *)v7;
          v21 = *(_DWORD *)v7;
          *(_DWORD *)&SourceString.Length = *(_DWORD *)v7;
          v15 = *(WCHAR **)(v7 + 8);
          SourceString.Buffer = v15;
          if ( ((unsigned __int8)v15 & 1) != 0 )
            ExRaiseDatatypeMisalignment();
          v16 = (unsigned __int64)v15 + (unsigned __int16)v14 + 2;
          if ( v16 >= W32UserProbeAddress
            || (unsigned __int16)v14 > HIWORD(v21)
            || (v14 & 1) != 0
            || v16 <= (unsigned __int64)v15 )
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
          p_DestinationString = (struct _UNICODE_STRING *)v7;
        }
        if ( v11 >= 0 )
        {
          v11 = RIMCreateDev(v12, 0, 0LL, (__int64)&v24);
          if ( v11 >= 0 )
          {
            v17 = v24;
            *(_DWORD *)(v24 + 184) |= 1u;
            v11 = rimOnPnpArrived(v12, v17, -1LL);
            if ( v11 >= 0 )
            {
              if ( a4 )
              {
                v18 = a5;
                if ( (unsigned __int64)a5 >= W32UserProbeAddress )
                  v18 = (_QWORD *)W32UserProbeAddress;
                *v18 = *(_QWORD *)(v17 + 16);
              }
              else
              {
                *a5 = *(_QWORD *)(v17 + 16);
              }
            }
            if ( v11 < 0 )
              RIMFreeDev(v12, v17);
          }
        }
        if ( DestinationString.Buffer )
          Win32FreePool(DestinationString.Buffer);
        goto LABEL_35;
      }
      v11 = -1073741637;
      v19 = 31;
    }
    LOBYTE(v13) = 3;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v13,
      3,
      v19,
      (__int64)&WPP_8442d383dc1b397dafeae95a129ca68e_Traceguids);
LABEL_35:
    RIMUnlockExclusive(v12 + 96);
    ObfDereferenceObject(v12);
  }
  LOBYTE(v10) = 3;
  WPP_RECORDER_SF_D(
    WPP_GLOBAL_Control->DeviceExtension,
    v10,
    4,
    33,
    (__int64)&WPP_8442d383dc1b397dafeae95a129ca68e_Traceguids,
    v11);
  return (unsigned int)v11;
}
