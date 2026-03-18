/*
 * XREFs of ?Transport_SyncFlush@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_TRANSPORT_SYNCFLUSH@@@Z @ 0x180068F54
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18006A010 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$00@@IEAAJIIPEBX@Z @ 0x180051AB0 (-AddMultipleAndSet@-$DynArrayImpl@$00@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CComposition::Transport_SyncFlush(
        CComposition *this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct MILCMD_TRANSPORT_SYNCFLUSH *a4)
{
  _QWORD *v4; // r8
  unsigned int v5; // eax
  unsigned int v6; // edx
  unsigned int v7; // ebx
  int v8; // eax
  struct CChannelContext *v10; // [rsp+48h] [rbp+10h] BYREF

  v10 = a2;
  v4 = (_QWORD *)((char *)this + 376);
  v5 = *((_DWORD *)this + 100);
  v6 = v5 + 1;
  if ( v5 + 1 < v5 )
  {
    v7 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
LABEL_9:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x976u);
    return v7;
  }
  v7 = 0;
  if ( v6 <= *((_DWORD *)this + 99) )
  {
    *(_QWORD *)(*v4 + 8LL * *((unsigned int *)this + 100)) = v10;
    *((_DWORD *)this + 100) = v6;
    goto LABEL_4;
  }
  v8 = DynArrayImpl<1>::AddMultipleAndSet((__int64)this + 376, 8u, (__int64)v4, &v10);
  v7 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0xC0u);
    goto LABEL_9;
  }
LABEL_4:
  _InterlockedIncrement((volatile signed __int32 *)v10 + 2);
  return v7;
}
