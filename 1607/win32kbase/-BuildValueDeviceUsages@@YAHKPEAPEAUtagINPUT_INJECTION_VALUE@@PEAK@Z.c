/*
 * XREFs of ?BuildValueDeviceUsages@@YAHKPEAPEAUtagINPUT_INJECTION_VALUE@@PEAK@Z @ 0x1C00D7BDC
 * Callers:
 *     RIMIDEInjectHIDReportFromPointerInfo @ 0x1C00D6568 (RIMIDEInjectHIDReportFromPointerInfo.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C0037AC0 (Win32AllocPoolZInit.c)
 */

__int64 __fastcall BuildValueDeviceUsages(int a1, struct tagINPUT_INJECTION_VALUE **a2, unsigned int *a3)
{
  unsigned int v3; // esi
  unsigned int v6; // edi
  unsigned int v7; // ebx
  int v8; // ebp
  char *v9; // r14
  unsigned int v10; // r15d
  struct tagINPUT_INJECTION_VALUE *v11; // rax
  struct tagINPUT_INJECTION_VALUE *v12; // r8
  struct tagINPUT_INJECTION_VALUE *v13; // rcx
  __int16 *v14; // rdx
  __int64 v15; // r9
  __int16 v16; // ax
  unsigned int v17; // edx
  _WORD *v18; // r8
  __int64 v19; // rcx

  v3 = 0;
  v6 = 5;
  if ( a1 == 3 )
  {
    v7 = 11;
    v8 = 11;
    v9 = (char *)&penUsages;
    v10 = 6;
  }
  else
  {
    if ( a1 != 2 )
      return 0LL;
    v7 = 12;
    v10 = 5;
    v9 = (char *)&touchUsages;
    v8 = 10;
  }
  v11 = (struct tagINPUT_INJECTION_VALUE *)Win32AllocPoolZInit(12LL * v7);
  *a2 = v11;
  v12 = v11;
  if ( v11 )
  {
    v13 = v11;
    v14 = (__int16 *)&unk_1C0119DB4;
    v15 = 5LL;
    do
    {
      *(_WORD *)v13 = *(v14 - 1);
      v13 = (struct tagINPUT_INJECTION_VALUE *)((char *)v13 + 12);
      v16 = *v14;
      v14 += 16;
      *((_WORD *)v13 - 5) = v16;
      --v15;
    }
    while ( v15 );
    v17 = 0;
    v18 = (_WORD *)((char *)v12 + 60);
    do
    {
      if ( v17 >= v10 )
        break;
      ++v6;
      v19 = 32LL * v17++;
      *v18 = *(_WORD *)&v9[v19 + 2];
      v18[1] = *(_WORD *)&v9[v19 + 4];
      v18 += 6;
    }
    while ( v6 < v7 );
    if ( v6 == v8 )
    {
      *a3 = v7;
      return 1;
    }
  }
  return v3;
}
