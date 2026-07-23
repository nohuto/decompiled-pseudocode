/*
 * XREFs of PopPepRegisterDevice @ 0x1405679BC
 * Callers:
 *     PopFxRegisterDeviceWithPep @ 0x140142488 (PopFxRegisterDeviceWithPep.c)
 * Callees:
 *     KeInitializeEvent @ 0x14002DA20 (KeInitializeEvent.c)
 *     DbgPrintEx @ 0x140084C90 (DbgPrintEx.c)
 *     PopPepComponentGetResidencyIdleState @ 0x1400C0B78 (PopPepComponentGetResidencyIdleState.c)
 *     PopPepInsertDevice @ 0x14014258C (PopPepInsertDevice.c)
 *     PopPepComponentGetLatencyIdleState @ 0x1401426C0 (PopPepComponentGetLatencyIdleState.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

char __fastcall PopPepRegisterDevice(__int64 a1, __int64 a2, __int64 a3, int a4, _QWORD *a5)
{
  char v5; // bl
  unsigned int v9; // esi
  unsigned int v10; // r10d
  __int64 v11; // rdx
  unsigned int v12; // r11d
  int v13; // ecx
  unsigned int v14; // eax
  unsigned __int64 v15; // r14
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // r12
  char *PoolWithTag; // rax
  char *v19; // rdi
  char *v20; // rbp
  unsigned __int64 v21; // rcx
  _BYTE *v22; // rax
  char **v23; // rdx
  unsigned int v24; // r12d
  __int64 v25; // rsi
  __int64 *v26; // r13
  char *i; // r14
  __int64 v28; // r15
  _BYTE *v29; // rdx
  char **v30; // rcx
  unsigned __int64 v31; // r8
  char *v32; // r11
  int v33; // eax
  unsigned int v34; // eax
  unsigned int v35; // ecx
  unsigned int v36; // r9d
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rcx
  __int64 v41; // [rsp+30h] [rbp-58h]
  size_t Size; // [rsp+38h] [rbp-50h]
  char *v43; // [rsp+40h] [rbp-48h]
  unsigned int v44; // [rsp+A0h] [rbp+18h]

  v5 = 0;
  *a5 = 0LL;
  v9 = *(_DWORD *)(a3 + 8);
  v44 = v9;
  if ( v9 )
  {
    v10 = 0;
    v11 = a3 + 16;
    v12 = 0;
    while ( 1 )
    {
      v13 = *(_DWORD *)(*(_QWORD *)v11 + 28LL);
      if ( v13 <= 0 )
        break;
      v14 = v13 + v10;
      if ( v13 + v10 < v10 )
        break;
      ++v12;
      v11 += 8LL;
      v10 += v13;
      if ( v12 >= v9 )
      {
        v15 = 0LL;
        v16 = (int)(200 * v9 + 176);
        if ( v14 )
        {
          v15 = (v16 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
          v16 = v15 + 24LL * v14;
        }
        v17 = (v16 + 3) & 0xFFFFFFFFFFFFFFFCuLL;
        Size = v17 + 60LL * (v9 + 1);
        PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, Size, 0x54706550u);
        v19 = PoolWithTag;
        if ( PoolWithTag )
        {
          DbgPrintEx(0x92u, 3u, "PopPep: register device (0x%p, %wZ)\n", PoolWithTag, a1);
          memset(v19, 0, Size);
          *((_QWORD *)v19 + 4) = a2;
          v43 = &v19[v15];
          v20 = &v19[v17];
          *((_QWORD *)v19 + 3) = *(_QWORD *)a3;
          KeInitializeEvent((PRKEVENT)(v19 + 40), NotificationEvent, 0);
          v21 = 0LL;
          *((_DWORD *)v19 + 42) = v9;
          v22 = &ActivityAttributes;
          *((_DWORD *)v19 + 35) = v9;
          v23 = (char **)(v19 + 72);
          v19[136] = 1;
          do
          {
            if ( v21 <= 5 && *v22 == 1 )
            {
              *v23 = v20;
              v20 += 20;
            }
            ++v21;
            ++v23;
            v22 += 136;
          }
          while ( (__int64)v22 < (__int64)&`_CmOpenDeviceInterfaceRegKeyWorker'::`2'::ObjectPathRootPrefix );
          *((_QWORD *)v19 + 2) |= 1uLL;
          v24 = 0;
          v25 = -160LL;
          v26 = (__int64 *)(a3 + 16);
          v41 = -160LL;
          for ( i = v19 + 192; ; i += 200 )
          {
            v28 = *v26;
            v29 = &ActivityAttributes;
            *((_DWORD *)i - 2) = v24;
            v30 = (char **)(i + 40);
            *((_DWORD *)i - 3) = 3;
            v31 = 0LL;
            do
            {
              if ( v31 <= 5 && *v29 == 1 )
              {
                *v30 = *(char **)((char *)v30 + v25);
              }
              else
              {
                *v30 = v20;
                v20 += 20;
              }
              ++v31;
              ++v30;
              v29 += 136;
            }
            while ( (__int64)v29 < (__int64)&`_CmOpenDeviceInterfaceRegKeyWorker'::`2'::ObjectPathRootPrefix );
            KeInitializeEvent((PRKEVENT)(i + 16), NotificationEvent, 0);
            v32 = v43;
            *(_QWORD *)i = *(_QWORD *)(v28 + 16);
            v33 = *(_DWORD *)(v28 + 28);
            *((_DWORD *)i + 43) = v33;
            v34 = v33 - 1;
            v35 = *(_DWORD *)(v28 + 24);
            if ( v34 < v35 )
              v35 = v34;
            *(_DWORD *)(v28 + 24) = v35;
            *((_QWORD *)i + 12) = -1LL;
            *((_DWORD *)i + 33) = v35;
            *((_QWORD *)i + 22) = v43;
            *((_QWORD *)i + 13) = 0LL;
            *((_QWORD *)i + 14) = 0LL;
            **((_DWORD **)i + 8) |= 4u;
            if ( *(_DWORD *)(v28 + 28) > 1u )
              *((_QWORD *)v19 + 2) &= ~1uLL;
            v36 = 0;
            if ( *(_DWORD *)(v28 + 28) )
              break;
LABEL_27:
            *((_DWORD *)i + 34) = 0;
            *((_DWORD *)i + 35) = PopPepComponentGetLatencyIdleState((__int64)(i - 16), *((_QWORD *)i + 12));
            *((_DWORD *)i + 36) = PopPepComponentGetResidencyIdleState(v38, *((_QWORD *)i + 13));
            ++v24;
            ++v26;
            *((_DWORD *)i + 37) = *((_DWORD *)i + 43) - 1;
            *((_DWORD *)i + 38) = *((_DWORD *)i + 43) - 1;
            *((_DWORD *)i + 39) = *((_DWORD *)i + 43) - 1;
            v41 -= 200LL;
            if ( v24 >= v44 )
            {
              v5 = 1;
              *a5 = v19;
              if ( a4 == 2 )
                v19[124] = 1;
              *((_DWORD *)v19 + 39) = 1;
              PopPepInsertDevice(v39, (__int64 *)v19);
              return v5;
            }
            v25 = v41;
          }
          while ( v32 - v19 <= Size - 24 )
          {
            v37 = v36++;
            *(_QWORD *)v32 = *(_QWORD *)(*(_QWORD *)(v28 + 32) + 24 * v37);
            *((_QWORD *)v32 + 1) = *(_QWORD *)(*(_QWORD *)(v28 + 32) + 24 * v37 + 8);
            v32 += 24;
            v43 = v32;
            if ( v36 >= *(_DWORD *)(v28 + 28) )
              goto LABEL_27;
          }
          ExFreePoolWithTag(v19, 0x54706550u);
        }
        return v5;
      }
    }
  }
  return v5;
}
