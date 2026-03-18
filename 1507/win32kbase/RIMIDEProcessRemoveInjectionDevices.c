/*
 * XREFs of RIMIDEProcessRemoveInjectionDevices @ 0x1C00C05C8
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C004DF98 (xxxDestroyThreadInfo.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C001AA20 (WPP_RECORDER_SF_.c)
 *     RIMUnlockExclusive @ 0x1C00523F0 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x1C0052410 (RIMLockExclusive.c)
 *     RIMIDERemoveInjectionDevice @ 0x1C00C1C90 (RIMIDERemoveInjectionDevice.c)
 */

_QWORD *__fastcall RIMIDEProcessRemoveInjectionDevices(struct _LIST_ENTRY *a1)
{
  struct _LIST_ENTRY *Flink; // rdx
  struct _LIST_ENTRY *v3; // r8
  struct _LIST_ENTRY *v4; // rax
  struct _LIST_ENTRY *Blink; // rcx
  struct _LIST_ENTRY **p_Blink; // rax
  _QWORD *v7; // rbx
  _QWORD *v8; // rcx
  __int64 v9; // r8
  _QWORD *v10; // rdx
  _QWORD *result; // rax
  _QWORD *v12; // [rsp+30h] [rbp-18h] BYREF
  struct _LIST_ENTRY **v13; // [rsp+38h] [rbp-10h]

  RIMLockExclusive((__int64)&gObListLock);
  Flink = gObRimDevList.Flink;
  v3 = (struct _LIST_ENTRY *)&v12;
  v13 = (struct _LIST_ENTRY **)&v12;
  v12 = &v12;
  while ( Flink != &gObRimDevList )
  {
    v4 = Flink - 1;
    if ( Flink != (struct _LIST_ENTRY *)16 )
      v4 = Flink + 3;
    Blink = v4[23].Blink;
    if ( Blink && Blink[5].Blink == a1 )
    {
      p_Blink = &v4[9].Blink;
      *p_Blink = (struct _LIST_ENTRY *)&v12;
      p_Blink[1] = v3;
      if ( v3->Flink != (struct _LIST_ENTRY *)&v12 )
        __fastfail(3u);
      v3->Flink = (struct _LIST_ENTRY *)p_Blink;
      v3 = (struct _LIST_ENTRY *)p_Blink;
      v13 = p_Blink;
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
    v8 = v7 - 19;
    v7 = (_QWORD *)*v7;
    v9 = v8[19];
    v10 = (_QWORD *)v8[20];
    if ( *(_QWORD **)(v9 + 8) != v8 + 19 || (_QWORD *)*v10 != v8 + 19 )
      __fastfail(3u);
    *v10 = v9;
    *(_QWORD *)(v9 + 8) = v10;
    if ( (int)RIMIDERemoveInjectionDevice(v8[4]) < 0 )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        3u,
        0xCu,
        (__int64)&WPP_4147cb9e2f3f5911ed13e12165a50882_Traceguids);
  }
  return result;
}
