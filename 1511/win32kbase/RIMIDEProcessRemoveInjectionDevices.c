/*
 * XREFs of RIMIDEProcessRemoveInjectionDevices @ 0x1C00C11A8
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0040170 (xxxDestroyThreadInfo.c)
 * Callees:
 *     RIMUnlockExclusive @ 0x1C0046AD0 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x1C0046AF0 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_ @ 0x1C0046B20 (WPP_RECORDER_SF_.c)
 *     RIMIDERemoveInjectionDevice @ 0x1C00C2978 (RIMIDERemoveInjectionDevice.c)
 */

_QWORD *__fastcall RIMIDEProcessRemoveInjectionDevices(__int64 a1)
{
  struct _LIST_ENTRY *Flink; // rdx
  struct _LIST_ENTRY *v3; // r8
  struct _LIST_ENTRY *v4; // rax
  struct _LIST_ENTRY *v5; // rcx
  struct _LIST_ENTRY *v6; // rax
  _QWORD *v7; // rbx
  _QWORD *v8; // rcx
  __int64 v9; // r8
  _QWORD *v10; // rdx
  _QWORD *result; // rax
  _QWORD *v12; // [rsp+30h] [rbp-18h] BYREF
  struct _LIST_ENTRY *v13; // [rsp+38h] [rbp-10h]

  RIMLockExclusive((__int64)&gObListLock);
  Flink = gObRimDevList.Flink;
  v3 = (struct _LIST_ENTRY *)&v12;
  v13 = (struct _LIST_ENTRY *)&v12;
  v12 = &v12;
  while ( Flink != &gObRimDevList )
  {
    v4 = Flink - 1;
    if ( Flink != (struct _LIST_ENTRY *)16 )
      v4 = Flink + 3;
    v5 = v4[23].Flink;
    if ( v5 && v5[5].Blink == (struct _LIST_ENTRY *)a1 )
    {
      v6 = v4 + 9;
      v6->Flink = (struct _LIST_ENTRY *)&v12;
      v6->Blink = v3;
      if ( v3->Flink != (struct _LIST_ENTRY *)&v12 )
        __fastfail(3u);
      v3->Flink = v6;
      v3 = v6;
      v13 = v6;
    }
    Flink = Flink->Flink;
  }
  RIMUnlockExclusive((__int64)&gObListLock);
  v7 = v12;
  while ( 1 )
  {
    result = &v12;
    if ( v7 == &v12 )
      break;
    v8 = v7 - 18;
    v7 = (_QWORD *)*v7;
    v9 = v8[18];
    v10 = (_QWORD *)v8[19];
    if ( *(_QWORD **)(v9 + 8) != v8 + 18 || (_QWORD *)*v10 != v8 + 18 )
      __fastfail(3u);
    *v10 = v9;
    *(_QWORD *)(v9 + 8) = v10;
    if ( (int)RIMIDERemoveInjectionDevice(v8[4]) < 0 )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        3u,
        0xCu,
        (__int64)&WPP_6da36dba476d07a418c757653869f8c0_Traceguids);
  }
  *(_DWORD *)(a1 + 776) &= ~0x400000u;
  return result;
}
