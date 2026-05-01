/*
 * XREFs of RmpCpuSetManagerInitialize @ 0x18001E4B4
 * Callers:
 *     ?RmpInitializeAllModules@@YAXPEAU_RM_RUNTIME_CONFIGURATION@@PEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18001E19C (-RmpInitializeAllModules@@YAXPEAU_RM_RUNTIME_CONFIGURATION@@PEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     ?RmpCpuSetManagerInitializeAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@W4_RM_CPU_SET_ALLOCATION_TYPE@@PEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x18001E608 (-RmpCpuSetManagerInitializeAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@W4_RM_CPU_SET_ALLOCATION_TYPE.c)
 *     memset_0 @ 0x180020A42 (memset_0.c)
 */

__int64 **__fastcall RmpCpuSetManagerInitialize(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v3; // rcx
  _QWORD *v4; // rax
  __int64 *v5; // rdx
  __int64 v6; // r8
  __int64 **v7; // rax
  __int64 *v8; // rcx
  __int64 v9; // rdx
  __int64 **result; // rax

  v1 = a1 + 1944;
  memset_0((void *)(a1 + 1944), 0, 0x3D0uLL);
  *(_QWORD *)v1 = a1;
  *(_QWORD *)(v1 + 24) = 0LL;
  v3 = 4LL;
  *(_QWORD *)(v1 + 32) = 0LL;
  *(_QWORD *)(v1 + 40) = 0LL;
  *(_QWORD *)(v1 + 48) = 0LL;
  *(_QWORD *)(v1 + 56) = 0LL;
  *(_QWORD *)(v1 + 64) = 0LL;
  v4 = (_QWORD *)(v1 + 232);
  do
  {
    v4[1] = v4;
    *v4 = v4;
    v4 += 2;
    --v3;
  }
  while ( v3 );
  *(_QWORD *)(v1 + 16) = v1 + 8;
  *(_QWORD *)(v1 + 8) = v1 + 8;
  *(_QWORD *)(v1 + 304) = v1 + 296;
  *(_QWORD *)(v1 + 296) = v1 + 296;
  *(_QWORD *)(v1 + 320) = v1 + 312;
  *(_QWORD *)(v1 + 312) = v1 + 312;
  *(_QWORD *)(v1 + 336) = v1 + 328;
  *(_QWORD *)(v1 + 328) = v1 + 328;
  *(_QWORD *)(v1 + 352) = v1 + 344;
  *(_QWORD *)(v1 + 344) = v1 + 344;
  *(_DWORD *)(v1 + 944) = -1;
  RmpCpuSetManagerInitializeAllocation(v1, 3LL, v1 + 360);
  RmpCpuSetManagerInitializeAllocation(v1, 0LL, v1 + 648);
  v5 = (__int64 *)(v1 + 416);
  v6 = 16LL * *(int *)(v1 + 640) + v1 + 232;
  v7 = *(__int64 ***)(v6 + 8);
  if ( *v7 != (__int64 *)v6 )
    __fastfail(3u);
  *(_QWORD *)(v1 + 424) = v7;
  v8 = (__int64 *)(v1 + 704);
  *v5 = v6;
  *v7 = v5;
  *(_QWORD *)(v6 + 8) = v5;
  v9 = 16LL * *(int *)(v1 + 928) + v1 + 232;
  result = *(__int64 ***)(v9 + 8);
  if ( *result != (__int64 *)v9 )
    __fastfail(3u);
  *v8 = v9;
  *(_QWORD *)(v1 + 712) = result;
  *result = v8;
  *(_QWORD *)(v9 + 8) = v8;
  return result;
}
