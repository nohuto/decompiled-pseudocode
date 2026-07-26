/*
 * XREFs of ndisSriovInterfaceWriteVFConfig @ 0x1C00DBF20
 * Callers:
 *     <none>
 * Callees:
 *     ndisQuerySetMiniport @ 0x1C000A5A0 (ndisQuerySetMiniport.c)
 *     __security_check_cookie @ 0x1C0026780 (__security_check_cookie.c)
 *     memmove @ 0x1C00271C0 (memmove.c)
 *     memset @ 0x1C0027500 (memset.c)
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C004451C (WPP_SF_qD.c)
 */

__int64 __fastcall ndisSriovInterfaceWriteVFConfig(void *a1, const void *a2, __int16 a3, int a4, size_t Size)
{
  _DWORD *PoolWithTag; // rax
  _DWORD *v9; // rdi
  unsigned int SetMiniport; // ebx
  _BYTE v13[248]; // [rsp+40h] [rbp-C0h] BYREF

  memset(v13, 0, sizeof(v13));
  if ( (unsigned __int8)byte_1C00895E1 >= 4u )
    WPP_SF_q(0x59u, &WPP_66e150bf10bd3961f505aba1a8a4f7d8_Traceguids, (__int64)a1);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(Size + 20), 0x6F69444Eu);
  v9 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, (unsigned int)(Size + 20));
    *v9 = 1311104;
    v9[4] = 20;
    *((_WORD *)v9 + 2) = a3;
    v9[2] = a4;
    v9[3] = Size;
    memmove(v9 + 5, a2, (unsigned int)Size);
    memset(v13, 0, sizeof(v13));
    *(_DWORD *)&v13[88] |= 8u;
    *(_DWORD *)&v13[8] = 0;
    *(_QWORD *)&v13[104] = &ndisIntReqGeneric;
    *(_DWORD *)v13 = 15466902;
    *(_DWORD *)&v13[32] = 66130;
    *(_DWORD *)&v13[4] = 1;
    *(_QWORD *)&v13[40] = v9;
    *(_DWORD *)&v13[48] = Size + 20;
    SetMiniport = ndisQuerySetMiniport(a1, 0LL, (struct _NDIS_OID_REQUEST *)v13, 0LL, 0LL);
    ExFreePoolWithTag(v9, 0);
  }
  else
  {
    SetMiniport = -1073741670;
  }
  if ( (unsigned __int8)byte_1C00895E1 >= 4u )
    WPP_SF_qD(0x5Au, &WPP_66e150bf10bd3961f505aba1a8a4f7d8_Traceguids, (__int64)a1, SetMiniport);
  return SetMiniport;
}
