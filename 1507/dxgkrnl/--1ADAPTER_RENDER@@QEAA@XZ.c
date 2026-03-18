/*
 * XREFs of ??1ADAPTER_RENDER@@QEAA@XZ @ 0x1C011F1FC
 * Callers:
 *     ??_GADAPTER_RENDER@@QEAAPEAXI@Z @ 0x1C0017B64 (--_GADAPTER_RENDER@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x1C0004B5C (--1DXGFASTMUTEX@@QEAA@XZ.c)
 *     ??1?$DXGNODELIST@VADAPTER_RENDER@@VDXGDEVICE@@@@AEAA@XZ @ 0x1C0017AE4 (--1-$DXGNODELIST@VADAPTER_RENDER@@VDXGDEVICE@@@@AEAA@XZ.c)
 *     ?ClearMPOState@ADAPTER_RENDER@@QEAAXXZ @ 0x1C0017C48 (-ClearMPOState@ADAPTER_RENDER@@QEAAXXZ.c)
 *     ?DestroyFormattingBuffer@ADAPTER_RENDER@@QEAAXXZ @ 0x1C00190B8 (-DestroyFormattingBuffer@ADAPTER_RENDER@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C00689D8 (--3@YAXPEAX@Z.c)
 */

void __fastcall ADAPTER_RENDER::~ADAPTER_RENDER(ADAPTER_RENDER *this)
{
  struct _LOOKASIDE_LIST_EX *v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rax

  ADAPTER_RENDER::ClearMPOState((void **)this);
  if ( *((_BYTE *)this + 584) )
    ADAPTER_RENDER::DestroyFormattingBuffer(this);
  if ( *((_BYTE *)this + 897) )
    ExDeleteLookasideListEx((PLOOKASIDE_LIST_EX)((char *)this + 944));
  v2 = (struct _LOOKASIDE_LIST_EX *)*((_QWORD *)this + 117);
  if ( v2 )
  {
    ExDeleteLookasideListEx(v2);
    operator delete(*((void **)this + 117));
  }
  operator delete(*((void **)this + 104));
  DXGFASTMUTEX::~DXGFASTMUTEX((ADAPTER_RENDER *)((char *)this + 488));
  DXGFASTMUTEX::~DXGFASTMUTEX((ADAPTER_RENDER *)((char *)this + 416));
  if ( *((ADAPTER_RENDER **)this + 22) != (ADAPTER_RENDER *)((char *)this + 176) )
  {
    v7 = WdLogNewEntry5_WdAssertion(v4, v3, v5, v6);
    *(_QWORD *)(v7 + 24) = 613LL;
    WdLogEvent5_WdAssertion(v7);
  }
  DXGFASTMUTEX::~DXGFASTMUTEX((ADAPTER_RENDER *)((char *)this + 136));
  DXGNODELIST<ADAPTER_RENDER,DXGDEVICE>::~DXGNODELIST<ADAPTER_RENDER,DXGDEVICE>((_QWORD *)this + 15);
  DXGNODELIST<ADAPTER_RENDER,DXGDEVICE>::~DXGNODELIST<ADAPTER_RENDER,DXGDEVICE>((_QWORD *)this + 13);
  *((_QWORD *)this + 2) = 0LL;
}
