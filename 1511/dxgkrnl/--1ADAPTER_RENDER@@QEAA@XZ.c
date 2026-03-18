/*
 * XREFs of ??1ADAPTER_RENDER@@QEAA@XZ @ 0x1C0124CFC
 * Callers:
 *     ??_GADAPTER_RENDER@@QEAAPEAXI@Z @ 0x1C0019638 (--_GADAPTER_RENDER@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x1C0006E14 (--1DXGFASTMUTEX@@QEAA@XZ.c)
 *     ??1?$DXGNODELIST@VADAPTER_RENDER@@VDXGDEVICE@@@@AEAA@XZ @ 0x1C00195B8 (--1-$DXGNODELIST@VADAPTER_RENDER@@VDXGDEVICE@@@@AEAA@XZ.c)
 *     ?ClearMPOState@ADAPTER_RENDER@@QEAAXXZ @ 0x1C00196C8 (-ClearMPOState@ADAPTER_RENDER@@QEAAXXZ.c)
 *     ?DestroyFormattingBuffer@ADAPTER_RENDER@@QEAAXXZ @ 0x1C001A9A8 (-DestroyFormattingBuffer@ADAPTER_RENDER@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C0065F88 (--3@YAXPEAX@Z.c)
 */

void __fastcall ADAPTER_RENDER::~ADAPTER_RENDER(ADAPTER_RENDER *this)
{
  struct _LOOKASIDE_LIST_EX *v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rax

  ADAPTER_RENDER::ClearMPOState((void **)this);
  if ( *((_BYTE *)this + 656) )
    ADAPTER_RENDER::DestroyFormattingBuffer(this);
  if ( *((_BYTE *)this + 969) )
    ExDeleteLookasideListEx((PLOOKASIDE_LIST_EX)((char *)this + 1024));
  v2 = (struct _LOOKASIDE_LIST_EX *)*((_QWORD *)this + 126);
  if ( v2 )
  {
    ExDeleteLookasideListEx(v2);
    operator delete(*((void **)this + 126));
  }
  operator delete(*((void **)this + 113));
  DXGFASTMUTEX::~DXGFASTMUTEX((ADAPTER_RENDER *)((char *)this + 536));
  DXGFASTMUTEX::~DXGFASTMUTEX((ADAPTER_RENDER *)((char *)this + 440));
  if ( *((ADAPTER_RENDER **)this + 25) != (ADAPTER_RENDER *)((char *)this + 200) )
  {
    v4 = WdLogNewEntry5_WdAssertion(v3);
    *(_QWORD *)(v4 + 24) = 633LL;
    WdLogEvent5_WdAssertion(v4);
  }
  DXGFASTMUTEX::~DXGFASTMUTEX((ADAPTER_RENDER *)((char *)this + 136));
  DXGNODELIST<ADAPTER_RENDER,DXGDEVICE>::~DXGNODELIST<ADAPTER_RENDER,DXGDEVICE>((_QWORD *)this + 15);
  DXGNODELIST<ADAPTER_RENDER,DXGDEVICE>::~DXGNODELIST<ADAPTER_RENDER,DXGDEVICE>((_QWORD *)this + 13);
  *((_QWORD *)this + 2) = 0LL;
}
