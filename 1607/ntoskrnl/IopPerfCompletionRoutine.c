/*
 * XREFs of IopPerfCompletionRoutine @ 0x1401CA8A8
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceKernelEvent @ 0x140013D10 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

__int64 __fastcall IopPerfCompletionRoutine(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v3; // rbx
  bool v6; // r14
  __int64 (*v7)(void); // r9
  unsigned int v8; // ebp
  __int64 v9; // rbx
  _QWORD v11[2]; // [rsp+30h] [rbp-58h] BYREF
  int v12; // [rsp+40h] [rbp-48h]
  _QWORD *v13; // [rsp+48h] [rbp-40h] BYREF
  int v14; // [rsp+50h] [rbp-38h]
  int v15; // [rsp+54h] [rbp-34h]

  v3 = *a3;
  v6 = *(_BYTE *)(a2 + 67) == (unsigned __int8)(*(_BYTE *)(a2 + 66) + 1);
  *(_BYTE *)(v3 + 3) = *((_BYTE *)a3 + 28) | *(_BYTE *)(*a3 + 3) & 2;
  v7 = (__int64 (*)(void))a3[2];
  *(_QWORD *)(v3 + 56) = v7;
  *(_QWORD *)(v3 + 64) = a3[1];
  if ( v7 )
  {
    v12 = *((_DWORD *)a3 + 6);
    v11[0] = v7;
    v11[1] = a2;
    v15 = 0;
    v8 = v7();
    v14 = 20;
    v13 = v11;
    EtwTraceKernelEvent((int)&v13, 1, 0x20000010u, 293, 4200450);
    if ( v8 == -1073741802 )
      return v8;
  }
  else
  {
    if ( *(_BYTE *)(a2 + 65) && *(_BYTE *)(a2 + 67) <= *(_BYTE *)(a2 + 66) )
      *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
    v8 = 0;
  }
  if ( !v6 )
  {
    a3[2] = 0LL;
    v9 = v3 + 72;
    a3[1] = *(_QWORD *)(v9 + 64);
    *a3 = v9;
    *((_BYTE *)a3 + 28) = *(_BYTE *)(v9 + 3);
    if ( *(int *)(a2 + 48) < 0 )
    {
      if ( *(char *)(v9 + 3) < 0 )
        goto LABEL_14;
    }
    else if ( (*(_BYTE *)(v9 + 3) & 0x40) != 0 )
    {
      goto LABEL_14;
    }
    if ( !*(_BYTE *)(a2 + 68) || (*(_BYTE *)(v9 + 3) & 0x20) == 0 )
    {
      *(_BYTE *)(v9 + 3) |= 0xC0u;
      goto LABEL_16;
    }
LABEL_14:
    a3[2] = *(_QWORD *)(v9 + 56);
    a3[1] = *(_QWORD *)(v9 + 64);
LABEL_16:
    *(_QWORD *)(v9 + 64) = a3;
    *(_QWORD *)(v9 + 56) = IopPerfCompletionRoutine;
  }
  return v8;
}
