/*
 * XREFs of ??1DXGDEVICE@@QEAA@XZ @ 0x1C0078F44
 * Callers:
 *     ??_GDXGDEVICE@@QEAAPEAXI@Z @ 0x1C00171F4 (--_GDXGDEVICE@@QEAAPEAXI@Z.c)
 *     ?DestroyDevice@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C009438C (-DestroyDevice@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGDEVICE::~DXGDEVICE(DXGDEVICE *this, __int64 a2, __int64 a3, __int64 a4)
{
  void *v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax

  if ( *((_DWORD *)this + 18) != 1 )
  {
    v6 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v6 + 24) = 622LL;
    WdLogEvent5_WdAssertion(v6);
  }
  v5 = (void *)*((_QWORD *)this + 2341);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  if ( *((DXGDEVICE **)this + 42) != (DXGDEVICE *)((char *)this + 336) )
  {
    v7 = WdLogNewEntry5_WdAssertion(v5, a2, a3, a4);
    *(_QWORD *)(v7 + 24) = 613LL;
    WdLogEvent5_WdAssertion(v7);
  }
  if ( *((DXGDEVICE **)this + 40) != (DXGDEVICE *)((char *)this + 320) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v5, a2, a3, a4);
    *(_QWORD *)(v8 + 24) = 613LL;
    WdLogEvent5_WdAssertion(v8);
  }
  if ( *((DXGDEVICE **)this + 38) != (DXGDEVICE *)((char *)this + 304) )
  {
    v9 = WdLogNewEntry5_WdAssertion(v5, a2, a3, a4);
    *(_QWORD *)(v9 + 24) = 613LL;
    WdLogEvent5_WdAssertion(v9);
  }
  if ( *((DXGDEVICE **)this + 36) != (DXGDEVICE *)((char *)this + 288) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v5, a2, a3, a4);
    *(_QWORD *)(v10 + 24) = 613LL;
    WdLogEvent5_WdAssertion(v10);
  }
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
}
