/*
 * XREFs of RootHub_UcxEvtClearHubFeature @ 0x1C001EC20
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001300 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C0007B40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0007C30 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0007F80 (memset.c)
 *     WPP_RECORDER_SF_DDDDDDDD @ 0x1C001F9B8 (WPP_RECORDER_SF_DDDDDDDD.c)
 */

__int64 __fastcall RootHub_UcxEvtClearHubFeature(__int64 a1, __int64 a2)
{
  __int64 v3; // r14
  __int64 v4; // rbp
  unsigned int v5; // ebx
  int v6; // r9d
  int v7; // edx
  int v8; // r8d
  unsigned __int16 v9; // r9
  _QWORD v11[5]; // [rsp+70h] [rbp-58h] BYREF

  v3 = (*(__int64 (__fastcall **)(_LIST_ENTRY *, __int64, void *))(WdfFunctions_01015 + 1616))(
         WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
         a1,
         off_1C00401F8);
  memset(v11, 0, sizeof(v11));
  LOWORD(v11[0]) = 40;
  (*(void (__fastcall **)(_LIST_ENTRY *, __int64, _QWORD *))(WdfFunctions_01015 + 2128))(
    WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
    a2,
    v11);
  v4 = v11[1];
  if ( *(_BYTE *)(v11[1] + 128LL) != 32
    || *(_BYTE *)(v11[1] + 129LL) != 1
    || (v5 = 0, *(_WORD *)(v11[1] + 132LL))
    || *(_WORD *)(v11[1] + 134LL) )
  {
    v6 = 32;
    v7 = *(unsigned __int8 *)(v11[1] + 134LL);
    v8 = *(unsigned __int8 *)(v11[1] + 133LL);
    goto LABEL_12;
  }
  if ( *(_WORD *)(v11[1] + 130LL) )
  {
    if ( *(_WORD *)(v11[1] + 130LL) != 1 )
    {
      v6 = 35;
      v7 = *(unsigned __int8 *)(v11[1] + 134LL);
      v8 = *(unsigned __int8 *)(v11[1] + 133LL);
LABEL_12:
      WPP_RECORDER_SF_DDDDDDDD(*(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL), v7, v8, v6);
      v5 = -1073741823;
      *(_DWORD *)(v4 + 4) = -1073741820;
      return (*(__int64 (__fastcall **)(_LIST_ENTRY *, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
               WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
               a2,
               v5);
    }
    v9 = 34;
  }
  else
  {
    v9 = 33;
  }
  WPP_RECORDER_SF_(
    *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL),
    4u,
    0xAu,
    v9,
    (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids);
  *(_DWORD *)(v4 + 4) = 0;
  return (*(__int64 (__fastcall **)(_LIST_ENTRY *, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
           WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
           a2,
           v5);
}
