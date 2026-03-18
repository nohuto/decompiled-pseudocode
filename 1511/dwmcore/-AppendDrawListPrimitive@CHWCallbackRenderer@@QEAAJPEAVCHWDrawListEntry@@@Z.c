/*
 * XREFs of ?AppendDrawListPrimitive@CHWCallbackRenderer@@QEAAJPEAVCHWDrawListEntry@@@Z @ 0x1800F9FBC
 * Callers:
 *     ?AppendHWDrawListEntry@CD2DContext@@QEAAJPEAVCHWDrawListEntry@@@Z @ 0x1800FA640 (-AppendHWDrawListEntry@CD2DContext@@QEAAJPEAVCHWDrawListEntry@@@Z.c)
 *     ?AppendHWMegaRectEntry@CD2DContext@@QEAAJPEAVCHWDrawListEntry@@@Z @ 0x1800FA6CC (-AppendHWMegaRectEntry@CD2DContext@@QEAAJPEAVCHWDrawListEntry@@@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180076E18 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CHWCallbackRenderer::AppendDrawListPrimitive(CHWCallbackRenderer *this, struct CHWDrawListEntry *a2)
{
  unsigned int v2; // eax
  unsigned int v3; // edx
  unsigned int v4; // ebx
  int v6; // eax
  struct CHWDrawListEntry *v7; // [rsp+48h] [rbp+10h] BYREF

  v7 = a2;
  v2 = *((_DWORD *)this + 14);
  v3 = v2 + 1;
  if ( v2 + 1 < v2 )
  {
    v4 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
LABEL_9:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x8Eu);
    return v4;
  }
  v4 = 0;
  if ( v3 > *((_DWORD *)this + 13) )
  {
    v6 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 32, 8, 1, &v7);
    v4 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0xC0u);
      goto LABEL_9;
    }
  }
  else
  {
    *(_QWORD *)(*((_QWORD *)this + 4) + 8LL * *((unsigned int *)this + 14)) = v7;
    *((_DWORD *)this + 14) = v3;
  }
  _InterlockedIncrement((volatile signed __int32 *)v7 + 2);
  ++*((_DWORD *)v7 + 36);
  return v4;
}
