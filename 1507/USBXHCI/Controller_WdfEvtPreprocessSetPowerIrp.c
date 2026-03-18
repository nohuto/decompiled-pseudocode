/*
 * XREFs of Controller_WdfEvtPreprocessSetPowerIrp @ 0x1C0001FC0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_L @ 0x1C00024B0 (WPP_RECORDER_SF_L.c)
 *     WPP_RECORDER_SF_d @ 0x1C00038C0 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C0007C30 (_guard_dispatch_icall_nop.c)
 *     Crashdump_ProcessSystemPowerAction @ 0x1C0034454 (Crashdump_ProcessSystemPowerAction.c)
 */

__int64 __fastcall Controller_WdfEvtPreprocessSetPowerIrp(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rbp
  __int64 v7; // rdi
  unsigned int v8; // ecx
  unsigned int v9; // edx
  __int64 v10; // rcx
  __int64 result; // rax
  int v12; // edx
  unsigned int v13; // ebx

  v4 = (*(__int64 (__fastcall **)(_LIST_ENTRY *, __int64, void *))(WdfFunctions_01015 + 1616))(
         WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
         a1,
         off_1C0040270);
  v5 = *(_QWORD *)(a2 + 184);
  v6 = v4;
  v7 = *(_QWORD *)(v4 + 8);
  if ( !*(_DWORD *)(v5 + 16) )
  {
    v8 = *(_DWORD *)(v5 + 8);
    v9 = (v8 >> 8) & 0xF;
    if ( v9 == 1 )
    {
      if ( (v8 & 0xF0000) == 0x50000 )
        *(_DWORD *)(v7 + 300) = 2;
      else
        *(_DWORD *)(v7 + 300) = 1;
    }
    else if ( v9 == 6 )
    {
      if ( (v8 & 0xF000) == 0x5000 )
        *(_DWORD *)(v7 + 300) = 5;
      else
        *(_DWORD *)(v7 + 300) = 6;
    }
    else if ( v9 >= 2 )
    {
      if ( v9 <= 4 )
      {
        *(_DWORD *)(v7 + 300) = ((v8 & 0xF000) == 20480) + 3;
      }
      else if ( v9 == 5 )
      {
        *(_DWORD *)(v7 + 300) = 5;
      }
    }
    LOBYTE(v9) = 4;
    WPP_RECORDER_SF_L(
      *(_QWORD *)(v4 + 16),
      v9,
      3,
      192,
      (__int64)&WPP_71d031db04c83962e2b4b0195700cb23_Traceguids,
      *(_DWORD *)(v7 + 300));
    v10 = *(_QWORD *)(v7 + 304);
    if ( v10 )
      Crashdump_ProcessSystemPowerAction(v10, *(unsigned int *)(v7 + 300));
  }
  ++*(_BYTE *)(a2 + 67);
  *(_QWORD *)(a2 + 184) += 72LL;
  result = (*(__int64 (__fastcall **)(_LIST_ENTRY *, __int64, __int64))(WdfFunctions_01015 + 272))(
             WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
             a1,
             a2);
  v13 = result;
  if ( (int)result < 0 )
  {
    LOBYTE(v12) = 2;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v6 + 16),
      v12,
      3,
      193,
      (__int64)&WPP_71d031db04c83962e2b4b0195700cb23_Traceguids,
      result);
    return v13;
  }
  return result;
}
