/*
 * XREFs of CmCheckRegistry @ 0x1403D1730
 * Callers:
 *     CmpInitializeHive @ 0x1403D071C (CmpInitializeHive.c)
 * Callees:
 *     RtlClearAllBits @ 0x14001ABDC (RtlClearAllBits.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     SetFailureLocation @ 0x1401A9C98 (SetFailureLocation.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     HvCheckHive @ 0x1403D0558 (HvCheckHive.c)
 *     CmpValidateHiveSecurityDescriptors @ 0x1403DDA84 (CmpValidateHiveSecurityDescriptors.c)
 *     CmpCheckRegistry2 @ 0x140405850 (CmpCheckRegistry2.c)
 */

__int64 __fastcall CmCheckRegistry(ULONG_PTR BugCheckParameter2, int a2)
{
  _RTL_BITMAP *v4; // r12
  void *v5; // r14
  __int64 v6; // r15
  unsigned int v7; // edi
  unsigned int v8; // eax
  PVOID PoolWithTag; // rax
  int v10; // eax
  unsigned int v11; // edi
  int v12; // eax
  int v14; // [rsp+20h] [rbp-59h]
  unsigned int v15; // [rsp+40h] [rbp-39h] BYREF
  PVOID v16; // [rsp+48h] [rbp-31h]
  _DWORD v17[32]; // [rsp+50h] [rbp-29h] BYREF
  unsigned int v18; // [rsp+F0h] [rbp+77h] BYREF
  __int64 v19; // [rsp+F8h] [rbp+7Fh] BYREF

  memset(v17, 0, 56);
  v4 = 0LL;
  v5 = 0LL;
  if ( BugCheckParameter2 == CmpMasterHive )
    return 0LL;
  v6 = *(_QWORD *)(BugCheckParameter2 + 56);
  v18 = *(_DWORD *)(BugCheckParameter2 + 1400) >> 3;
  v7 = v18;
  v8 = v18 >> 3;
  if ( (a2 & 0x10000) == 0 )
    goto LABEL_6;
  if ( v8 && (PoolWithTag = ExAllocatePoolWithTag(PagedPool, v8, 0x624C4D43u), (v5 = PoolWithTag) != 0LL) )
  {
    v15 = v7;
    v4 = (_RTL_BITMAP *)&v15;
    v16 = PoolWithTag;
    while ( 1 )
    {
LABEL_6:
      if ( (a2 & 0x10000) != 0 )
      {
        RtlClearAllBits(v4);
        v10 = HvCheckHive(BugCheckParameter2, &v18, (__int64)v4, (__int64)v17);
        v11 = v10;
        if ( v10 )
        {
          SetFailureLocation(v6, 0, 11, v10, 16);
          goto LABEL_16;
        }
        if ( v17[0] + v17[4] + v17[8] > (unsigned int)CmpReorganizeLimit )
          *(_DWORD *)(BugCheckParameter2 + 5360) |= 0x400u;
        *(_DWORD *)(BugCheckParameter2 + 6016) = v17[12];
        *(_DWORD *)(BugCheckParameter2 + 6020) = v17[13];
      }
      if ( *(int *)(*(_QWORD *)(BugCheckParameter2 + 64) + 36LL) < 0 )
        break;
      v12 = CmpValidateHiveSecurityDescriptors(BugCheckParameter2);
      if ( v12 != 2 )
      {
        if ( v12 )
        {
          v11 = 3041;
          v14 = 48;
          goto LABEL_25;
        }
        v11 = CmpCheckRegistry2(BugCheckParameter2, 0, v4, (__int64)&v19);
        if ( v11 != -1 )
        {
          *(_DWORD *)(BugCheckParameter2 + 6028) = v19;
          goto LABEL_16;
        }
        SetFailureLocation(v6, 1, 11, -1, 64);
      }
    }
    v11 = 3040;
    v14 = 32;
LABEL_25:
    SetFailureLocation(v6, 0, 11, v11, v14);
LABEL_16:
    if ( v5 )
      ExFreePoolWithTag(v5, 0);
    return v11;
  }
  else
  {
    SetFailureLocation(v6, 0, 11, -1073741801, 0);
    return 3000LL;
  }
}
