/*
 * XREFs of rimAbShouldButtonContactBeSuppressed @ 0x1C00D0F30
 * Callers:
 *     rimAbSuppressLowerRankActivityForFrame @ 0x1C00D1040 (rimAbSuppressLowerRankActivityForFrame.c)
 *     rimAbSuppressLowerRankActivityInFrame @ 0x1C00D13A8 (rimAbSuppressLowerRankActivityInFrame.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0012AB0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dd @ 0x1C00D23C0 (WPP_RECORDER_SF_dd.c)
 *     RIMGetPointerInputType @ 0x1C00D4A84 (RIMGetPointerInputType.c)
 *     RIMCmIsButtonContactActiveAndNotSuppressed @ 0x1C00E130C (RIMCmIsButtonContactActiveAndNotSuppressed.c)
 */

__int64 __fastcall rimAbShouldButtonContactBeSuppressed(__int64 a1, __int64 a2)
{
  unsigned int v4; // edi
  int v5; // edx
  int v6; // r8d
  int v7; // r9d
  _QWORD **v8; // r14
  _QWORD *i; // rsi
  int v10; // ebx
  int v11; // edx
  __int64 v12; // rax
  int v13; // ecx

  v4 = 0;
  if ( (unsigned int)RIMCmIsButtonContactActiveAndNotSuppressed(a2) )
  {
    if ( (unsigned int)RIMCmIsButtonContactActiveAndNotSuppressed(a2) )
      --v7;
    if ( !v7 )
    {
      if ( v6 )
      {
        LOBYTE(v5) = 3;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          v5,
          5,
          14,
          (__int64)&WPP_2fabf283dbf0365d553201ec077de623_Traceguids);
        return 1;
      }
      else
      {
        v8 = (_QWORD **)(a1 + 576);
        for ( i = *v8; i != v8; i = (_QWORD *)*i )
        {
          v10 = RIMGetPointerInputType(*(i - 1));
          if ( v10 != (unsigned int)RIMGetPointerInputType(a2) )
          {
            v12 = *(i - 1);
            v13 = *(_DWORD *)(v12 + 1572);
            if ( v13 )
            {
              LOBYTE(v11) = 3;
              WPP_RECORDER_SF_dd(
                WPP_GLOBAL_Control->DeviceExtension,
                v11,
                5,
                15,
                (__int64)&WPP_2fabf283dbf0365d553201ec077de623_Traceguids,
                *(_DWORD *)(v12 + 24),
                v13);
              return 1;
            }
          }
        }
      }
    }
  }
  return v4;
}
