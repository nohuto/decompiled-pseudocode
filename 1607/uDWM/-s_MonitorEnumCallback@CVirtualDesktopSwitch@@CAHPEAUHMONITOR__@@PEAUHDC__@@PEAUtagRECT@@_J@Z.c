/*
 * XREFs of ?s_MonitorEnumCallback@CVirtualDesktopSwitch@@CAHPEAUHMONITOR__@@PEAUHDC__@@PEAUtagRECT@@_J@Z @ 0x180095EB0
 * Callers:
 *     <none>
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002AD08 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CVirtualDesktopSwitch::s_MonitorEnumCallback(HMONITOR a1, HDC a2, LPRECT a3, __int64 a4)
{
  _QWORD *v4; // rcx
  unsigned int v5; // ebx
  __int64 v6; // rax
  unsigned int v7; // edx
  int v9; // eax

  v4 = (_QWORD *)(a4 + 152);
  v5 = 0;
  v6 = *(unsigned int *)(a4 + 176);
  v7 = v6 + 1;
  if ( (int)v6 + 1 >= (unsigned int)v6 )
  {
    if ( v7 > *(_DWORD *)(a4 + 172) )
    {
      v9 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v4, 0x10u, 1, a3);
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v9, 0xC0u);
        return v5;
      }
    }
    else
    {
      *(struct tagRECT *)(*v4 + 16 * v6) = *a3;
      *(_DWORD *)(a4 + 176) = v7;
    }
    return 1;
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
  }
  return v5;
}
