/*
 * XREFs of WmipGenerateBinaryMofNotification @ 0x14069F174
 * Callers:
 *     WmipDSCleanup @ 0x140532730 (WmipDSCleanup.c)
 *     WmipAddDataSource @ 0x1405375B4 (WmipAddDataSource.c)
 *     WmipUpdateDataSource @ 0x14069F4A4 (WmipUpdateDataSource.c)
 * Callees:
 *     RtlStringCbPrintfExW @ 0x1400A7360 (RtlStringCbPrintfExW.c)
 *     RtlStringCbCopyW @ 0x1400C265C (RtlStringCbCopyW.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     WmipProcessEvent @ 0x140538080 (WmipProcessEvent.c)
 */

void __fastcall WmipGenerateBinaryMofNotification(__int64 a1, _OWORD *a2)
{
  unsigned int v4; // r14d
  int v5; // eax
  __int64 v6; // rsi
  __int64 v7; // rsi
  __int64 v8; // rsi
  char *PoolWithTag; // rax
  char *v10; // rdi
  int v11; // eax
  size_t v12; // rsi
  char *v13; // r15
  int v14; // eax
  _DWORD *v15; // rcx
  __int64 v16; // [rsp+38h] [rbp-30h]

  if ( *(_DWORD *)(a1 + 72) )
  {
    v4 = 0;
    do
    {
      v5 = *(_DWORD *)(a1 + 16);
      if ( (v5 & 2) != 0 )
      {
        v6 = -1LL;
        do
          ++v6;
        while ( *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 88) + 8LL * v4) + 2 * v6) );
        v7 = 2 * v6 + 4;
      }
      else
      {
        if ( (v5 & 1) == 0 )
          return;
        v8 = -1LL;
        do
          ++v8;
        while ( *(_WORD *)(*(_QWORD *)(a1 + 88) + 2 * v8 + 4) );
        v7 = 2 * v8 + 14;
      }
      PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v7 + 74, 0x70696D57u);
      v10 = PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, v7 + 74);
        *(_DWORD *)v10 = v7 + 74;
        *((_DWORD *)v10 + 1) = 3;
        *((_QWORD *)v10 + 1) = 1LL;
        *((_DWORD *)v10 + 11) = 10;
        *(_OWORD *)(v10 + 24) = *a2;
        *((_QWORD *)v10 + 2) = MEMORY[0xFFFFF78000000014];
        v11 = v7 + 2;
        *((_DWORD *)v10 + 14) = 72;
        v12 = v7 - 2;
        *((_DWORD *)v10 + 15) = v11;
        *((_DWORD *)v10 + 12) = 64;
        *((_WORD *)v10 + 32) = 0;
        v13 = &v10[*((unsigned int *)v10 + 14)];
        *(_WORD *)v13 = 0;
        v14 = *(_DWORD *)(a1 + 16);
        if ( (v14 & 2) != 0 )
        {
          *((_WORD *)v13 + 1) = v12;
          RtlStringCbCopyW((NTSTRSAFE_PWSTR)v13 + 2, v12, *(NTSTRSAFE_PCWSTR *)(*(_QWORD *)(a1 + 88) + 8LL * v4));
        }
        else if ( (v14 & 1) != 0 )
        {
          v15 = *(_DWORD **)(a1 + 88);
          LODWORD(v16) = v4 + *v15;
          RtlStringCbPrintfExW((NTSTRSAFE_PWSTR)v13 + 2, v12, 0LL, 0LL, 0x200u, L"%ws%d", v15 + 1, v16);
          *((_WORD *)v13 + 1) = v12;
        }
        WmipProcessEvent(v10, 1, 0);
        ExFreePoolWithTag(v10, 0);
      }
      ++v4;
    }
    while ( v4 < *(_DWORD *)(a1 + 72) );
  }
}
