/*
 * XREFs of ?QueuePostPresentResponse@CLegacySurfaceManager@@QEAAJPEAVCResponseItem@@@Z @ 0x1800A5AC4
 * Callers:
 *     ?QueueResponse@CResponseItem@@QEAAJXZ @ 0x1800A5470 (-QueueResponse@CResponseItem@@QEAAJXZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180076E18 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CLegacySurfaceManager::QueuePostPresentResponse(
        CLegacySurfaceManager *this,
        struct CResponseItem *a2)
{
  unsigned int v2; // eax
  unsigned int v3; // edx
  unsigned int v4; // esi
  int v6; // eax
  struct CResponseItem *v7; // [rsp+48h] [rbp+10h] BYREF

  v7 = a2;
  v2 = *((_DWORD *)this + 60);
  v3 = v2 + 1;
  if ( v2 + 1 < v2 )
  {
    v4 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    goto LABEL_9;
  }
  v4 = 0;
  if ( v3 > *((_DWORD *)this + 59) )
  {
    v6 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 216, 8, 1, &v7);
    v4 = v6;
    if ( v6 >= 0 )
      goto LABEL_4;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0xC0u);
LABEL_9:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x2DAu);
    return v4;
  }
  *(_QWORD *)(*((_QWORD *)this + 27) + 8LL * v2) = v7;
  *((_DWORD *)this + 60) = v3;
LABEL_4:
  (**(void (__fastcall ***)(struct CResponseItem *))v7)(v7);
  return v4;
}
