/*
 * XREFs of ??1ADAPTER_DISPLAY@@QEAA@XZ @ 0x1C011F138
 * Callers:
 *     ??_GADAPTER_DISPLAY@@QEAAPEAXI@Z @ 0x1C0017B44 (--_GADAPTER_DISPLAY@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x1C0004B5C (--1DXGFASTMUTEX@@QEAA@XZ.c)
 *     ??_I@YAXPEAX_KHP6AX0@Z@Z @ 0x1C0017BF4 (--_I@YAXPEAX_KHP6AX0@Z@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00689D8 (--3@YAXPEAX@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?RemoveIndirectOutputDuplMgr@DXGGLOBAL@@QEAAJPEAVOUTPUTDUPL_MGR_INDIRECT@@@Z @ 0x1C01401D8 (-RemoveIndirectOutputDuplMgr@DXGGLOBAL@@QEAAJPEAVOUTPUTDUPL_MGR_INDIRECT@@@Z.c)
 *     ?DestroyOutputDuplManager@@YAJPEAVOUTPUTDUPL_MGR@@@Z @ 0x1C0152E50 (-DestroyOutputDuplManager@@YAJPEAVOUTPUTDUPL_MGR@@@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::~ADAPTER_DISPLAY(ADAPTER_DISPLAY *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v6; // rdx
  DXGGLOBAL *Global; // rax
  char *v8; // rcx
  char *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax

  v4 = *((_QWORD *)this + 13);
  if ( v4 )
  {
    v6 = *(unsigned int *)(*((_QWORD *)this + 2) + 284LL);
    if ( (v6 & 0x80u) != 0LL )
    {
      Global = DXGGLOBAL::GetGlobal((__int64)this, v6, a3, a4);
      DXGGLOBAL::RemoveIndirectOutputDuplMgr(Global, (struct OUTPUTDUPL_MGR_INDIRECT *)(v4 - 24));
    }
    DestroyOutputDuplManager(*((struct OUTPUTDUPL_MGR **)this + 13));
    *((_QWORD *)this + 13) = 0LL;
  }
  v8 = (char *)*((_QWORD *)this + 14);
  if ( v8 )
  {
    v9 = v8 - 8;
    `vector destructor iterator'(
      v8,
      1008LL,
      *((_DWORD *)v8 - 2),
      (void (__fastcall *)(char *))DISPLAY_SOURCE::~DISPLAY_SOURCE);
    operator delete(v9);
    *((_QWORD *)this + 14) = 0LL;
  }
  DXGFASTMUTEX::~DXGFASTMUTEX((ADAPTER_DISPLAY *)((char *)this + 200));
  DXGFASTMUTEX::~DXGFASTMUTEX((ADAPTER_DISPLAY *)((char *)this + 136));
  if ( *((ADAPTER_DISPLAY **)this + 8) != (ADAPTER_DISPLAY *)((char *)this + 64) )
  {
    v14 = WdLogNewEntry5_WdAssertion(v11, v10, v12, v13);
    *(_QWORD *)(v14 + 24) = 613LL;
    WdLogEvent5_WdAssertion(v14);
  }
  DXGFASTMUTEX::~DXGFASTMUTEX((ADAPTER_DISPLAY *)((char *)this + 24));
  *((_QWORD *)this + 2) = 0LL;
}
