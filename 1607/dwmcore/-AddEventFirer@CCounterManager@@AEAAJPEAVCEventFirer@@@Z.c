/*
 * XREFs of ?AddEventFirer@CCounterManager@@AEAAJPEAVCEventFirer@@@Z @ 0x1800B5938
 * Callers:
 *     ?Init@CCounterManager@@AEAAJXZ @ 0x1800B54CC (-Init@CCounterManager@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18009A984 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

__int64 __fastcall CCounterManager::AddEventFirer(CCounterManager *this, struct CEventFirer *a2)
{
  unsigned int v2; // eax
  unsigned int v3; // edx
  int v4; // ebx
  int v6; // eax
  struct CEventFirer *v7; // [rsp+48h] [rbp+10h] BYREF

  v7 = a2;
  v2 = *((_DWORD *)this + 112);
  v3 = v2 + 1;
  if ( v2 + 1 < v2 )
  {
    v4 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
  }
  else
  {
    v4 = 0;
    if ( v3 <= *((_DWORD *)this + 111) )
    {
      *(_QWORD *)(*((_QWORD *)this + 53) + 8LL * v2) = v7;
      *((_DWORD *)this + 112) = v3;
      return (unsigned int)v4;
    }
    v6 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 424, 8u, 1, &v7);
    v4 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0xC0u);
  }
  if ( v4 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x49u);
  return (unsigned int)v4;
}
