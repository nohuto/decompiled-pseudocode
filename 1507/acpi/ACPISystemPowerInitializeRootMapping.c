/*
 * XREFs of ACPISystemPowerInitializeRootMapping @ 0x1C0020904
 * Callers:
 *     ACPIRootIrpQueryCapabilities @ 0x1C0071CB0 (ACPIRootIrpQueryCapabilities.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00235E0 (__security_check_cookie.c)
 *     ACPISystemPowerProcessRootMapping @ 0x1C0071D9C (ACPISystemPowerProcessRootMapping.c)
 *     ACPISystemPowerProcessSxD @ 0x1C0071E20 (ACPISystemPowerProcessSxD.c)
 */

__int64 __fastcall ACPISystemPowerInitializeRootMapping(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int128 v6; // xmm0
  __int64 v7; // rdx
  _DWORD *v8; // rax
  __int64 v9; // r8
  int v10; // ecx
  int v11; // eax
  KIRQL v12; // al
  int v13; // edx
  __int64 v14; // xmm1_8
  char v15[8]; // [rsp+20h] [rbp-30h] BYREF
  __int128 v16; // [rsp+28h] [rbp-28h] BYREF
  __int64 v17; // [rsp+38h] [rbp-18h]
  int v18; // [rsp+40h] [rbp-10h]

  if ( (*(_QWORD *)a1 & 0x400000000000000LL) != 0 || (unsigned int)(*(_DWORD *)(a1 + 312) - 2) > 1 )
  {
LABEL_2:
    *(_OWORD *)(a2 + 16) = *(_OWORD *)(a1 + 452);
    *(_QWORD *)(a2 + 32) = *(_QWORD *)(a1 + 468);
    *(_DWORD *)(a2 + 40) = *(_DWORD *)(a1 + 476);
    return 0LL;
  }
  v6 = *(_OWORD *)(a1 + 452);
  v7 = 5LL;
  v18 = *(_DWORD *)(a1 + 476);
  v8 = (_DWORD *)&v16 + 2;
  v17 = *(_QWORD *)(a1 + 468);
  v16 = v6;
  DWORD1(v16) = 1;
  v9 = a2 - ((_QWORD)&v16 + 8);
  do
  {
    v10 = *(_DWORD *)((char *)v8 + v9 + 24);
    if ( v10 )
      *v8 = v10;
    ++v8;
    --v7;
  }
  while ( v7 );
  result = ACPISystemPowerProcessSxD(a1, &v16, v15);
  if ( (int)result >= 0 )
  {
    v11 = v18;
    if ( !v18 )
      v11 = 4;
    v18 = v11;
    if ( (int)ACPISystemPowerProcessRootMapping(a1, &v16) >= 0 )
    {
      _InterlockedOr64((volatile signed __int64 *)a1, 0x400000000000000uLL);
      v12 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
      v13 = v18;
      v14 = v17;
      *(_OWORD *)(a1 + 452) = v16;
      *(_QWORD *)(a1 + 468) = v14;
      *(_DWORD *)(a1 + 476) = v13;
      KeReleaseSpinLock(&AcpiPowerLock, v12);
    }
    goto LABEL_2;
  }
  return result;
}
