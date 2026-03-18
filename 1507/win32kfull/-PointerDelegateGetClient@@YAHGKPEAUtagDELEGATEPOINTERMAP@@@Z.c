/*
 * XREFs of ?PointerDelegateGetClient@@YAHGKPEAUtagDELEGATEPOINTERMAP@@@Z @ 0x1C01F8E54
 * Callers:
 *     ValidateDelegatePointerList @ 0x1C01E10A4 (ValidateDelegatePointerList.c)
 * Callees:
 *     ?DelegateCaptureInt@@YAPEAUtagWND@@PEAUtagPOINTERCAPTUREDATA@@H@Z @ 0x1C01FC1B0 (-DelegateCaptureInt@@YAPEAUtagWND@@PEAUtagPOINTERCAPTUREDATA@@H@Z.c)
 *     ?FindNodeById@@YAPEAUtagINPUTPOINTERNODE@@GHH@Z @ 0x1C01FC1E4 (-FindNodeById@@YAPEAUtagINPUTPOINTERNODE@@GHH@Z.c)
 */

__int64 __fastcall PointerDelegateGetClient(unsigned __int16 a1, int a2, struct tagDELEGATEPOINTERMAP *a3)
{
  struct tagINPUTPOINTERNODE *NodeById; // rax
  int v7; // edx
  struct tagPOINTERCAPTUREDATA *v8; // r9
  struct tagPOINTERCAPTUREDATA *v9; // rax
  struct tagPOINTERCAPTUREDATA *v10; // rcx
  struct tagWND *v11; // rax
  __int64 result; // rax

  NodeById = FindNodeById(a1, 0, 0);
  if ( !NodeById )
    return 0LL;
  v8 = (struct tagINPUTPOINTERNODE *)((char *)NodeById + 96);
  if ( *(struct tagPOINTERCAPTUREDATA **)v8 == v8 )
    return 0LL;
  v9 = *(struct tagPOINTERCAPTUREDATA **)v8;
  v10 = 0LL;
  while ( v9 != v8 )
  {
    v10 = v9;
    if ( *((_DWORD *)v9 + 6) == a2 )
      break;
    v9 = *(struct tagPOINTERCAPTUREDATA **)v9;
  }
  if ( v9 == v8 )
    return 0LL;
  v11 = DelegateCaptureInt(v10, v7);
  if ( !v11 || *((_QWORD *)v11 + 2) == gptiCurrent )
    return 0LL;
  *((_QWORD *)a3 + 1) = v11;
  result = 1LL;
  *((_DWORD *)a3 + 4) = 1;
  *(_WORD *)a3 = a1;
  *((_DWORD *)a3 + 1) = a2;
  return result;
}
