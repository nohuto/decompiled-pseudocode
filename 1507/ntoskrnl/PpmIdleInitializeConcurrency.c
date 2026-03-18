/*
 * XREFs of PpmIdleInitializeConcurrency @ 0x1405B0720
 * Callers:
 *     PpmParkRegisterParking @ 0x1405B0118 (PpmParkRegisterParking.c)
 * Callees:
 *     PpmQueryTime @ 0x140017D30 (PpmQueryTime.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1400D4C6C (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x1400D4F5C (KeSetSystemGroupAffinityThread.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PpmIdleInitializeConcurrency(_WORD *a1, LARGE_INTEGER **a2)
{
  unsigned __int16 v2; // r8
  ULONG v5; // ebp
  unsigned __int64 *v6; // r10
  __int64 v7; // r11
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rax
  unsigned __int16 v10; // cx
  unsigned int v11; // edi
  unsigned int v12; // esi
  LARGE_INTEGER *PoolWithTag; // rbx
  struct _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-58h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+30h] [rbp-48h] BYREF

  v2 = *a1;
  *(_QWORD *)&Affinity.Group = 0LL;
  Affinity.Mask = 0LL;
  v5 = 0;
  if ( v2 )
  {
    v6 = (unsigned __int64 *)(a1 + 4);
    v7 = v2;
    do
    {
      v8 = *v6;
      v9 = *v6++;
      v5 += (unsigned int)((0x101010101010101LL
                          * ((((v8 - ((v9 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                            + (((v8 - ((v9 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                            + ((((v8 - ((v9 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                              + (((v8 - ((v9 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24;
      --v7;
    }
    while ( v7 );
  }
  v10 = 0;
  if ( v2 )
  {
    while ( !*(_QWORD *)&a1[4 * v10 + 4] )
    {
      if ( ++v10 >= v2 )
        goto LABEL_12;
    }
    v11 = 0;
    *(_QWORD *)&Affinity.Group = v10;
    Affinity.Mask = *(_QWORD *)&a1[4 * v10 + 4];
  }
  else
  {
LABEL_12:
    v11 = -1073741275;
  }
  KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
  v12 = 8 * v5 + 40;
  PoolWithTag = (LARGE_INTEGER *)ExAllocatePoolWithTag(NonPagedPoolNx, v12, 0x704D5050u);
  KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v12);
    PoolWithTag->QuadPart = 0LL;
    PoolWithTag[1].LowPart = v5;
    PoolWithTag[2] = PpmQueryTime();
  }
  else
  {
    v11 = -1073741670;
  }
  *a2 = PoolWithTag;
  return v11;
}
