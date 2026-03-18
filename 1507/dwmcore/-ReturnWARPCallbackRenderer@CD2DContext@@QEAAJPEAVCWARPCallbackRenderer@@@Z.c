/*
 * XREFs of ?ReturnWARPCallbackRenderer@CD2DContext@@QEAAJPEAVCWARPCallbackRenderer@@@Z @ 0x180136E08
 * Callers:
 *     ?Render@CWARPCallbackRenderer@@UEAAJXZ @ 0x180158A40 (-Render@CWARPCallbackRenderer@@UEAAJXZ.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180040188 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CD2DContext::ReturnWARPCallbackRenderer(CD2DContext *this, struct CWARPCallbackRenderer *a2)
{
  unsigned int v2; // eax
  unsigned int v3; // edx
  unsigned int v4; // ebx
  int v6; // eax
  struct CWARPCallbackRenderer *v7; // [rsp+48h] [rbp+10h] BYREF

  v7 = a2;
  v2 = *((_DWORD *)this + 96);
  v3 = v2 + 1;
  if ( v2 + 1 < v2 )
  {
    v4 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
LABEL_9:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x866u);
    return v4;
  }
  v4 = 0;
  if ( v3 > *((_DWORD *)this + 95) )
  {
    v6 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 360, 8u, 1, &v7);
    v4 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0xC0u);
      goto LABEL_9;
    }
  }
  else
  {
    *(_QWORD *)(*((_QWORD *)this + 45) + 8LL * *((unsigned int *)this + 96)) = v7;
    *((_DWORD *)this + 96) = v3;
  }
  _InterlockedIncrement((volatile signed __int32 *)v7 + 4);
  return v4;
}
