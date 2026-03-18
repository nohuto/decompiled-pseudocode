/*
 * XREFs of WmipRegisterOrUpdateDS @ 0x1405019CC
 * Callers:
 *     WmipRegisterDevice @ 0x140507C3C (WmipRegisterDevice.c)
 *     WmipRegistrationWorker @ 0x140508288 (WmipRegistrationWorker.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     WmipSendWmiIrp @ 0x1403D2A28 (WmipSendWmiIrp.c)
 *     WmipProcessWmiRegInfo @ 0x140501AE8 (WmipProcessWmiRegInfo.c)
 */

__int64 __fastcall WmipRegisterOrUpdateDS(__int64 a1, char a2)
{
  unsigned int v2; // esi
  unsigned int v5; // ebp
  unsigned int *PoolWithTag; // rdi
  __int64 v7; // r9
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rcx
  int v11; // ebx
  _OWORD v13[2]; // [rsp+30h] [rbp-28h] BYREF

  v2 = 0;
  *((_QWORD *)&v13[0] + 1) = 0LL;
  v5 = 0x2000;
  do
  {
    PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, v5, 0x44696D57u);
    if ( PoolWithTag )
    {
      v8 = a2 != 0;
      LOBYTE(v8) = 11;
      v9 = WmipSendWmiIrp(v8, *(unsigned int *)(a1 + 56), a2 != 0, v5, (__int64)PoolWithTag, v13);
      v11 = v9;
      if ( v9 < 0 )
      {
        if ( v9 == -1073741789 )
          goto LABEL_14;
        LOBYTE(v10) = 8;
        v11 = WmipSendWmiIrp(v10, *(unsigned int *)(a1 + 56), a2 != 0, v5, (__int64)PoolWithTag, v13);
      }
      if ( v11 != -1073741789 )
      {
        v2 = DWORD2(v13[0]);
        if ( *((_QWORD *)&v13[0] + 1) != 4LL )
          continue;
        goto LABEL_15;
      }
LABEL_14:
      v2 = DWORD2(v13[0]);
LABEL_15:
      v5 = *PoolWithTag;
      ExFreePoolWithTag(PoolWithTag, 0);
      v11 = -1073741789;
      continue;
    }
    v11 = -1073741670;
  }
  while ( v11 == -1073741789 );
  if ( v11 >= 0 )
  {
    LOBYTE(v7) = a2;
    v11 = WmipProcessWmiRegInfo(a1, PoolWithTag, v2, v7);
  }
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)v11;
}
