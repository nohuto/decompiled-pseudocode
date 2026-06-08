/*
 * XREFs of PerfControlPTStatesHidden @ 0x1C00065F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002A70 (_guard_dispatch_icall_nop.c)
 */

void __fastcall PerfControlPTStatesHidden(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        char a7,
        char a8)
{
  unsigned int v8; // ebx
  __int64 v10; // rdi
  _QWORD *v11; // r8
  int v12; // eax
  _QWORD *v13; // r8
  __int64 v14; // rcx

  v8 = 0;
  if ( a8 && a7 )
  {
    v10 = *(_QWORD *)(a1 + 24);
    if ( *(_DWORD *)(v10 + 64) )
    {
      v11 = (_QWORD *)(*(_QWORD *)(v10 + 48) + 32LL * *(unsigned int *)(v10 + 60));
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(v10 + 16))(
        *(unsigned int *)(*(_QWORD *)a1 + 68LL),
        *(_QWORD *)(v10 + 40),
        *v11,
        v11[1]);
    }
    v12 = *(_DWORD *)(v10 + 60);
    if ( v12 )
    {
      v8 = v12 - 1;
      v13 = (_QWORD *)(*(_QWORD *)(v10 + 48) + 32LL * (unsigned int)(v12 - 1));
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(v10 + 24))(
        *(unsigned int *)(*(_QWORD *)a1 + 68LL),
        *(_QWORD *)(v10 + 32),
        *v13,
        v13[1]);
    }
    v14 = *(_QWORD *)(v10 + 48) + 32LL * v8;
    *(_DWORD *)(a1 + 16) = v8;
    *(_DWORD *)(a1 + 8) = *(unsigned __int8 *)(v14 + 25);
    *(_DWORD *)(a1 + 12) = *(unsigned __int8 *)(v14 + 24);
  }
}
