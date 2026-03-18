/*
 * XREFs of ?Cleanup@SESSION_ADAPTER@@QEAAXXZ @ 0x1C00DA62C
 * Callers:
 *     ?RemoveAdapterFromSession@DXGSESSIONDATA@@QEAAJAEAU_LUID@@@Z @ 0x1C008F13C (-RemoveAdapterFromSession@DXGSESSIONDATA@@QEAAJAEAU_LUID@@@Z.c)
 *     DxgkRemoveAllAdapterFromCurrentSession @ 0x1C00BDE40 (DxgkRemoveAllAdapterFromCurrentSession.c)
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C00024C0 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     ?DestroyCddDeviceAndContext@SESSION_ADAPTER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00DA6A4 (-DestroyCddDeviceAndContext@SESSION_ADAPTER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 */

void __fastcall SESSION_ADAPTER::Cleanup(DXGADAPTER **this)
{
  __int64 v2; // rcx
  SESSION_ADAPTER *v3; // rsi
  DXGADAPTER *v4; // rcx
  DXGADAPTER *v5; // rcx
  _QWORD *v6; // rax
  char *v7; // rbp
  _QWORD *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  _QWORD *v14; // rbp
  _QWORD *v15; // rax

  if ( *((_DWORD *)this + 12) )
  {
    v6 = (_QWORD *)WdLogNewEntry5_WdError(this);
    v6[3] = *((unsigned int *)this + 12);
    v6[4] = *((int *)this + 3);
    v6[5] = *((unsigned int *)this + 2);
    WdLogEvent5_WdError(v6);
    *((_DWORD *)this + 12) = 0;
  }
  SESSION_ADAPTER::DestroyCddDeviceAndContext((SESSION_ADAPTER *)this, this[7]);
  v3 = this[10];
  while ( v3 != (SESSION_ADAPTER *)(this + 10) )
  {
    v7 = (char *)v3 - 32;
    v3 = *(SESSION_ADAPTER **)v3;
    v8 = (_QWORD *)WdLogNewEntry5_WdError(v2);
    v8[3] = *((unsigned int *)v7 + 18);
    v8[4] = *((unsigned int *)v7 + 4);
    v8[5] = *((int *)this + 3);
    v8[6] = *((unsigned int *)this + 2);
    WdLogEvent5_WdError(v8);
    if ( *((_QWORD *)v7 + 11) || *((_QWORD *)v7 + 75) )
    {
      v13 = WdLogNewEntry5_WdAssertion(v10, v9, v11, v12);
      *(_QWORD *)(v13 + 24) = 1971LL;
      WdLogEvent5_WdAssertion(v13);
    }
    *((_DWORD *)v7 + 18) = 0;
    *((_DWORD *)this + 18) &= ~(1 << *((_DWORD *)v7 + 4));
    *((_QWORD *)v7 + 3) = 0LL;
    v14 = v7 + 32;
    v2 = *v14;
    v15 = (_QWORD *)v14[1];
    if ( *(_QWORD **)(*v14 + 8LL) != v14 || (_QWORD *)*v15 != v14 )
      __fastfail(3u);
    *v15 = v2;
    *(_QWORD *)(v2 + 8) = v15;
    --*((_DWORD *)this + 19);
  }
  v4 = this[2];
  if ( v4 )
  {
    DXGADAPTER::ReleaseReference(v4);
    this[2] = 0LL;
  }
  v5 = this[3];
  if ( v5 )
  {
    DXGADAPTER::ReleaseReference(v5);
    this[3] = 0LL;
  }
}
