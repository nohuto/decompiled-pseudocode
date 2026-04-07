/*
 * XREFs of ?MonitorEnumProc@CDesktopManager@@CAHPEAUHMONITOR__@@PEAUHDC__@@PEAUtagRECT@@_J@Z @ 0x18003F920
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002B384 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

__int64 __fastcall CDesktopManager::MonitorEnumProc(HMONITOR a1, HDC a2, LPRECT a3, __int64 a4)
{
  __int64 v4; // r10
  unsigned int v5; // edi
  unsigned int v7; // eax
  unsigned int v8; // edx
  int v9; // ebx
  int v10; // eax
  HMONITOR v12; // [rsp+40h] [rbp+8h] BYREF

  v12 = a1;
  v4 = *(_QWORD *)(a4 + 8);
  v5 = 0;
  v7 = *(_DWORD *)(v4 + 144);
  v8 = v7 + 1;
  if ( v7 + 1 < v7 )
  {
    v9 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
LABEL_8:
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v9, 0x337u);
    goto LABEL_4;
  }
  v9 = 0;
  if ( v8 <= *(_DWORD *)(v4 + 140) )
  {
    *(_QWORD *)(*(_QWORD *)(v4 + 120) + 8LL * *(unsigned int *)(v4 + 144)) = v12;
    *(_DWORD *)(v4 + 144) = v8;
    goto LABEL_4;
  }
  v10 = DynArrayImpl<0>::AddMultipleAndSet(v4 + 120, 8u, 1, &v12);
  v9 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v10, 0xC0u);
    goto LABEL_8;
  }
LABEL_4:
  *(_DWORD *)a4 = v9;
  LOBYTE(v5) = v9 >= 0;
  return v5;
}
