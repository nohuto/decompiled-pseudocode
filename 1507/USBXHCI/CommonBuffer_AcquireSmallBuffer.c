/*
 * XREFs of CommonBuffer_AcquireSmallBuffer @ 0x1C0013BE4
 * Callers:
 *     CommonBuffer_AcquireBuffer @ 0x1C0005400 (CommonBuffer_AcquireBuffer.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001300 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0007C30 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0007F80 (memset.c)
 */

__int64 *__fastcall CommonBuffer_AcquireSmallBuffer(__int64 a1, __int64 a2, int a3, bool *a4)
{
  KIRQL v8; // al
  __int64 **v9; // rcx
  KIRQL v10; // bp
  __int64 *v11; // rdi
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rax

  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 120));
  v9 = (__int64 **)(a1 + 168);
  v10 = v8;
  if ( *v9 == (__int64 *)v9 )
  {
    v11 = 0LL;
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
      3u,
      7u,
      0x1Bu,
      (__int64)&WPP_ea947e51f0cea3a28a50faeec413c0d5_Traceguids);
  }
  else
  {
    v11 = *v9;
    v12 = **v9;
    if ( (__int64 **)(*v9)[1] != v9 || *(__int64 **)(v12 + 8) != v11 )
      __fastfail(3u);
    *v9 = (__int64 *)v12;
    *(_QWORD *)(v12 + 8) = v9;
    memset((void *)v11[2], 0, 0x200uLL);
    --*(_DWORD *)(a1 + 164);
    v13 = v11[4];
    v11[9] = a2;
    *((_DWORD *)v11 + 16) = a3;
    v14 = (*(__int64 (__fastcall **)(_LIST_ENTRY *, __int64, void *))(WdfFunctions_01015 + 1616))(
            WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
            v13,
            off_1C0040248);
    if ( *(_BYTE *)(v14 + 16) )
    {
      *(_BYTE *)(v14 + 16) = 0;
      ++*(_DWORD *)(a1 + 20);
    }
  }
  *a4 = *(_DWORD *)(a1 + 164) < *(_DWORD *)(a1 + 60);
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 120), v10);
  return v11;
}
