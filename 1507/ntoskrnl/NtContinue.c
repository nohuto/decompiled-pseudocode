/*
 * XREFs of NtContinue @ 0x140182DD0
 * Callers:
 *     <none>
 * Callees:
 *     KiContinueEx @ 0x140020234 (KiContinueEx.c)
 *     KiRestoreDebugRegisterState @ 0x140182BC0 (KiRestoreDebugRegisterState.c)
 *     NtContinue @ 0x140182DD0 (NtContinue.c)
 *     KiInitiateUserApc @ 0x1401872F0 (KiInitiateUserApc.c)
 *     KiUmsExit @ 0x140195200 (KiUmsExit.c)
 *     KiCopyCounters @ 0x140204FF0 (KiCopyCounters.c)
 */

// positive sp value has been detected, the output may be wrong!
NTSTATUS __stdcall NtContinue(PCONTEXT Context, BOOLEAN TestAlert)
{
  __int64 v2; // rbp
  __int64 v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // rsi
  NTSTATUS result; // eax
  struct _KTHREAD *CurrentThread; // rcx
  struct _KTHREAD *v8; // rcx
  __int64 v9; // r9
  __int64 v10; // r8
  unsigned __int16 BpbUserSpecCtrl; // ax
  unsigned __int8 v12; // cf
  _QWORD v15[32]; // [rsp-298h] [rbp-3D0h] BYREF
  __int64 v16; // [rsp-198h] [rbp-2D0h]
  __int64 v17; // [rsp-190h] [rbp-2C8h]
  __int64 v18; // [rsp-188h] [rbp-2C0h]
  __int64 v19; // [rsp-180h] [rbp-2B8h]
  __int64 v20; // [rsp-178h] [rbp-2B0h]
  __int64 v21; // [rsp-170h] [rbp-2A8h]
  __int64 v22; // [rsp-168h] [rbp-2A0h]
  __int64 v23; // [rsp-160h] [rbp-298h]
  __int64 v24; // [rsp-158h] [rbp-290h]
  __int64 v25; // [rsp-150h] [rbp-288h]
  __int64 v26; // [rsp-148h] [rbp-280h]
  __int64 v27; // [rsp-140h] [rbp-278h]
  __int64 v28; // [rsp-138h] [rbp-270h]
  __int64 v29; // [rsp-130h] [rbp-268h]
  __int64 v30; // [rsp-128h] [rbp-260h]
  __int64 v31; // [rsp-120h] [rbp-258h]
  __int64 v32; // [rsp-118h] [rbp-250h]
  __int64 v33; // [rsp-110h] [rbp-248h]
  __int64 v34; // [rsp-108h] [rbp-240h]
  __int64 v35; // [rsp-100h] [rbp-238h]
  __int64 v36; // [rsp-F8h] [rbp-230h]
  char v38; // [rsp+160h] [rbp+28h]

  v3 = *(_QWORD *)(v2 + 192);
  v4 = *(_QWORD *)(v2 + 200);
  v5 = *(_QWORD *)(v2 + 208);
  *(_QWORD *)(v2 - 80) = 0LL;
  v16 = v3;
  v17 = v4;
  v18 = v5;
  result = KiContinueEx((ULONG64)Context, TestAlert, (__int64)v15, v2 - 128);
  if ( result > 0 )
  {
    CurrentThread = KeGetCurrentThread();
    if ( (*(_BYTE *)(v2 + 240) & 1) == 0 )
    {
      CurrentThread->TrapFrame = *(_KTRAP_FRAME **)(v2 + 184);
      CurrentThread->PreviousMode = *(_BYTE *)(v2 - 88);
    }
    _disable();
    if ( (*(_BYTE *)(v2 + 240) & 1) == 0 )
    {
      _mm_setcsr(*(_DWORD *)(v2 - 84));
      __asm { iretq }
    }
    if ( KeGetCurrentThread()->ApcState.UserApcPending )
    {
      __writecr8(1uLL);
      _enable();
      KiInitiateUserApc();
      _disable();
      __writecr8(0LL);
    }
    v8 = KeGetCurrentThread();
    if ( (v8->Header.LockNV & 0x40010000) != 0 )
    {
      if ( (v8->Header.Size & 1) != 0 )
      {
        KiCopyCounters();
        v8 = KeGetCurrentThread();
      }
      if ( (v8->Header.Reserved1 & 0x40) != 0 )
      {
        LOBYTE(v8) = 1;
        ((void (__fastcall *)(struct _KTHREAD *))KiUmsExit)(v8);
      }
    }
    _mm_setcsr(*(_DWORD *)(v2 - 84));
    if ( *(_WORD *)(v2 + 128) )
      KiRestoreDebugRegisterState();
    v9 = *(_QWORD *)(v2 - 48);
    v10 = *(_QWORD *)(v2 - 56);
    BpbUserSpecCtrl = KeGetPcr()->Prcb.BpbUserSpecCtrl;
    if ( KeGetPcr()->Prcb.BpbCurrentSpecCtrl != BpbUserSpecCtrl )
    {
      __writegsword(0x2EB4u, BpbUserSpecCtrl);
      __writemsr(0x48u, BpbUserSpecCtrl);
    }
    v12 = _bittestandreset16(MK_FP(__GS__, 11952LL), 2u);
    if ( v12 )
      __writemsr(0x49u, 1uLL);
    v12 = _bittestandreset16(MK_FP(__GS__, 11952LL), 5u);
    if ( v12 )
    {
      v15[21] = 0x140182FE0LL;
      v36 = 0x1401830F7LL;
      v35 = 0x1401830EELL;
      v34 = 0x1401830E5LL;
      v33 = 0x1401830DCLL;
      v32 = 0x1401830D3LL;
      v31 = 0x1401830CALL;
      v30 = 0x1401830C1LL;
      v29 = 0x1401830B8LL;
      v28 = 0x1401830AFLL;
      v27 = 0x1401830A6LL;
      v26 = 0x14018309DLL;
      v25 = 0x140183094LL;
      v24 = 0x14018308BLL;
      v23 = 0x140183082LL;
      v22 = 0x140183079LL;
      v21 = 0x140183070LL;
      v20 = 0x140183067LL;
      v19 = 0x14018305ELL;
      v18 = 0x140183055LL;
      v17 = 0x14018304CLL;
      v16 = 0x140183043LL;
      v15[31] = 0x14018303ALL;
      v15[30] = 0x140183031LL;
      v15[29] = 0x140183028LL;
      v15[28] = 0x14018301FLL;
      v15[27] = 0x140183016LL;
      v15[26] = 0x14018300DLL;
      v15[25] = 0x140183004LL;
      v15[24] = 0x140182FFBLL;
      v15[23] = 0x140182FF2LL;
      v15[22] = 0x140182FE9LL;
    }
    if ( (KiKvaShadow & 1) == 0 )
    {
      if ( (KeGetPcr()->Prcb.BpbState & 0x80) != 0 )
        __asm { verw    [rsp-298h+arg_2B0] }
      __asm
      {
        swapgs
        iretq
      }
    }
    return KiKernelExit(*(_QWORD *)(v2 - 72), *(_QWORD *)(v2 - 64), v10, v9, v38);
  }
  return result;
}
