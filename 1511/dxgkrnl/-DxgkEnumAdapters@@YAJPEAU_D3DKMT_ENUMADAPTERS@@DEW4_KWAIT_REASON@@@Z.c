/*
 * XREFs of ?DxgkEnumAdapters@@YAJPEAU_D3DKMT_ENUMADAPTERS@@DEW4_KWAIT_REASON@@@Z @ 0x1C012BA90
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     memmove @ 0x1C00120C0 (memmove.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     ?DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z @ 0x1C009D3B0 (-DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z.c)
 *     ?DestroyHandle@DXGADAPTER@@SAJI@Z @ 0x1C00B98D4 (-DestroyHandle@DXGADAPTER@@SAJI@Z.c)
 */

__int64 __fastcall DxgkEnumAdapters(struct _D3DKMT_ENUMADAPTERS *a1, char a2, char a3, enum _KWAIT_REASON a4)
{
  struct _D3DKMT_ENUMADAPTERS *v7; // rbx
  __int64 v8; // rax
  __int64 v10; // r8
  __int64 v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  int *p_Src; // rax
  __int64 v18; // rdx
  unsigned int v19; // [rsp+20h] [rbp-198h] BYREF
  __int64 v20; // [rsp+24h] [rbp-194h]
  _DWORD v21[5]; // [rsp+2Ch] [rbp-18Ch]
  int Src; // [rsp+40h] [rbp-178h] BYREF
  _BYTE v23[332]; // [rsp+44h] [rbp-174h] BYREF

  v7 = a1;
  if ( a1 )
  {
    Src = 0;
    memset(v23, 0, 0x140uLL);
    v19 = 0;
    v21[0] = 0;
    *(_QWORD *)&v21[1] = v23;
    v20 = 16LL;
    LOBYTE(v10) = a3;
    v11 = (int)DxgkEnumAdaptersInternal((struct ENUMADAPTERSINTERNAL *)&v19, a2, v10, a4);
    v12 = v19;
    if ( v19 > 0x10 )
    {
      v13 = WdLogNewEntry5_WdAssertion(v19);
      *(_QWORD *)(v13 + 24) = 4142LL;
      WdLogEvent5_WdAssertion(v13);
      v12 = v19;
    }
    if ( (unsigned int)v12 > (unsigned int)v20 )
    {
      v14 = WdLogNewEntry5_WdAssertion(v12);
      *(_QWORD *)(v14 + 24) = 4143LL;
      WdLogEvent5_WdAssertion(v14);
      v12 = v19;
    }
    if ( (unsigned int)v12 > HIDWORD(v20) )
    {
      v15 = WdLogNewEntry5_WdAssertion(v12);
      *(_QWORD *)(v15 + 24) = 4144LL;
      WdLogEvent5_WdAssertion(v15);
      v12 = v19;
    }
    if ( (int)v11 >= 0 )
    {
      Src = v12;
      if ( a2 == 1 )
      {
        if ( (unsigned __int64)&v7[1] > MmUserProbeAddress || &v7[1] <= v7 )
          *(_BYTE *)MmUserProbeAddress = 0;
        p_Src = &Src;
        v18 = 2LL;
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
          --v18;
        }
        while ( v18 );
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
      v16 = WdLogNewEntry5_WdError(v12);
      *(_QWORD *)(v16 + 24) = v11;
      WdLogEvent5_WdError(v16);
    }
    return (unsigned int)v11;
  }
  else
  {
    v8 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v8 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v8);
    return 3221225485LL;
  }
}
