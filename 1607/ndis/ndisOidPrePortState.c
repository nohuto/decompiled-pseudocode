/*
 * XREFs of ndisOidPrePortState @ 0x1C0046FA0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0027500 (memset.c)
 *     ndisFindPortByPortNumber @ 0x1C003F0E8 (ndisFindPortByPortNumber.c)
 *     WPP_SF_qD @ 0x1C004451C (WPP_SF_qD.c)
 */

char __fastcall ndisOidPrePortState(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v3; // rbp
  char v4; // di
  KIRQL v5; // r13
  unsigned int v6; // edx
  _DWORD *v7; // rbx
  int v8; // eax
  __int64 *PortByPortNumber; // rax
  __int64 *v10; // r15

  v1 = *(_QWORD *)a1;
  v3 = *(_QWORD *)(a1 + 32);
  v4 = 0;
  if ( (unsigned __int8)byte_1C00895D2 >= 4u )
    WPP_SF_qD(0xB9u, &WPP_aebdfe7d38b7359b1048ceacddaf5972_Traceguids, v1, *(_DWORD *)(v3 + 8));
  if ( *(_QWORD *)a1 )
  {
    if ( (*(_DWORD *)(v3 + 4) & 0xFFFFFFFD) != 0 )
    {
      *(_DWORD *)(a1 + 40) = -1073741637;
    }
    else
    {
      if ( *(_DWORD *)(v3 + 48) < 0x30u )
      {
        *(_DWORD *)(v3 + 52) = 0;
        *(_DWORD *)(v3 + 56) = 48;
        *(_DWORD *)(a1 + 40) = -1073676266;
        goto LABEL_17;
      }
      v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v1 + 96));
      *(_QWORD *)(v1 + 520) = KeGetCurrentThread();
      *(_DWORD *)(v1 + 1856) = 2307115;
      v6 = *(_DWORD *)(v3 + 8);
      if ( v6 )
      {
        PortByPortNumber = ndisFindPortByPortNumber(v1, v6);
        v10 = PortByPortNumber;
        if ( !PortByPortNumber )
        {
          *(_QWORD *)(v1 + 520) = 0LL;
          *(_DWORD *)(v1 + 1856) = 0;
          KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 96), v5);
          *(_DWORD *)(a1 + 40) = -1071448019;
          goto LABEL_17;
        }
        if ( *((_DWORD *)PortByPortNumber + 4) != 4 )
        {
          *(_QWORD *)(v1 + 520) = 0LL;
          *(_DWORD *)(v1 + 1856) = 0;
          KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 96), v5);
          *(_DWORD *)(a1 + 40) = -1071448018;
          goto LABEL_17;
        }
        v7 = *(_DWORD **)(v3 + 40);
        memset(v7, 0, 0x30uLL);
        *v7 = 3146112;
        v7[1] = *((_DWORD *)v10 + 10);
        *((_QWORD *)v7 + 1) = v10[6];
        *((_QWORD *)v7 + 2) = v10[7];
        v7[6] = *((_DWORD *)v10 + 16);
        v7[7] = *((_DWORD *)v10 + 17);
        v7[8] = *((_DWORD *)v10 + 18);
        v7[9] = *((_DWORD *)v10 + 19);
        v8 = *((_DWORD *)v10 + 20);
      }
      else
      {
        v7 = *(_DWORD **)(v3 + 40);
        memset(v7, 0, 0x30uLL);
        *v7 = 3146112;
        v7[1] = *(_DWORD *)(v1 + 480);
        *((_QWORD *)v7 + 1) = *(_QWORD *)(v1 + 792);
        *((_QWORD *)v7 + 2) = *(_QWORD *)(v1 + 800);
        v7[6] = *(_DWORD *)(*(_QWORD *)(v1 + 4096) + 532LL);
        v7[7] = *(_DWORD *)(v1 + 3368);
        v7[8] = *(_DWORD *)(v1 + 3372);
        v7[9] = *(_DWORD *)(v1 + 3376);
        v8 = *(_DWORD *)(v1 + 3380);
      }
      v7[10] = v8;
      *(_QWORD *)(v1 + 520) = 0LL;
      *(_DWORD *)(v1 + 1856) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 96), v5);
      *(_DWORD *)(a1 + 40) = 0;
      *(_DWORD *)(v3 + 52) = 48;
      *(_DWORD *)(v3 + 56) = 48;
    }
    v4 = 1;
  }
LABEL_17:
  if ( (unsigned __int8)byte_1C00895D2 >= 4u )
    WPP_SF_qD(0xBAu, &WPP_aebdfe7d38b7359b1048ceacddaf5972_Traceguids, v1, *(_DWORD *)(v3 + 8));
  return v4;
}
