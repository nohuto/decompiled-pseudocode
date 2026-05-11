/*
 * XREFs of USBType1CompleteCallback @ 0x1C0003AA0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001DE8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qqqd @ 0x1C0003070 (WPP_RECORDER_SF_qqqd.c)
 *     _guard_dispatch_icall_nop @ 0x1C00072E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall USBType1CompleteCallback(__int64 a1, __int64 a2, struct _SLIST_ENTRY *a3)
{
  struct _KSSTREAM_POINTER *v3; // r14
  __int64 v4; // r15
  NTSTATUS v6; // ebp
  int v7; // r12d
  char *Context; // rdi
  __int64 v9; // rbx
  __int64 v10; // r8
  KIRQL v11; // r13
  __int64 v12; // rax
  struct _SLIST_ENTRY *Next; // rcx
  struct _SLIST_ENTRY **v14; // rax
  __int64 v15; // rdi
  PDEVICE_OBJECT v16; // rcx
  unsigned __int16 v17; // r9
  int v19; // [rsp+20h] [rbp-58h]

  v3 = (struct _KSSTREAM_POINTER *)*((_QWORD *)&a3[2].Next + 1);
  v4 = *((_QWORD *)&a3[1].Next + 1);
  v6 = *(_DWORD *)(a2 + 48);
  v7 = 0;
  Context = (char *)v3->Pin->Context;
  v9 = *((_QWORD *)Context + 17);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_qqqd((__int64)WPP_GLOBAL_Control->DeviceExtension, a2, (__int64)a3, 0xEu, v19);
  if ( *(int *)(v4 + 4) < 0 )
    v6 = -1073741668;
  v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Context + 12);
  if ( v6 < 0 )
  {
    *(_BYTE *)v9 = 1;
    Context[37] = 0;
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)Context + 10, 0xFFFFFFFF) == 1 )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_qqqd((__int64)WPP_GLOBAL_Control->DeviceExtension, 0LL, v10, 0xFu, v19);
    v7 = 1;
    *(_BYTE *)v9 = 1;
    v12 = *((_QWORD *)Context + 17);
    Context[37] = 0;
    if ( !*(_BYTE *)(v12 + 12) )
    {
      *(_DWORD *)(v12 + 24) = 0;
      *(_QWORD *)(v12 + 32) = 0LL;
      *(_DWORD *)(v12 + 40) = 0;
      *(_QWORD *)(v12 + 48) = 0LL;
      *(_QWORD *)(v12 + 16) = 0LL;
    }
    KeSetEvent((PRKEVENT)(Context + 104), 0, 0);
  }
  *((_QWORD *)Context + 9) += HIDWORD(a3[2].Next);
  Next = a3->Next;
  v14 = (struct _SLIST_ENTRY **)*((_QWORD *)&a3->Next + 1);
  if ( *(&a3->Next->Next + 1) != a3 || *v14 != a3 )
    __fastfail(3u);
  *v14 = Next;
  *((_QWORD *)&Next->Next + 1) = v14;
  KeReleaseSpinLock((PKSPIN_LOCK)Context + 12, v11);
  v15 = *(_QWORD *)(v9 + 112);
  ++*(_DWORD *)(v15 + 28);
  if ( ExQueryDepthSList((PSLIST_HEADER)v15) < *(_WORD *)(v15 + 16) )
  {
    ExpInterlockedPushEntrySList((PSLIST_HEADER)v15, a3);
  }
  else
  {
    ++*(_DWORD *)(v15 + 32);
    (*(void (__fastcall **)(struct _SLIST_ENTRY *))(v15 + 56))(a3);
  }
  if ( v7 )
  {
    if ( !*(_BYTE *)(v9 + 82) && !*(_BYTE *)(v9 + 81) )
    {
      *(_BYTE *)(v9 + 81) = 1;
      v16 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v17 = 16;
LABEL_26:
        WPP_RECORDER_SF_(
          (__int64)v16->DeviceExtension,
          5u,
          4u,
          v17,
          (__int64)&WPP_d2c3a4aab021a7556cd2da6ec3e2894d_Traceguids);
      }
    }
  }
  else if ( *(_BYTE *)(v9 + 81) )
  {
    *(_BYTE *)(v9 + 81) = 0;
    v16 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v17 = 17;
      goto LABEL_26;
    }
  }
  *(_BYTE *)(v9 + 82) = 0;
  if ( v6 < 0 )
    KsStreamPointerSetStatusCode(v3, v6);
  KsStreamPointerDelete(v3);
  return 3221225494LL;
}
