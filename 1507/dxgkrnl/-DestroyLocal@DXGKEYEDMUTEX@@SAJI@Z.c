/*
 * XREFs of ?DestroyLocal@DXGKEYEDMUTEX@@SAJI@Z @ 0x1C005B2E4
 * Callers:
 *     DxgkDestroyKeyedMutex @ 0x1C005B240 (DxgkDestroyKeyedMutex.c)
 *     DxgkOpenResourceFromNtHandle @ 0x1C00A94F0 (DxgkOpenResourceFromNtHandle.c)
 *     ?CloseLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAXW4_OUTPUTDUPL_MUTEX_TYPE@@H@Z @ 0x1C0152974 (-CloseLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAXW4_OUTPUTDUPL_MUTEX_TYPE@@H@Z.c)
 * Callees:
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0002AA8 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0002B00 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z @ 0x1C005B404 (-DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z.c)
 *     ?SignalAbandonedInternal@DXGKEYEDMUTEX@@QEAAXIH@Z @ 0x1C005B6FC (-SignalAbandonedInternal@DXGKEYEDMUTEX@@QEAAXIH@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
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
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  _BYTE v19[40]; // [rsp+20h] [rbp-28h] BYREF

  v1 = a1;
  Current = DXGPROCESS::GetCurrent();
  v4 = Current;
  if ( !Current )
  {
    v16 = WdLogNewEntry5_WdError(v3);
    *(_QWORD *)(v16 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v16);
    return 3221225485LL;
  }
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v19, Current);
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
    v18 = WdLogNewEntry5_WdWarning(v8, v5, v6, v7);
    *(_QWORD *)(v18 + 24) = v1;
    *(_QWORD *)(v18 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v18);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v19);
    return 3221225485LL;
  }
  if ( (unsigned int)v8 < *((_DWORD *)v4 + 58) )
  {
    v10 = *(_DWORD *)(v6 + 16LL * (unsigned int)v8 + 8);
    if ( (_DWORD)v7 == ((v10 >> 4) & 3) && (v10 & 0x1000) == 0 && (v10 & 0xF) != 0 )
      *(_DWORD *)(v6 + 16 * (((unsigned __int64)(unsigned int)v1 >> 6) & 0xFFFFFF) + 8) |= 0x1000u;
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v19);
  DXGKEYEDMUTEX::SignalAbandonedInternal(v9, v1, 0);
  if ( !DXGKEYEDMUTEX::DestroyHandle(v1) )
  {
    v17 = WdLogNewEntry5_WdAssertion(v12, v11, v13, v14);
    *(_QWORD *)(v17 + 24) = 2724LL;
    WdLogEvent5_WdAssertion(v17);
  }
  return 0LL;
}
