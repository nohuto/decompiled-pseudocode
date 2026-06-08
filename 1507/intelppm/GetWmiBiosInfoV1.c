/*
 * XREFs of GetWmiBiosInfoV1 @ 0x1C0004B70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002260 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GetWmiBiosInfoV1(__int64 a1, unsigned int a2, __int64 a3, unsigned int *a4)
{
  unsigned int v5; // edi
  unsigned int v8; // esi
  __int64 v9; // rax
  __int64 v10; // rax
  _QWORD *v11; // rdx
  _DWORD *v12; // r8
  __int64 v13; // rcx
  int v14; // eax
  _DWORD *v15; // r8
  __int64 i; // rcx
  int v17; // eax
  unsigned int *v18; // rax
  __int64 v19; // r9
  __int64 v20; // r8
  __int64 v21; // r10
  _DWORD *v22; // rbx
  __int64 v23; // rcx
  int *v24; // rax
  int v25; // eax

  v5 = 0;
  v8 = 104;
  v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 3008))(WdfDriverGlobals, a1);
  v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
          WdfDriverGlobals,
          v9,
          off_1C000B018);
  v11 = (_QWORD *)v10;
  if ( a2 < 0x68 )
  {
    v24 = *(int **)(v10 + 392);
    if ( v24 )
    {
      v25 = *v24;
      if ( v25 )
        v8 = 24 * (v25 - 1) + 104;
    }
LABEL_18:
    v5 = -1073741789;
    goto LABEL_19;
  }
  v12 = (_DWORD *)(a3 + 24);
  *(_DWORD *)a3 = *(_DWORD *)(v10 + 172);
  v13 = 0LL;
  *(_DWORD *)(a3 + 4) = *(unsigned __int8 *)(v10 + 169);
  *(_DWORD *)(a3 + 8) = *(_DWORD *)(v10 + 52);
  *(_DWORD *)(a3 + 12) = *(_DWORD *)(v10 + 48);
  *(_DWORD *)(a3 + 16) = *(_DWORD *)(v10 + 56);
  do
  {
    v14 = *((unsigned __int8 *)v11 + v13++ + 368);
    *v12++ = v14;
  }
  while ( v13 < 4 );
  v15 = (_DWORD *)(a3 + 48);
  *(_QWORD *)(a3 + 40) = *(_QWORD *)((char *)v11 + 372);
  for ( i = 0LL; i < 4; ++i )
  {
    v17 = *((unsigned __int8 *)v11 + i + 380);
    *v15++ = v17;
  }
  *(_QWORD *)(a3 + 64) = v11[48];
  v18 = (unsigned int *)v11[49];
  if ( !v18 )
  {
    *(_QWORD *)(a3 + 72) = 0LL;
    *(_QWORD *)(a3 + 80) = 0LL;
    *(_QWORD *)(a3 + 88) = 0LL;
    *(_DWORD *)(a3 + 96) = 0;
    goto LABEL_19;
  }
  v19 = *v18;
  if ( (_DWORD)v19 )
    v8 = 24 * (v19 - 1) + 104;
  if ( a2 < v8 )
    goto LABEL_18;
  *(_DWORD *)(a3 + 72) = v19;
  if ( (_DWORD)v19 )
  {
    v20 = 0LL;
    v21 = v19;
    v22 = (_DWORD *)(a3 + 84);
    do
    {
      v23 = v11[49];
      v20 += 48LL;
      *(v22 - 2) = *(_DWORD *)(v20 + v23 - 40);
      *(v22 - 1) = *(_DWORD *)(v20 + v23 - 36);
      *v22 = *(_DWORD *)(v20 + v23 - 32);
      v22 += 6;
      *(v22 - 5) = *(_DWORD *)(v20 + v23 - 28);
      *(v22 - 4) = *(_DWORD *)(v20 + v23 - 24);
      *(v22 - 3) = *(_DWORD *)(v20 + v23 - 16);
      --v21;
    }
    while ( v21 );
  }
LABEL_19:
  if ( a4 )
    *a4 = v8;
  return v5;
}
