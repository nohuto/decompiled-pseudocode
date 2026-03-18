/*
 * XREFs of RIMUnregisterCurrentProcessForInput @ 0x1C0046860
 * Callers:
 *     RIMOnProcessDestroy @ 0x1C0046810 (RIMOnProcessDestroy.c)
 * Callees:
 *     RIMUnregisterForInput @ 0x1C000A470 (RIMUnregisterForInput.c)
 *     WPP_RECORDER_SF_D @ 0x1C004695C (WPP_RECORDER_SF_D.c)
 *     RIMUnlockExclusive @ 0x1C0046AD0 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x1C0046AF0 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_ @ 0x1C0046B20 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall RIMUnregisterCurrentProcessForInput(__int64 a1)
{
  unsigned int v1; // edi
  struct _LIST_ENTRY *v2; // rbp
  int v3; // edx
  struct _LIST_ENTRY *i; // rsi
  struct _LIST_ENTRY *v5; // rbx
  int v6; // edx
  _QWORD *v7; // rbx
  struct _LIST_ENTRY *v9; // rbx
  struct _LIST_ENTRY *v10; // rax
  _QWORD *v11; // rsi
  int v12; // eax
  int v13; // edx
  _QWORD *v14; // [rsp+30h] [rbp-28h] BYREF
  struct _LIST_ENTRY *v15; // [rsp+38h] [rbp-20h]

  v1 = 0;
  v2 = *(struct _LIST_ENTRY **)PsGetCurrentProcessWin32Process(a1);
  LOBYTE(v3) = 3;
  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    v3,
    4,
    14,
    (__int64)&WPP_6da36dba476d07a418c757653869f8c0_Traceguids);
  v15 = (struct _LIST_ENTRY *)&v14;
  v14 = &v14;
  RIMLockExclusive(&gObListLock);
  for ( i = gObRimList.Flink; i != &gObRimList; i = i->Flink )
  {
    v5 = i - 1;
    if ( !LOBYTE(i[3].Blink) && !BYTE1(v5[4].Blink) && v5[2].Flink == v2 )
    {
      v9 = v5 + 49;
      v1 = ObReferenceObjectByPointer(&i[-1], 3u, ExRawInputManagerObjectType, 0);
      v10 = v15;
      v9->Flink = (struct _LIST_ENTRY *)&v14;
      v9->Blink = v10;
      if ( v10->Flink != (struct _LIST_ENTRY *)&v14 )
        __fastfail(3u);
      v10->Flink = v9;
      v15 = v9;
    }
  }
  RIMUnlockExclusive(&gObListLock);
  v7 = v14;
  while ( v7 != &v14 )
  {
    v11 = v7 - 98;
    v12 = RIMUnregisterForInput(*(v7 - 90));
    v1 = v12;
    if ( v12 < 0 )
    {
      LOBYTE(v13) = 3;
      WPP_RECORDER_SF_D(
        WPP_GLOBAL_Control->DeviceExtension,
        v13,
        3,
        15,
        (__int64)&WPP_6da36dba476d07a418c757653869f8c0_Traceguids,
        v12);
      v1 = 0;
    }
    v7 = (_QWORD *)*v7;
    ObfDereferenceObject(v11);
  }
  LOBYTE(v6) = 3;
  WPP_RECORDER_SF_D(
    WPP_GLOBAL_Control->DeviceExtension,
    v6,
    4,
    16,
    (__int64)&WPP_6da36dba476d07a418c757653869f8c0_Traceguids,
    v1);
  return v1;
}
