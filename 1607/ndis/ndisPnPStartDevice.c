/*
 * XREFs of ndisPnPStartDevice @ 0x1C00ACA60
 * Callers:
 *     ndisStartDeviceSynchronous @ 0x1C009EAEC (ndisStartDeviceSynchronous.c)
 *     ndisIMInitializeDeviceInstance @ 0x1C00CD13C (ndisIMInitializeDeviceInstance_ea_1C00CD13C.c)
 * Callees:
 *     NdisSetEvent @ 0x1C000FCA0 (NdisSetEvent.c)
 *     memmove @ 0x1C00271C0 (memmove.c)
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C004451C (WPP_SF_qD.c)
 *     WPP_SF_qZ @ 0x1C0048BBC (WPP_SF_qZ.c)
 *     ndisInitializeAdapter @ 0x1C00AC974 (ndisInitializeAdapter.c)
 *     ndisReinitializeMiniportBlock @ 0x1C00F59E8 (ndisReinitializeMiniportBlock.c)
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
  if ( (unsigned __int8)byte_1C00895D4 >= 4u )
    WPP_SF_qZ(
      0x3Eu,
      &WPP_31395673df433bc870ce0871a9c25aaa_Traceguids,
      (__int64)DeferredContext,
      *((unsigned __int16 **)DeferredContext + 489));
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
  if ( v11 )
    goto LABEL_12;
  if ( *((_DWORD *)DeferredContext + 380) == 3
    || ((*((_DWORD *)DeferredContext + 31) & 0x200000) == 0 || !ndisAoAcCapable)
    && (*((_DWORD *)DeferredContext + 672) & 0x200) == 0
    || DeferredContext[5370] )
  {
LABEL_11:
    *((_DWORD *)DeferredContext + 380) = 1;
    NdisSetEvent((PNDIS_EVENT)(DeferredContext + 3784));
    *((_QWORD *)DeferredContext + 199) = MEMORY[0xFFFFF78000000320];
    goto LABEL_12;
  }
  v16 = PoFxEnableDStateReporting(*((_QWORD *)DeferredContext + 485));
  if ( !v16 )
  {
    DeferredContext[5370] = 1;
    goto LABEL_11;
  }
  if ( (unsigned __int8)byte_1C00895D4 >= 2u )
    WPP_SF_qD(0x3Fu, &WPP_31395673df433bc870ce0871a9c25aaa_Traceguids, (__int64)DeferredContext, v16);
  v11 = -1073741823;
LABEL_12:
  if ( (unsigned __int8)byte_1C00895D4 >= 4u )
    WPP_SF_q(0x40u, &WPP_31395673df433bc870ce0871a9c25aaa_Traceguids, (__int64)DeferredContext);
  return v11;
}
