/*
 * XREFs of ?DetachFromChannel@CNotificationResource@@UEAAXPEAVCChannelContext@@_N@Z @ 0x180024300
 * Callers:
 *     ?DetachFromChannel@CWindowNode@@UEAAXPEAVCChannelContext@@_N@Z @ 0x180026480 (-DetachFromChannel@CWindowNode@@UEAAXPEAVCChannelContext@@_N@Z.c)
 *     ?ReleaseResource@CComposition@@QEAAJPEAVCChannelContext@@IPEAVCResource@@_N@Z @ 0x18003B2C4 (-ReleaseResource@CComposition@@QEAAJPEAVCChannelContext@@IPEAVCResource@@_N@Z.c)
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CNotificationResource::DetachFromChannel(
        CNotificationResource *this,
        struct CChannelContext *a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int *v4; // rax
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rcx

  v4 = (unsigned int *)*((_QWORD *)this + 14);
  if ( v4 == (unsigned int *)a2 )
  {
    v6 = *((unsigned int *)this + 30);
    if ( (_DWORD)v6 )
    {
      if ( v4 )
        v7 = v4[13];
      else
        v7 = 0LL;
      LOBYTE(a4) = 1;
      v8 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 1232LL) + 40LL);
      (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v8 + 72LL))(v8, v7, v6, a4);
      *((_DWORD *)this + 30) = 0;
    }
    *((_QWORD *)this + 14) = 0LL;
  }
}
