/*
 * XREFs of RIMIDECreateDeviceInstancePath @ 0x1C00D5244
 * Callers:
 *     RIMIDECreatePseudoHIDDevice @ 0x1C00D5BB4 (RIMIDECreatePseudoHIDDevice.c)
 *     RIMIDECreatePseudoMouseOrKeyboardDevice @ 0x1C00D5DD8 (RIMIDECreatePseudoMouseOrKeyboardDevice.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C00128BC (WPP_RECORDER_SF_D.c)
 *     __security_check_cookie @ 0x1C0089A80 (__security_check_cookie.c)
 *     RtlUnicodeStringPrintf @ 0x1C00D7474 (RtlUnicodeStringPrintf.c)
 */

__int64 __fastcall RIMIDECreateDeviceInstancePath(int a1, unsigned __int16 a2, unsigned __int16 a3, __int64 a4)
{
  unsigned int v5; // ebx
  unsigned __int16 v6; // r9
  NTSTATUS v7; // eax
  PWSTR Buffer; // r9
  PWSTR v9; // r8
  __int64 v10; // rax
  int v12; // [rsp+28h] [rbp-140h]
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-138h] BYREF
  char v14; // [rsp+40h] [rbp-128h] BYREF

  *(_DWORD *)&DestinationString.Length = 0x1000000;
  DestinationString.Buffer = (PWSTR)&v14;
  v5 = -1073741823;
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      v7 = RtlUnicodeStringPrintf(
             &DestinationString,
             L"\\??\\Microsoft Keyboard RID\\%u",
             (unsigned int)dword_1C012127C);
    }
    else
    {
      if ( a1 != 2 )
      {
        v6 = 14;
        v12 = a1;
LABEL_5:
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          2u,
          v6,
          (__int64)&WPP_7fdc14de89e334702abda85b7a26ab23_Traceguids,
          v12,
          *(_QWORD *)&DestinationString.Length);
        return v5;
      }
      v7 = RtlUnicodeStringPrintf(
             &DestinationString,
             L"\\??\\Microsoft HID RID\\%04X_%04X\\%u",
             a2,
             a3,
             dword_1C012127C);
    }
  }
  else
  {
    v7 = RtlUnicodeStringPrintf(&DestinationString, L"\\??\\Microsoft Mouse RID\\%u", (unsigned int)dword_1C012127C);
  }
  v5 = v7;
  if ( v7 < 0 )
  {
    v6 = 15;
    v12 = v7;
    goto LABEL_5;
  }
  Buffer = DestinationString.Buffer;
  *(_DWORD *)a4 = 0;
  *(_QWORD *)(a4 + 8) = 0LL;
  if ( Buffer )
  {
    v9 = Buffer;
    v10 = 0x7FFFLL;
    do
    {
      if ( !*v9 )
        break;
      ++v9;
      --v10;
    }
    while ( v10 );
    if ( !v10 )
    {
      v5 = -1073741811;
      v6 = 16;
      v12 = -1073741811;
      goto LABEL_5;
    }
    *(_QWORD *)(a4 + 8) = Buffer;
    *(_WORD *)a4 = 2 * (0x7FFF - v10);
    *(_WORD *)(a4 + 2) = 2 * (0x7FFF - v10) + 2;
  }
  v5 = 0;
  ++dword_1C012127C;
  return v5;
}
