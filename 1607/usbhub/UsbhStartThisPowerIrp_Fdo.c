/*
 * XREFs of UsbhStartThisPowerIrp_Fdo @ 0x1C0001C24
 * Callers:
 *     UsbhFdoPower_QueryPower @ 0x1C0001BB0 (UsbhFdoPower_QueryPower.c)
 * Callees:
 *     Log @ 0x1C00159D0 (Log.c)
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 */

__int64 __fastcall UsbhStartThisPowerIrp_Fdo(__int64 a1, __int64 a2, int a3)
{
  int v5; // edi
  __int64 result; // rax
  __int64 v7; // r9
  __int64 v8; // r10
  __int64 v9; // r11
  __int64 v10; // r9

  v5 = a1;
  result = FdoExt(a1);
  v7 = *(_QWORD *)(a2 + 184);
  if ( *(_DWORD *)(v7 + 16) <= 1u )
  {
    result = Log(v5, 16, 1347374643, v7, a2);
    *(_QWORD *)(v8 + 8 * v9 + 840) = a2;
    *(_QWORD *)(v8 + 8 * v9 + 856) = v10;
    *(_DWORD *)(v8 + 4 * v9 + 872) = a3;
  }
  return result;
}
