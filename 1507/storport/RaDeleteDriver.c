/*
 * XREFs of RaDeleteDriver @ 0x1C005365C
 * Callers:
 *     StorPortInitialize @ 0x1C0007C00 (StorPortInitialize.c)
 *     RaDriverUnload @ 0x1C00260A0 (RaDriverUnload.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0012F80 (_guard_dispatch_icall_nop.c)
 *     RaFreeDriverInitData @ 0x1C0026108 (RaFreeDriverInitData.c)
 *     RaidReleasePortData @ 0x1C0026958 (RaidReleasePortData.c)
 *     RaidRemovePortDriver @ 0x1C0026980 (RaidRemovePortDriver.c)
 *     RaSqmAndEtwCleanup @ 0x1C0053730 (RaSqmAndEtwCleanup.c)
 */

void __fastcall RaDeleteDriver(__int64 a1)
{
  __int64 **v2; // rdi
  __int64 *v3; // rax
  __int64 v4; // rcx
  __int64 *v5; // rsi
  int v6; // eax
  void (__fastcall *v7)(_QWORD); // rax
  void *v8; // rcx

  if ( *(_DWORD *)a1 != -1 )
  {
    v2 = (__int64 **)(a1 + 96);
    while ( *v2 != (__int64 *)v2 )
    {
      v3 = *v2;
      v4 = **v2;
      if ( (__int64 **)(*v2)[1] != v2 || *(__int64 **)(v4 + 8) != v3 )
        __fastfail(3u);
      *v2 = (__int64 *)v4;
      v5 = v3 - 26;
      *(_QWORD *)(v4 + 8) = v2;
      v6 = *((_DWORD *)v3 - 52);
      if ( v6 == 176 || v6 == 208 && (v5[23] & 1) != 0 )
      {
        v7 = (void (__fastcall *)(_QWORD))v5[21];
        if ( v7 )
          v7(*(_QWORD *)(a1 + 8));
      }
      RaFreeDriverInitData(v4, v5);
    }
    *(_DWORD *)a1 = -1;
    RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 40));
    if ( *(_QWORD *)(a1 + 24) )
    {
      RaidRemovePortDriver(*(_QWORD *)(a1 + 16), a1);
      *(_QWORD *)(a1 + 24) = 0LL;
    }
    v8 = *(void **)(a1 + 16);
    if ( v8 )
    {
      RaidReleasePortData(v8);
      *(_QWORD *)(a1 + 16) = 0LL;
    }
    RaSqmAndEtwCleanup();
  }
}
