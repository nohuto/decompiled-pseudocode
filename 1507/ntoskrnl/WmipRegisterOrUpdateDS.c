/*
 * XREFs of WmipRegisterOrUpdateDS @ 0x14057B564
 * Callers:
 *     WmipRegistrationWorker @ 0x14057E3C4 (WmipRegistrationWorker.c)
 *     WmipRegisterDevice @ 0x14057E4D8 (WmipRegisterDevice.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     WmipSendWmiIrp @ 0x1404D735C (WmipSendWmiIrp.c)
 *     WmipProcessWmiRegInfo @ 0x14057B680 (WmipProcessWmiRegInfo.c)
 */

__int64 __fastcall WmipRegisterOrUpdateDS(__int64 a1, char a2)
{
  unsigned int v2; // esi
  unsigned int v5; // ebp
  unsigned int *PoolWithTag; // rdi
  __int64 v7; // r9
  int v8; // eax
  int v9; // ebx
  _OWORD v11[2]; // [rsp+30h] [rbp-28h] BYREF

  v2 = 0;
  *((_QWORD *)&v11[0] + 1) = 0LL;
  v5 = 0x2000;
  do
  {
    PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, v5, 0x44696D57u);
    if ( PoolWithTag )
    {
      v8 = WmipSendWmiIrp(0xBu, *(_DWORD *)(a1 + 56), (UNICODE_STRING *)(a2 != 0), v5, (__int64)PoolWithTag, v11);
      v9 = v8;
      if ( v8 < 0 )
      {
        if ( v8 == -1073741789 )
          goto LABEL_14;
        v9 = WmipSendWmiIrp(8u, *(_DWORD *)(a1 + 56), (UNICODE_STRING *)(a2 != 0), v5, (__int64)PoolWithTag, v11);
      }
      if ( v9 != -1073741789 )
      {
        v2 = DWORD2(v11[0]);
        if ( *((_QWORD *)&v11[0] + 1) != 4LL )
          continue;
        goto LABEL_15;
      }
LABEL_14:
      v2 = DWORD2(v11[0]);
LABEL_15:
      v5 = *PoolWithTag;
      ExFreePoolWithTag(PoolWithTag, 0);
      v9 = -1073741789;
      continue;
    }
    v9 = -1073741670;
  }
  while ( v9 == -1073741789 );
  if ( v9 >= 0 )
  {
    LOBYTE(v7) = a2;
    v9 = WmipProcessWmiRegInfo(a1, PoolWithTag, v2, v7);
  }
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)v9;
}
