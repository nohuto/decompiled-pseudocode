/*
 * XREFs of PspQueryProcessInterferenceCountCallback @ 0x1406C4860
 * Callers:
 *     <none>
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     ObReferenceObjectSafeWithTag @ 0x14004FCE0 (ObReferenceObjectSafeWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     PsInvokeWin32Callout @ 0x140422750 (PsInvokeWin32Callout.c)
 */

__int64 __fastcall PspQueryProcessInterferenceCountCallback(struct _EX_RUNDOWN_REF *Object, __int64 a2)
{
  int v4; // ebx
  struct _EX_RUNDOWN_REF *v5; // rdi
  unsigned __int64 v6; // rtt
  unsigned __int64 v7; // rtt
  _QWORD v9[5]; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v10; // [rsp+50h] [rbp+8h] BYREF
  unsigned int v11; // [rsp+60h] [rbp+18h] BYREF

  if ( (Object[96].Count & 1) != 0 || !ObReferenceObjectSafeWithTag((__int64)Object) )
  {
    return 0;
  }
  else
  {
    v5 = Object + 92;
    _m_prefetchw(&Object[92]);
    v6 = Object[92].Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v6 == _InterlockedCompareExchange64((volatile signed __int64 *)&Object[92], v6 + 2, v6)
      || ExfAcquireRundownProtection(Object + 92) )
    {
      v4 = 0;
      v10 = *(_DWORD *)(*(_QWORD *)(a2 + 8) + 480LL);
      if ( v10 <= 0xFFFFFFFD )
      {
        v9[0] = Object;
        v9[1] = &v11;
        v4 = PsInvokeWin32Callout((_KPROCESS *)0x18, (__int64)v9, 1, (int)&v10);
        if ( v4 >= 0 )
          **(_QWORD **)a2 += v11;
      }
      _m_prefetchw(v5);
      v7 = v5->Count & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v7 != _InterlockedCompareExchange64((volatile signed __int64 *)v5, v7 - 2, v7) )
        ExfReleaseRundownProtection(Object + 92);
    }
    else
    {
      v4 = 0;
    }
    ObfDereferenceObjectWithTag(Object, 0x624A7350u);
  }
  return (unsigned int)v4;
}
