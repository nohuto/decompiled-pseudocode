/*
 * XREFs of MiWriteSharedDemandZeroPte @ 0x1400EFE38
 * Callers:
 *     MiBuildForkPte @ 0x14001DDD8 (MiBuildForkPte.c)
 * Callees:
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 */

__int64 __fastcall MiWriteSharedDemandZeroPte(__int64 a1, __int64 *a2, __int64 *a3, _QWORD *a4)
{
  __int64 v4; // rax
  __int64 v8; // rdi
  unsigned __int64 v9; // rax
  __int64 v10; // rbx
  __int64 result; // rax

  v4 = a2[3];
  if ( v4 )
  {
    ++a2[2];
    ++*a4;
    a2[3] = v4 + 1;
  }
  else
  {
    v8 = ((unsigned __int64)a2[2] >> 54) & 0x3E0 | 0x1000000;
    *a2 = v8;
    if ( (unsigned int)MiPteInShadowRange(a2) )
      MiWritePteShadow(a2, v8);
    v9 = a2[2] & 0xF800000000000001uLL;
    a2[3] = 1LL;
    ++a4[1];
    a2[2] = v9 | 1;
  }
  v10 = ((_QWORD)a2 << 16) | 0x500LL;
  *a3 = v10;
  result = MiPteInShadowRange(a3);
  if ( (_DWORD)result )
    return MiWritePteShadow(a3, v10);
  return result;
}
