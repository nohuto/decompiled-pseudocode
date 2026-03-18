/*
 * XREFs of ?DestroyLocal@DXGKEYEDMUTEX@@SAJI@Z @ 0x1C005C154
 * Callers:
 *     DxgkDestroyKeyedMutex @ 0x1C005C0B0 (DxgkDestroyKeyedMutex.c)
 *     DxgkOpenResourceFromNtHandle @ 0x1C0061660 (DxgkOpenResourceFromNtHandle.c)
 *     ?CloseLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAXW4_OUTPUTDUPL_MUTEX_TYPE@@H@Z @ 0x1C0156C14 (-CloseLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAXW4_OUTPUTDUPL_MUTEX_TYPE@@H@Z.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0003574 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0004214 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z @ 0x1C005C274 (-DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z.c)
 *     ?SignalAbandonedInternal@DXGKEYEDMUTEX@@QEAAXIH@Z @ 0x1C005C524 (-SignalAbandonedInternal@DXGKEYEDMUTEX@@QEAAXIH@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXGKEYEDMUTEX::DestroyLocal(unsigned int a1)
{
  __int64 v1; // rbx
  struct DXGPROCESS *Current; // rax
  __int64 v3; // rcx
  struct DXGPROCESS *v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rcx
  DXGKEYEDMUTEX *v9; // rsi
  unsigned int v10; // ecx
  __int64 v11; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  _BYTE v16[40]; // [rsp+20h] [rbp-28h] BYREF

  v1 = a1;
  Current = DXGPROCESS::GetCurrent();
  v4 = Current;
  if ( !Current )
  {
    v13 = WdLogNewEntry5_WdError(v3);
    *(_QWORD *)(v13 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v13);
    return 3221225485LL;
  }
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v16, Current);
  v8 = ((unsigned int)v1 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v8 >= *((_DWORD *)v4 + 58)
    || (v6 = *((_QWORD *)v4 + 27),
        v7 = (unsigned int)v1 >> 30,
        v5 = *(unsigned int *)(v6 + 16LL * (unsigned int)v8 + 8),
        (_DWORD)v7 != ((*(_DWORD *)(v6 + 16LL * (unsigned int)v8 + 8) >> 4) & 3))
    || (v5 & 0x1000) != 0
    || (v5 & 0xF) == 0
    || (v5 = 2LL * (unsigned int)v8, (*(_BYTE *)(v6 + 16LL * (unsigned int)v8 + 8) & 0xF) != 9)
    || (v9 = *(DXGKEYEDMUTEX **)(v6 + 16LL * (unsigned int)v8)) == 0LL )
  {
    v15 = WdLogNewEntry5_WdWarning(v8, v5, v6, v7);
    *(_QWORD *)(v15 + 24) = v1;
    *(_QWORD *)(v15 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v15);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v16);
    return 3221225485LL;
  }
  if ( (unsigned int)v8 < *((_DWORD *)v4 + 58) )
  {
    v10 = *(_DWORD *)(v6 + 16LL * (unsigned int)v8 + 8);
    if ( (_DWORD)v7 == ((v10 >> 4) & 3) && (v10 & 0x1000) == 0 && (v10 & 0xF) != 0 )
      *(_DWORD *)(v6 + 16 * (((unsigned __int64)(unsigned int)v1 >> 6) & 0xFFFFFF) + 8) |= 0x1000u;
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v16);
  DXGKEYEDMUTEX::SignalAbandonedInternal(v9, v1, 0);
  if ( !DXGKEYEDMUTEX::DestroyHandle(v1) )
  {
    v14 = WdLogNewEntry5_WdAssertion(v11);
    *(_QWORD *)(v14 + 24) = 2686LL;
    WdLogEvent5_WdAssertion(v14);
  }
  return 0LL;
}
