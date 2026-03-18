/*
 * XREFs of IopAllocateIrpExtension @ 0x14010536C
 * Callers:
 *     IoPropagateIrpExtensionEx @ 0x1400D9180 (IoPropagateIrpExtensionEx.c)
 *     IoSetGenericIrpExtension @ 0x140105308 (IoSetGenericIrpExtension.c)
 *     IoSetActivityIdIrp @ 0x1401BB3D4 (IoSetActivityIdIrp.c)
 *     IoSetFsTrackOffsetState @ 0x1401BC414 (IoSetFsTrackOffsetState.c)
 *     IoSetFsZeroingOffsetRequired @ 0x1401BC4A4 (IoSetFsZeroingOffsetRequired.c)
 *     IopPerfCallDriver @ 0x1401BC6F0 (IopPerfCallDriver.c)
 *     ViGetContextPointer @ 0x1406B8920 (ViGetContextPointer.c)
 * Callees:
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
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
