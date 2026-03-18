/*
 * XREFs of rimNotifyPointerDeviceChangeClients @ 0x1C00CFEC0
 * Callers:
 *     rimSetPointerDeviceDisplayConfig @ 0x1C00094C8 (rimSetPointerDeviceDisplayConfig.c)
 * Callees:
 *     IsPostPointerEventMessageSupported_0 @ 0x1C0002EC8 (IsPostPointerEventMessageSupported_0.c)
 *     PostPointerEventMessage_0 @ 0x1C0002ED0 (PostPointerEventMessage_0.c)
 *     WPP_RECORDER_SF_ @ 0x1C0046B20 (WPP_RECORDER_SF_.c)
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
  if ( a1[191] != v4 )
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
  if ( a1[192] != v12 )
  {
    v13 = v12 - 2;
    if ( v13 )
    {
      v14 = v13 - 1;
      if ( v14 )
      {
        if ( v14 == 1 )
          v5 |= 0x800u;
        else
          WPP_RECORDER_SF_(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            3u,
            3u,
            0xAu,
            (__int64)&WPP_50b46ce6803749bc9aaa05a2c0feb581_Traceguids);
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
  if ( a1[201] != a3[3] || a1[202] != a3[4] )
    v5 |= 0x400u;
  result = *a3;
  if ( a1[198] != (_DWORD)result || (result = a3[1], a1[199] != (_DWORD)result) )
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
