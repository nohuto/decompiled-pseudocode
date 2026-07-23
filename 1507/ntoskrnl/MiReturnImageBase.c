/*
 * XREFs of MiReturnImageBase @ 0x1404B7DB8
 * Callers:
 *     MiCheckControlArea @ 0x14008B090 (MiCheckControlArea.c)
 *     MiRelocateImageAgain @ 0x14046B548 (MiRelocateImageAgain.c)
 *     MiFreeRelocations @ 0x1405804F8 (MiFreeRelocations.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     RtlClearBits @ 0x140062740 (RtlClearBits.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     MiZeroCfgSystemWideBitmap @ 0x140125DB4 (MiZeroCfgSystemWideBitmap.c)
 *     MiReturnSystemImageAddress @ 0x140521A7C (MiReturnSystemImageAddress.c)
 */

void __fastcall MiReturnImageBase(ULONG *a1)
{
  __int64 v1; // r8
  int v3; // ecx
  int v4; // ecx
  int *v5; // rax
  __int64 v6; // rdx
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // r9
  signed __int8 v11; // cf
  __int64 v12; // rsi
  __int16 v13; // ax
  _RTL_BITMAP *BitMapHeader; // [rsp+20h] [rbp-28h]
  _RTL_BITMAP *v15; // [rsp+28h] [rbp-20h]

  v1 = *a1;
  if ( (_DWORD)v1 == -1 )
    return;
  if ( *((_BYTE *)a1 + 12) != 1 )
  {
    v15 = 0LL;
    v3 = a1[2] - 1;
    if ( v3 )
    {
      v4 = v3 - 1;
      if ( !v4 )
      {
        v5 = &dword_14034E940;
        v6 = (__int64)MmHighestUserAddress - 0xFFFF;
LABEL_7:
        BitMapHeader = (_RTL_BITMAP *)v5;
        MiZeroCfgSystemWideBitmap((__int64)a1, v6 - ((v1 + a1[1]) << 16));
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->SpecialApcDisable;
        v9 = KeAbPreAcquire((ULONG_PTR)&qword_14034E910, 0LL, 0LL, v8);
        v11 = _interlockedbittestandset64((volatile signed __int32 *)&qword_14034E910, 0LL);
        v12 = v9;
        if ( v11 )
          ExfAcquirePushLockExclusiveEx(&qword_14034E910, v9, (ULONG_PTR)&qword_14034E910, v10);
        if ( v12 )
          *(_BYTE *)(v12 + 26) |= 1u;
        if ( v15 )
          RtlClearBits(v15, *a1, a1[1]);
        RtlClearBits(BitMapHeader, *a1, a1[1]);
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14034E910, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&qword_14034E910);
        KeAbPostRelease((ULONG_PTR)&qword_14034E910);
        v13 = CurrentThread->SpecialApcDisable + 1;
        CurrentThread->SpecialApcDisable = v13;
        if ( !v13
          && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
        {
          KiCheckForKernelApcDelivery();
        }
        return;
      }
      v5 = &dword_14034E918;
      if ( v4 != 1 )
      {
LABEL_19:
        v6 = 2013265920LL;
        goto LABEL_7;
      }
      v15 = (_RTL_BITMAP *)&dword_14034E918;
    }
    v5 = &dword_14034E930;
    goto LABEL_19;
  }
  if ( *((_BYTE *)a1 + 13) == 1 )
    MiReturnSystemImageAddress((v1 - 0x8000000) << 16, a1[1] << 16);
}
