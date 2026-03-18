/*
 * XREFs of ?ReturnWARPCallbackRenderer@CD2DContext@@QEAAJPEAVCWARPCallbackRenderer@@@Z @ 0x180177B98
 * Callers:
 *     ?Render@CWARPCallbackRenderer@@UEAAJXZ @ 0x180199320 (-Render@CWARPCallbackRenderer@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18009A984 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

__int64 __fastcall CD2DContext::ReturnWARPCallbackRenderer(CD2DContext *this, struct CWARPCallbackRenderer *a2)
{
  unsigned int v2; // eax
  unsigned int v3; // edx
  int v4; // ebx
  int v5; // eax
  struct CWARPCallbackRenderer *v7; // [rsp+48h] [rbp+10h] BYREF

  v7 = a2;
  v2 = *((_DWORD *)this + 98);
  v3 = v2 + 1;
  if ( v2 + 1 >= v2 )
  {
    v4 = 0;
    if ( v3 <= *((_DWORD *)this + 97) )
    {
      *(_QWORD *)(*((_QWORD *)this + 46) + 8LL * *((unsigned int *)this + 98)) = v7;
      *((_DWORD *)this + 98) = v3;
      goto LABEL_8;
    }
    v5 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 368, 8u, 1, &v7);
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
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x9E8u);
    return (unsigned int)v4;
  }
LABEL_8:
  _InterlockedIncrement((volatile signed __int32 *)v7 + 4);
  return (unsigned int)v4;
}
