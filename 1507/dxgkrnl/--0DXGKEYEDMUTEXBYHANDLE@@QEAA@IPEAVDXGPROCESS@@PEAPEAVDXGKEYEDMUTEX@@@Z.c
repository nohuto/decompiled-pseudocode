/*
 * XREFs of ??0DXGKEYEDMUTEXBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGKEYEDMUTEX@@@Z @ 0x1C001FBC4
 * Callers:
 *     ?AcquireSync@DXGKEYEDMUTEX@@SAJI_KHPEAT_LARGE_INTEGER@@PEA_KPEAXI2@Z @ 0x1C014BC3C (-AcquireSync@DXGKEYEDMUTEX@@SAJI_KHPEAT_LARGE_INTEGER@@PEA_KPEAXI2@Z.c)
 *     ?SignalAbandoned@DXGKEYEDMUTEX@@QEAAXIH@Z @ 0x1C014D408 (-SignalAbandoned@DXGKEYEDMUTEX@@QEAAXIH@Z.c)
 *     DxgkReleaseKeyedMutex @ 0x1C014EAD0 (DxgkReleaseKeyedMutex.c)
 *     DxgkReleaseKeyedMutex2 @ 0x1C014ECC0 (DxgkReleaseKeyedMutex2.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0002B00 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0002F1C (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 */

DXGKEYEDMUTEXBYHANDLE *__fastcall DXGKEYEDMUTEXBYHANDLE::DXGKEYEDMUTEXBYHANDLE(
        DXGKEYEDMUTEXBYHANDLE *this,
        unsigned int a2,
        struct DXGPROCESS *a3,
        struct DXGKEYEDMUTEX **a4)
{
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rax
  _BYTE v16[40]; // [rsp+20h] [rbp-28h] BYREF

  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v16, a3);
  v11 = (a2 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v11 < *((_DWORD *)a3 + 58)
    && (v9 = *((_QWORD *)a3 + 27),
        v8 = *(unsigned int *)(v9 + 16LL * (unsigned int)v11 + 8),
        ((a2 >> 26) & 0x30) == (*(_BYTE *)(v9 + 16LL * (unsigned int)v11 + 8) & 0x30))
    && (v8 & 0x1000) == 0
    && (v8 & 0xF) != 0
    && (v12 = 2 * v11, (*(_BYTE *)(v9 + 8 * v12 + 8) & 0xF) == 9) )
  {
    v13 = *(_QWORD *)(v9 + 8 * v12);
  }
  else
  {
    v13 = 0LL;
  }
  *(_QWORD *)this = v13;
  if ( v13 && _InterlockedAdd64((volatile signed __int64 *)(v13 + 24), 1uLL) <= 0 )
  {
    v14 = WdLogNewEntry5_WdAssertion(v13, v8, v9, v10);
    *(_QWORD *)(v14 + 24) = 540LL;
    WdLogEvent5_WdAssertion(v14);
  }
  *a4 = *(struct DXGKEYEDMUTEX **)this;
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v16);
  return this;
}
