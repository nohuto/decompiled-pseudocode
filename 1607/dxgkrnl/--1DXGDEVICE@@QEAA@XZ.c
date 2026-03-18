/*
 * XREFs of ??1DXGDEVICE@@QEAA@XZ @ 0x1C009D508
 * Callers:
 *     ??_GDXGDEVICE@@QEAAPEAXI@Z @ 0x1C001C930 (--_GDXGDEVICE@@QEAAPEAXI@Z.c)
 *     ?DestroyDevice@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00934E0 (-DestroyDevice@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 */

void __fastcall DXGDEVICE::~DXGDEVICE(void **this)
{
  __int64 v2; // rcx
  void **v3; // rsi
  __int64 v4; // rbp
  _DWORD *v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax

  if ( *((_DWORD *)this + 18) != 1 )
  {
    v6 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v6 + 24) = 681LL;
    WdLogEvent5_WdAssertion(v6);
  }
  operator delete(this[360]);
  v3 = this + 133;
  v4 = 16LL;
  v5 = this + 149;
  do
  {
    if ( *(v5 - 112) )
      operator delete(*(v3 - 56));
    if ( *v5 )
      operator delete(*v3);
    ++v5;
    ++v3;
    --v4;
  }
  while ( v4 );
  if ( this[45] != this + 45 )
  {
    v7 = WdLogNewEntry5_WdAssertion(v2);
    *(_QWORD *)(v7 + 24) = 619LL;
    WdLogEvent5_WdAssertion(v7);
  }
  if ( this[43] != this + 43 )
  {
    v8 = WdLogNewEntry5_WdAssertion(v2);
    *(_QWORD *)(v8 + 24) = 619LL;
    WdLogEvent5_WdAssertion(v8);
  }
  if ( this[41] != this + 41 )
  {
    v9 = WdLogNewEntry5_WdAssertion(v2);
    *(_QWORD *)(v9 + 24) = 619LL;
    WdLogEvent5_WdAssertion(v9);
  }
  if ( this[39] != this + 39 )
  {
    v10 = WdLogNewEntry5_WdAssertion(v2);
    *(_QWORD *)(v10 + 24) = 619LL;
    WdLogEvent5_WdAssertion(v10);
  }
  this[5] = 0LL;
  this[2] = 0LL;
}
