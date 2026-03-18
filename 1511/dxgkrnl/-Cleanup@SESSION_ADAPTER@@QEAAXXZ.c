/*
 * XREFs of ?Cleanup@SESSION_ADAPTER@@QEAAXXZ @ 0x1C009F4B4
 * Callers:
 *     ?RemoveAdapterFromSession@DXGSESSIONDATA@@QEAAJAEAU_LUID@@@Z @ 0x1C009ED90 (-RemoveAdapterFromSession@DXGSESSIONDATA@@QEAAJAEAU_LUID@@@Z.c)
 *     DxgkDestroyCsrssProcess @ 0x1C00C6B88 (DxgkDestroyCsrssProcess.c)
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C0003184 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     ?DestroyCddDeviceAndContext@SESSION_ADAPTER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C009F538 (-DestroyCddDeviceAndContext@SESSION_ADAPTER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 */

void __fastcall SESSION_ADAPTER::Cleanup(DXGADAPTER **this)
{
  __int64 v2; // rcx
  SESSION_ADAPTER *v3; // rdi
  DXGADAPTER *v4; // rcx
  DXGADAPTER *v5; // rcx
  _QWORD *v6; // rax
  char *v7; // rsi
  _QWORD *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  _QWORD *v11; // rsi
  _QWORD *v12; // rax

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
      v10 = WdLogNewEntry5_WdAssertion(v9);
      *(_QWORD *)(v10 + 24) = 2000LL;
      WdLogEvent5_WdAssertion(v10);
    }
    memset(v7 + 88, 0, 0x200uLL);
    *((_QWORD *)v7 + 75) = 0LL;
    *((_DWORD *)v7 + 18) = 0;
    *((_DWORD *)this + 18) &= ~(1 << *((_DWORD *)v7 + 4));
    *((_QWORD *)v7 + 3) = 0LL;
    v11 = v7 + 32;
    v2 = *v11;
    v12 = (_QWORD *)v11[1];
    if ( *(_QWORD **)(*v11 + 8LL) != v11 || (_QWORD *)*v12 != v11 )
      __fastfail(3u);
    *v12 = v2;
    *(_QWORD *)(v2 + 8) = v12;
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
