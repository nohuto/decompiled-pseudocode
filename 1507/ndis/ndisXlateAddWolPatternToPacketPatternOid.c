/*
 * XREFs of ndisXlateAddWolPatternToPacketPatternOid @ 0x1C00CC60C
 * Callers:
 *     ndisOidPrePMAddWOLPattern @ 0x1C009A060 (ndisOidPrePMAddWOLPattern.c)
 * Callees:
 *     memmove @ 0x1C0023700 (memmove.c)
 *     memset @ 0x1C0023A40 (memset.c)
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003F388 (WPP_SF_qD.c)
 */

__int64 __fastcall ndisXlateAddWolPatternToPacketPatternOid(__int64 a1, _BYTE *a2)
{
  _DWORD *v2; // rbp
  unsigned int v3; // ebx
  int v6; // r9d
  _QWORD *PoolWithTag; // rax
  _QWORD *v8; // r14
  unsigned int v9; // r12d
  _DWORD *v10; // rax
  _DWORD *v11; // r15
  unsigned int v12; // ecx

  v2 = *(_DWORD **)(a1 + 40);
  v3 = 0;
  *a2 = 0;
  v6 = v2[3];
  if ( v6 == 1 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x7877444Eu);
    v8 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x20uLL);
      *(_DWORD *)v8 = *(_DWORD *)(a1 + 32);
      v8[1] = *(_QWORD *)(a1 + 40);
      *((_DWORD *)v8 + 4) = *(_DWORD *)(a1 + 48);
      v9 = v2[41] + 24 + v2[43];
      v10 = ExAllocatePoolWithTag(NonPagedPoolNx, v9, 0x7877444Eu);
      v11 = v10;
      if ( v10 )
      {
        memset(v10, 0, v9);
        v11[1] = v2[37];
        *v11 = v2[2];
        v12 = v2[41];
        v11[2] = v12;
        v11[3] = v12 + 24;
        v11[4] = v2[43];
        memmove(v11 + 6, (char *)v2 + (unsigned int)v2[40], v12);
        memmove((char *)v11 + (unsigned int)v11[3], (char *)v2 + (unsigned int)v2[42], (unsigned int)v11[4]);
        v8[3] = v11;
        *(_DWORD *)(a1 + 32) = -50265853;
        *(_QWORD *)(a1 + 40) = v11;
        *(_DWORD *)(a1 + 48) = v9;
        *(_QWORD *)(a1 + 144) = v8;
        return v3;
      }
      if ( (unsigned __int8)byte_1C0085312 >= 4u )
        WPP_SF_q(0x70u, &WPP_fbb1998797815902974a7c4233493709_Traceguids, a1);
      ExFreePoolWithTag(v8, 0);
    }
    else if ( (unsigned __int8)byte_1C0085312 >= 4u )
    {
      WPP_SF_q(0x6Fu, &WPP_fbb1998797815902974a7c4233493709_Traceguids, a1);
    }
    v3 = -1073741670;
    *a2 = 1;
  }
  else
  {
    if ( (unsigned __int8)byte_1C0085312 >= 4u )
      WPP_SF_qD(0x6Eu, &WPP_fbb1998797815902974a7c4233493709_Traceguids, a1, v6);
    *a2 = 1;
    return (unsigned int)-1073741637;
  }
  return v3;
}
