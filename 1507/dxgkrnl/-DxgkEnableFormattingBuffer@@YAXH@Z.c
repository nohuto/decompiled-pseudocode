/*
 * XREFs of ?DxgkEnableFormattingBuffer@@YAXH@Z @ 0x1C013F198
 * Callers:
 *     ?DxgkEtwEnableCallback@@YAXKK_K@Z @ 0x1C000EE20 (-DxgkEtwEnableCallback@@YAXKK_K@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

void __fastcall DxgkEnableFormattingBuffer(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebx
  DXGGLOBAL *Global; // rax

  v4 = a1;
  Global = DXGGLOBAL::GetGlobal(a1, a2, a3, a4);
  DXGGLOBAL::EnableFormattingBuffer(Global, v4);
}
