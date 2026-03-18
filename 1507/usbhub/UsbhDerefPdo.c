/*
 * XREFs of UsbhDerefPdo @ 0x1C000B104
 * Callers:
 *     UsbhBusPause_Action @ 0x1C000F090 (UsbhBusPause_Action.c)
 *     UsbhBusUnlatchPdo @ 0x1C0017830 (UsbhBusUnlatchPdo.c)
 *     UsbhResetPortData @ 0x1C0054DEC (UsbhResetPortData.c)
 * Callees:
 *     PdoExt @ 0x1C0013AD0 (PdoExt.c)
 *     Log @ 0x1C0014B50 (Log.c)
 */

void __fastcall UsbhDerefPdo(int a1, int a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // rsi
  __int64 v7; // r9
  __int64 v8; // rbx
  _QWORD *v9; // rdi
  __int64 v10; // r10
  _QWORD *v11; // r11
  __int64 v12; // rdx
  _QWORD *v13; // rcx
  int v14; // eax

  v4 = a4;
  Log(a1, 256, 1685218896, a2, a4);
  v8 = PdoExt(v7);
  v9 = (_QWORD *)(v8 + 1264);
  if ( *(_QWORD *)(v8 + 1264) == v8 + 1264 )
    goto LABEL_13;
  do
  {
    Log(a1, 256, 1818326079, v8, v4);
    if ( *(_DWORD *)(v10 + 24) == (_DWORD)v4 && *(_QWORD *)(v10 + 40) == a3 )
      break;
    v10 = 0LL;
  }
  while ( (_QWORD *)*v11 != v9 );
  if ( !v10 )
  {
LABEL_13:
    v14 = *(_DWORD *)(v8 + 1280);
    if ( v14 )
      *(_DWORD *)(v8 + 1280) = v14 - 1;
  }
  else
  {
    v12 = *(_QWORD *)(v10 + 8);
    v13 = *(_QWORD **)(v10 + 16);
    if ( *(_QWORD *)(v12 + 8) != v10 + 8 || *v13 != v10 + 8 )
      __fastfail(3u);
    *v13 = v12;
    *(_QWORD *)(v12 + 8) = v13;
    ExFreePoolWithTag((PVOID)v10, 0);
  }
  if ( (_QWORD *)*v9 == v9 && !*(_DWORD *)(v8 + 1280) )
    KeSetEvent((PRKEVENT)(v8 + 1288), 0, 0);
}
