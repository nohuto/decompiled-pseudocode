/*
 * XREFs of ?Unlock@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C00523F0
 * Callers:
 *     ?VidMmUnlock@@YAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C0011800 (-VidMmUnlock@@YAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z.c)
 * Callees:
 *     ?OfferRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0013C5C (-OfferRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016890 (_guard_dispatch_icall_nop.c)
 *     Template_p @ 0x1C001CD38 (Template_p.c)
 */

__int64 __fastcall VIDMM_GLOBAL::Unlock(VIDMM_GLOBAL *this, __int64 **a2)
{
  __int64 *v2; // rdi
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 CurrentProcess; // rax

  v2 = *a2;
  v5 = **a2;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v5 + 464, 0LL);
  if ( *((_DWORD *)v2 + 19) )
  {
    if ( (*(_DWORD *)(v5 + 84) & 0x20) != 0 )
    {
      --*(_DWORD *)(v5 + 336);
      if ( (*((_DWORD *)v2 + 19))-- == 1 )
      {
        v7 = **(unsigned int **)(v5 + 472);
        if ( (v7 & 0x40000) != 0 )
        {
          if ( (v7 & 0x20000000) != 0 )
          {
            CurrentProcess = PsGetCurrentProcess();
            MmUnmapViewOfSection(CurrentProcess, v2[2]);
          }
          else
          {
            (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(v2[1] + 24) + 80LL))(
              *(_QWORD *)(v2[1] + 24),
              v2[3],
              v2[2]);
          }
          v2[2] = 0LL;
        }
        else if ( *(_QWORD *)(v5 + 432) )
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
      }
      if ( !*(_DWORD *)(v5 + 336) )
        *(_DWORD *)(v5 + 84) &= ~0x20u;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
        Template_p(v7, &EventUnlock2, v8, a2);
    }
    else
    {
      v13 = WdLogNewEntry5_WdAssertion(v7, v6, v8, v9);
      *(_QWORD *)(v13 + 24) = 20750LL;
      WdLogEvent5_WdAssertion(v13);
    }
  }
  else
  {
    v12 = WdLogNewEntry5_WdAssertion(v7, v6, v8, v9);
    *(_QWORD *)(v12 + 24) = a2;
    WdLogEvent5_WdAssertion(v12);
  }
  ExReleasePushLockExclusiveEx(v5 + 464, 0LL);
  KeLeaveCriticalRegion();
  return 0LL;
}
