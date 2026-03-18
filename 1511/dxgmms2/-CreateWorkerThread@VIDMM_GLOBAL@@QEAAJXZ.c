/*
 * XREFs of ?CreateWorkerThread@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C006723C
 * Callers:
 *     ?Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAU_DXGK_QUERYSEGMENTOUT4@@K@Z @ 0x1C0067E2C (-Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAU_DXGK_QUERYSEGMENTOUT4@@K@Z.c)
 * Callees:
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00115F0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::CreateWorkerThread(struct _KEVENT **this)
{
  struct _KEVENT *v2; // rax
  struct _KEVENT *v3; // rcx
  struct _LIST_ENTRY **p_Blink; // rax

  v2 = (struct _KEVENT *)operator new(0xC8uLL, 0x37346956u, PagedPool);
  v3 = v2;
  if ( v2 )
  {
    *(_QWORD *)&v2->Header.Lock = this;
    v2->Header.WaitListHead.Flink = 0LL;
    v2->Header.WaitListHead.Blink = 0LL;
    v2[1].Header.WaitListHead.Flink = 0LL;
    *(_QWORD *)&v2[1].Header.Lock = 0LL;
    v2[4].Header.WaitListHead.Blink = 0LL;
    v2[4].Header.WaitListHead.Flink = 0LL;
    *(_QWORD *)&v2[5].Header.Lock = 0LL;
    LOBYTE(v2[5].Header.WaitListHead.Flink) = 0;
    v2[6].Header.WaitListHead.Flink = 0LL;
    v2[6].Header.WaitListHead.Blink = 0LL;
    *(_QWORD *)&v2[7].Header.Lock = 0LL;
    LOBYTE(v2[7].Header.WaitListHead.Blink) = 1;
    *(_QWORD *)&v2[8].Header.Lock = 0LL;
    p_Blink = &v2[1].Header.WaitListHead.Blink;
    p_Blink[1] = (struct _LIST_ENTRY *)p_Blink;
    *p_Blink = (struct _LIST_ENTRY *)p_Blink;
    v3[3].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)&v3[3];
    *(_QWORD *)&v3[3].Header.Lock = v3 + 3;
    v3[2].Header.WaitListHead.Blink = &v3[2].Header.WaitListHead;
    v3[2].Header.WaitListHead.Flink = &v3[2].Header.WaitListHead;
    *(_QWORD *)&v3[4].Header.Lock = (char *)v3 + 88;
    v3[3].Header.WaitListHead.Blink = (struct _LIST_ENTRY *)&v3[3].Header.WaitListHead.Blink;
  }
  else
  {
    v3 = 0LL;
  }
  *this = v3;
  if ( v3 )
    return VIDMM_WORKER_THREAD::Init((__int64)v3, this + 5107);
  else
    return 3221225495LL;
}
