/*
 * XREFs of RtlpLeakCallbackRoutine @ 0x1800ED700
 * Callers:
 *     <none>
 * Callees:
 *     RtlpPushPageDescriptor @ 0x1800ED874 (RtlpPushPageDescriptor.c)
 *     RtlpSetBlockInfo @ 0x1800EDDF8 (RtlpSetBlockInfo.c)
 */

__int64 __fastcall RtlpLeakCallbackRoutine(__int64 a1)
{
  int v2; // ecx
  int v3; // ecx
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rsi
  __int64 v6; // rcx
  __int64 v7; // rsi
  int v8; // r9d
  _DWORD *v9; // rdx
  __int64 v10; // r8
  _DWORD *v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax

  v2 = *(_DWORD *)a1 - 2;
  if ( v2 )
  {
    v3 = v2 - 1;
    if ( v3 )
    {
      if ( v3 == 2 && (*(_BYTE *)(a1 + 24) & 1) != 0 )
      {
        v4 = *(_QWORD *)(a1 + 16);
        v5 = v4 + *(_QWORD *)(a1 + 32) - 1LL;
        v6 = v4 >> 12;
        v7 = v5 >> 12;
        RtlpLDCrtPage = v6;
        if ( v6 == RtlpLDPreviousPage )
        {
          v8 = RtlpLDNumBlocks;
        }
        else
        {
          if ( RtlpLDPreviousPage )
          {
            RtlpPushPageDescriptor(RtlpLDPreviousPage, 1LL);
            v6 = RtlpLDCrtPage;
          }
          RtlpLDPreviousPage = v6;
          v8 = 0;
        }
        v9 = RtlpTempBlocks;
        RtlpLDNumBlocks = v8 + 1;
        v10 = 5LL * v8;
        *((_QWORD *)RtlpTempBlocks + v10 + 2) = *(_QWORD *)(a1 + 16);
        v9[2 * v10 + 8] = 0;
        *(_QWORD *)&v9[2 * v10 + 6] = *(_QWORD *)(a1 + 32);
        if ( v7 != v6 )
        {
          RtlpPushPageDescriptor(v6, 1LL);
          v11 = RtlpTempBlocks;
          v12 = *(_QWORD *)(a1 + 16);
          RtlpLDNumBlocks = 1;
          *((_QWORD *)RtlpTempBlocks + 2) = v12;
          v11[8] = 0;
          *((_QWORD *)v11 + 3) = *(_QWORD *)(a1 + 32);
          if ( (unsigned __int64)(v7 - RtlpLDCrtPage) > 1 )
            RtlpPushPageDescriptor(RtlpLDCrtPage + 1, v7 - RtlpLDCrtPage - 1);
          RtlpLDPreviousPage = v7;
        }
      }
    }
    else
    {
      RtlpSetBlockInfo(RtlpProcessMemoryMap, *(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 24), 0LL);
    }
  }
  else
  {
    if ( RtlpLDPreviousPage )
      RtlpPushPageDescriptor(RtlpLDPreviousPage, 1LL);
    RtlpLDPreviousPage = 0LL;
    v13 = *(_QWORD *)(a1 + 16);
    RtlpLDNumBlocks = 0;
    RtlpCrtHeapAddress = v13;
  }
  return 0LL;
}
