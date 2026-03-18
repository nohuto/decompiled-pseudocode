/*
 * XREFs of MiInitializeProbePacketVm @ 0x14009A924
 * Callers:
 *     MiProbeAndLockPrepare @ 0x14009A7D8 (MiProbeAndLockPrepare.c)
 * Callees:
 *     MiSystemCacheVaControlArea @ 0x140018E30 (MiSystemCacheVaControlArea.c)
 *     MiGetAnyMultiplexedVm @ 0x14001D05C (MiGetAnyMultiplexedVm.c)
 *     MiPartitionIdToPointer @ 0x1400680A0 (MiPartitionIdToPointer.c)
 *     MiLockProbePacketWorkingSet @ 0x14009AAA8 (MiLockProbePacketWorkingSet.c)
 */

int *__fastcall MiInitializeProbePacketVm(__int64 a1)
{
  unsigned __int64 v2; // rdi
  int *result; // rax
  __int64 v4; // rax
  struct _KTHREAD *CurrentThread; // rax
  char *AnyMultiplexedVm; // rax
  __int64 v7; // rax

  v2 = *(_QWORD *)a1;
  *(_QWORD *)(a1 + 88) = MmBadPointer;
  *(_BYTE *)(a1 + 62) = 0;
  if ( v2 < 0x7FFFFFFF0000LL )
  {
    v4 = *(_QWORD *)(a1 + 72);
    *(_DWORD *)(a1 + 56) = 1;
    *(_QWORD *)(a1 + 88) = v4 + 1280;
  }
  else
  {
    if ( v2 >= qword_140326910 && v2 < qword_140326910 + 0x8000000000LL )
    {
      CurrentThread = KeGetCurrentThread();
      *(_DWORD *)(a1 + 56) = 6;
      AnyMultiplexedVm = (char *)(CurrentThread->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 3008);
LABEL_30:
      *(_QWORD *)(a1 + 88) = AnyMultiplexedVm;
      goto LABEL_14;
    }
    if ( v2 >= qword_140327F30 && v2 < qword_140327F30 + 0xF8000000000LL
      || qword_140326C30
      && v2 >= qword_140326C30
      && v2 < qword_140326C30 + (qword_140326C10 << 21)
      && (*(_BYTE *)(48 * ((*(_QWORD *)(((v2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) >> 12) & 0xFFFFFFFFFLL)
                   - 0x57FFFFFFFDALL) & 0xF0) == 0x70 )
    {
      AnyMultiplexedVm = MiGetAnyMultiplexedVm(2);
      *(_DWORD *)(a1 + 56) = 3;
      goto LABEL_30;
    }
    if ( qword_140326C80 && v2 >= qword_140326C80 && v2 < qword_140326C80 + (qword_140326C60 << 21) )
    {
      AnyMultiplexedVm = MiGetAnyMultiplexedVm(0);
      *(_DWORD *)(a1 + 56) = 2;
      goto LABEL_30;
    }
    if ( v2 < qword_140327F20 || v2 >= qword_140327F20 + 0x100000000000LL )
    {
      if ( !qword_140326C30
        || v2 < qword_140326C30
        || v2 >= qword_140326C30 + (qword_140326C10 << 21)
        || (*(_BYTE *)(48 * ((*(_QWORD *)(((v2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) >> 12) & 0xFFFFFFFFFLL)
                     - 0x57FFFFFFFDALL) & 0xF0) != 0xD0 )
      {
        AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
        *(_DWORD *)(a1 + 56) = 5;
        goto LABEL_30;
      }
      *(_DWORD *)(a1 + 56) = 0;
    }
    else
    {
      *(_DWORD *)(a1 + 56) = 4;
    }
  }
LABEL_14:
  result = (int *)MiLockProbePacketWorkingSet(a1);
  if ( qword_140326C80 && v2 >= qword_140326C80 )
  {
    result = (int *)(qword_140326C80 + (qword_140326C60 << 21));
    if ( v2 < (unsigned __int64)result )
    {
      v7 = MiSystemCacheVaControlArea(v2);
      result = MiPartitionIdToPointer(*(_WORD *)(v7 + 60) & 0x3FF) + 1648;
      *(_QWORD *)(a1 + 88) = result;
    }
  }
  return result;
}
