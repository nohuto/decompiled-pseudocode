/*
 * XREFs of ??1ADAPTER_RENDER@@QEAA@XZ @ 0x1C0148918
 * Callers:
 *     ??_GADAPTER_RENDER@@QEAAPEAXI@Z @ 0x1C001D774 (--_GADAPTER_RENDER@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x1C0006DF8 (--1DXGFASTMUTEX@@QEAA@XZ.c)
 *     ??1?$DXGNODELIST@VADAPTER_RENDER@@VDXGDEVICE@@@@AEAA@XZ @ 0x1C001F174 (--1-$DXGNODELIST@VADAPTER_RENDER@@VDXGDEVICE@@@@AEAA@XZ.c)
 *     ?DestroyFormattingBuffer@ADAPTER_RENDER@@QEAAXXZ @ 0x1C001F19C (-DestroyFormattingBuffer@ADAPTER_RENDER@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 */

void __fastcall ADAPTER_RENDER::~ADAPTER_RENDER(ADAPTER_RENDER *this)
{
  struct _LOOKASIDE_LIST_EX *v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rax

  operator delete(*((void **)this + 100));
  *((_QWORD *)this + 100) = 0LL;
  *((_DWORD *)this + 199) = 0;
  *((_DWORD *)this + 198) = 0;
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
    v4 = WdLogNewEntry5_WdAssertion(v3);
    *(_QWORD *)(v4 + 24) = 619LL;
    WdLogEvent5_WdAssertion(v4);
  }
  DXGFASTMUTEX::~DXGFASTMUTEX((ADAPTER_RENDER *)((char *)this + 136));
  DXGNODELIST<ADAPTER_RENDER,DXGDEVICE>::~DXGNODELIST<ADAPTER_RENDER,DXGDEVICE>((_QWORD *)this + 15);
  DXGNODELIST<ADAPTER_RENDER,DXGDEVICE>::~DXGNODELIST<ADAPTER_RENDER,DXGDEVICE>((_QWORD *)this + 13);
  *((_QWORD *)this + 2) = 0LL;
}
