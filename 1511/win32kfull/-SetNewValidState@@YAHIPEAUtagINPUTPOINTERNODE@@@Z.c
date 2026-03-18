/*
 * XREFs of ?SetNewValidState@@YAHIPEAUtagINPUTPOINTERNODE@@@Z @ 0x1C01FCBF8
 * Callers:
 *     ?CancelActivePointer@@YAXPEAUtagINPUTPOINTERNODE@@@Z @ 0x1C01FC340 (-CancelActivePointer@@YAXPEAUtagINPUTPOINTERNODE@@@Z.c)
 *     ?CreateNode@@YAPEAUtagINPUTPOINTERNODE@@GKI@Z @ 0x1C01FC4E0 (-CreateNode@@YAPEAUtagINPUTPOINTERNODE@@GKI@Z.c)
 *     ?UpdateActivePointer@PointerList@@YAGPEBUtagPOINTEREVENTINT@@PEAUHWND__@@PEAPEAUtagWND@@PEAKPEAGPEAI@Z @ 0x1C01FCF10 (-UpdateActivePointer@PointerList@@YAGPEBUtagPOINTEREVENTINT@@PEAUHWND__@@PEAPEAUtagWND@@PEAKPEAG.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SetNewValidState(unsigned int a1, struct tagINPUTPOINTERNODE *a2)
{
  unsigned int v2; // r8d
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  int v8; // eax
  int v9; // eax
  bool v10; // zf
  _QWORD *v11; // rax
  __int64 v12; // rdx
  _QWORD *v13; // rcx

  v2 = 0;
  if ( (a1 & 0x70006) == 0x10006 )
  {
    v6 = 2;
    goto LABEL_14;
  }
  v5 = (a1 & 0x70006) - 0x20000;
  if ( (a1 & 0x70006) == 0x20000 )
  {
    v10 = *((_DWORD *)a2 + 9) == 1;
    goto LABEL_12;
  }
  v6 = 2;
  v7 = v5 - 2;
  if ( !v7 )
  {
    v6 = 1;
LABEL_14:
    LOBYTE(v2) = *((_DWORD *)a2 + 9) <= 1u;
    goto LABEL_15;
  }
  v8 = v7 - 4;
  if ( !v8 )
  {
    LOBYTE(v2) = *((_DWORD *)a2 + 9) == 2;
    goto LABEL_15;
  }
  v9 = v8 - 131066;
  if ( !v9 )
  {
    v10 = *((_DWORD *)a2 + 9) == 2;
LABEL_12:
    LOBYTE(v2) = v10;
    v6 = 3;
    goto LABEL_15;
  }
  if ( v9 != 2 )
    return v2;
  v6 = 1;
  LOBYTE(v2) = *((_DWORD *)a2 + 9) == 2;
LABEL_15:
  if ( !v2 )
    return v2;
  if ( (a1 & 4) != 0 )
  {
    if ( (a1 & 0x1F0) == 0 )
      return 0;
    v2 = 1;
  }
  if ( !v2 )
    return v2;
  if ( (*((_DWORD *)a2 + 38) & 8) == 0 )
    goto LABEL_25;
  if ( (a1 & 0x8000) == 0 )
  {
    v2 = 0;
LABEL_25:
    if ( !v2 )
      return v2;
    goto LABEL_26;
  }
  v2 = 1;
LABEL_26:
  *((_DWORD *)a2 + 9) = v6;
  if ( v6 == 3 )
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
  return v2;
}
