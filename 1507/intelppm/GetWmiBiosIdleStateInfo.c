/*
 * XREFs of GetWmiBiosIdleStateInfo @ 0x1C0004980
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002260 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00025C0 (memset.c)
 */

__int64 __fastcall GetWmiBiosIdleStateInfo(__int64 a1, unsigned int a2, __int64 a3, unsigned int *a4)
{
  unsigned int v5; // ebp
  unsigned int v8; // edi
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rax
  int v12; // eax
  unsigned int *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rbx
  __int64 v18; // rdx
  __int64 i; // rcx
  char v20; // cl
  int *v21; // rax
  int v22; // eax

  v5 = 0;
  v8 = 72;
  v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 3008))(WdfDriverGlobals, a1);
  v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
          WdfDriverGlobals,
          v9,
          off_1C000B018);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    *(_QWORD *)(v10 + 192),
    0LL);
  if ( a2 < 0x48 )
  {
    v21 = *(int **)(v10 + 472);
    if ( v21 )
    {
      v22 = *v21;
      if ( v22 )
        v8 = 32 * (v22 - 1) + 72;
    }
LABEL_21:
    v5 = -1073741789;
    goto LABEL_22;
  }
  *(_WORD *)a3 = AcpiInfo;
  *(_WORD *)(a3 + 2) = word_1C000DF22;
  *(_DWORD *)(a3 + 4) = *(_DWORD *)(v10 + 56);
  v11 = *(_QWORD *)(v10 + 248);
  if ( (v11 & 0x7F070) != 0 )
    v12 = 2;
  else
    v12 = (v11 & 7) != 0;
  *(_DWORD *)(a3 + 12) = 0;
  *(_DWORD *)(a3 + 16) = 0;
  *(_QWORD *)(a3 + 24) = 0LL;
  *(_DWORD *)(a3 + 8) = v12;
  v13 = *(unsigned int **)(v10 + 472);
  if ( !v13 )
  {
    memset((void *)(a3 + 32), 0, 0x28uLL);
    goto LABEL_22;
  }
  v14 = *v13;
  if ( (_DWORD)v14 )
    v8 = 32 * (v14 - 1) + 72;
  if ( a2 < v8 )
    goto LABEL_21;
  *(_DWORD *)(a3 + 32) = v14;
  if ( (_DWORD)v14 )
  {
    v15 = 0LL;
    v16 = v14;
    v17 = a3 + 40;
    do
    {
      v18 = v15 + *(_QWORD *)(v10 + 472);
      for ( i = 0LL; i < 4; ++i )
        *(_DWORD *)(v17 + 4 * i) = *(unsigned __int8 *)(i + v18 + 4);
      *(_QWORD *)(v17 + 16) = *(_QWORD *)(v18 + 8);
      v20 = *(_BYTE *)(v18 + 16);
      if ( (unsigned __int8)v20 > 3u )
        v20 = 3;
      v15 += 20LL;
      *(_BYTE *)(v17 + 24) = v20;
      *(_WORD *)(v17 + 26) = *(_WORD *)(v18 + 18);
      *(_DWORD *)(v17 + 28) = *(_DWORD *)(v18 + 20);
      v17 += 32LL;
      --v16;
    }
    while ( v16 );
  }
LABEL_22:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
    WdfDriverGlobals,
    *(_QWORD *)(v10 + 192));
  if ( a4 )
    *a4 = v8;
  return v5;
}
