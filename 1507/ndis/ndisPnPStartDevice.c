/*
 * XREFs of ndisPnPStartDevice @ 0x1C00AC324
 * Callers:
 *     ndisStartDeviceSynchronous @ 0x1C00AC4C4 (ndisStartDeviceSynchronous.c)
 *     ndisIMInitializeDeviceInstance @ 0x1C00CE44C (ndisIMInitializeDeviceInstance_ea_1C00CE44C.c)
 * Callees:
 *     NdisSetEvent @ 0x1C000DB00 (NdisSetEvent.c)
 *     memmove @ 0x1C0023700 (memmove.c)
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003F388 (WPP_SF_qD.c)
 *     WPP_SF_qZ @ 0x1C004ACEC (WPP_SF_qZ.c)
 *     ndisInitializeAdapter @ 0x1C00AC230 (ndisInitializeAdapter.c)
 *     ndisReinitializeMiniportBlock @ 0x1C00F4BF8 (ndisReinitializeMiniportBlock.c)
 */

__int64 __fastcall ndisPnPStartDevice(char *DeferredContext, __int64 a2, __int64 a3)
{
  char *v3; // rbp
  unsigned int v5; // r14d
  __int64 v7; // r15
  _DWORD *v8; // rsi
  __int64 v9; // r9
  __int64 v10; // rcx
  unsigned int v11; // ebx
  int v13; // eax
  char *PoolWithTag; // rax
  __int64 i; // rcx
  int v16; // eax

  v3 = 0LL;
  v5 = 0;
  if ( (unsigned __int8)byte_1C0085314 >= 4u )
    WPP_SF_qZ(
      0x3Eu,
      &WPP_816ff7a89d638f3657e368d6b001fcf6_Traceguids,
      (__int64)DeferredContext,
      *((__int64 **)DeferredContext + 489));
  if ( *((_DWORD *)DeferredContext + 380) == 3 )
  {
    ndisReinitializeMiniportBlock(DeferredContext);
    *((_DWORD *)DeferredContext + 31) |= 0x10000u;
  }
  if ( a2 )
  {
    v7 = *(_QWORD *)(a2 + 184);
    v8 = *(_DWORD **)(v7 + 8);
    if ( v8 )
    {
      *((_DWORD *)DeferredContext + 31) |= 0x200000u;
      v13 = v8[4];
      if ( v13 )
        v5 = 20 * (v13 + 1);
      else
        v5 = 40;
      PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 2 * v5, 0x7261444Eu);
      v3 = PoolWithTag;
      if ( !PoolWithTag )
      {
        v11 = -1073741670;
        goto LABEL_12;
      }
      memmove(PoolWithTag, v8, v5);
      memmove(&v3[v5], *(const void **)(v7 + 16), v5);
      for ( i = 0LL; (unsigned int)i < v8[4]; i = (unsigned int)(i + 1) )
      {
        if ( LOBYTE(v8[5 * i + 5]) == 2 && (v8[5 * i + 5] & 0x20000) != 0 )
          *((_DWORD *)DeferredContext + 865) += HIWORD(v8[5 * i + 6]);
      }
    }
  }
  v9 = *((_QWORD *)DeferredContext + 247);
  v10 = *((_QWORD *)DeferredContext + 477);
  *((_QWORD *)DeferredContext + 118) = v3;
  *((_QWORD *)DeferredContext + 119) = &v3[v5];
  v11 = ndisInitializeAdapter(v10, (__int64)DeferredContext, a3, v9);
  if ( !v11 )
  {
    if ( *((_DWORD *)DeferredContext + 380) != 3
      && ((*((_DWORD *)DeferredContext + 31) & 0x200000) != 0 && ndisAoAcCapable
       || (*((_DWORD *)DeferredContext + 672) & 0x200) != 0)
      && (v16 = PoFxEnableDStateReporting(*((_QWORD *)DeferredContext + 485))) != 0 )
    {
      if ( (unsigned __int8)byte_1C0085314 >= 2u )
        WPP_SF_qD(0x3Fu, &WPP_816ff7a89d638f3657e368d6b001fcf6_Traceguids, (__int64)DeferredContext, v16);
      v11 = -1073741823;
    }
    else
    {
      *((_DWORD *)DeferredContext + 380) = 1;
      NdisSetEvent((PNDIS_EVENT)(DeferredContext + 3784));
      *((_QWORD *)DeferredContext + 199) = MEMORY[0xFFFFF78000000320];
    }
  }
LABEL_12:
  if ( (unsigned __int8)byte_1C0085314 >= 4u )
    WPP_SF_q(0x40u, &WPP_816ff7a89d638f3657e368d6b001fcf6_Traceguids, (__int64)DeferredContext);
  return v11;
}
