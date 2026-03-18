/*
 * XREFs of SeCaptureAtomTableCallout @ 0x1400EFDC0
 * Callers:
 *     PsConvertToGuiThread @ 0x1405091AC (PsConvertToGuiThread.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     PsInvokeWin32Callout @ 0x140422750 (PsInvokeWin32Callout.c)
 *     PsReferenceEffectiveToken @ 0x140481AE0 (PsReferenceEffectiveToken.c)
 */

LONG_PTR SeCaptureAtomTableCallout()
{
  __int64 v0; // rax
  _QWORD *v1; // rbx
  void *v2; // rcx
  unsigned __int64 v4; // rax
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF
  __int64 v6; // [rsp+48h] [rbp+10h] BYREF
  __int64 v7; // [rsp+50h] [rbp+18h] BYREF
  signed __int64 v8; // [rsp+58h] [rbp+20h] BYREF

  v8 = 0LL;
  v0 = PsReferenceEffectiveToken(
         (unsigned int)KeGetCurrentThread(),
         (unsigned int)&v7,
         (unsigned int)&v5,
         (unsigned int)&v6,
         0LL);
  v1 = (_QWORD *)v0;
  if ( (*(_DWORD *)(v0 + 200) & 0x4000) != 0 )
  {
    if ( !*(_QWORD *)(*(_QWORD *)(v0 + 1080) + 48LL) )
    {
      v4 = KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[16];
      if ( !v4 || (*(_DWORD *)(v4 + 448) & 0x20) == 0 )
      {
        PsInvokeWin32Callout(2LL, &v8, 0LL);
        if ( v8 && !_InterlockedCompareExchange64((volatile signed __int64 *)(v1[135] + 48LL), v8, 0LL) )
          _InterlockedIncrement((volatile signed __int32 *)(v8 + 4));
      }
    }
    v2 = v1;
  }
  else
  {
    v2 = (void *)v0;
  }
  return ObfDereferenceObjectWithTag(v2, 0x746C6644u);
}
