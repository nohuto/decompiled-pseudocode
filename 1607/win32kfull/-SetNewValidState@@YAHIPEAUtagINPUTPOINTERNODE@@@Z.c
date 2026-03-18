/*
 * XREFs of ?SetNewValidState@@YAHIPEAUtagINPUTPOINTERNODE@@@Z @ 0x1C01F3E6C
 * Callers:
 *     ?CancelActivePointer@@YAXPEAUtagINPUTPOINTERNODE@@@Z @ 0x1C01F35E0 (-CancelActivePointer@@YAXPEAUtagINPUTPOINTERNODE@@@Z.c)
 *     ?CreateNode@@YAPEAUtagINPUTPOINTERNODE@@GKI@Z @ 0x1C01F3780 (-CreateNode@@YAPEAUtagINPUTPOINTERNODE@@GKI@Z.c)
 *     ?UpdateActivePointer@PointerList@@YAGPEBUtagPOINTEREVENTINT@@PEAUHWND__@@PEAPEAUtagWND@@PEAKPEAGPEAI@Z @ 0x1C01F4190 (-UpdateActivePointer@PointerList@@YAGPEBUtagPOINTEREVENTINT@@PEAUHWND__@@PEAPEAUtagWND@@PEAKPEAG.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall SetNewValidState(unsigned int a1, struct tagINPUTPOINTERNODE *a2)
{
  int v4; // eax
  int v5; // ecx
  int v6; // eax
  int v7; // eax
  int v8; // eax
  BOOL v9; // r8d
  bool v10; // zf
  _QWORD *v11; // rax
  __int64 v12; // rdx
  _QWORD *v13; // rcx

  if ( (a1 & 0x70006) == 0x10006 )
  {
    v5 = 2;
    goto LABEL_14;
  }
  v4 = (a1 & 0x70006) - 0x20000;
  if ( (a1 & 0x70006) == 0x20000 )
  {
    v9 = 0;
    v10 = *((_DWORD *)a2 + 9) == 1;
    goto LABEL_12;
  }
  v5 = 2;
  v6 = v4 - 2;
  if ( !v6 )
  {
    v5 = 1;
LABEL_14:
    v9 = *((_DWORD *)a2 + 9) <= 1u;
    goto LABEL_15;
  }
  v7 = v6 - 4;
  if ( !v7 )
  {
    v9 = *((_DWORD *)a2 + 9) == 2;
    goto LABEL_15;
  }
  v8 = v7 - 131066;
  if ( !v8 )
  {
    v9 = 0;
    v10 = *((_DWORD *)a2 + 9) == 2;
LABEL_12:
    LOBYTE(v9) = v10;
    v5 = 3;
    goto LABEL_15;
  }
  v9 = 0;
  if ( v8 != 2 )
    return v9;
  v5 = 1;
  LOBYTE(v9) = *((_DWORD *)a2 + 9) == 2;
LABEL_15:
  if ( !v9 )
    return v9;
  if ( (a1 & 4) != 0 )
  {
    if ( (a1 & 0x1F0) == 0 )
      return 0;
    v9 = 1;
  }
  if ( !v9 )
    return v9;
  if ( (*((_DWORD *)a2 + 38) & 8) == 0 )
    goto LABEL_25;
  if ( (a1 & 0x8000) == 0 )
  {
    v9 = 0;
LABEL_25:
    if ( !v9 )
      return v9;
    goto LABEL_26;
  }
  v9 = 1;
LABEL_26:
  *((_DWORD *)a2 + 9) = v5;
  if ( v5 == 3 )
  {
    v11 = (_QWORD *)((char *)a2 + 16);
    if ( (_QWORD *)*v11 != v11 )
    {
      v12 = *v11;
      v13 = (_QWORD *)v11[1];
      if ( *(_QWORD **)(*v11 + 8LL) != v11 || (_QWORD *)*v13 != v11 )
        __fastfail(3u);
      *v13 = v12;
      *(_QWORD *)(v12 + 8) = v13;
      v11[1] = v11;
      *v11 = v11;
    }
  }
  *((_DWORD *)a2 + 38) ^= (*((_DWORD *)a2 + 38) ^ (4 * ((a1 >> 13) & 1))) & 4;
  *((_DWORD *)a2 + 38) ^= ((unsigned __int8)*((_DWORD *)a2 + 38) ^ (unsigned __int8)(8 * ((a1 & 0x8000) != 0))) & 8;
  return v9;
}
