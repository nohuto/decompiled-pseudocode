/*
 * XREFs of SwitchToFiberContext @ 0x14000CC80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall SwitchToFiberContext(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rbp
  __int64 v3; // rdi
  __int64 v4; // rsi
  __int64 v5; // r12
  __int64 v6; // r13
  __int64 v7; // r14
  __int64 v8; // r15
  __int128 v9; // xmm6
  __int128 v10; // xmm7
  __int128 v11; // xmm8
  __int128 v12; // xmm9
  __int128 v13; // xmm10
  __int128 v14; // xmm11
  __int128 v15; // xmm12
  __int128 v16; // xmm13
  __int128 v17; // xmm14
  __int128 v18; // xmm15
  struct _NT_TIB *Self; // rdx
  _QWORD *result; // rax
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  Self = KeGetPcr()->NtTib.Self;
  result = Self->FiberData;
  Self[93].FiberData = *(PVOID *)(a1 + 32);
  Self->FiberData = (PVOID)a1;
  result[3] = Self->StackLimit;
  *((_DWORD *)result + 326) = Self[106].SubSystemTib;
  result[162] = Self[108].ArbitraryUserPointer;
  result[161] = Self[12].ArbitraryUserPointer;
  result[24] = v1;
  result[26] = v2;
  result[27] = v4;
  result[28] = v3;
  result[33] = v5;
  result[34] = v6;
  result[35] = v7;
  result[36] = v8;
  *((_OWORD *)result + 35) = v9;
  *((_OWORD *)result + 36) = v10;
  *((_OWORD *)result + 37) = v11;
  *((_OWORD *)result + 38) = v12;
  *((_OWORD *)result + 39) = v13;
  *((_OWORD *)result + 40) = v14;
  *((_OWORD *)result + 41) = v15;
  *((_OWORD *)result + 42) = v16;
  *((_OWORD *)result + 43) = v17;
  *((_OWORD *)result + 44) = v18;
  *((_DWORD *)result + 25) = _mm_getcsr();
  __asm { fnclex }
  result[37] = retaddr;
  result[25] = &retaddr;
  Self->StackBase = *(PVOID *)(a1 + 16);
  Self->StackLimit = *(PVOID *)(a1 + 24);
  LODWORD(Self[106].SubSystemTib) = *(_DWORD *)(a1 + 1304);
  Self[108].ArbitraryUserPointer = *(PVOID *)(a1 + 1296);
  Self[12].ArbitraryUserPointer = *(PVOID *)(a1 + 1288);
  _mm_setcsr(*(_DWORD *)(a1 + 100));
  return result;
}
