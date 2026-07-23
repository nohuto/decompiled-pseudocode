/*
 * XREFs of CmCheckRegistry @ 0x14047F0C8
 * Callers:
 *     CmpInitializeHive @ 0x14047DED8 (CmpInitializeHive.c)
 *     CmpReorganizeHive @ 0x14047E780 (CmpReorganizeHive.c)
 * Callees:
 *     RtlClearAllBits @ 0x1400829DC (RtlClearAllBits.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     SetFailureLocation @ 0x1401B29DC (SetFailureLocation.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     CmpValidateHiveSecurityDescriptors @ 0x1403F7AE8 (CmpValidateHiveSecurityDescriptors.c)
 *     CmpCheckRegistry2 @ 0x14043DE40 (CmpCheckRegistry2.c)
 *     HvCheckHive @ 0x1404F6984 (HvCheckHive.c)
 */

__int64 __fastcall CmCheckRegistry(ULONG_PTR a1, int a2)
{
  int v2; // edi
  __int64 v4; // rdx
  void *v5; // r14
  _RTL_BITMAP *v6; // r15
  __int64 v8; // r12
  int v9; // edi
  PVOID PoolWithTag; // rax
  int v11; // r13d
  int v12; // eax
  unsigned int v13; // edi
  int v14; // eax
  __int64 v15; // r9
  int v16; // [rsp+20h] [rbp-49h]
  int v17; // [rsp+40h] [rbp-29h] BYREF
  PVOID v18; // [rsp+48h] [rbp-21h]
  _DWORD v19[28]; // [rsp+50h] [rbp-19h] BYREF
  char v20; // [rsp+D0h] [rbp+67h] BYREF
  int v21; // [rsp+D8h] [rbp+6Fh]
  __int64 v22; // [rsp+E0h] [rbp+77h] BYREF

  v21 = a2;
  v2 = a2;
  memset(v19, 0, 0x38uLL);
  v5 = 0LL;
  v6 = 0LL;
  v20 = 0;
  if ( a1 == CmpMasterHive )
    return 0LL;
  v8 = *(_QWORD *)(a1 + 56);
  if ( (v2 & 0x80000) != 0 )
  {
    v9 = *(_DWORD *)(a1 + 1400) >> 3;
    if ( ((((unsigned int)(v9 + 7) >> 3) + 7) & 0xFFFFFFF8) == 0
      || (PoolWithTag = ExAllocatePoolWithTag(PagedPool, (((unsigned int)(v9 + 7) >> 3) + 7) & 0xFFFFFFF8, 0x624C4D43u),
          (v5 = PoolWithTag) == 0LL) )
    {
      SetFailureLocation(v8, 0, 11, -1073741801, 0);
      return 3000LL;
    }
    v17 = v9;
    v6 = (_RTL_BITMAP *)&v17;
    v2 = v21;
    v18 = PoolWithTag;
  }
  v11 = v2 & 0x10000;
  while ( 1 )
  {
    if ( v11 )
    {
      if ( v6 )
        RtlClearAllBits(v6);
      v12 = HvCheckHive(a1, v4, v6, v19);
      v13 = v12;
      if ( v12 )
      {
        SetFailureLocation(v8, 0, 11, v12, 16);
        goto LABEL_26;
      }
      if ( v19[0] + v19[4] + v19[8] > (unsigned int)CmpReorganizeLimit )
        *(_DWORD *)(a1 + 5360) |= 0x400u;
      v2 = v21;
      *(_DWORD *)(a1 + 6016) = v19[12];
      *(_DWORD *)(a1 + 6020) = v19[13];
    }
    if ( *(int *)(*(_QWORD *)(a1 + 64) + 36LL) < 0 )
      break;
    v14 = CmpValidateHiveSecurityDescriptors(a1, v2, &v20, (__int64)v6);
    if ( v14 != 2 )
    {
      if ( v14 )
      {
        v13 = 3041;
        v16 = 48;
        goto LABEL_25;
      }
      v13 = CmpCheckRegistry2(a1, v2, *(_DWORD *)(*(_QWORD *)(a1 + 64) + 36LL), v15, v20, v6, (int *)&v22);
      if ( v13 != -1 )
      {
        *(_DWORD *)(a1 + 6028) = v22;
        goto LABEL_26;
      }
      SetFailureLocation(v8, 1, 11, -1, 64);
      v2 = v21;
    }
  }
  v13 = 3040;
  v16 = 32;
LABEL_25:
  SetFailureLocation(v8, 0, 11, v13, v16);
LABEL_26:
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  return v13;
}
