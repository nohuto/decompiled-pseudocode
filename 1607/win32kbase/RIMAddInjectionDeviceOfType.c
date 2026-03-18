/*
 * XREFs of RIMAddInjectionDeviceOfType @ 0x1C00CE230
 * Callers:
 *     RIMIDECreatePseudoHIDDevice @ 0x1C00D5BB4 (RIMIDECreatePseudoHIDDevice.c)
 *     RIMIDECreatePseudoMouseOrKeyboardDevice @ 0x1C00D5DD8 (RIMIDECreatePseudoMouseOrKeyboardDevice.c)
 * Callees:
 *     RIMFreeDev @ 0x1C000B268 (RIMFreeDev.c)
 *     RIMCreateDev @ 0x1C000E2BC (RIMCreateDev.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C00107E0 (RawInputManagerObjectResolveHandle.c)
 *     DeviceTypeToRimInputType @ 0x1C0010A30 (DeviceTypeToRimInputType.c)
 *     WPP_RECORDER_SF_D @ 0x1C00128BC (WPP_RECORDER_SF_D.c)
 *     RIMUnlockExclusive @ 0x1C0012A60 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x1C0012A80 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_ @ 0x1C0012AB0 (WPP_RECORDER_SF_.c)
 *     Win32AllocPool @ 0x1C0034690 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     __security_check_cookie @ 0x1C0089A80 (__security_check_cookie.c)
 */

__int64 __fastcall RIMAddInjectionDeviceOfType(
        void *a1,
        const UNICODE_STRING *a2,
        int a3,
        __int64 a4,
        char a5,
        _QWORD *a6)
{
  const UNICODE_STRING *v8; // r15
  _QWORD *v10; // r14
  int v11; // edx
  int v13; // ebx
  PVOID v14; // rdi
  int v15; // edx
  char v16; // dl
  int v17; // ecx
  WCHAR *Buffer; // rdx
  unsigned __int64 v19; // r8
  __int64 v20; // rdx
  int v21; // r9d
  __int64 v22; // [rsp+28h] [rbp-150h]
  char v23; // [rsp+44h] [rbp-134h]
  PVOID Object; // [rsp+48h] [rbp-130h] BYREF
  int v25; // [rsp+50h] [rbp-128h]
  int v26; // [rsp+58h] [rbp-120h]
  const UNICODE_STRING *p_DestinationString; // [rsp+60h] [rbp-118h]
  __int64 v28; // [rsp+68h] [rbp-110h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+70h] [rbp-108h] BYREF
  _QWORD *v30; // [rsp+80h] [rbp-F8h]
  UNICODE_STRING SourceString; // [rsp+88h] [rbp-F0h] BYREF
  _OWORD v32[8]; // [rsp+A0h] [rbp-D8h] BYREF
  __int64 v33; // [rsp+120h] [rbp-58h]

  v23 = a3;
  v8 = a2;
  v26 = a3;
  v10 = a6;
  v30 = a6;
  LOBYTE(a2) = 3;
  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    (_DWORD)a2,
    4,
    38,
    (__int64)&WPP_8442d383dc1b397dafeae95a129ca68e_Traceguids);
  if ( !a4 )
  {
    LOBYTE(v11) = 3;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v11,
      3,
      39,
      (__int64)&WPP_8442d383dc1b397dafeae95a129ca68e_Traceguids);
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      4u,
      0x28u,
      (__int64)&WPP_8442d383dc1b397dafeae95a129ca68e_Traceguids,
      -1073741811);
    return 3221225485LL;
  }
  v13 = RawInputManagerObjectResolveHandle(a1, 3u, 0, &Object);
  if ( v13 >= 0 )
  {
    v14 = Object;
    RIMLockExclusive((__int64)Object + 96);
    if ( *((_BYTE *)v14 + 73) || *((_BYTE *)v14 + 74) )
    {
      v13 = -1073741637;
      v21 = 42;
    }
    else
    {
      if ( ((unsigned int)DeviceTypeToRimInputType(a3) & *((_DWORD *)v14 + 19)) != 0 )
      {
        p_DestinationString = 0LL;
        *(_QWORD *)&DestinationString.Length = 0LL;
        DestinationString.Buffer = 0LL;
        if ( a5 )
        {
          if ( (unsigned __int64)v8 >= W32UserProbeAddress )
            v8 = (const UNICODE_STRING *)W32UserProbeAddress;
          v17 = *(_DWORD *)&v8->Length;
          v25 = v17;
          *(_DWORD *)&SourceString.Length = v17;
          Buffer = v8->Buffer;
          SourceString.Buffer = Buffer;
          if ( ((unsigned __int8)Buffer & 1) != 0 )
            ExRaiseDatatypeMisalignment();
          v19 = (unsigned __int64)Buffer + (unsigned __int16)v17 + 2;
          if ( v19 >= W32UserProbeAddress
            || (unsigned __int16)v17 > HIWORD(v25)
            || (v17 & 1) != 0
            || v19 <= (unsigned __int64)Buffer )
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
            v13 = -1073741801;
          }
          v14 = Object;
          v16 = v23;
        }
        else
        {
          p_DestinationString = v8;
          v32[0] = *(_OWORD *)a4;
          v32[1] = *(_OWORD *)(a4 + 16);
          v32[2] = *(_OWORD *)(a4 + 32);
          v32[3] = *(_OWORD *)(a4 + 48);
          v32[4] = *(_OWORD *)(a4 + 64);
          v32[5] = *(_OWORD *)(a4 + 80);
          v32[6] = *(_OWORD *)(a4 + 96);
          v32[7] = *(_OWORD *)(a4 + 112);
          v33 = *(_QWORD *)(a4 + 128);
          v16 = v23;
        }
        if ( v13 >= 0 )
        {
          v13 = RIMCreateDev(v14, v16, p_DestinationString, 0, 1, (__int64)v32, &v28);
          if ( v13 >= 0 )
          {
            if ( a5 )
            {
              v20 = v28;
              if ( (unsigned __int64)a6 >= W32UserProbeAddress )
                v10 = (_QWORD *)W32UserProbeAddress;
              *v10 = *(_QWORD *)(v28 + 16);
            }
            else
            {
              v20 = v28;
              *a6 = *(_QWORD *)(v28 + 16);
            }
            if ( *((_QWORD *)v14 + 95) )
              *(_DWORD *)(v20 + 184) |= 0x8000u;
          }
        }
        if ( DestinationString.Buffer )
          Win32FreePool();
        goto LABEL_36;
      }
      v13 = -1073741637;
      v21 = 41;
    }
    LOBYTE(v15) = 3;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v15,
      3,
      v21,
      (__int64)&WPP_8442d383dc1b397dafeae95a129ca68e_Traceguids);
LABEL_36:
    RIMUnlockExclusive((__int64)v14 + 96);
    ObfDereferenceObject(v14);
  }
  LODWORD(v22) = v13;
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    4u,
    0x2Bu,
    (__int64)&WPP_8442d383dc1b397dafeae95a129ca68e_Traceguids,
    v22);
  return (unsigned int)v13;
}
