/*
 * XREFs of ?AppendWARPDrawListEntry@CWARPCallbackRenderer@@QEAAJPEAVCWARPDrawListEntry@@@Z @ 0x180199178
 * Callers:
 *     ?AppendWARPDrawListEntry@CD2DContext@@QEAAJPEAVCWARPDrawListEntry@@@Z @ 0x180175B24 (-AppendWARPDrawListEntry@CD2DContext@@QEAAJPEAVCWARPDrawListEntry@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18009A984 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

__int64 __fastcall CWARPCallbackRenderer::AppendWARPDrawListEntry(
        CWARPCallbackRenderer *this,
        struct CWARPDrawListEntry *a2)
{
  unsigned int v2; // eax
  unsigned int v3; // edx
  int v4; // ebx
  int v5; // eax
  struct CWARPDrawListEntry *v7; // [rsp+48h] [rbp+10h] BYREF

  v7 = a2;
  v2 = *((_DWORD *)this + 22);
  v3 = v2 + 1;
  if ( v2 + 1 >= v2 )
  {
    v4 = 0;
    if ( v3 <= *((_DWORD *)this + 21) )
    {
      *(_QWORD *)(*((_QWORD *)this + 8) + 8LL * *((unsigned int *)this + 22)) = v7;
      *((_DWORD *)this + 22) = v3;
      goto LABEL_8;
    }
    v5 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 64, 8u, 1, &v7);
    v4 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0xC0u);
  }
  else
  {
    v4 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
  }
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x80u);
    return (unsigned int)v4;
  }
LABEL_8:
  _InterlockedAdd((volatile signed __int32 *)v7 + 2, 1u);
  ++*((_DWORD *)v7 + 4);
  _InterlockedExchangeAdd((volatile signed __int32 *)CCounterManager::s_pGlobalPerFrameCounterManager + 9, 1u);
  return (unsigned int)v4;
}
