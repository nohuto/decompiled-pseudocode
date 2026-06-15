/*
 * XREFs of Pdcv2ActivationClientRegister @ 0x1800315E0
 * Callers:
 *     ??0CPdcActivationClient@@QEAA@XZ @ 0x18003227C (--0CPdcActivationClient@@QEAA@XZ.c)
 * Callees:
 *     PdcReleaseRwLockExclusive2 @ 0x180005614 (PdcReleaseRwLockExclusive2.c)
 *     PdcAcquireRwLockExclusive2 @ 0x180005760 (PdcAcquireRwLockExclusive2.c)
 *     PdcInitializeETW @ 0x180031594 (PdcInitializeETW.c)
 *     PdcPortOpen @ 0x180031748 (PdcPortOpen.c)
 *     PdcGetModuleName @ 0x1800319E4 (PdcGetModuleName.c)
 *     memset @ 0x180036D30 (memset.c)
 *     Template_qqqqzr3 @ 0x18008EBE8 (Template_qqqqzr3.c)
 */

__int64 __fastcall Pdcv2ActivationClientRegister(int a1, __int128 *a2, _QWORD *a3)
{
  bool v5; // zf
  char *Heap; // rax
  char *v7; // rbx
  HANDLE MutexW; // rax
  __int128 v9; // xmm0
  __int64 v10; // rcx
  int ModuleName; // eax
  int v12; // edx
  int v13; // ecx
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned int v16; // edi
  int v17; // ecx
  __int64 v19; // rax
  int v20; // [rsp+70h] [rbp+8h] BYREF
  __int64 (__fastcall *v21)(); // [rsp+80h] [rbp+18h] BYREF

  v20 = a1;
  *a3 = 0LL;
  v5 = *(_DWORD *)a2 == 1;
  LOBYTE(v20) = 0;
  if ( v5 && *((_QWORD *)a2 + 1) )
  {
    Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0xF8uLL);
    v7 = Heap;
    if ( Heap )
    {
      memset(Heap, 0, 0xF8uLL);
      *((_QWORD *)v7 + 1) = 0LL;
      *((_QWORD *)v7 + 2) = 0LL;
      MutexW = CreateMutexW(0LL, 0, 0LL);
      *((_QWORD *)v7 + 1) = MutexW;
      if ( !MutexW )
        GetLastError();
      PdcAcquireRwLockExclusive2((__int64)(v7 + 8), &v20);
      *(_DWORD *)v7 = 843138128;
      *((_DWORD *)v7 + 6) = 40;
      v7[64] = 1;
      *((_QWORD *)v7 + 10) = v7 + 72;
      *((_QWORD *)v7 + 9) = v7 + 72;
      v9 = *a2;
      v21 = Pdcv2pActivationClientCallback;
      *(_OWORD *)(v7 + 40) = v9;
      *((_QWORD *)v7 + 7) = *((_QWORD *)a2 + 2);
      ModuleName = PdcGetModuleName(v10, v7 + 92);
      v13 = 0;
      if ( ModuleName >= 0 )
        v13 = (_DWORD)v7 + 92;
      v16 = PdcPortOpen(v13, v12, (_DWORD)v7, (unsigned int)&v21);
      if ( !v16 )
      {
        *a3 = v7;
        PdcInitializeETW(v15, v14);
        if ( (Microsoft_Windows_PDCEnableBits & 0x200000) != 0 )
        {
          v19 = -1LL;
          do
            ++v19;
          while ( *(_WORD *)&v7[2 * v19 + 92] );
          Template_qqqqzr3(v17, (unsigned int)&PDCV2_ACTIVATION_REGISTER, *((_DWORD *)v7 + 6), 0);
        }
        PdcReleaseRwLockExclusive2((__int64)(v7 + 8), &v20);
        v7 = 0LL;
      }
      if ( v7 )
      {
        if ( (_BYTE)v20 )
          PdcReleaseRwLockExclusive2((__int64)(v7 + 8), &v20);
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v7);
      }
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  else
  {
    return (unsigned int)-1073741584;
  }
  return v16;
}
