/*
 * XREFs of UsbhDerefPdo @ 0x1C0026298
 * Callers:
 *     UsbhBusPause_Action @ 0x1C00105A0 (UsbhBusPause_Action.c)
 *     UsbhBusUnlatchPdo @ 0x1C0018C00 (UsbhBusUnlatchPdo.c)
 *     UsbhResetPortData @ 0x1C0055584 (UsbhResetPortData.c)
 * Callees:
 *     Log @ 0x1C00159D0 (Log.c)
 *     PdoExt @ 0x1C001A040 (PdoExt.c)
 */

void __fastcall UsbhDerefPdo(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // rsi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  _DWORD *v10; // rbx
  _QWORD *v11; // rdi
  __int64 v12; // r10
  _QWORD *v13; // r11
  __int64 v14; // rdx
  _QWORD *v15; // rcx
  int v16; // eax

  v4 = a4;
  Log(a1, 256, 1685218896, a2, a4);
  v10 = PdoExt(v9, v7, v8, v9);
  v11 = v10 + 316;
  if ( *((_DWORD **)v10 + 158) == v10 + 316 )
    goto LABEL_13;
  do
  {
    Log(a1, 256, 1818326079, (__int64)v10, v4);
    if ( *(_DWORD *)(v12 + 24) == (_DWORD)v4 && *(_QWORD *)(v12 + 40) == a3 )
      break;
    v12 = 0LL;
  }
  while ( (_QWORD *)*v13 != v11 );
  if ( !v12 )
  {
LABEL_13:
    v16 = v10[320];
    if ( v16 )
      v10[320] = v16 - 1;
  }
  else
  {
    v14 = *(_QWORD *)(v12 + 8);
    v15 = *(_QWORD **)(v12 + 16);
    if ( *(_QWORD *)(v14 + 8) != v12 + 8 || *v15 != v12 + 8 )
      __fastfail(3u);
    *v15 = v14;
    *(_QWORD *)(v14 + 8) = v15;
    ExFreePoolWithTag((PVOID)v12, 0);
  }
  if ( (_QWORD *)*v11 == v11 && !v10[320] )
    KeSetEvent((PRKEVENT)(v10 + 322), 0, 0);
}
