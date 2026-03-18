/*
 * XREFs of WmipGenerateBinaryMofNotification @ 0x1405BC498
 * Callers:
 *     WmipDSCleanup @ 0x14055653C (WmipDSCleanup.c)
 *     WmipAddDataSource @ 0x14057B770 (WmipAddDataSource.c)
 *     WmipUpdateDataSource @ 0x1406E1F18 (WmipUpdateDataSource.c)
 * Callees:
 *     RtlStringCbPrintfExW @ 0x14001AFBC (RtlStringCbPrintfExW.c)
 *     RtlStringCbCopyW @ 0x1400CF240 (RtlStringCbCopyW.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     WmipProcessEvent @ 0x1404A9A7C (WmipProcessEvent.c)
 */

void __fastcall WmipGenerateBinaryMofNotification(__int64 a1, _OWORD *a2)
{
  unsigned int v4; // r14d
  int v5; // eax
  __int64 v6; // rsi
  __int64 v7; // rsi
  char *PoolWithTag; // rax
  char *v9; // rdi
  __int64 v10; // rdx
  int v11; // eax
  size_t v12; // rsi
  char *v13; // r15
  int v14; // eax
  _DWORD *v15; // rcx
  __int64 v16; // rsi
  __int64 v17; // [rsp+38h] [rbp-30h]

  if ( *(_DWORD *)(a1 + 72) )
  {
    v4 = 0;
    do
    {
      v5 = *(_DWORD *)(a1 + 16);
      if ( (v5 & 2) != 0 )
      {
        v16 = -1LL;
        do
          ++v16;
        while ( *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 88) + 8LL * v4) + 2 * v16) );
        v7 = 2 * v16 + 4;
      }
      else
      {
        if ( (v5 & 1) == 0 )
          return;
        v6 = -1LL;
        do
          ++v6;
        while ( *(_WORD *)(*(_QWORD *)(a1 + 88) + 2 * v6 + 4) );
        v7 = 2 * v6 + 14;
      }
      PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v7 + 74, 0x70696D57u);
      v9 = PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, v7 + 74);
        *(_DWORD *)v9 = v7 + 74;
        *((_DWORD *)v9 + 1) = 3;
        *((_QWORD *)v9 + 1) = 1LL;
        *((_DWORD *)v9 + 11) = 10;
        *(_OWORD *)(v9 + 24) = *a2;
        *((_QWORD *)v9 + 2) = MEMORY[0xFFFFF78000000014];
        v11 = v7 + 2;
        *((_DWORD *)v9 + 14) = 72;
        v12 = v7 - 2;
        *((_DWORD *)v9 + 15) = v11;
        *((_DWORD *)v9 + 12) = 64;
        *((_WORD *)v9 + 32) = 0;
        v13 = &v9[*((unsigned int *)v9 + 14)];
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
          LODWORD(v17) = v4 + *v15;
          RtlStringCbPrintfExW((NTSTRSAFE_PWSTR)v13 + 2, v12, 0LL, 0LL, 0x200u, L"%ws%d", v15 + 1, v17);
          *((_WORD *)v13 + 1) = v12;
        }
        LOBYTE(v10) = 1;
        WmipProcessEvent(v9, v10, 0);
        ExFreePoolWithTag(v9, 0);
      }
      ++v4;
    }
    while ( v4 < *(_DWORD *)(a1 + 72) );
  }
}
