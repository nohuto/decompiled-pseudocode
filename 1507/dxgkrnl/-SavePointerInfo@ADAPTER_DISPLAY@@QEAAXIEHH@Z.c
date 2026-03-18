/*
 * XREFs of ?SavePointerInfo@ADAPTER_DISPLAY@@QEAAXIEHH@Z @ 0x1C000646C
 * Callers:
 *     ?DxgkCddSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIH@Z @ 0x1C008EBC0 (-DxgkCddSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@I.c)
 *     ?DxgkCddSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@H@Z @ 0x1C00AC6F0 (-DxgkCddSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@H@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ADAPTER_DISPLAY::SavePointerInfo(ADAPTER_DISPLAY *this, unsigned int a2, char a3, int a4, int a5)
{
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rax

  v8 = a2;
  if ( a2 >= *((_DWORD *)this + 20) )
  {
    v10 = WdLogNewEntry5_WdAssertion();
    *(_QWORD *)(v10 + 24) = 3688LL;
    WdLogEvent5_WdAssertion(v10);
  }
  v9 = 1008 * v8;
  *(_BYTE *)(1008 * v8 + *((_QWORD *)this + 14) + 700) = a3;
  if ( a3 )
  {
    *(_DWORD *)(v9 + *((_QWORD *)this + 14) + 704) = a4;
    *(_DWORD *)(v9 + *((_QWORD *)this + 14) + 708) = a5;
  }
}
