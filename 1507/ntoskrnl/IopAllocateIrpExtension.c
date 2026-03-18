/*
 * XREFs of IopAllocateIrpExtension @ 0x140135D90
 * Callers:
 *     IoPropagateIrpExtensionEx @ 0x14010DD50 (IoPropagateIrpExtensionEx.c)
 *     IoSetGenericIrpExtension @ 0x140135D2C (IoSetGenericIrpExtension.c)
 *     IoSetActivityIdIrp @ 0x1401F669C (IoSetActivityIdIrp.c)
 *     IoSetFsTrackOffsetState @ 0x1401F7C80 (IoSetFsTrackOffsetState.c)
 *     IoSetFsZeroingOffsetRequired @ 0x1401F7D0C (IoSetFsZeroingOffsetRequired.c)
 *     IopPerfCallDriver @ 0x1401F7F54 (IopPerfCallDriver.c)
 *     ViGetContextPointer @ 0x140738E44 (ViGetContextPointer.c)
 * Callees:
 *     memset @ 0x140195A80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

_WORD *__fastcall IopAllocateIrpExtension(__int64 a1, int a2)
{
  _WORD *v2; // rbx
  char v3; // si
  _WORD *v6; // rax
  _WORD *PoolWithTag; // rax

  v2 = *(_WORD **)(a1 + 200);
  v3 = a2;
  if ( v2 )
  {
    if ( *(char *)(a1 + 71) >= 0 )
    {
      v2[1] |= 1 << a2;
      return v2;
    }
    if ( a2 == 2 )
      return (_WORD *)(a1 + 196);
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x58707249u);
    v2 = PoolWithTag;
    if ( !PoolWithTag )
      return v2;
    memset(PoolWithTag, 0, 0x30uLL);
    v2[1] = (1 << (v3 & 0xF)) | 4;
    *((_DWORD *)v2 + 1) = *(_DWORD *)(a1 + 200);
    *(_BYTE *)(a1 + 71) = *(_BYTE *)(a1 + 71) & 0x3F | 0x40;
LABEL_12:
    *(_QWORD *)(a1 + 200) = v2;
    *v2 |= 1u;
    return v2;
  }
  if ( a2 != 2 )
  {
    v6 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x58707249u);
    v2 = v6;
    if ( !v6 )
      return v2;
    memset(v6, 0, 0x30uLL);
    v2[1] = 1 << v3;
    *(_BYTE *)(a1 + 71) |= 0x40u;
    goto LABEL_12;
  }
  *(_BYTE *)(a1 + 71) |= 0x80u;
  return (_WORD *)(a1 + 196);
}
