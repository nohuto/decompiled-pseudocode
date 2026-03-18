/*
 * XREFs of ?Transport_SyncFlush@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_TRANSPORT_SYNCFLUSH@@@Z @ 0x18003BCFC
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$00@@IEAAJIIPEBX@Z @ 0x1800A3774 (-AddMultipleAndSet@-$DynArrayImpl@$00@@IEAAJIIPEBX@Z.c)
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
  int v7; // ebx
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
  }
  else
  {
    v7 = 0;
    if ( v6 <= *((_DWORD *)this + 99) )
    {
      *(_QWORD *)(*v4 + 8LL * *((unsigned int *)this + 100)) = v10;
      *((_DWORD *)this + 100) = v6;
      goto LABEL_5;
    }
    v8 = DynArrayImpl<1>::AddMultipleAndSet((char *)this + 376, 8LL, v4, &v10);
    v7 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0xC0u);
  }
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x8ACu);
    return (unsigned int)v7;
  }
LABEL_5:
  _InterlockedIncrement((volatile signed __int32 *)v10 + 2);
  return (unsigned int)v7;
}
