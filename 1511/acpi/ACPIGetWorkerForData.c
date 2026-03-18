/*
 * XREFs of ACPIGetWorkerForData @ 0x1C0022930
 * Callers:
 *     <none>
 * Callees:
 *     FreeDataBuffs @ 0x1C000F3B0 (FreeDataBuffs.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024E60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00251C0 (memset.c)
 */

void __fastcall ACPIGetWorkerForData(__int64 a1, int a2, _OWORD *a3, _DWORD *a4)
{
  __int64 v6; // r8
  bool v7; // al
  int v8; // esi
  void (__fastcall *v10)(__int64, _QWORD, _QWORD, _QWORD); // rax
  KIRQL v11; // al
  __int64 v12; // r9
  _QWORD *v13; // r8

  v6 = *((_QWORD *)a4 + 7);
  v7 = a2 >= 0;
  v8 = a2;
  if ( !v6 )
    v8 = -1073741670;
  if ( v8 >= 0 )
  {
    *(_OWORD *)v6 = *a3;
    *(_OWORD *)(v6 + 16) = a3[1];
    *(_QWORD *)(v6 + 32) = *((_QWORD *)a3 + 4);
    memset(a3, 0, 0x28uLL);
    v7 = 0;
  }
  a4[18] = v8;
  if ( v7 )
  {
    dword_1C005A228 = 0;
    byte_1C005A22C = 0;
    FreeDataBuffs((__int64)a3, 1u);
  }
  if ( (*a4 & 0x10000000) == 0 )
  {
    v10 = (void (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD))*((_QWORD *)a4 + 5);
    if ( v10 )
      v10(a1, (unsigned int)v8, 0LL, *((_QWORD *)a4 + 6));
    v11 = KeAcquireSpinLockRaiseToDpc(&AcpiGetLock);
    v12 = *((_QWORD *)a4 + 1);
    v13 = (_QWORD *)*((_QWORD *)a4 + 2);
    if ( *(_DWORD **)(v12 + 8) != a4 + 2 || (_DWORD *)*v13 != a4 + 2 )
      __fastfail(3u);
    *v13 = v12;
    *(_QWORD *)(v12 + 8) = v13;
    KeReleaseSpinLock(&AcpiGetLock, v11);
    ExFreePoolWithTag(a4, 0);
  }
}
