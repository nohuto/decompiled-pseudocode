/*
 * XREFs of RIMAddInjectionDeviceOfType @ 0x1C00C19A0
 * Callers:
 *     RIMIDECreatePseudoHIDDevice @ 0x1C00C64DC (RIMIDECreatePseudoHIDDevice.c)
 *     RIMIDECreatePseudoMouseOrKeyboardDevice @ 0x1C00C66E8 (RIMIDECreatePseudoMouseOrKeyboardDevice.c)
 * Callees:
 *     RIMFreeDev @ 0x1C000F020 (RIMFreeDev.c)
 *     DeviceTypeToRimInputType @ 0x1C000FDE0 (DeviceTypeToRimInputType.c)
 *     RIMCreateDev @ 0x1C0011060 (RIMCreateDev.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C00115F0 (RawInputManagerObjectResolveHandle.c)
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     Win32AllocPool @ 0x1C0020C90 (Win32AllocPool.c)
 *     WPP_RECORDER_SF_D @ 0x1C004695C (WPP_RECORDER_SF_D.c)
 *     RIMUnlockExclusive @ 0x1C0046AD0 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x1C0046AF0 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_ @ 0x1C0046B20 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C0088A80 (__security_check_cookie.c)
 */

__int64 __fastcall RIMAddInjectionDeviceOfType(
        void *a1,
        const UNICODE_STRING *a2,
        int a3,
        __int64 a4,
        char a5,
        _QWORD *a6)
{
  _QWORD *v10; // r14
  int v12; // ebx
  PVOID v13; // rdi
  int v14; // edx
  int v15; // edx
  WCHAR *Buffer; // rcx
  unsigned __int64 v17; // r8
  __int64 v18; // rdx
  unsigned __int16 v19; // r9
  __int64 v20; // [rsp+28h] [rbp-150h]
  PVOID Object; // [rsp+48h] [rbp-130h] BYREF
  const UNICODE_STRING *p_DestinationString; // [rsp+50h] [rbp-128h]
  int v24; // [rsp+58h] [rbp-120h]
  __int64 v25; // [rsp+60h] [rbp-118h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+68h] [rbp-110h] BYREF
  int v27; // [rsp+78h] [rbp-100h]
  _QWORD *v28; // [rsp+80h] [rbp-F8h]
  UNICODE_STRING SourceString; // [rsp+88h] [rbp-F0h] BYREF
  _OWORD v30[8]; // [rsp+A0h] [rbp-D8h] BYREF
  __int64 v31; // [rsp+120h] [rbp-58h]

  v24 = a3;
  v10 = a6;
  v28 = a6;
  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    4u,
    0x26u,
    (__int64)&WPP_b7afe0d2946a99936bddfefe20d700ac_Traceguids);
  if ( !a4 )
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      3u,
      0x27u,
      (__int64)&WPP_b7afe0d2946a99936bddfefe20d700ac_Traceguids);
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      4u,
      0x28u,
      (__int64)&WPP_b7afe0d2946a99936bddfefe20d700ac_Traceguids,
      -1073741811);
    return 3221225485LL;
  }
  v12 = RawInputManagerObjectResolveHandle(a1, 3u, 0, &Object);
  if ( v12 >= 0 )
  {
    v13 = Object;
    RIMLockExclusive((__int64)Object + 96);
    if ( *((_BYTE *)v13 + 73) || *((_BYTE *)v13 + 74) )
    {
      v12 = -1073741637;
      v19 = 42;
    }
    else
    {
      if ( ((unsigned int)DeviceTypeToRimInputType(a3) & *((_DWORD *)v13 + 19)) != 0 )
      {
        p_DestinationString = 0LL;
        *(_QWORD *)&DestinationString.Length = 0LL;
        DestinationString.Buffer = 0LL;
        if ( a5 )
        {
          if ( a2 >= W32UserProbeAddress )
            a2 = (const UNICODE_STRING *)W32UserProbeAddress;
          v15 = *(_DWORD *)&a2->Length;
          v27 = v15;
          *(_DWORD *)&SourceString.Length = v15;
          Buffer = a2->Buffer;
          SourceString.Buffer = Buffer;
          if ( ((unsigned __int8)Buffer & 1) != 0 )
            ExRaiseDatatypeMisalignment();
          v17 = (unsigned __int64)Buffer + (unsigned __int16)v15 + 2;
          if ( v17 >= (unsigned __int64)W32UserProbeAddress
            || (unsigned __int16)v15 > HIWORD(v27)
            || v17 <= (unsigned __int64)Buffer )
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
            v12 = -1073741801;
          }
          v13 = Object;
          v14 = a3;
        }
        else
        {
          p_DestinationString = a2;
          v30[0] = *(_OWORD *)a4;
          v30[1] = *(_OWORD *)(a4 + 16);
          v30[2] = *(_OWORD *)(a4 + 32);
          v30[3] = *(_OWORD *)(a4 + 48);
          v30[4] = *(_OWORD *)(a4 + 64);
          v30[5] = *(_OWORD *)(a4 + 80);
          v30[6] = *(_OWORD *)(a4 + 96);
          v30[7] = *(_OWORD *)(a4 + 112);
          v31 = *(_QWORD *)(a4 + 128);
          v14 = a3;
        }
        if ( v12 >= 0 )
        {
          v12 = RIMCreateDev(v13, v14, p_DestinationString, 0, 1, (__int64)v30, &v25);
          if ( v12 >= 0 )
          {
            if ( a5 )
            {
              v18 = v25;
              if ( a6 >= W32UserProbeAddress )
                v10 = W32UserProbeAddress;
              *v10 = *(_QWORD *)(v25 + 16);
            }
            else
            {
              v18 = v25;
              *a6 = *(_QWORD *)(v25 + 16);
            }
            if ( *((_QWORD *)v13 + 101) )
              *(_DWORD *)(v18 + 176) |= 0x8000u;
          }
        }
        if ( DestinationString.Buffer )
          Win32FreePool();
        goto LABEL_35;
      }
      v12 = -1073741637;
      v19 = 41;
    }
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      3u,
      v19,
      (__int64)&WPP_b7afe0d2946a99936bddfefe20d700ac_Traceguids);
LABEL_35:
    RIMUnlockExclusive((__int64)v13 + 96);
    ObfDereferenceObject(v13);
  }
  LODWORD(v20) = v12;
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    4u,
    0x2Bu,
    (__int64)&WPP_b7afe0d2946a99936bddfefe20d700ac_Traceguids,
    v20);
  return (unsigned int)v12;
}
