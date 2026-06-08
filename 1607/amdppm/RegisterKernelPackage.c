/*
 * XREFs of RegisterKernelPackage @ 0x1C001A5E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00067E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0006B40 (memset.c)
 */

__int64 __fastcall RegisterKernelPackage(__int64 a1)
{
  unsigned int v2; // esi
  unsigned int v3; // eax
  unsigned int v4; // ebp
  __int64 v5; // rax
  __int64 v6; // rbx
  PVOID PoolWithTag; // rax
  __int64 *v8; // rax
  _QWORD *v9; // rdi
  _QWORD *v10; // rcx

  v2 = 259;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C00093A8,
    0LL);
  if ( *(_BYTE *)(a1 + 66) )
    v3 = HalPrivateDispatchTable[124](*(unsigned int *)(a1 + 68));
  else
    v3 = ((__int64 (__fastcall *)(_QWORD))qword_1C0009658)(*(unsigned int *)(a1 + 56));
  v4 = v3;
  v5 = qword_1C00093D8;
  if ( (__int64 *)qword_1C00093D8 == &qword_1C00093D8 )
    goto LABEL_8;
  do
  {
    v6 = v5;
    if ( *(_DWORD *)(v5 + 32) == v4 )
      break;
    v5 = *(_QWORD *)v5;
    v6 = 0LL;
  }
  while ( (__int64 *)v5 != &qword_1C00093D8 );
  if ( !v6 )
  {
LABEL_8:
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x72637250u);
    v6 = (__int64)PoolWithTag;
    if ( !PoolWithTag )
    {
      v2 = -1073741670;
      goto LABEL_17;
    }
    memset(PoolWithTag, 0, 0x30uLL);
    *(_DWORD *)(v6 + 32) = v4;
    *(_DWORD *)(v6 + 36) = ((__int64 (__fastcall *)(_QWORD))qword_1C0009660)(v4);
    *(_DWORD *)(v6 + 36) += HalPrivateDispatchTable[125](v4);
    *(_QWORD *)(v6 + 24) = v6 + 16;
    *(_QWORD *)(v6 + 16) = v6 + 16;
    v8 = (__int64 *)qword_1C00093E0;
    if ( *(__int64 **)qword_1C00093E0 != &qword_1C00093D8 )
      __fastfail(3u);
    *(_QWORD *)v6 = &qword_1C00093D8;
    *(_QWORD *)(v6 + 8) = v8;
    *v8 = v6;
    qword_1C00093E0 = v6;
  }
  *(_QWORD *)(a1 + 1024) = v6;
  ++*(_DWORD *)(v6 + 40);
  v9 = (_QWORD *)(a1 + 1032);
  v10 = *(_QWORD **)(v6 + 24);
  if ( *v10 != v6 + 16 )
    __fastfail(3u);
  *v9 = v6 + 16;
  v9[1] = v10;
  *v10 = v9;
  *(_QWORD *)(v6 + 24) = v9;
  if ( *(_DWORD *)(v6 + 40) == *(_DWORD *)(v6 + 36) )
    v2 = 0;
LABEL_17:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C00093A8);
  return v2;
}
