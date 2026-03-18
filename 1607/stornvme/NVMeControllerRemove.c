/*
 * XREFs of NVMeControllerRemove @ 0x1C0007134
 * Callers:
 *     NVMeHwAdapterControl @ 0x1C0002A40 (NVMeHwAdapterControl.c)
 * Callees:
 *     memset @ 0x1C0003180 (memset.c)
 *     AdminQueuesFreeResources @ 0x1C000520C (AdminQueuesFreeResources.c)
 *     FreeMsiInfo @ 0x1C0005340 (FreeMsiInfo.c)
 *     FreeProcessorGroupInfo @ 0x1C00053A4 (FreeProcessorGroupInfo.c)
 *     FreeProcessorInfo @ 0x1C00053E4 (FreeProcessorInfo.c)
 *     IoQueuesFreeResources @ 0x1C0005DA8 (IoQueuesFreeResources.c)
 *     NVMeFreeDmaBuffer @ 0x1C0007514 (NVMeFreeDmaBuffer.c)
 *     NVMeFreeHostMemoryBuffer @ 0x1C000753C (NVMeFreeHostMemoryBuffer.c)
 *     NVMePowerCleanUp @ 0x1C0007A84 (NVMePowerCleanUp.c)
 *     RoundUp64 @ 0x1C00087AC (RoundUp64.c)
 */

char __fastcall NVMeControllerRemove(__int64 a1)
{
  __int64 v1; // rsi
  unsigned int v3; // edi
  unsigned int v4; // eax
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // r9
  unsigned __int8 v7; // r10
  __int64 v8; // r8
  signed __int32 v10[10]; // [rsp+0h] [rbp-28h] BYREF

  v1 = *(_QWORD *)(a1 + 1080);
  *(_DWORD *)(a1 + 20) &= ~1u;
  NVMePowerCleanUp();
  v3 = 0;
  if ( *(_QWORD *)(a1 + 3232) )
    NVMeFreeHostMemoryBuffer(a1);
  v4 = *(_DWORD *)(v1 + 88);
  if ( v4 )
    v5 = RoundUp64(v4, 10000LL) / 0x2710uLL;
  else
    LODWORD(v5) = 500;
  if ( *(_BYTE *)(a1 + 43) )
  {
    v6 = RoundUp64((unsigned int)v5, 100LL) / 0x64uLL;
    if ( (unsigned int)v6 <= v7 )
      LODWORD(v6) = v7;
    LODWORD(v5) = 100 * v6;
  }
  IoQueuesFreeResources(a1);
  AdminQueuesFreeResources(a1);
  NVMeFreeDmaBuffer(a1, 4096LL, *(_QWORD *)(a1 + 3224));
  FreeProcessorInfo(a1);
  FreeProcessorGroupInfo(a1);
  FreeMsiInfo(a1);
  if ( !*(_BYTE *)(a1 + 16) )
    StorPortExtendedFunction(1LL, a1, *(_QWORD *)(a1 + 1184));
  memset((void *)(a1 + 1184), 0, 0x7F8uLL);
  v8 = *(_QWORD *)(a1 + 3256);
  *(_DWORD *)(a1 + 148) = 0;
  if ( v8 )
  {
    StorPortExtendedFunction(1LL, a1, v8);
    *(_QWORD *)(a1 + 3256) = 0LL;
  }
  *(_DWORD *)(*(_QWORD *)(a1 + 112) + 20LL) = *(_DWORD *)(*(_QWORD *)(a1 + 112) + 20LL) & 0xFFFF3FFF | 0x4000;
  _InterlockedOr(v10, 0);
  if ( (_DWORD)v5 )
  {
    do
    {
      if ( (*(_DWORD *)(*(_QWORD *)(a1 + 112) + 28LL) & 0xC) == 8 )
        break;
      StorPortExtendedFunction(81LL, a1, 10000LL);
      ++v3;
    }
    while ( v3 < (unsigned int)v5 );
  }
  return 1;
}
