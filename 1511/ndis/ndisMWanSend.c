/*
 * XREFs of ndisMWanSend @ 0x1C0051ED0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qq @ 0x1C0026510 (WPP_SF_qq.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026BE0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qqd @ 0x1C004C3E8 (WPP_SF_qqd.c)
 *     ndisMQueueWorkItem @ 0x1C005A54C (ndisMQueueWorkItem.c)
 */

__int64 __fastcall ndisMWanSend(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  char v4; // bp
  KIRQL v5; // r15
  int v9; // eax
  __int64 *v11; // rcx
  unsigned int v12; // esi
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // r8
  __int64 v16; // rdx

  v3 = *(_QWORD *)(a1 + 16);
  v4 = 0;
  v5 = 0;
  if ( (unsigned __int8)byte_1C008370A >= 4u )
    WPP_SF_qq(0x1Cu, &WPP_28e0ced77d8c435d2081eccb5146e802_Traceguids, a1, a3);
  v9 = *(_DWORD *)(v3 + 120);
  if ( v9 < 0 )
    return 3221225473LL;
  if ( (v9 & 0x40000) == 0 )
  {
    v4 = 0;
    v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 96));
    *(_QWORD *)(v3 + 520) = KeGetCurrentThread();
    *(_DWORD *)(v3 + 1856) = 1508956;
    if ( !*(_BYTE *)(v3 + 89) )
    {
      *(_BYTE *)(v3 + 89) = 1;
      v4 = 1;
      *(_DWORD *)(v3 + 1860) = 1508957;
      *(_QWORD *)(v3 + 1864) = KeGetCurrentThread();
    }
  }
  if ( (*(_DWORD *)(v3 + 120) & 0x40000) != 0 || v4 )
  {
    if ( (*(_DWORD *)(v3 + 120) & 0x40000) == 0 )
    {
      *(_QWORD *)(v3 + 520) = 0LL;
      *(_DWORD *)(v3 + 1856) = 0;
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v3 + 96));
    }
    v12 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)(v3 + 3816) + 200LL))(
            *(_QWORD *)(v3 + 24),
            a2,
            a3);
    if ( (*(_DWORD *)(v3 + 120) & 0x40000) == 0 )
    {
      KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v3 + 96));
      *(_QWORD *)(v3 + 520) = KeGetCurrentThread();
      *(_DWORD *)(v3 + 1856) = 1508977;
    }
    if ( !v12 )
    {
      v13 = *(_QWORD *)(v3 + 3192);
      if ( v13 )
      {
        v14 = 112LL * KeGetPcr()->Prcb.Number;
        ++*(_QWORD *)(v14 + v13 + 64);
      }
      v15 = *(_QWORD *)(v3 + 3192);
      if ( v15 )
      {
        v16 = v15 + 112LL * KeGetPcr()->Prcb.Number;
        *(_QWORD *)(v16 + 88) += *(unsigned int *)(a3 + 24);
        *(_QWORD *)(v16 + 56) += *(unsigned int *)(a3 + 24);
      }
    }
  }
  else
  {
    *(_QWORD *)(a3 + 8) = a3;
    *(_QWORD *)a3 = a3;
    v11 = *(__int64 **)(v3 + 136);
    *(_QWORD *)a3 = v3 + 128;
    *(_QWORD *)(a3 + 8) = v11;
    if ( *v11 != v3 + 128 )
      __fastfail(3u);
    *v11 = a3;
    *(_QWORD *)(v3 + 136) = a3;
    *(_QWORD *)(a3 + 80) = a2;
    ndisMQueueWorkItem(v3, 1LL);
    v12 = 259;
  }
  if ( (*(_DWORD *)(v3 + 120) & 0x40000) == 0 )
  {
    if ( v4 )
    {
      *(_DWORD *)(v3 + 1860) = 0;
      *(_QWORD *)(v3 + 1864) = 0LL;
      *(_BYTE *)(v3 + 89) = 0;
    }
    *(_QWORD *)(v3 + 520) = 0LL;
    *(_DWORD *)(v3 + 1856) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 96), v5);
  }
  if ( (unsigned __int8)byte_1C008370A >= 4u )
    WPP_SF_qqd(0x1Du, &WPP_28e0ced77d8c435d2081eccb5146e802_Traceguids, a1, a3, v12);
  return v12;
}
