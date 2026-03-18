/*
 * XREFs of ?DxgkEnumAdapters@@YAJPEAU_D3DKMT_ENUMADAPTERS@@DEW4_KWAIT_REASON@@@Z @ 0x1C01258F0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     memmove @ 0x1C0010940 (memmove.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     ?DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z @ 0x1C008A9CC (-DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z.c)
 *     ?DestroyHandle@DXGADAPTER@@SAJI@Z @ 0x1C00ADB3C (-DestroyHandle@DXGADAPTER@@SAJI@Z.c)
 */

__int64 __fastcall DxgkEnumAdapters(struct _D3DKMT_ENUMADAPTERS *a1, char a2, char a3, unsigned int a4)
{
  struct _D3DKMT_ENUMADAPTERS *v7; // rbx
  __int64 v8; // rax
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rdi
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  int *p_Src; // rax
  __int64 v22; // rdx
  unsigned int v23; // [rsp+20h] [rbp-198h] BYREF
  __int64 v24; // [rsp+24h] [rbp-194h]
  _DWORD v25[5]; // [rsp+2Ch] [rbp-18Ch]
  int Src; // [rsp+40h] [rbp-178h] BYREF
  _BYTE v27[332]; // [rsp+44h] [rbp-174h] BYREF

  v7 = a1;
  if ( a1 )
  {
    Src = 0;
    memset(v27, 0, 0x140uLL);
    v23 = 0;
    v25[0] = 0;
    *(_QWORD *)&v25[1] = v27;
    v24 = 16LL;
    LOBYTE(v10) = a3;
    LOBYTE(v11) = a2;
    v13 = (int)DxgkEnumAdaptersInternal((struct ENUMADAPTERSINTERNAL *)&v23, v11, v10, a4);
    v16 = v23;
    if ( v23 > 0x10 )
    {
      v17 = WdLogNewEntry5_WdAssertion(v23, v12, v14, v15);
      *(_QWORD *)(v17 + 24) = 4033LL;
      WdLogEvent5_WdAssertion(v17);
      v16 = v23;
    }
    if ( (unsigned int)v16 > (unsigned int)v24 )
    {
      v18 = WdLogNewEntry5_WdAssertion(v16, v12, v14, v15);
      *(_QWORD *)(v18 + 24) = 4034LL;
      WdLogEvent5_WdAssertion(v18);
      v16 = v23;
    }
    if ( (unsigned int)v16 > HIDWORD(v24) )
    {
      v19 = WdLogNewEntry5_WdAssertion(v16, v12, v14, v15);
      *(_QWORD *)(v19 + 24) = 4035LL;
      WdLogEvent5_WdAssertion(v19);
      v16 = v23;
    }
    if ( (int)v13 >= 0 )
    {
      Src = v16;
      if ( a2 == 1 )
      {
        if ( (unsigned __int64)&v7[1] > MmUserProbeAddress || &v7[1] <= v7 )
          *(_BYTE *)MmUserProbeAddress = 0;
        p_Src = &Src;
        v22 = 2LL;
        do
        {
          *(_OWORD *)&v7->NumAdapters = *(_OWORD *)p_Src;
          *(_OWORD *)&v7->Adapters[0].NumOfSources = *((_OWORD *)p_Src + 1);
          *(_OWORD *)&v7->Adapters[1].AdapterLuid.HighPart = *((_OWORD *)p_Src + 2);
          *(_OWORD *)&v7->Adapters[2].AdapterLuid.LowPart = *((_OWORD *)p_Src + 3);
          *(_OWORD *)&v7->Adapters[3].hAdapter = *((_OWORD *)p_Src + 4);
          *(_OWORD *)&v7->Adapters[3].bPresentMoveRegionsPreferred = *((_OWORD *)p_Src + 5);
          *(_OWORD *)&v7->Adapters[4].NumOfSources = *((_OWORD *)p_Src + 6);
          v7 = (struct _D3DKMT_ENUMADAPTERS *)((char *)v7 + 128);
          *(_OWORD *)&v7[-1].Adapters[15].AdapterLuid.LowPart = *((_OWORD *)p_Src + 7);
          p_Src += 32;
          --v22;
        }
        while ( v22 );
        *(_OWORD *)&v7->NumAdapters = *(_OWORD *)p_Src;
        *(_OWORD *)&v7->Adapters[0].NumOfSources = *((_OWORD *)p_Src + 1);
        *(_OWORD *)&v7->Adapters[1].AdapterLuid.HighPart = *((_OWORD *)p_Src + 2);
        *(_OWORD *)&v7->Adapters[2].AdapterLuid.LowPart = *((_OWORD *)p_Src + 3);
        v7->Adapters[3].hAdapter = p_Src[16];
      }
      else
      {
        memmove(v7, &Src, 0x144uLL);
      }
    }
    else
    {
      v20 = WdLogNewEntry5_WdError(v16);
      *(_QWORD *)(v20 + 24) = v13;
      WdLogEvent5_WdError(v20);
    }
    return (unsigned int)v13;
  }
  else
  {
    v8 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v8 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v8);
    return 3221225485LL;
  }
}
