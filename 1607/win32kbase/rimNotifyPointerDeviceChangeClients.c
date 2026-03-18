/*
 * XREFs of rimNotifyPointerDeviceChangeClients @ 0x1C00D44CC
 * Callers:
 *     rimSetPointerDeviceDisplayConfig @ 0x1C00083A8 (rimSetPointerDeviceDisplayConfig.c)
 * Callees:
 *     IsPostPointerEventMessageSupported_0 @ 0x1C0002EA8 (IsPostPointerEventMessageSupported_0.c)
 *     PostPointerEventMessage_0 @ 0x1C0002EB0 (PostPointerEventMessage_0.c)
 *     WPP_RECORDER_SF_ @ 0x1C0012AB0 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall rimNotifyPointerDeviceChangeClients(_DWORD *a1, __int64 a2, unsigned int *a3, int a4)
{
  int v4; // r10d
  int v5; // ebx
  int v9; // r10d
  int v10; // r10d
  int v11; // r10d
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  __int64 result; // rax

  v4 = *(_DWORD *)(a2 + 20);
  v5 = 0;
  if ( a1[183] != v4 )
  {
    v9 = v4 - 1;
    if ( v9 )
    {
      v10 = v9 - 1;
      if ( v10 )
      {
        v11 = v10 - 1;
        if ( v11 )
        {
          if ( v11 == 1 )
            v5 = 32;
        }
        else
        {
          v5 = 16;
        }
      }
      else
      {
        v5 = 8;
      }
    }
    else
    {
      v5 = 4;
    }
  }
  v12 = *(_DWORD *)(a2 + 24);
  if ( a1[184] != v12 )
  {
    v13 = v12 - 2;
    if ( v13 )
    {
      v14 = v13 - 1;
      if ( v14 )
      {
        if ( v14 == 1 )
        {
          v5 |= 0x800u;
        }
        else
        {
          LOBYTE(a2) = 3;
          WPP_RECORDER_SF_(
            WPP_GLOBAL_Control->DeviceExtension,
            a2,
            3,
            10,
            (__int64)&WPP_c96a4b6ea92639e1a4a8c71189e6796b_Traceguids);
        }
      }
      else
      {
        v5 |= 0x40u;
      }
    }
    else
    {
      v5 |= 0x80u;
    }
  }
  if ( a1[193] != a3[3] || a1[194] != a3[4] )
    v5 |= 0x400u;
  result = *a3;
  if ( a1[190] != (_DWORD)result || (result = a3[1], a1[191] != (_DWORD)result) )
    v5 |= 0x200u;
  if ( a4 )
    v5 |= 0x100u;
  if ( v5 )
  {
    result = IsPostPointerEventMessageSupported_0();
    if ( (int)result >= 0 )
      return PostPointerEventMessage_0();
  }
  return result;
}
