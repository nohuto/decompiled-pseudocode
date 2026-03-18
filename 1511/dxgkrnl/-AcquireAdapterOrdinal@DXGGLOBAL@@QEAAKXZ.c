/*
 * XREFs of ?AcquireAdapterOrdinal@DXGGLOBAL@@QEAAKXZ @ 0x1C00D42F8
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C00D7050 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006E64 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006F4C (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006FAC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 */

__int64 __fastcall DXGGLOBAL::AcquireAdapterOrdinal(DXGGLOBAL *this)
{
  ULONG ClearBitsAndSet; // eax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned int v7; // ebx
  __int64 v9; // rax
  _BYTE v10[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v10, (DXGGLOBAL *)((char *)this + 552));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v10);
  ClearBitsAndSet = RtlFindClearBitsAndSet((PRTL_BITMAP)((char *)this + 616), 1u, 0);
  v7 = -1;
  if ( ClearBitsAndSet == -1 )
  {
    v9 = WdLogNewEntry5_WdWarning(v4, v3, v5, v6);
    *(_QWORD *)(v9 + 24) = *((unsigned int *)this + 232);
    WdLogEvent5_WdWarning(v9);
  }
  else
  {
    v7 = ClearBitsAndSet;
  }
  if ( v10[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v10);
  return v7;
}
