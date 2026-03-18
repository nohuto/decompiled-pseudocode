/*
 * XREFs of ?Add@?$CArray@PEAVCBufferedOutputPointer@@V?$CArrayEqualHelper@PEAVCBufferedOutputPointer@@@@@@QEAAHAEBQEAVCBufferedOutputPointer@@@Z @ 0x18016FA70
 * Callers:
 *     ?AddBufferedOutput@CInteractionContextWrapper@@AEAAJII_KPEBUINTERACTION_CONTEXT_OUTPUT@@@Z @ 0x18016FB44 (-AddBufferedOutput@CInteractionContextWrapper@@AEAAJII_KPEBUINTERACTION_CONTEXT_OUTPUT@@@Z.c)
 * Callees:
 *     ?ReallocHeap@@YAPEAXPEAX_K@Z @ 0x18009ED18 (-ReallocHeap@@YAPEAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CArray<CBufferedOutputPointer *,CArrayEqualHelper<CBufferedOutputPointer *>>::Add(
        char **a1,
        _QWORD *a2)
{
  unsigned __int64 v2; // rdi
  unsigned int v5; // ebp
  int v6; // ebx
  SIZE_T v7; // rdx
  char *v8; // rax
  char *v9; // rcx
  char *v10; // r8

  v2 = *((int *)a1 + 2);
  v5 = 1;
  if ( (int)v2 + 1 <= 0 )
    return 0;
  if ( (_DWORD)v2 != *((_DWORD *)a1 + 3) )
    goto LABEL_12;
  if ( (int)v2 > 0x3FFFFFFF || v2 > 0xFFFFFFFFFFFFFFFLL )
    return 0;
  v6 = 2;
  if ( *((int *)a1 + 3) >= 2 )
    v6 = v2 + ((int)v2 >> 1);
  v7 = 8LL * v6;
  v8 = (_DWORD)v2
     ? (char *)ReallocHeap(*a1, v7)
     : (char *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                 WPF::g_pProcessHeap,
                 v7);
  if ( !v8 )
    return 0;
  *((_DWORD *)a1 + 3) = v6;
  *a1 = v8;
LABEL_12:
  v9 = *a1;
  *((_DWORD *)a1 + 2) = v2 + 1;
  v10 = &v9[8 * v2];
  if ( v10 )
    *(_QWORD *)v10 = *a2;
  return v5;
}
