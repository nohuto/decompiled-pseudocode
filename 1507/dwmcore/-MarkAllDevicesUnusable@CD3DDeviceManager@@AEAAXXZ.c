/*
 * XREFs of ?MarkAllDevicesUnusable@CD3DDeviceManager@@AEAAXXZ @ 0x180090CB4
 * Callers:
 *     ?HandleDXGIEnumerationChange@CD3DDeviceManager@@AEAAXXZ @ 0x180090F80 (-HandleDXGIEnumerationChange@CD3DDeviceManager@@AEAAXXZ.c)
 * Callees:
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x1800160E0 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ??1?$CGuard@VCD3DDeviceLevel1@@@@QEAA@XZ @ 0x180083270 (--1-$CGuard@VCD3DDeviceLevel1@@@@QEAA@XZ.c)
 *     ?ProcessUnusable@CD3DDeviceLevel1@@QEAAX_N@Z @ 0x18008B548 (-ProcessUnusable@CD3DDeviceLevel1@@QEAAX_N@Z.c)
 */

void __fastcall CD3DDeviceManager::MarkAllDevicesUnusable(CD3DDeviceManager *this)
{
  __int64 v2; // rbx
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  while ( *((_DWORD *)this + 34) )
  {
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(32LL * (unsigned int)--*((_DWORD *)this + 34)
                                                                + *((_QWORD *)this + 13))
                                                    + 400LL));
    v2 = *(_QWORD *)(32LL * *((unsigned int *)this + 34) + *((_QWORD *)this + 13));
    v3 = v2;
    ++*(_DWORD *)(v2 + 512);
    *(_DWORD *)(v2 + 516) = GetCurrentThreadId();
    CD3DDeviceLevel1::ProcessUnusable(
      *(CD3DDeviceLevel1 **)(32LL * *((unsigned int *)this + 34) + *((_QWORD *)this + 13)),
      1);
    CGuard<CD3DDeviceLevel1>::~CGuard<CD3DDeviceLevel1>(&v3);
    CMILPoolResource::Release((CMILPoolResource *)(*(_QWORD *)(32LL * *((unsigned int *)this + 34)
                                                             + *((_QWORD *)this + 13))
                                                 + 392LL));
  }
}
