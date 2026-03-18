/*
 * XREFs of ??1ADAPTER_DISPLAY@@QEAA@XZ @ 0x1C0124C28
 * Callers:
 *     ??_GADAPTER_DISPLAY@@QEAAPEAXI@Z @ 0x1C0019618 (--_GADAPTER_DISPLAY@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x1C0006E14 (--1DXGFASTMUTEX@@QEAA@XZ.c)
 *     ??_I@YAXPEAX_KHP6AX0@Z@Z @ 0x1C000B1C8 (--_I@YAXPEAX_KHP6AX0@Z@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C0065F88 (--3@YAXPEAX@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?RemoveIndirectOutputDuplMgr@DXGGLOBAL@@QEAAJPEAVOUTPUTDUPL_MGR_INDIRECT@@@Z @ 0x1C0146734 (-RemoveIndirectOutputDuplMgr@DXGGLOBAL@@QEAAJPEAVOUTPUTDUPL_MGR_INDIRECT@@@Z.c)
 *     ?DestroyOutputDuplManager@@YAJPEAVOUTPUTDUPL_MGR@@@Z @ 0x1C01570F4 (-DestroyOutputDuplManager@@YAJPEAVOUTPUTDUPL_MGR@@@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::~ADAPTER_DISPLAY(ADAPTER_DISPLAY *this)
{
  __int64 v1; // rbx
  DXGGLOBAL *Global; // rax
  char *v4; // rcx
  char *v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rax

  v1 = *((_QWORD *)this + 16);
  if ( v1 )
  {
    if ( (*(_DWORD *)(*((_QWORD *)this + 2) + 284LL) & 0x100) != 0 )
    {
      Global = DXGGLOBAL::GetGlobal((__int64)this);
      DXGGLOBAL::RemoveIndirectOutputDuplMgr(Global, (struct OUTPUTDUPL_MGR_INDIRECT *)(v1 - 24));
    }
    DestroyOutputDuplManager(*((struct OUTPUTDUPL_MGR **)this + 16));
    *((_QWORD *)this + 16) = 0LL;
  }
  v4 = (char *)*((_QWORD *)this + 17);
  if ( v4 )
  {
    v5 = v4 - 8;
    `vector destructor iterator'(
      v4,
      1016LL,
      *((_DWORD *)v4 - 2),
      (void (__fastcall *)(char *))DISPLAY_SOURCE::~DISPLAY_SOURCE);
    operator delete(v5);
    *((_QWORD *)this + 17) = 0LL;
  }
  DXGFASTMUTEX::~DXGFASTMUTEX((ADAPTER_DISPLAY *)((char *)this + 248));
  DXGFASTMUTEX::~DXGFASTMUTEX((ADAPTER_DISPLAY *)((char *)this + 160));
  if ( *((ADAPTER_DISPLAY **)this + 11) != (ADAPTER_DISPLAY *)((char *)this + 88) )
  {
    v7 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v7 + 24) = 633LL;
    WdLogEvent5_WdAssertion(v7);
  }
  DXGFASTMUTEX::~DXGFASTMUTEX((ADAPTER_DISPLAY *)((char *)this + 24));
  *((_QWORD *)this + 2) = 0LL;
}
