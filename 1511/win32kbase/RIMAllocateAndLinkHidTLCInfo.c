/*
 * XREFs of RIMAllocateAndLinkHidTLCInfo @ 0x1C007B95C
 * Callers:
 *     RIMCreateHidDesc @ 0x1C000F564 (RIMCreateHidDesc.c)
 *     RIMIDECreateHIDDesc @ 0x1C00C5D50 (RIMIDECreateHIDDesc.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0046B20 (WPP_RECORDER_SF_.c)
 *     Win32AllocPoolZInit @ 0x1C004F690 (Win32AllocPoolZInit.c)
 */

_WORD *__fastcall RIMAllocateAndLinkHidTLCInfo(__int64 a1, __int16 a2, __int16 a3)
{
  _WORD *v5; // rax
  _WORD *v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rax

  v5 = Win32AllocPoolZInit(0x30uLL);
  v6 = v5;
  if ( v5 )
  {
    v5[8] = a2;
    v5[9] = a3;
    v7 = RawInputManagerObject::gHidRequestTable;
    *(_QWORD *)v6 = RawInputManagerObject::gHidRequestTable;
    *((_QWORD *)v6 + 1) = &RawInputManagerObject::gHidRequestTable;
    if ( *(_UNKNOWN **)(v7 + 8) != &RawInputManagerObject::gHidRequestTable )
      __fastfail(3u);
    *(_QWORD *)(v7 + 8) = v6;
    v8 = qword_1C01070E0;
    RawInputManagerObject::gHidRequestTable = v6;
    while ( (__int64 *)v8 != &qword_1C01070E0 )
    {
      if ( *(_WORD *)(v8 + 16) == a2 )
      {
        *((_DWORD *)v6 + 7) = *(_DWORD *)(v8 + 20);
        return v6;
      }
      v8 = *(_QWORD *)v8;
    }
    return v6;
  }
  else
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      3u,
      0xAu,
      (__int64)&WPP_41012d6f3a0c3f224174541bca675efc_Traceguids);
    return 0LL;
  }
}
