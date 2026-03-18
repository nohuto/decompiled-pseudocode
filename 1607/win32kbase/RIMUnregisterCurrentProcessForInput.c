/*
 * XREFs of RIMUnregisterCurrentProcessForInput @ 0x1C00127C0
 * Callers:
 *     RIMOnProcessDestroy @ 0x1C0012770 (RIMOnProcessDestroy.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C00128BC (WPP_RECORDER_SF_D.c)
 *     RIMUnlockExclusive @ 0x1C0012A60 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x1C0012A80 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_ @ 0x1C0012AB0 (WPP_RECORDER_SF_.c)
 *     RIMUnregisterForInput @ 0x1C007DAD0 (RIMUnregisterForInput.c)
 */

__int64 RIMUnregisterCurrentProcessForInput()
{
  unsigned int v0; // edi
  struct _LIST_ENTRY *v1; // rbp
  int v2; // edx
  struct _LIST_ENTRY *i; // rsi
  struct _LIST_ENTRY *v4; // rbx
  int v5; // edx
  _QWORD *v6; // rbx
  struct _LIST_ENTRY *v8; // rbx
  struct _LIST_ENTRY **p_Flink; // rax
  _QWORD *v10; // rsi
  int v11; // eax
  int v12; // edx
  _QWORD *v13; // [rsp+30h] [rbp-28h] BYREF
  struct _LIST_ENTRY *v14; // [rsp+38h] [rbp-20h]

  v0 = 0;
  v1 = *(struct _LIST_ENTRY **)PsGetCurrentProcessWin32Process();
  LOBYTE(v2) = 3;
  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    v2,
    4,
    17,
    (__int64)&WPP_88236c213bf436c45adfdbc67a1eb72d_Traceguids);
  v14 = (struct _LIST_ENTRY *)&v13;
  v13 = &v13;
  RIMLockExclusive(&gObListLock);
  for ( i = gObRimList.Flink; i != &gObRimList; i = i->Flink )
  {
    v4 = i - 1;
    if ( !LOBYTE(i[3].Blink) && !BYTE1(v4[4].Blink) && v4[2].Flink == v1 )
    {
      v8 = v4 + 46;
      v0 = ObReferenceObjectByPointer(&i[-1], 3u, ExRawInputManagerObjectType, 0);
      p_Flink = &v14->Flink;
      if ( v14->Flink != (struct _LIST_ENTRY *)&v13 )
        __fastfail(3u);
      v8->Blink = v14;
      v8->Flink = (struct _LIST_ENTRY *)&v13;
      *p_Flink = v8;
      v14 = v8;
    }
  }
  RIMUnlockExclusive(&gObListLock);
  v6 = v13;
  while ( v6 != &v13 )
  {
    v10 = v6 - 92;
    v11 = RIMUnregisterForInput(*(v6 - 84));
    v0 = v11;
    if ( v11 < 0 )
    {
      LOBYTE(v12) = 3;
      WPP_RECORDER_SF_D(
        WPP_GLOBAL_Control->DeviceExtension,
        v12,
        3,
        18,
        (__int64)&WPP_88236c213bf436c45adfdbc67a1eb72d_Traceguids,
        v11);
      v0 = 0;
    }
    v6 = (_QWORD *)*v6;
    ObfDereferenceObject(v10);
  }
  LOBYTE(v5) = 3;
  WPP_RECORDER_SF_D(
    WPP_GLOBAL_Control->DeviceExtension,
    v5,
    4,
    19,
    (__int64)&WPP_88236c213bf436c45adfdbc67a1eb72d_Traceguids,
    v0);
  return v0;
}
