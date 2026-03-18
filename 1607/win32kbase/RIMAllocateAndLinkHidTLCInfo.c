/*
 * XREFs of RIMAllocateAndLinkHidTLCInfo @ 0x1C0009CB4
 * Callers:
 *     RIMCreateHidDesc @ 0x1C000B820 (RIMCreateHidDesc.c)
 *     RIMIDECreateHIDDesc @ 0x1C00D53A8 (RIMIDECreateHIDDesc.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0012AB0 (WPP_RECORDER_SF_.c)
 *     Win32AllocPoolZInit @ 0x1C0037AC0 (Win32AllocPoolZInit.c)
 */

__int64 __fastcall RIMAllocateAndLinkHidTLCInfo(__int64 a1, __int16 a2, __int16 a3)
{
  __int64 v5; // rax
  int v6; // edx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax

  v5 = Win32AllocPoolZInit(0x30uLL);
  v7 = v5;
  if ( v5 )
  {
    *(_WORD *)(v5 + 16) = a2;
    *(_WORD *)(v5 + 18) = a3;
    v8 = RawInputManagerObject::gHidRequestTable;
    if ( *(_UNKNOWN **)(RawInputManagerObject::gHidRequestTable + 8LL) != &RawInputManagerObject::gHidRequestTable )
      __fastfail(3u);
    *(_QWORD *)(v7 + 8) = &RawInputManagerObject::gHidRequestTable;
    *(_QWORD *)v7 = v8;
    *(_QWORD *)(v8 + 8) = v7;
    v9 = qword_1C011E530;
    RawInputManagerObject::gHidRequestTable = v7;
    while ( (__int64 *)v9 != &qword_1C011E530 )
    {
      if ( *(_WORD *)(v9 + 16) == a2 )
      {
        *(_DWORD *)(v7 + 28) = *(_DWORD *)(v9 + 20);
        return v7;
      }
      v9 = *(_QWORD *)v9;
    }
    return v7;
  }
  else
  {
    LOBYTE(v6) = 3;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v6,
      3,
      10,
      (__int64)&WPP_08ab4fdfcbc53c2589942555c4c26d17_Traceguids);
    return 0LL;
  }
}
