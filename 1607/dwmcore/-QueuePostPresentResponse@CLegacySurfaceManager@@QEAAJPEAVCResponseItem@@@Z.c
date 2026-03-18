/*
 * XREFs of ?QueuePostPresentResponse@CLegacySurfaceManager@@QEAAJPEAVCResponseItem@@@Z @ 0x180037B28
 * Callers:
 *     ?QueueResponse@CResponseItem@@QEAAJXZ @ 0x1800AAB54 (-QueueResponse@CResponseItem@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18009A984 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CLegacySurfaceManager::QueuePostPresentResponse(
        CLegacySurfaceManager *this,
        struct CResponseItem *a2)
{
  unsigned int v2; // eax
  unsigned int v3; // edx
  int v4; // ebx
  int v6; // eax
  struct CResponseItem *v7; // [rsp+48h] [rbp+10h] BYREF

  v7 = a2;
  v2 = *((_DWORD *)this + 60);
  v3 = v2 + 1;
  if ( v2 + 1 < v2 )
  {
    v4 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
  }
  else
  {
    v4 = 0;
    if ( v3 <= *((_DWORD *)this + 59) )
    {
      *(_QWORD *)(*((_QWORD *)this + 27) + 8LL * v2) = v7;
      *((_DWORD *)this + 60) = v3;
      goto LABEL_4;
    }
    v6 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 216, 8LL, 1LL, &v7);
    v4 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0xC0u);
  }
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x2DEu);
    return (unsigned int)v4;
  }
LABEL_4:
  (**(void (__fastcall ***)(struct CResponseItem *))v7)(v7);
  return (unsigned int)v4;
}
