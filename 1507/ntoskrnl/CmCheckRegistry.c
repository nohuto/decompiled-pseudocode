/*
 * XREFs of CmCheckRegistry @ 0x1404ADFB0
 * Callers:
 *     CmpInitializeHive @ 0x1404ACE6C (CmpInitializeHive.c)
 * Callees:
 *     RtlClearAllBits @ 0x14001B168 (RtlClearAllBits.c)
 *     memset @ 0x140195A80 (memset.c)
 *     SetFailureLocation @ 0x1401DE608 (SetFailureLocation.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     CmpValidateHiveSecurityDescriptors @ 0x140445994 (CmpValidateHiveSecurityDescriptors.c)
 *     HvCheckHive @ 0x1404A0AF0 (HvCheckHive.c)
 *     CmpCheckRegistry2 @ 0x1404AE1C0 (CmpCheckRegistry2.c)
 */

__int64 __fastcall CmCheckRegistry(ULONG_PTR a1, __int64 a2)
{
  int v2; // edi
  void *v4; // r14
  _RTL_BITMAP *v5; // r15
  __int64 v7; // r12
  int v8; // edi
  PVOID PoolWithTag; // rax
  int v10; // r13d
  int v11; // eax
  unsigned int v12; // edi
  int v13; // eax
  int v14; // [rsp+20h] [rbp-49h]
  int v15; // [rsp+40h] [rbp-29h] BYREF
  PVOID v16; // [rsp+48h] [rbp-21h]
  _DWORD v17[28]; // [rsp+50h] [rbp-19h] BYREF
  char v18; // [rsp+D0h] [rbp+67h] BYREF
  int v19; // [rsp+D8h] [rbp+6Fh]
  int v20; // [rsp+E0h] [rbp+77h] BYREF

  v19 = a2;
  memset(v17, 0, 56);
  v2 = a2;
  v4 = 0LL;
  v5 = 0LL;
  v18 = 0;
  if ( a1 == CmpMasterHive )
    return 0LL;
  v7 = *(_QWORD *)(a1 + 56);
  if ( (a2 & 0x80000) != 0 )
  {
    v8 = *(_DWORD *)(a1 + 1400) >> 3;
    if ( ((((unsigned int)(v8 + 7) >> 3) + 7) & 0xFFFFFFF8) == 0
      || (PoolWithTag = ExAllocatePoolWithTag(PagedPool, (((unsigned int)(v8 + 7) >> 3) + 7) & 0xFFFFFFF8, 0x624C4D43u),
          (v4 = PoolWithTag) == 0LL) )
    {
      SetFailureLocation(v7, 0, 11, -1073741801, 0);
      return 3000LL;
    }
    v15 = v8;
    v5 = (_RTL_BITMAP *)&v15;
    v2 = v19;
    v16 = PoolWithTag;
  }
  v10 = v2 & 0x10000;
  while ( 1 )
  {
    if ( v10 )
    {
      if ( v5 )
        RtlClearAllBits(v5);
      v11 = HvCheckHive(a1, a2, v5, v17);
      v12 = v11;
      if ( v11 )
      {
        SetFailureLocation(v7, 0, 11, v11, 16);
        goto LABEL_26;
      }
      if ( v17[0] + v17[4] + v17[8] > (unsigned int)CmpReorganizeLimit )
        *(_DWORD *)(a1 + 5360) |= 0x400u;
      v2 = v19;
      *(_DWORD *)(a1 + 6016) = v17[12];
      *(_DWORD *)(a1 + 6020) = v17[13];
    }
    if ( *(int *)(*(_QWORD *)(a1 + 64) + 36LL) < 0 )
      break;
    v13 = CmpValidateHiveSecurityDescriptors(a1, v2, &v18, (__int64)v5);
    if ( v13 != 2 )
    {
      if ( v13 )
      {
        v12 = 3041;
        v14 = 48;
        goto LABEL_25;
      }
      v12 = CmpCheckRegistry2(a1, v18, (__int64)v5, (__int64)&v20);
      if ( v12 != -1 )
      {
        *(_DWORD *)(a1 + 6028) = v20;
        goto LABEL_26;
      }
      SetFailureLocation(v7, 1, 11, -1, 64);
      v2 = v19;
    }
  }
  v12 = 3040;
  v14 = 32;
LABEL_25:
  SetFailureLocation(v7, 0, 11, v12, v14);
LABEL_26:
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  return v12;
}
