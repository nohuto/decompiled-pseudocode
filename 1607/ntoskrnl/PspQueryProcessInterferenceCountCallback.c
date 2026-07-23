/*
 * XREFs of PspQueryProcessInterferenceCountCallback @ 0x1406807D8
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectSafeWithTag @ 0x14006A940 (ObReferenceObjectSafeWithTag.c)
 *     ExAcquireRundownProtection @ 0x1400D1D70 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400D1DA0 (ExReleaseRundownProtection.c)
 *     PsInvokeWin32Callout @ 0x140427EE0 (PsInvokeWin32Callout.c)
 */

__int64 __fastcall PspQueryProcessInterferenceCountCallback(struct _EX_RUNDOWN_REF *Object, __int64 a2)
{
  int v4; // ebx
  _QWORD v6[5]; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v7; // [rsp+50h] [rbp+8h] BYREF
  unsigned int v8; // [rsp+60h] [rbp+18h] BYREF

  if ( (Object[96].Count & 1) != 0 || !ObReferenceObjectSafeWithTag((__int64)Object) )
  {
    return 0;
  }
  else
  {
    v4 = 0;
    if ( ExAcquireRundownProtection(Object + 92) )
    {
      v7 = *(_DWORD *)(*(_QWORD *)(a2 + 8) + 480LL);
      if ( v7 <= 0xFFFFFFFD )
      {
        v6[0] = Object;
        v6[1] = &v8;
        v4 = PsInvokeWin32Callout(24, (__int64)v6, 1, (__int64)&v7);
        if ( v4 >= 0 )
          **(_QWORD **)a2 += v8;
      }
      ExReleaseRundownProtection(Object + 92);
    }
    ObfDereferenceObjectWithTag(Object, 0x624A7350u);
  }
  return (unsigned int)v4;
}
