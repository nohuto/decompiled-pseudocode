/*
 * XREFs of ndisOidPreRcvFilterEnumQueues @ 0x1C003D890
 * Callers:
 *     <none>
 * Callees:
 *     ndisGetOidSourceHandle @ 0x1C0022244 (ndisGetOidSourceHandle.c)
 *     ndisCopyReceiveQueueInfo @ 0x1C00275FC (ndisCopyReceiveQueueInfo.c)
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C004451C (WPP_SF_qD.c)
 */

char __fastcall ndisOidPreRcvFilterEnumQueues(__int64 a1)
{
  __int64 v1; // rdi
  unsigned int v2; // r12d
  _BYTE *v3; // rbp
  char v5; // si
  __int64 v6; // rcx
  char v7; // r13
  _BYTE *OidSourceHandle; // rax
  unsigned int v9; // r14d
  unsigned int v10; // ecx
  __int64 v11; // rax
  _DWORD *v12; // rax
  _DWORD *v13; // r15
  _QWORD *v14; // r13
  _QWORD *v15; // rbp
  __int64 v16; // rdx
  _QWORD *v17; // rbp
  __int64 v18; // rax
  KIRQL NewIrql; // [rsp+60h] [rbp+8h]

  v1 = *(_QWORD *)a1;
  v2 = 0;
  v3 = 0LL;
  v5 = 1;
  if ( (unsigned __int8)byte_1C00895E0 >= 4u )
    WPP_SF_q(0x1Cu, &WPP_e0b1f8b808d7390f894176100c6a8720_Traceguids, a1);
  *(_DWORD *)(*(_QWORD *)(a1 + 32) + 52LL) = 0;
  v6 = *(_QWORD *)(a1 + 32);
  if ( (*(_DWORD *)(v6 + 4) & 0xFFFFFFFD) != 0 )
    goto LABEL_31;
  if ( !v1 )
  {
    v5 = 0;
    goto LABEL_32;
  }
  *(_DWORD *)(a1 + 40) = -1073741637;
  if ( *(_QWORD *)(v1 + 3592) )
  {
    if ( *(_DWORD *)(v6 + 4) == 2 )
    {
      v7 = 0;
LABEL_12:
      NewIrql = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v1 + 96));
      *(_QWORD *)(v1 + 520) = KeGetCurrentThread();
      *(_DWORD *)(v1 + 1856) = 2690468;
      if ( v7 )
      {
        v9 = *((_DWORD *)v3 + 212);
      }
      else
      {
        v9 = *(_DWORD *)(v1 + 3540);
        if ( *(_QWORD *)(v1 + 4432) )
          ++v9;
      }
      v10 = 1096 * v9 + 16;
      *(_DWORD *)(*(_QWORD *)(a1 + 32) + 56LL) = v10;
      v11 = *(_QWORD *)(a1 + 32);
      if ( v10 <= *(_DWORD *)(v11 + 48) )
      {
        v12 = *(_DWORD **)(v11 + 40);
        *v12 = 1048960;
        v13 = v12 + 4;
        v12[1] = 16;
        v12[2] = v9;
        v12[3] = 1096;
        if ( v7 )
        {
          v14 = v3 + 832;
          v15 = (_QWORD *)*((_QWORD *)v3 + 104);
          while ( v15 != v14 && v2 < v9 )
          {
            ndisCopyReceiveQueueInfo(v13, (__int64)(v15 - 2));
            v15 = (_QWORD *)*v15;
            v13 += 274;
            ++v2;
          }
        }
        else
        {
          v16 = *(_QWORD *)(v1 + 4432);
          if ( v16 )
          {
            ndisCopyReceiveQueueInfo(v12 + 4, v16);
            v13 += 274;
            v2 = 1;
          }
          v17 = *(_QWORD **)(v1 + 3512);
          while ( v17 != (_QWORD *)(v1 + 3512) && v2 < v9 )
          {
            ndisCopyReceiveQueueInfo(v13, (__int64)v17);
            v17 = (_QWORD *)*v17;
            v13 += 274;
            ++v2;
          }
        }
        *(_QWORD *)(v1 + 520) = 0LL;
        *(_DWORD *)(v1 + 1856) = 0;
        KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 96), NewIrql);
        v18 = *(_QWORD *)(a1 + 32);
        *(_DWORD *)(a1 + 40) = 0;
        *(_DWORD *)(v18 + 52) = 1096 * v9 + 16;
      }
      else
      {
        *(_QWORD *)(v1 + 520) = 0LL;
        *(_DWORD *)(v1 + 1856) = 0;
        KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 96), NewIrql);
        *(_DWORD *)(a1 + 40) = -1073676266;
      }
      goto LABEL_32;
    }
    OidSourceHandle = (_BYTE *)ndisGetOidSourceHandle(v6);
    v3 = OidSourceHandle;
    if ( OidSourceHandle && *OidSourceHandle == 18 )
    {
      v7 = 1;
      goto LABEL_12;
    }
LABEL_31:
    *(_DWORD *)(a1 + 40) = -1073741637;
  }
LABEL_32:
  if ( (unsigned __int8)byte_1C00895E0 >= 4u )
    WPP_SF_qD(29LL, &WPP_e0b1f8b808d7390f894176100c6a8720_Traceguids, v1, *(unsigned int *)(a1 + 40));
  return v5;
}
