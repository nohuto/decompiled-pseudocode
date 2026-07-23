/*
 * XREFs of ViSwap @ 0x14070A67C
 * Callers:
 *     VfBuildScatterGatherList @ 0x1407068C0 (VfBuildScatterGatherList.c)
 *     VfFlushAdapterBuffers @ 0x140706EC8 (VfFlushAdapterBuffers.c)
 *     VfGetScatterGatherList @ 0x140707628 (VfGetScatterGatherList.c)
 *     VfMapTransfer @ 0x140707CF0 (VfMapTransfer.c)
 * Callees:
 *     ViFindMappedRegisterInFile @ 0x1407092A8 (ViFindMappedRegisterInFile.c)
 *     ViGetMapRegisterFile @ 0x140709830 (ViGetMapRegisterFile.c)
 *     ViGetMdlBufferSa @ 0x140709844 (ViGetMdlBufferSa.c)
 */

__int64 __fastcall ViSwap(__int64 *a1, __int64 *a2, _QWORD *a3)
{
  _DWORD *MapRegisterFile; // rbx
  const void **v7; // r8
  __int64 MdlBufferSa; // rax
  __int16 v10; // r11
  int v11; // ecx
  int v12; // [rsp+48h] [rbp+20h] BYREF

  MapRegisterFile = ViGetMapRegisterFile(*a1);
  if ( !MapRegisterFile )
    return 0LL;
  MdlBufferSa = ViGetMdlBufferSa(*a2, *v7);
  if ( !MdlBufferSa || !ViFindMappedRegisterInFile((__int64)MapRegisterFile, MdlBufferSa, &v12) )
    return 0LL;
  v11 = v12;
  *a2 = *((_QWORD *)MapRegisterFile + 7);
  *a3 = *(_QWORD *)(*((_QWORD *)MapRegisterFile + 7) + 32LL)
      + (unsigned int)(v11 << 12)
      + *(unsigned int *)(*((_QWORD *)MapRegisterFile + 7) + 44LL)
      + (unsigned __int64)(v10 & 0xFFF);
  *a1 = *((_QWORD *)MapRegisterFile + 6);
  return 1LL;
}
