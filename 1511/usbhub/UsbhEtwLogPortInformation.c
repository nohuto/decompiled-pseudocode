/*
 * XREFs of UsbhEtwLogPortInformation @ 0x1C000E9A0
 * Callers:
 *     UsbhEtwRundown @ 0x1C00092A8 (UsbhEtwRundown.c)
 *     UsbhGetExtendedHubInformation @ 0x1C0022C30 (UsbhGetExtendedHubInformation.c)
 * Callees:
 *     UsbhEtwWrite @ 0x1C000F240 (UsbhEtwWrite.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     __security_check_cookie @ 0x1C0028D40 (__security_check_cookie.c)
 *     UsbhTrapFatal_Dbg @ 0x1C003CDA0 (UsbhTrapFatal_Dbg.c)
 */

void __fastcall UsbhEtwLogPortInformation(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // r15
  unsigned __int16 v6; // di
  __int64 v7; // r12
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rcx
  _DWORD *v13; // rdx
  _DWORD *v14; // rdx
  _DWORD *v15; // rdx

  if ( dword_1C0067650 )
  {
    v2 = FdoExt(a1);
    v4 = 1LL;
    v5 = v2;
    v6 = 1;
    v7 = *(_QWORD *)(v2 + 3016);
    while ( 1 )
    {
      if ( !a1 )
        UsbhTrapFatal_Dbg(0LL, 0LL, v3, 1LL);
      v8 = *(_QWORD *)(a1 + 64);
      if ( !v8 )
        UsbhTrapFatal_Dbg(a1, 0LL, v3, 1LL);
      if ( *(_DWORD *)v8 != 541218120 )
        UsbhTrapFatal_Dbg(a1, v8, v3, 1LL);
      if ( v6 > *(unsigned __int8 *)(v8 + 2938) )
        break;
      if ( (UsbhLogMask & 8) != 0 )
      {
        v9 = *(_QWORD *)(v8 + 888)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v8 + 880)) & *(_DWORD *)(v8 + 884));
        *(_DWORD *)v9 = 1413771367;
        *(_QWORD *)(v9 + 16) = v6;
        *(_QWORD *)(v9 + 8) = 0LL;
        *(_QWORD *)(v9 + 24) = 0LL;
      }
      if ( v6 )
      {
        v10 = *(_QWORD *)(a1 + 64);
        if ( !v10 )
          UsbhTrapFatal_Dbg(a1, 0LL, v3, 1LL);
        if ( *(_DWORD *)v10 != 541218120 )
          UsbhTrapFatal_Dbg(a1, v10, v3, 1LL);
        if ( v6 <= *(unsigned __int8 *)(v10 + 2938) )
        {
          v11 = *(_QWORD *)(v10 + 3056);
          if ( v11 )
          {
            v3 = v11 + 2928LL * (v6 - 1);
            if ( (UsbhLogMask & 8) != 0 )
            {
              v12 = *(_QWORD *)(v10 + 888)
                  + 32LL
                  * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v10 + 880)) & *(_DWORD *)(v10 + 884));
              *(_DWORD *)v12 = 1044672615;
              *(_QWORD *)(v12 + 16) = v6;
              *(_QWORD *)(v12 + 8) = 0LL;
              *(_QWORD *)(v12 + 24) = v3;
            }
          }
        }
      }
      if ( dword_1C0067650 )
      {
        v13 = *(_DWORD **)(a1 + 64);
        if ( !v13 )
          UsbhTrapFatal_Dbg(a1, 0LL, v3, 1LL);
        if ( *v13 != 541218120 )
          UsbhTrapFatal_Dbg(a1, v13, v3, 1LL);
        UsbhEtwWrite(&USBHUB_ETW_EVENT_HUB_PORT_ATTRIBUTES, 0LL);
        v4 = 1LL;
      }
      if ( *(_QWORD *)(v5 + 3024) )
      {
        if ( (*(_DWORD *)(v7 + 4LL * v6) & 0x20) != 0 && dword_1C0067650 )
        {
          v14 = *(_DWORD **)(a1 + 64);
          if ( !v14 )
            UsbhTrapFatal_Dbg(a1, 0LL, v3, 1LL);
          if ( *v14 != 541218120 )
            UsbhTrapFatal_Dbg(a1, v14, v3, 1LL);
          UsbhEtwWrite(&USBHUB_ETW_EVENT_HUB_PORT_ACPI_UPC_VALUE, 0LL);
        }
        if ( (*(_DWORD *)(v7 + 4LL * v6) & 0x40) != 0 )
        {
          v3 = 28LL * v6 + *(_QWORD *)(v5 + 3024) + 12LL;
          if ( dword_1C0067650 )
          {
            v15 = *(_DWORD **)(a1 + 64);
            if ( !v15 )
              UsbhTrapFatal_Dbg(a1, 0LL, v3, v4);
            if ( *v15 != 541218120 )
              UsbhTrapFatal_Dbg(a1, v15, v3, v4);
            UsbhEtwWrite(&USBHUB_ETW_EVENT_HUB_PORT_ACPI_PLD_VALUE, 0LL);
          }
        }
      }
      ++v6;
      v4 = 1LL;
    }
  }
}
