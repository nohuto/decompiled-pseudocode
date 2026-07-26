/*
 * XREFs of ndisOidPreIovEnumNicSwitches @ 0x1C00660D0
 * Callers:
 *     <none>
 * Callees:
 *     ndisIovCopyNicSwitchInfo @ 0x1C0023CCC (ndisIovCopyNicSwitchInfo.c)
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003F388 (WPP_SF_qD.c)
 */

char __fastcall ndisOidPreIovEnumNicSwitches(__int64 a1)
{
  __int64 v1; // rdi
  char v3; // si
  __int64 v4; // rax
  KSPIN_LOCK *v5; // r14
  KIRQL v6; // r13
  unsigned int v7; // ecx
  unsigned int v8; // ebp
  __int64 v9; // rax
  _DWORD *v10; // rax
  unsigned int v11; // r12d
  _QWORD *v12; // r15
  _DWORD *v13; // rbp
  unsigned int v14; // r14d
  __int64 v15; // rax
  unsigned int v17; // [rsp+68h] [rbp+10h]

  v1 = *(_QWORD *)a1;
  v3 = 1;
  if ( (unsigned __int8)byte_1C0085321 >= 4u )
    WPP_SF_q(0x10u, &WPP_6c8db4fe7eb94b473a3ef095da1bfaf8_Traceguids, a1);
  *(_DWORD *)(*(_QWORD *)(a1 + 32) + 52LL) = 0;
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 32) + 4LL) & 0xFFFFFFFD) != 0 )
    goto LABEL_17;
  if ( !v1 )
  {
    v3 = 0;
    goto LABEL_18;
  }
  v4 = *(_QWORD *)(v1 + 4672);
  if ( v4 && *(_QWORD *)(v1 + 3616) && (*(_BYTE *)(v4 + 8) & 3) == 3 )
  {
    v5 = (KSPIN_LOCK *)(v1 + 96);
    v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v1 + 96));
    v7 = *(_DWORD *)(v1 + 4752);
    *(_QWORD *)(v1 + 520) = KeGetCurrentThread();
    *(_DWORD *)(v1 + 1856) = 2884372;
    v8 = 572 * v7 + 16;
    *(_DWORD *)(*(_QWORD *)(a1 + 32) + 56LL) = v8;
    v9 = *(_QWORD *)(a1 + 32);
    v17 = v8;
    if ( v8 <= *(_DWORD *)(v9 + 48) )
    {
      v10 = *(_DWORD **)(v9 + 40);
      v10[1] = 16;
      *v10 = 1048960;
      v10[2] = v7;
      v10[3] = 572;
      v11 = 0;
      v12 = *(_QWORD **)(v1 + 4760);
      if ( v12 != (_QWORD *)(v1 + 4760) )
      {
        v13 = v10 + 4;
        v14 = v7;
        do
        {
          if ( v11 >= v14 )
            break;
          ndisIovCopyNicSwitchInfo(v13, (__int64)v12);
          v12 = (_QWORD *)*v12;
          v13 += 143;
          ++v11;
        }
        while ( v12 != (_QWORD *)(v1 + 4760) );
        v8 = v17;
        v5 = (KSPIN_LOCK *)(v1 + 96);
      }
      *(_QWORD *)(v1 + 520) = 0LL;
      *(_DWORD *)(v1 + 1856) = 0;
      KeReleaseSpinLock(v5, v6);
      v15 = *(_QWORD *)(a1 + 32);
      *(_DWORD *)(a1 + 40) = 0;
      *(_DWORD *)(v15 + 52) = v8;
    }
    else
    {
      *(_QWORD *)(v1 + 520) = 0LL;
      *(_DWORD *)(v1 + 1856) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 96), v6);
      *(_DWORD *)(a1 + 40) = -1073676266;
    }
  }
  else
  {
LABEL_17:
    *(_DWORD *)(a1 + 40) = -1073741637;
  }
LABEL_18:
  if ( (unsigned __int8)byte_1C0085321 >= 4u )
    WPP_SF_qD(0x11u, &WPP_6c8db4fe7eb94b473a3ef095da1bfaf8_Traceguids, v1, *(_DWORD *)(a1 + 40));
  return v3;
}
