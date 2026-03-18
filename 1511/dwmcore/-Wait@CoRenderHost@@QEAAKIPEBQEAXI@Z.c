/*
 * XREFs of ?Wait@CoRenderHost@@QEAAKIPEBQEAXI@Z @ 0x180104238
 * Callers:
 *     ?Run@CPartitionVerticalBlankScheduler@@MEAAJXZ @ 0x18008FC60 (-Run@CPartitionVerticalBlankScheduler@@MEAAJXZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CoRenderHost::Wait(CoRenderHost *this, unsigned int a2, void *const *a3, unsigned int a4)
{
  int v4; // eax
  unsigned int v6; // [rsp+50h] [rbp+8h] BYREF

  v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, void *const *, _QWORD, unsigned int *))(**((_QWORD **)this + 3) + 40LL))(
         *((_QWORD *)this + 3),
         a2,
         a3,
         a4,
         &v6);
  if ( v4 >= 0 )
    return v6;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x75u);
  return 0xFFFFFFFFLL;
}
