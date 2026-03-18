/*
 * XREFs of ?SavePointerInfo@ADAPTER_DISPLAY@@QEAAXIEHH@Z @ 0x1C00074A8
 * Callers:
 *     ?DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIH@Z @ 0x1C009D4F8 (-DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIH@.c)
 *     ?DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@H@Z @ 0x1C00BE950 (-DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@H@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ADAPTER_DISPLAY::SavePointerInfo(ADAPTER_DISPLAY *this, unsigned int a2, char a3, int a4, int a5)
{
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rax

  v8 = a2;
  if ( a2 >= *((_DWORD *)this + 26) )
  {
    v10 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v10 + 24) = 3827LL;
    WdLogEvent5_WdAssertion(v10);
  }
  v9 = 1016 * v8;
  *(_BYTE *)(1016 * v8 + *((_QWORD *)this + 17) + 700) = a3;
  if ( a3 )
  {
    *(_DWORD *)(v9 + *((_QWORD *)this + 17) + 704) = a4;
    *(_DWORD *)(v9 + *((_QWORD *)this + 17) + 708) = a5;
  }
}
