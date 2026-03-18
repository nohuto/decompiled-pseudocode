/*
 * XREFs of VidSchiExecuteMmIoFlipAtPassiveLevel @ 0x1C0023EB0
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyOnFlip@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C000FAFC (-NotifyOnFlip@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     VidSchiPropagatePresentHistoryToken @ 0x1C0011348 (VidSchiPropagatePresentHistoryToken.c)
 *     _guard_dispatch_icall_nop @ 0x1C0014AE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall VidSchiExecuteMmIoFlipAtPassiveLevel(__int64 *a1)
{
  __int64 v1; // rbp
  __int64 v2; // rsi
  __int64 v3; // r15
  _DWORD *v4; // rbx
  __int64 v5; // rdi
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r14
  _QWORD *v12; // rax
  struct _D3DKMT_PRESENTHISTORYTOKEN *v13; // rdx
  bool v14; // zf
  int v15; // edx
  __int64 v16; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-48h] BYREF
  __int64 *v18; // [rsp+98h] [rbp+10h] BYREF

  v18 = a1;
  v1 = *((unsigned int *)a1 + 6);
  v2 = *a1;
  v3 = a1[1];
  v4 = (_DWORD *)a1[2];
  *((_DWORD *)a1 + 9) |= 8u;
  v5 = 306 * v1;
  v6 = ((__int64 (__fastcall *)(_QWORD, __int64 *))DxgCoreInterface[48])(
         *(_QWORD *)(*(_QWORD *)(*v18 + 16) + 2128LL),
         v18 + 4);
  v11 = v6;
  if ( v6 )
  {
    v12 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v8, v7, v9, v10);
    v12[6] = &v18;
    v12[3] = 281LL;
    v12[4] = 11LL;
    v12[5] = v11;
    v12[7] = *(_QWORD *)(v2 + 16);
    WdLogEvent5_WdCriticalError(v12);
    __debugbreak();
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v2 + 1856), &LockHandle);
  if ( (v4[v5 + 291] & 0x20) != 0 )
  {
    v13 = *(struct _D3DKMT_PRESENTHISTORYTOKEN **)&v4[v5 + 296];
    if ( v13 )
      VidSchiPropagatePresentHistoryToken(
        *(PKSPIN_LOCK *)&v4[v5 + 294],
        v13,
        1,
        (v4[v5 + 291] & 0x40) != 0,
        0,
        *(_QWORD *)&v4[v5 + 300],
        *(_QWORD *)&v4[v5 + 298],
        0LL);
  }
  v14 = (v4[v5 + 291] & 0x10) == 0;
  v4[v5 + 275] = 5;
  if ( v14 )
    v15 = (1 << *(_DWORD *)(v2 + 128)) - 1;
  else
    v15 = (unsigned __int8)**(_DWORD **)&v4[v5 + 302] | *(unsigned __int8 *)(*(_QWORD *)&v4[v5 + 302] + 1LL);
  *(_DWORD *)(v3 + 2280) |= v15;
  *(_QWORD *)&v4[v5 + 284] = MEMORY[0xFFFFF78000000320];
  v16 = 306LL * (unsigned int)v4[11];
  v4[12] = v1;
  if ( v4[v16 + 275] != 5 )
    v4[11] = v1;
  v4[10] = ((_BYTE)v1 + 1) & 0x3F;
  VIDMM_GLOBAL::NotifyOnFlip(*(VIDMM_GLOBAL **)(*(_QWORD *)(v2 + 8) + 408LL));
  --*(_DWORD *)(*(_QWORD *)(v2 + 208) + 808LL);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
