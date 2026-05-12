/*
 * XREFs of StorpGetExtendedTable @ 0x1C002F1FC
 * Callers:
 *     StorPortNotification @ 0x1C0002580 (StorPortNotification.c)
 * Callees:
 *     WPP_SF_ @ 0x1C002AE28 (WPP_SF_.c)
 */

__int128 *__fastcall StorpGetExtendedTable(__int64 a1, __int64 *a2)
{
  __int128 *result; // rax
  PDEVICE_OBJECT v5; // rcx
  __int64 v6; // rcx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = (__int128 *)&retaddr;
  v5 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
  {
    if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      result = (__int128 *)WPP_SF_(
                             (__int64)WPP_GLOBAL_Control->AttachedDevice,
                             0xAu,
                             (__int64)&WPP_adf5a490639137350fe391398fd0549f_Traceguids);
      v5 = WPP_GLOBAL_Control;
    }
    if ( v5 != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
    {
      if ( (HIDWORD(v5->Timer) & 0x100) != 0 && BYTE1(v5->Timer) >= 2u )
      {
        result = (__int128 *)WPP_SF_(
                               (__int64)v5->AttachedDevice,
                               0xBu,
                               (__int64)&WPP_adf5a490639137350fe391398fd0549f_Traceguids);
        v5 = WPP_GLOBAL_Control;
      }
      if ( v5 != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
      {
        if ( (HIDWORD(v5->Timer) & 0x100) != 0 && BYTE1(v5->Timer) >= 2u )
        {
          result = (__int128 *)WPP_SF_(
                                 (__int64)v5->AttachedDevice,
                                 0xCu,
                                 (__int64)&WPP_adf5a490639137350fe391398fd0549f_Traceguids);
          v5 = WPP_GLOBAL_Control;
        }
        if ( v5 != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
        {
          if ( (HIDWORD(v5->Timer) & 0x100) != 0 && BYTE1(v5->Timer) >= 2u )
          {
            result = (__int128 *)WPP_SF_(
                                   (__int64)v5->AttachedDevice,
                                   0xDu,
                                   (__int64)&WPP_adf5a490639137350fe391398fd0549f_Traceguids);
            v5 = WPP_GLOBAL_Control;
          }
          if ( v5 != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && (HIDWORD(v5->Timer) & 0x100) != 0 && BYTE1(v5->Timer) >= 2u )
          {
            result = (__int128 *)WPP_SF_(
                                   (__int64)v5->AttachedDevice,
                                   0xEu,
                                   (__int64)&WPP_adf5a490639137350fe391398fd0549f_Traceguids);
            v5 = WPP_GLOBAL_Control;
          }
        }
      }
    }
  }
  if ( a2 )
  {
    if ( a1 )
    {
      result = *(__int128 **)(a1 - 16);
      v6 = *(_QWORD *)result + 4648LL;
      *(_OWORD *)v6 = StorportExtensionTable;
      *(_OWORD *)(v6 + 16) = xmmword_1C004F570;
      *(_OWORD *)(v6 + 32) = xmmword_1C004F580;
      *(_OWORD *)(v6 + 48) = xmmword_1C004F590;
      *(_OWORD *)(v6 + 64) = xmmword_1C004F5A0;
      *(_QWORD *)(v6 + 80) = qword_1C004F5B0;
      *a2 = v6;
    }
    else
    {
      result = &StorportExtensionTable;
      *a2 = (__int64)&StorportExtensionTable;
    }
  }
  else if ( v5 != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && (HIDWORD(v5->Timer) & 0x100) != 0 && BYTE1(v5->Timer) >= 2u )
  {
    return (__int128 *)WPP_SF_(
                         (__int64)v5->AttachedDevice,
                         0xFu,
                         (__int64)&WPP_adf5a490639137350fe391398fd0549f_Traceguids);
  }
  return result;
}
