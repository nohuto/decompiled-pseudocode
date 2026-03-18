/*
 * XREFs of ?UnlockInternal@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@@Z @ 0x1C0053DA0
 * Callers:
 *     ?Unlock@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C0053D34 (-Unlock@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@@Z.c)
 * Callees:
 *     Template_p @ 0x1C0006E98 (Template_p.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008180 (_guard_dispatch_icall_nop.c)
 *     ?OfferRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0011AA4 (-OfferRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::UnlockInternal(VIDMM_GLOBAL *this, __int64 **a2)
{
  __int64 *v2; // rsi
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rax

  v2 = *a2;
  v5 = **a2;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v5 + 464, 0LL);
  v9 = *(unsigned int *)(v5 + 336);
  if ( !(_DWORD)v9 )
  {
    v10 = WdLogNewEntry5_WdAssertion(v6, v9, v7, v8);
    *(_QWORD *)(v10 + 24) = a2;
LABEL_5:
    WdLogEvent5_WdAssertion(v10);
    goto LABEL_13;
  }
  if ( (*(_DWORD *)(v5 + 84) & 0x20) == 0 )
  {
    v10 = WdLogNewEntry5_WdAssertion(v6, v9, v7, v8);
    *(_QWORD *)(v10 + 24) = 20333LL;
    goto LABEL_5;
  }
  *(_DWORD *)(v5 + 336) = v9 - 1;
  if ( (_DWORD)v9 == 1 )
  {
    if ( *(_QWORD *)(v5 + 432) )
    {
      VIDMM_CPU_HOST_APERTURE::OfferRange(
        *(VIDMM_CPU_HOST_APERTURE **)(*(_QWORD *)(v5 + 128) + 440LL),
        (struct _VIDMM_GLOBAL_ALLOC *)v5);
      if ( (v2[4] & 1) != 0 )
      {
        (*(void (__fastcall **)(_QWORD, VIDMM_GLOBAL *, __int64, __int64, _QWORD, _QWORD, _QWORD, _QWORD, int, __int64))(**(_QWORD **)(v2[1] + 24) + 48LL))(
          *(_QWORD *)(v2[1] + 24),
          this,
          v2[3],
          3LL,
          0LL,
          0LL,
          0LL,
          0LL,
          1,
          v5);
        *((_BYTE *)v2 + 32) &= ~1u;
      }
    }
    *(_DWORD *)(v5 + 84) &= ~0x20u;
  }
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
    Template_p(v6, &EventUnlock2, v7, a2);
LABEL_13:
  ExReleasePushLockExclusiveEx(v5 + 464, 0LL);
  KeLeaveCriticalRegion();
  return 0LL;
}
