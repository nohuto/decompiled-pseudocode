/*
 * XREFs of ?MarkAllDevicesUnusable@CD3DDeviceManager@@AEAAXXZ @ 0x1800719E4
 * Callers:
 *     ?HandleDXGIEnumerationChange@CD3DDeviceManager@@AEAAXXZ @ 0x180071DF0 (-HandleDXGIEnumerationChange@CD3DDeviceManager@@AEAAXXZ.c)
 * Callees:
 *     ?ProcessUnusable@CD3DDeviceLevel1@@QEAAX_N@Z @ 0x18002292C (-ProcessUnusable@CD3DDeviceLevel1@@QEAAX_N@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x180027E00 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ??1?$CGuard@VCD3DDeviceLevel1@@@@QEAA@XZ @ 0x1800AF990 (--1-$CGuard@VCD3DDeviceLevel1@@@@QEAA@XZ.c)
 */

void __fastcall CD3DDeviceManager::MarkAllDevicesUnusable(CD3DDeviceManager *this)
{
  __int64 v2; // rbx
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  while ( *((_DWORD *)this + 32) )
  {
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(32LL * (unsigned int)--*((_DWORD *)this + 32)
                                                                + *((_QWORD *)this + 12))
                                                    + 392LL));
    v2 = *(_QWORD *)(32LL * *((unsigned int *)this + 32) + *((_QWORD *)this + 12));
    v3 = v2;
    ++*(_DWORD *)(v2 + 504);
    *(_DWORD *)(v2 + 508) = GetCurrentThreadId();
    CD3DDeviceLevel1::ProcessUnusable(
      *(CD3DDeviceLevel1 **)(32LL * *((unsigned int *)this + 32) + *((_QWORD *)this + 12)),
      1);
    CGuard<CD3DDeviceLevel1>::~CGuard<CD3DDeviceLevel1>(&v3);
    CMILPoolResource::Release((CMILPoolResource *)(*(_QWORD *)(32LL * *((unsigned int *)this + 32)
                                                             + *((_QWORD *)this + 12))
                                                 + 384LL));
  }
}
