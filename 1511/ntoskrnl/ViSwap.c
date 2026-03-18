/*
 * XREFs of ViSwap @ 0x1406BE5F4
 * Callers:
 *     VfBuildScatterGatherList @ 0x1406BA81C (VfBuildScatterGatherList.c)
 *     VfFlushAdapterBuffers @ 0x1406BAE24 (VfFlushAdapterBuffers.c)
 *     VfGetScatterGatherList @ 0x1406BB584 (VfGetScatterGatherList.c)
 *     VfMapTransfer @ 0x1406BBC4C (VfMapTransfer.c)
 * Callees:
 *     ViFindMappedRegisterInFile @ 0x1406BD204 (ViFindMappedRegisterInFile.c)
 *     ViGetMapRegisterFile @ 0x1406BD7A8 (ViGetMapRegisterFile.c)
 *     ViGetMdlBufferSa @ 0x1406BD7BC (ViGetMdlBufferSa.c)
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
