/*
 * XREFs of ?Channel_SetCallbackId@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_CHANNEL_SETCALLBACKID@@@Z @ 0x180095358
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x180096A00 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

__int64 __fastcall CComposition::Channel_SetCallbackId(
        CComposition *this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct MILCMD_CHANNEL_SETCALLBACKID *a4)
{
  unsigned int v5; // r14d
  int v7; // ecx

  v5 = *((_DWORD *)a4 + 1);
  if ( !(*(unsigned int (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 141) + 48LL) + 24LL))(
          *(_QWORD *)(*((_QWORD *)this + 141) + 48LL),
          v5,
          *((unsigned int *)a4 + 4)) )
  {
    v7 = *((_DWORD *)a4 + 2);
    if ( *((_DWORD *)a4 + 3) )
    {
      *((_DWORD *)a2 + 15) = v5;
      *((_DWORD *)a2 + 16) = v7;
    }
    else
    {
      *((_DWORD *)a2 + 13) = v5;
      *((_DWORD *)a2 + 14) = v7;
    }
  }
  return 0LL;
}
