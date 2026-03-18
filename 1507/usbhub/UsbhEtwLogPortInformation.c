/*
 * XREFs of UsbhEtwLogPortInformation @ 0x1C001AEB0
 * Callers:
 *     UsbhGetExtendedHubInformation @ 0x1C001C710 (UsbhGetExtendedHubInformation.c)
 *     UsbhEtwRundown @ 0x1C001DE28 (UsbhEtwRundown.c)
 * Callees:
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     UsbhEtwWrite @ 0x1C001B750 (UsbhEtwWrite.c)
 *     __security_check_cookie @ 0x1C0029D80 (__security_check_cookie.c)
 *     UsbhTrapFatal_Dbg @ 0x1C003CB70 (UsbhTrapFatal_Dbg.c)
 */

void __fastcall UsbhEtwLogPortInformation(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v5; // rax
  __int64 v6; // r8
  __int64 v7; // r9
  _DWORD *v8; // r15
  unsigned __int16 v9; // di
  __int64 v10; // r12
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rcx
  _DWORD *v16; // rdx
  _DWORD *v17; // rdx
  _DWORD *v18; // rdx

  if ( dword_1C0066650 )
  {
    v5 = FdoExt(a1, a2, a3, a4);
    v7 = 1LL;
    v8 = v5;
    v9 = 1;
    v10 = *((_QWORD *)v5 + 377);
    while ( 1 )
    {
      if ( !a1 )
        UsbhTrapFatal_Dbg(0LL, 0LL, v6, 1LL);
      v11 = *(_QWORD *)(a1 + 64);
      if ( !v11 )
        UsbhTrapFatal_Dbg(a1, 0LL, v6, 1LL);
      if ( *(_DWORD *)v11 != 541218120 )
        UsbhTrapFatal_Dbg(a1, v11, v6, 1LL);
      if ( v9 > *(unsigned __int8 *)(v11 + 2938) )
        break;
      if ( (UsbhLogMask & 8) != 0 )
      {
        v12 = *(_QWORD *)(v11 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v11 + 880)) & *(_DWORD *)(v11 + 884));
        *(_DWORD *)v12 = 1413771367;
        *(_QWORD *)(v12 + 16) = v9;
        *(_QWORD *)(v12 + 8) = 0LL;
        *(_QWORD *)(v12 + 24) = 0LL;
      }
      if ( v9 )
      {
        v13 = *(_QWORD *)(a1 + 64);
        if ( !v13 )
          UsbhTrapFatal_Dbg(a1, 0LL, v6, 1LL);
        if ( *(_DWORD *)v13 != 541218120 )
          UsbhTrapFatal_Dbg(a1, v13, v6, 1LL);
        if ( v9 <= *(unsigned __int8 *)(v13 + 2938) )
        {
          v14 = *(_QWORD *)(v13 + 3056);
          if ( v14 )
          {
            v6 = v14 + 2928LL * (v9 - 1);
            if ( (UsbhLogMask & 8) != 0 )
            {
              v15 = *(_QWORD *)(v13 + 888)
                  + 32LL
                  * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v13 + 880)) & *(_DWORD *)(v13 + 884));
              *(_DWORD *)v15 = 1044672615;
              *(_QWORD *)(v15 + 16) = v9;
              *(_QWORD *)(v15 + 8) = 0LL;
              *(_QWORD *)(v15 + 24) = v6;
            }
          }
        }
      }
      if ( dword_1C0066650 )
      {
        v16 = *(_DWORD **)(a1 + 64);
        if ( !v16 )
          UsbhTrapFatal_Dbg(a1, 0LL, v6, 1LL);
        if ( *v16 != 541218120 )
          UsbhTrapFatal_Dbg(a1, v16, v6, 1LL);
        UsbhEtwWrite(&USBHUB_ETW_EVENT_HUB_PORT_ATTRIBUTES, 0LL);
        v7 = 1LL;
      }
      if ( *((_QWORD *)v8 + 378) )
      {
        if ( (*(_DWORD *)(v10 + 4LL * v9) & 0x20) != 0 && dword_1C0066650 )
        {
          v17 = *(_DWORD **)(a1 + 64);
          if ( !v17 )
            UsbhTrapFatal_Dbg(a1, 0LL, v6, 1LL);
          if ( *v17 != 541218120 )
            UsbhTrapFatal_Dbg(a1, v17, v6, 1LL);
          UsbhEtwWrite(&USBHUB_ETW_EVENT_HUB_PORT_ACPI_UPC_VALUE, 0LL);
        }
        if ( (*(_DWORD *)(v10 + 4LL * v9) & 0x40) != 0 )
        {
          v6 = 28LL * v9 + *((_QWORD *)v8 + 378) + 12LL;
          if ( dword_1C0066650 )
          {
            v18 = *(_DWORD **)(a1 + 64);
            if ( !v18 )
              UsbhTrapFatal_Dbg(a1, 0LL, v6, v7);
            if ( *v18 != 541218120 )
              UsbhTrapFatal_Dbg(a1, v18, v6, v7);
            UsbhEtwWrite(&USBHUB_ETW_EVENT_HUB_PORT_ACPI_PLD_VALUE, 0LL);
          }
        }
      }
      ++v9;
      v7 = 1LL;
    }
  }
}
