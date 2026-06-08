/*
 * XREFs of PerfControlPTStates @ 0x1C0002130
 * Callers:
 *     <none>
 * Callees:
 *     InvokePTStateChange @ 0x1C00021C0 (InvokePTStateChange.c)
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
  __int64 v10; // rsi
  __int64 v11; // r8
  __int64 v12; // rdi
  int v13; // ecx
  __int64 v14; // rdx
  int v15; // eax

  if ( !a8 )
  {
    v10 = *(_QWORD *)(a1 + 16);
    v11 = *(_QWORD *)(v10 + 32);
    v12 = v11 + 32LL * a2;
    v13 = *(unsigned __int8 *)(v12 + 25);
    if ( *(_DWORD *)a1 == v13 )
      goto LABEL_5;
    if ( v13 == 1 )
    {
      if ( !*(_DWORD *)(v10 + 48) )
        goto LABEL_5;
      v14 = *(unsigned int *)(v10 + 44);
    }
    else
    {
      v15 = *(_DWORD *)(v10 + 44);
      if ( !v15 )
        goto LABEL_5;
      v14 = (unsigned int)(v15 - 1);
    }
    if ( v11 + 32 * v14 )
    {
      if ( !a7 )
      {
LABEL_7:
        *(_DWORD *)(a1 + 8) = a2;
        *(_DWORD *)a1 = *(unsigned __int8 *)(v12 + 25);
        *(_DWORD *)(a1 + 4) = *(unsigned __int8 *)(v12 + 24);
        return;
      }
      InvokePTStateChange(v10);
    }
LABEL_5:
    if ( a7 )
      InvokePTStateChange(v10);
    goto LABEL_7;
  }
  *(_DWORD *)a1 = 0;
}
