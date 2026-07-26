/*
 * XREFs of ndisOidPreQosGetParameters @ 0x1C00472F0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0026780 (__security_check_cookie.c)
 *     memmove @ 0x1C00271C0 (memmove.c)
 *     memset @ 0x1C0027500 (memset.c)
 *     WPP_SF_qq @ 0x1C003C398 (WPP_SF_qq.c)
 *     WPP_SF_qdD @ 0x1C0044560 (WPP_SF_qdD.c)
 */

unsigned __int8 __fastcall ndisOidPreQosGetParameters(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v3; // rsi
  unsigned __int8 v4; // bl
  KIRQL v5; // r12
  unsigned __int16 *v6; // r14
  unsigned int v7; // eax
  int v9; // [rsp+20h] [rbp-78h]
  _DWORD v10[14]; // [rsp+30h] [rbp-68h] BYREF

  v1 = *(_QWORD *)(a1 + 32);
  v3 = *(_QWORD *)a1;
  v4 = 0;
  if ( (unsigned __int8)byte_1C00895D2 >= 4u )
    WPP_SF_qq(0x82u, &WPP_aebdfe7d38b7359b1048ceacddaf5972_Traceguids, v3, v1);
  *(_DWORD *)(a1 + 40) = 0;
  if ( *(_DWORD *)(v1 + 48) < 0x34u )
  {
    *(_DWORD *)(v1 + 56) = 52;
    *(_DWORD *)(a1 + 40) = -1073676268;
  }
  if ( !*(_DWORD *)(a1 + 40) )
  {
    if ( (*(_DWORD *)(v1 + 4) & 0xFFFFFFFD) != 0 )
      goto LABEL_7;
    if ( !v3 )
      goto LABEL_21;
    if ( !*(_QWORD *)(v3 + 4968) )
    {
LABEL_7:
      *(_DWORD *)(a1 + 40) = -1073741637;
    }
    else
    {
      v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 96));
      *(_QWORD *)(v3 + 520) = KeGetCurrentThread();
      *(_DWORD *)(v3 + 1856) = 2304282;
      if ( *(_DWORD *)(v1 + 32) == -66781180 )
        v6 = *(unsigned __int16 **)(v3 + 4984);
      else
        v6 = *(unsigned __int16 **)(v3 + 5000);
      if ( !v6 )
      {
        memset(v10, 0, 0x34uLL);
        v10[0] = 3408310;
        v6 = (unsigned __int16 *)v10;
      }
      *(_DWORD *)(a1 + 40) = 0;
      v7 = v6[1];
      if ( *(_DWORD *)(v1 + 48) < v7 )
      {
        *(_DWORD *)(v1 + 56) = v7;
        *(_DWORD *)(a1 + 40) = -1073676268;
      }
      if ( !*(_DWORD *)(a1 + 40) )
      {
        memmove(*(void **)(v1 + 40), v6, v6[1]);
        *(_DWORD *)(v1 + 52) = v6[1];
      }
      *(_QWORD *)(v3 + 520) = 0LL;
      *(_DWORD *)(v3 + 1856) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 96), v5);
    }
  }
  v4 = 1;
LABEL_21:
  if ( (unsigned __int8)byte_1C00895D2 >= 4u )
  {
    v9 = *(_DWORD *)(a1 + 40);
    WPP_SF_qdD(0x83u, &WPP_aebdfe7d38b7359b1048ceacddaf5972_Traceguids, v3, v4, v9);
  }
  return v4;
}
