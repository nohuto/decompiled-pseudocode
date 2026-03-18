/*
 * XREFs of UsbhHubSSH_Timer @ 0x1C0023680
 * Callers:
 *     <none>
 * Callees:
 *     Log @ 0x1C0013250 (Log.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028E30 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0029180 (memset.c)
 *     UsbhTrapFatal_Dbg @ 0x1C003CDA0 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040704 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhHubSSH_Timer(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KEVENT *v5; // rax
  struct _KEVENT *v6; // r14
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // r12
  unsigned __int8 v11; // r15
  PDEVICE_OBJECT v12; // rcx
  int v13; // esi
  __int64 v14; // rbp
  PVOID PoolWithTag; // rax
  __int64 v16; // rdi
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 (__fastcall *v20)(__int64, _QWORD); // rax
  __int64 v21; // rax
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  void (__fastcall *v25)(__int64, _QWORD, __int64 (__fastcall *(__fastcall *)(__int64, __int64, __int64, __int64))(__int64), __int64, __int64, int); // rax
  int v27; // [rsp+28h] [rbp-40h]

  if ( !a2 )
    UsbhTrapFatal_Dbg(0LL, 0LL, a3, a4);
  v5 = *(struct _KEVENT **)(a2 + 64);
  if ( !v5 )
    UsbhTrapFatal_Dbg(a2, 0LL, a3, a4);
  if ( v5->Header.LockNV != 541218120 )
    UsbhTrapFatal_Dbg(a2, *(_QWORD *)(a2 + 64), a3, a4);
  v6 = v5 + 143;
  if ( KeReadStateEvent(v5 + 143) )
  {
    KeResetEvent(v6);
    v9 = *(_QWORD *)(a2 + 64);
    if ( !v9 )
      UsbhTrapFatal_Dbg(a2, 0LL, v7, v8);
    if ( *(_DWORD *)v9 != 541218120 )
      UsbhTrapFatal_Dbg(a2, *(_QWORD *)(a2 + 64), v7, v8);
    v10 = v9 + 2088;
    v11 = *(_BYTE *)(v9 + 5268);
    v12 = WPP_GLOBAL_Control;
    v13 = 0;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        46,
        (__int64)&WPP_a5ab263a51257b83d9b9ce18201b3fa5_Traceguids,
        0);
      v12 = WPP_GLOBAL_Control;
    }
    v14 = *(_QWORD *)(a2 + 64);
    if ( !v14 )
      UsbhTrapFatal_Dbg(a2, 0LL, v7, v8);
    if ( *(_DWORD *)v14 != 541218120 )
      UsbhTrapFatal_Dbg(a2, *(_QWORD *)(a2 + 64), v7, v8);
    if ( LOWORD(v12->DeviceType) )
      WPP_RECORDER_SF_d(v12->DeviceExtension, 0, 1, 45, (__int64)&WPP_a5ab263a51257b83d9b9ce18201b3fa5_Traceguids, 0);
    PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x48uLL, 0x42554855u);
    v16 = (__int64)PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x48uLL);
      v19 = *(_QWORD *)(a2 + 64);
      if ( !v19 )
        UsbhTrapFatal_Dbg(a2, 0LL, v17, v18);
      if ( *(_DWORD *)v19 != 541218120 )
        UsbhTrapFatal_Dbg(a2, *(_QWORD *)(a2 + 64), v17, v18);
      v20 = *(__int64 (__fastcall **)(__int64, _QWORD))(v19 + 4768);
      if ( v20 )
      {
        v21 = v20(a2, v11);
        if ( v21 )
        {
          *(_QWORD *)(v16 + 40) = v21;
          *(_DWORD *)v16 = 1230463592;
          *(_QWORD *)(v16 + 24) = UsbhHubSSH_Worker;
          *(_DWORD *)(v16 + 4) = 2001228627;
          *(_DWORD *)(v16 + 12) = 0;
          *(_QWORD *)(v16 + 32) = v10;
          *(_QWORD *)(v16 + 16) = a2;
          ExInterlockedInsertTailList((PLIST_ENTRY)(v14 + 2784), (PLIST_ENTRY)(v16 + 48), (PKSPIN_LOCK)(v14 + 2800));
          if ( *(_DWORD *)(v16 + 4) != 2001228627 )
            Log(a2, 8, 1464552747, 0LL, v16);
          _InterlockedIncrement((volatile signed __int32 *)(v16 + 8));
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            WPP_RECORDER_SF_d(
              WPP_GLOBAL_Control->DeviceExtension,
              0,
              1,
              47,
              (__int64)&WPP_a5ab263a51257b83d9b9ce18201b3fa5_Traceguids,
              0);
          v24 = *(_QWORD *)(a2 + 64);
          if ( !v24 )
            UsbhTrapFatal_Dbg(a2, 0LL, v22, v23);
          if ( *(_DWORD *)v24 != 541218120 )
            UsbhTrapFatal_Dbg(a2, *(_QWORD *)(a2 + 64), v22, v23);
          v25 = *(void (__fastcall **)(__int64, _QWORD, __int64 (__fastcall *(__fastcall *)(__int64, __int64, __int64, __int64))(__int64), __int64, __int64, int))(v24 + 4784);
          if ( v25 )
          {
            LOBYTE(v27) = v11;
            v25(a2, *(_QWORD *)(v16 + 40), UsbhHubWorker, 1LL, v16, v27);
          }
          else
          {
            v13 = -1073741822;
          }
          goto LABEL_26;
        }
      }
      ExFreePoolWithTag((PVOID)v16, 0);
    }
    v13 = -1073741670;
LABEL_26:
    if ( (v13 & 0xC0000000) == 0xC0000000 )
      KeSetEvent(v6, 0, 0);
  }
  return 0LL;
}
