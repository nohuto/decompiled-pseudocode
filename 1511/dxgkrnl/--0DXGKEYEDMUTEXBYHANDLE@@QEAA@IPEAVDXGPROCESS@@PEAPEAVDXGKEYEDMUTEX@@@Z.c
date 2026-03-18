/*
 * XREFs of ??0DXGKEYEDMUTEXBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGKEYEDMUTEX@@@Z @ 0x1C001F934
 * Callers:
 *     ?AcquireSync@DXGKEYEDMUTEX@@SAJI_KHPEAT_LARGE_INTEGER@@PEA_KPEAXI2@Z @ 0x1C015098C (-AcquireSync@DXGKEYEDMUTEX@@SAJI_KHPEAT_LARGE_INTEGER@@PEA_KPEAXI2@Z.c)
 *     ?SignalAbandoned@DXGKEYEDMUTEX@@QEAAXIH@Z @ 0x1C015174C (-SignalAbandoned@DXGKEYEDMUTEX@@QEAAXIH@Z.c)
 *     DxgkReleaseKeyedMutex @ 0x1C0152560 (DxgkReleaseKeyedMutex.c)
 *     DxgkReleaseKeyedMutex2 @ 0x1C0152750 (DxgkReleaseKeyedMutex2.c)
 * Callees:
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0001794 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0003574 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 */

DXGKEYEDMUTEXBYHANDLE *__fastcall DXGKEYEDMUTEXBYHANDLE::DXGKEYEDMUTEXBYHANDLE(
        DXGKEYEDMUTEXBYHANDLE *this,
        unsigned int a2,
        struct DXGPROCESS *a3,
        struct DXGKEYEDMUTEX **a4)
{
  __int64 v8; // rcx
  __int64 v9; // r8
  int v10; // edx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rax
  _BYTE v15[40]; // [rsp+20h] [rbp-28h] BYREF

  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v15, a3);
  v8 = (a2 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v8 < *((_DWORD *)a3 + 58)
    && (v9 = *((_QWORD *)a3 + 27),
        v10 = *(_DWORD *)(v9 + 16LL * (unsigned int)v8 + 8),
        ((a2 >> 26) & 0x30) == (*(_BYTE *)(v9 + 16LL * (unsigned int)v8 + 8) & 0x30))
    && (v10 & 0x1000) == 0
    && (v10 & 0xF) != 0
    && (v11 = 2 * v8, (*(_BYTE *)(v9 + 8 * v11 + 8) & 0xF) == 9) )
  {
    v12 = *(_QWORD *)(v9 + 8 * v11);
  }
  else
  {
    v12 = 0LL;
  }
  *(_QWORD *)this = v12;
  if ( v12 && _InterlockedAdd64((volatile signed __int64 *)(v12 + 24), 1uLL) <= 0 )
  {
    v13 = WdLogNewEntry5_WdAssertion(v12);
    *(_QWORD *)(v13 + 24) = 499LL;
    WdLogEvent5_WdAssertion(v13);
  }
  *a4 = *(struct DXGKEYEDMUTEX **)this;
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v15);
  return this;
}
