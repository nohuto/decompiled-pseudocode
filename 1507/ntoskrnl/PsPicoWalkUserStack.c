/*
 * XREFs of PsPicoWalkUserStack @ 0x1406C56E8
 * Callers:
 *     EtwpTraceStackWalk @ 0x1402603FC (EtwpTraceStackWalk.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     PsGetBaseTrapFrame @ 0x140243754 (PsGetBaseTrapFrame.c)
 */

__int64 __fastcall PsPicoWalkUserStack(__int64 a1, unsigned int a2)
{
  __int64 BaseTrapFrame; // rax
  unsigned int v5; // edx
  _OWORD *v6; // rcx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // r8
  _OWORD *v9; // rax
  __int128 v10; // xmm1
  struct _KTHREAD *v11; // rcx
  __int16 v12; // ax
  _BYTE v14[400]; // [rsp+20h] [rbp-1A8h] BYREF

  BaseTrapFrame = PsGetBaseTrapFrame((__int64)KeGetCurrentThread());
  v5 = 0;
  v6 = (_OWORD *)BaseTrapFrame;
  if ( xmmword_14032C3B0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    v8 = 3LL;
    v9 = v14;
    do
    {
      *v9 = *v6;
      v9[1] = v6[1];
      v9[2] = v6[2];
      v9[3] = v6[3];
      v9[4] = v6[4];
      v9[5] = v6[5];
      v9[6] = v6[6];
      v9 += 8;
      v10 = v6[7];
      v6 += 8;
      *(v9 - 1) = v10;
      --v8;
    }
    while ( v8 );
    *v9 = *v6;
    v11 = KeGetCurrentThread();
    v12 = v11->SpecialApcDisable + 1;
    v11->SpecialApcDisable = v12;
    if ( !v12 && ($CD287064E7C9F7953DE243E927CFCB99 *)v11->ApcState.ApcListHead[0].Flink != &v11->152 )
      KiCheckForKernelApcDelivery();
    return (unsigned int)xmmword_14032C3B0(v14, a1, a2);
  }
  return v5;
}
