/*
 * XREFs of IoGetIoRateControl @ 0x1400B3E00
 * Callers:
 *     <none>
 * Callees:
 *     IoDiskIoAttributionDereference @ 0x14001EF2C (IoDiskIoAttributionDereference.c)
 *     IopAcquireReferencesFromIoAttributionHandle @ 0x1400B3F34 (IopAcquireReferencesFromIoAttributionHandle.c)
 *     PsIoRateControlReference @ 0x1400B3FA0 (PsIoRateControlReference.c)
 *     IoDiskIoAttributionQuery @ 0x1400B404C (IoDiskIoAttributionQuery.c)
 *     ExReleaseRundownProtection @ 0x1400D1DA0 (ExReleaseRundownProtection.c)
 */

__int64 __fastcall IoGetIoRateControl(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, unsigned __int64 *a6)
{
  unsigned __int64 *v6; // r13
  unsigned int v9; // r12d
  int v11; // eax
  struct _EX_RUNDOWN_REF *v12; // rbx
  __int64 v13; // rdi
  _QWORD *v14; // rsi
  __int64 v15; // r14
  __int64 v16; // r15
  unsigned __int64 Count; // rax
  struct _EX_RUNDOWN_REF *v18; // rdx
  __int64 v20; // rax
  __int128 v21; // xmm1
  _QWORD v22[2]; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v23[4]; // [rsp+40h] [rbp-40h] BYREF
  _OWORD v24[2]; // [rsp+60h] [rbp-20h] BYREF

  v6 = a6;
  v22[0] = 0LL;
  v9 = 0;
  *a6 = 0LL;
  v11 = IopAcquireReferencesFromIoAttributionHandle(a1, v22, &a6);
  v12 = (struct _EX_RUNDOWN_REF *)v22[0];
  if ( v11 >= 0 )
  {
    PsIoRateControlReference((_DWORD)a6, a2, a3, (unsigned int)v22, a4);
    v13 = a5 + 16;
    v14 = v22;
    v15 = a3 - (_QWORD)v22;
    v16 = 2LL;
    do
    {
      if ( *(_QWORD *)((char *)v14 + v15) )
      {
        IoDiskIoAttributionQuery(*v14, v24, v23);
        v20 = v23[3];
        v21 = v24[1];
        *(_OWORD *)(v13 - 16) = v24[0];
        *(_OWORD *)v13 = v21;
        *(_QWORD *)(v13 + 8) += v20;
        *(_QWORD *)v13 += v23[2];
        *(_QWORD *)(v13 - 16) += v23[0];
        *(_QWORD *)(v13 - 8) += v23[1];
        ++v9;
      }
      ++v14;
      v13 += 32LL;
      --v16;
    }
    while ( v16 );
    Count = v12[20].Count;
    v18 = v12;
    while ( Count )
    {
      v18 = (struct _EX_RUNDOWN_REF *)Count;
      Count = *(_QWORD *)(Count + 160);
    }
    *v6 = v18[3].Count;
  }
  if ( v12 )
  {
    ExReleaseRundownProtection(v12 + 19);
    IoDiskIoAttributionDereference((__int64)v12);
  }
  return v9;
}
