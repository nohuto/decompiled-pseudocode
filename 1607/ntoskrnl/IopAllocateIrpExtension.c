/*
 * XREFs of IopAllocateIrpExtension @ 0x14008E634
 * Callers:
 *     IoPropagateIrpExtensionEx @ 0x14008E500 (IoPropagateIrpExtensionEx.c)
 *     IopSetDiskIoAttributionExtension @ 0x14008E608 (IopSetDiskIoAttributionExtension.c)
 *     IoSetGenericIrpExtension @ 0x140110290 (IoSetGenericIrpExtension.c)
 *     IoSetActivityIdIrp @ 0x140111FD8 (IoSetActivityIdIrp.c)
 *     IoSetFsTrackOffsetState @ 0x1401CA4C8 (IoSetFsTrackOffsetState.c)
 *     IoSetFsZeroingOffsetRequired @ 0x1401CA558 (IoSetFsZeroingOffsetRequired.c)
 *     IopPerfCallDriver @ 0x1401CA708 (IopPerfCallDriver.c)
 *     ViGetContextPointer @ 0x1407049AC (ViGetContextPointer.c)
 * Callees:
 *     memset @ 0x1401715C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

_WORD *__fastcall IopAllocateIrpExtension(__int64 a1, int a2)
{
  _WORD *v2; // rbx
  char v3; // si
  _WORD *PoolWithTag; // rax
  _WORD *v7; // rax

  v2 = *(_WORD **)(a1 + 200);
  v3 = a2;
  if ( !v2 )
  {
    if ( a2 != 2 )
    {
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x58707249u);
      v2 = PoolWithTag;
      if ( !PoolWithTag )
        return v2;
      memset(PoolWithTag, 0, 0x38uLL);
      v2[1] = 1 << v3;
      *(_BYTE *)(a1 + 71) |= 0x40u;
LABEL_10:
      *(_QWORD *)(a1 + 200) = v2;
      *v2 |= 1u;
      return v2;
    }
    *(_BYTE *)(a1 + 71) |= 0x80u;
    return (_WORD *)(a1 + 196);
  }
  if ( *(char *)(a1 + 71) < 0 )
  {
    if ( a2 != 2 )
    {
      v7 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x58707249u);
      v2 = v7;
      if ( !v7 )
        return v2;
      memset(v7, 0, 0x38uLL);
      v2[1] = (1 << (v3 & 0xF)) | 4;
      *((_DWORD *)v2 + 1) = *(_DWORD *)(a1 + 200);
      *(_BYTE *)(a1 + 71) = *(_BYTE *)(a1 + 71) & 0x3F | 0x40;
      goto LABEL_10;
    }
    return (_WORD *)(a1 + 196);
  }
  v2[1] |= 1 << a2;
  return v2;
}
