/*
 * XREFs of RIMIDE_InitializeDeviceInjection @ 0x1C00C790C
 * Callers:
 *     NtUserInitializeInputDeviceInjection @ 0x1C00ABD50 (NtUserInitializeInputDeviceInjection.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
 *     RIMIDECreatePseudoHIDDevice @ 0x1C00C55DC (RIMIDECreatePseudoHIDDevice.c)
 *     ?BuildReportDescriptor@@YAHGGPEAUtagUSAGE_PROPERTIES@@KKPEAU_HIDP_DEVICE_DESC@@@Z @ 0x1C00C732C (-BuildReportDescriptor@@YAHGGPEAUtagUSAGE_PROPERTIES@@KKPEAU_HIDP_DEVICE_DESC@@@Z.c)
 */

__int64 __fastcall RIMIDE_InitializeDeviceInjection(
        unsigned __int16 a1,
        __int16 a2,
        struct tagUSAGE_PROPERTIES *a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        __int64 *a7)
{
  unsigned int v7; // ebx
  int v9; // edi
  unsigned int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rax
  _HIDP_DEVICE_DESC v14; // [rsp+40h] [rbp-71h] BYREF
  _HIDP_DEVICE_DESC Object; // [rsp+80h] [rbp-31h] BYREF

  v7 = 0;
  *a7 = 0LL;
  v9 = 1;
  v10 = 1;
  if ( a1 == 13 )
  {
    if ( a2 == 4 )
    {
      v9 = 10;
      v10 = 10;
    }
    if ( a2 == 5 )
    {
      v10 = 5;
      v9 = 5;
    }
  }
  if ( (unsigned int)BuildReportDescriptor(a1, a2, a3, a4, v10) )
  {
    v14 = Object;
    v12 = RIMIDECreatePseudoHIDDevice(v11, a2, v9, a6, a5, &Object, &v14, 1);
    if ( v12 )
    {
      *a7 = v12;
      return 1;
    }
  }
  return v7;
}
