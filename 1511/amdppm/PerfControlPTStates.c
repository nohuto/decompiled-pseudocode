/*
 * XREFs of PerfControlPTStates @ 0x1C0004220
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0005DE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall PerfControlPTStates(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        char a7,
        char a8)
{
  __int64 v10; // rbx
  __int64 v11; // r8
  __int64 v12; // rdi
  int v13; // ecx
  int v14; // eax
  __int64 v15; // rdx
  _QWORD *v16; // rdx

  if ( a8 )
  {
    *(_DWORD *)a1 = 0;
    return;
  }
  v10 = *(_QWORD *)(a1 + 16);
  v11 = *(_QWORD *)(v10 + 32);
  v12 = v11 + 32LL * a2;
  v13 = *(unsigned __int8 *)(v12 + 25);
  if ( *(_DWORD *)a1 == v13 )
    goto LABEL_14;
  if ( v13 == 1 )
  {
    if ( !*(_DWORD *)(v10 + 48) )
      goto LABEL_14;
    v15 = *(unsigned int *)(v10 + 44);
  }
  else
  {
    v14 = *(_DWORD *)(v10 + 44);
    if ( !v14 )
      goto LABEL_14;
    v15 = (unsigned int)(v14 - 1);
  }
  v16 = (_QWORD *)(v11 + 32 * v15);
  if ( !v16 )
  {
LABEL_14:
    if ( a7 )
    {
      if ( *(_BYTE *)(v12 + 25) == 1 )
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))v10)(
          *(_QWORD *)(v10 + 16),
          *(_QWORD *)v12,
          *(_QWORD *)(v12 + 8));
      else
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(v10 + 8))(
          *(_QWORD *)(v10 + 24),
          *(_QWORD *)v12,
          *(_QWORD *)(v12 + 8));
    }
    goto LABEL_18;
  }
  if ( a7 )
  {
    if ( *((_BYTE *)v16 + 25) == 1 )
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))v10)(*(_QWORD *)(v10 + 16), *v16, v16[1]);
    else
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(v10 + 8))(*(_QWORD *)(v10 + 24), *v16, v16[1]);
    goto LABEL_14;
  }
LABEL_18:
  *(_DWORD *)(a1 + 8) = a2;
  *(_DWORD *)a1 = *(unsigned __int8 *)(v12 + 25);
  *(_DWORD *)(a1 + 4) = *(unsigned __int8 *)(v12 + 24);
}
