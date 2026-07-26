/*
 * XREFs of ndisEnumeratePorts @ 0x1C003AF6C
 * Callers:
 *     ndisOidPreEnumeratePorts @ 0x1C00C0260 (ndisOidPreEnumeratePorts.c)
 * Callees:
 *     memset @ 0x1C0026F40 (memset.c)
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0038424 (WPP_SF_qD.c)
 */

__int64 __fastcall ndisEnumeratePorts(__int64 a1, _DWORD *a2, unsigned int a3, unsigned int *a4, unsigned int *a5)
{
  unsigned int v9; // r14d
  KIRQL v10; // r9
  unsigned int v11; // ebp
  bool v12; // cl
  unsigned int v13; // esi
  unsigned int v14; // r8d
  _QWORD *v15; // rdi
  __int64 *i; // rax
  KIRQL v18; // [rsp+60h] [rbp+18h]

  v9 = 0;
  if ( (unsigned __int8)byte_1C008371E >= 4u )
    WPP_SF_q(0x22u, &WPP_19165d00fb3b32ae989335dc29d87a5c_Traceguids, a1);
  v18 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  v10 = v18;
  *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
  *(_DWORD *)(a1 + 1856) = 2360431;
  *a4 = 0;
  v11 = *(_DWORD *)(a1 + 2792);
  v12 = (*(_DWORD *)(a1 + 120) & 0x10000) != 0;
  if ( (*(_DWORD *)(a1 + 120) & 0x10000) != 0 )
    ++v11;
  v13 = (v11 << 6) + 16;
  *a5 = v13;
  if ( v13 <= a3 )
  {
    *a2 = 5243264;
    a2[3] = 64;
    v14 = 0;
    a2[1] = v11;
    a2[2] = 16;
    v15 = a2 + 4;
    if ( v12 )
    {
      memset(v15, 0, 0x40uLL);
      v10 = v18;
      *v15 = 4194688LL;
      *((_DWORD *)v15 + 2) = 0;
      v14 = 1;
      *((_DWORD *)v15 + 4) = *(_DWORD *)(a1 + 480);
      v15[3] = *(_QWORD *)(a1 + 792);
      v15[4] = *(_QWORD *)(a1 + 800);
      *((_DWORD *)v15 + 10) = *(_DWORD *)(*(_QWORD *)(a1 + 4096) + 532LL);
      *((_DWORD *)v15 + 11) = *(_DWORD *)(a1 + 3368);
      *((_DWORD *)v15 + 12) = *(_DWORD *)(a1 + 3372);
      *((_DWORD *)v15 + 13) = *(_DWORD *)(a1 + 3376);
      *((_DWORD *)v15 + 14) = *(_DWORD *)(a1 + 3380);
      v15 += 8;
    }
    for ( i = *(__int64 **)(a1 + 2760); i != (__int64 *)(a1 + 2760) && v14 < v11; i = (__int64 *)*i )
    {
      if ( *((_DWORD *)i + 4) == 4 )
      {
        *(_OWORD *)v15 = *(_OWORD *)(i + 3);
        *((_OWORD *)v15 + 1) = *(_OWORD *)(i + 5);
        *((_OWORD *)v15 + 2) = *(_OWORD *)(i + 7);
        *((_OWORD *)v15 + 3) = *(_OWORD *)(i + 9);
        v15 += 8;
        ++v14;
      }
    }
    *a4 = v13;
  }
  else
  {
    v9 = -1073676266;
  }
  *(_QWORD *)(a1 + 520) = 0LL;
  *(_DWORD *)(a1 + 1856) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v10);
  if ( (unsigned __int8)byte_1C008371E >= 4u )
    WPP_SF_qD(0x23u, &WPP_19165d00fb3b32ae989335dc29d87a5c_Traceguids, a1, v9);
  return v9;
}
