/*
 * XREFs of ?ResizeToFit@HANDLE_TABLE@@QEAAJI@Z @ 0x180092EB4
 * Callers:
 *     ?GetNewEntry@HANDLE_TABLE@@QEAAJKPEAI@Z @ 0x180092D40 (-GetNewEntry@HANDLE_TABLE@@QEAAJKPEAI@Z.c)
 *     ?AssignEntry@HANDLE_TABLE@@QEAAJIK@Z @ 0x180092F04 (-AssignEntry@HANDLE_TABLE@@QEAAJIK@Z.c)
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x180096A00 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Resize@HANDLE_TABLE@@AEAAJI@Z @ 0x180092E10 (-Resize@HANDLE_TABLE@@AEAAJI@Z.c)
 */

__int64 __fastcall HANDLE_TABLE::ResizeToFit(HANDLE_TABLE *this, unsigned int a2)
{
  unsigned int v3; // edx
  unsigned int v4; // ebx
  int v5; // eax
  unsigned int v7; // [rsp+20h] [rbp-18h]

  if ( a2 >= 0x4000000 )
  {
    v4 = -2003303411;
    v7 = 141;
LABEL_11:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, v7);
    return v4;
  }
  v3 = a2 + 1024;
  if ( v3 < a2 )
  {
    v4 = -2147024362;
    v7 = 157;
    goto LABEL_11;
  }
  v4 = 0;
  if ( v3 >= 0x4000000 )
    v3 = 0x4000000;
  if ( v3 > *((_DWORD *)this + 3) )
  {
    v5 = HANDLE_TABLE::Resize(this, v3);
    v4 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0xB1u);
  }
  return v4;
}
