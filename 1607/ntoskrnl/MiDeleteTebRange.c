/*
 * XREFs of MiDeleteTebRange @ 0x1404B2EE8
 * Callers:
 *     MmDeleteTeb @ 0x1404B2E50 (MmDeleteTeb.c)
 *     MiCreatePebOrTeb @ 0x1404EE1C0 (MiCreatePebOrTeb.c)
 * Callees:
 *     RtlClearBitsEx @ 0x1400137E8 (RtlClearBitsEx.c)
 *     MiLocateVadEvent @ 0x1400150E4 (MiLocateVadEvent.c)
 *     MiDeleteVad @ 0x140028450 (MiDeleteVad.c)
 *     UNLOCK_PAGE_TABLE_COMMITMENT @ 0x1400298C0 (UNLOCK_PAGE_TABLE_COMMITMENT.c)
 *     MiUnlockAndDereferenceVad @ 0x14002B920 (MiUnlockAndDereferenceVad.c)
 *     LOCK_PAGE_TABLE_COMMITMENT @ 0x14002BAD0 (LOCK_PAGE_TABLE_COMMITMENT.c)
 *     MiDecommitRegion @ 0x14042F060 (MiDecommitRegion.c)
 */

void __fastcall MiDeleteTebRange(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, __int16 a4)
{
  __int64 *VadEvent; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  char v12; // r10
  __int64 v13; // r14
  unsigned __int64 v14; // rbx
  char v15; // si
  __int64 v16; // rdx
  char v17; // r15
  __int64 *v18; // rcx
  unsigned int v19; // edx
  unsigned int v20; // r8d
  _QWORD *v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rdx
  _QWORD *v24; // rax
  __int64 v25; // rdx
  _QWORD *v26; // rcx
  __int64 Process; // [rsp+30h] [rbp-38h]
  struct _KTHREAD *CurrentThread; // [rsp+38h] [rbp-30h]

  CurrentThread = KeGetCurrentThread();
  Process = (__int64)CurrentThread->ApcState.Process;
  VadEvent = MiLocateVadEvent(a1, 64);
  if ( !VadEvent )
    goto LABEL_35;
  v13 = (__int64)(VadEvent + 2);
  v14 = (a2 >> 12) - (*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v9 + 32) << 32));
  v15 = v12;
  LOCK_PAGE_TABLE_COMMITMENT(v10, v11);
  RtlClearBitsEx(v13, v14, a3 >> 12);
  *(_DWORD *)(v13 + 44) -= a3 >> 12;
  v16 = *(unsigned int *)(v13 + 44);
  if ( (a3 >> 12) + v16 != *(_QWORD *)v13 || a3 >> 12 == *(_QWORD *)v13 )
  {
    v17 = 0;
    if ( !(_DWORD)v16 )
      v15 = 1;
  }
  else
  {
    v17 = 1;
  }
  v18 = *(__int64 **)(a1 + 56);
  v19 = 0;
  v20 = 0;
  while ( v18 )
  {
    if ( *((_DWORD *)v18 + 2) == 2 )
    {
      if ( v20 <= 1 )
        ++v20;
      if ( a2 <= v18[3] && a3 + a2 - 1 >= (v18[2] & 0xFFFFFFFFFFFFF000uLL) && v19 <= 1 )
        ++v19;
    }
    v18 = (__int64 *)*v18;
  }
  if ( v20 != 1 )
    v15 = 0;
  if ( v19 != 1 )
    a4 &= ~0x4000u;
  if ( !v15 && (a4 & 0x4000) != 0 )
    MiDecommitRegion(a1, a2, a3 + a2 - 1);
  if ( v17 == 1 )
  {
    v21 = (_QWORD *)(v13 + 16);
    v22 = qword_140327FD0 + 16 * (*(unsigned __int16 *)(v13 + 40) + 17302536LL);
    v23 = *(_QWORD *)v22;
    if ( *(_QWORD *)(*(_QWORD *)v22 + 8LL) != v22 )
      __fastfail(3u);
    *v21 = v23;
    *(_QWORD *)(v13 + 24) = v22;
    *(_QWORD *)(v23 + 8) = v21;
    *(_QWORD *)v22 = v21;
  }
  else if ( v15 == 1 )
  {
    v24 = (_QWORD *)(v13 + 16);
    v25 = *(_QWORD *)(v13 + 16);
    v26 = *(_QWORD **)(v13 + 24);
    if ( *(_QWORD *)(v25 + 8) != v13 + 16 || (_QWORD *)*v26 != v24 )
      __fastfail(3u);
    *v26 = v25;
    *(_QWORD *)(v25 + 8) = v26;
    *v24 = 0LL;
  }
  UNLOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, Process);
  v9 = a1;
  if ( v15 == 1 )
    MiDeleteVad(a1, 0);
  else
LABEL_35:
    MiUnlockAndDereferenceVad((char *)v9);
}
