/*
 * XREFs of ?AddPolygon@CBspNode@@AEAAJPEAVCPolygon@@@Z @ 0x180158D58
 * Callers:
 *     ?PushPolygon@CBspNode@@QEAAJPEAVCPolygon@@@Z @ 0x180158FB4 (-PushPolygon@CBspNode@@QEAAJPEAVCPolygon@@@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180040188 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CBspNode::AddPolygon(CBspNode *this, struct CPolygon *a2)
{
  unsigned int v2; // eax
  unsigned int v3; // edx
  unsigned int v4; // esi
  int v6; // eax
  struct CPolygon *v7; // [rsp+48h] [rbp+10h] BYREF

  v7 = a2;
  v2 = *((_DWORD *)this + 16);
  v3 = v2 + 1;
  if ( v2 + 1 < v2 )
  {
    v4 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
LABEL_9:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x7Cu);
    return v4;
  }
  v4 = 0;
  if ( v3 > *((_DWORD *)this + 15) )
  {
    v6 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 40, 8u, 1, &v7);
    v4 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0xC0u);
      goto LABEL_9;
    }
  }
  else
  {
    *(_QWORD *)(*((_QWORD *)this + 5) + 8LL * *((unsigned int *)this + 16)) = v7;
    *((_DWORD *)this + 16) = v3;
  }
  (**(void (__fastcall ***)(struct CPolygon *))v7)(v7);
  return v4;
}
