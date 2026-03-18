/*
 * XREFs of Endpoint_SetUpConfigureEndpointCommand @ 0x1C0023C1C
 * Callers:
 *     Endpoint_OnCancelEndpointConfigure @ 0x1C0021EB4 (Endpoint_OnCancelEndpointConfigure.c)
 *     Endpoint_OnCancelEndpointConfigureCompletion_EpDropped @ 0x1C00221B0 (Endpoint_OnCancelEndpointConfigureCompletion_EpDropped.c)
 *     Endpoint_OnResetEndpointConfigure @ 0x1C0022938 (Endpoint_OnResetEndpointConfigure.c)
 *     Endpoint_OnResetEndpointConfigureCompletion_EpDropped @ 0x1C0022CF0 (Endpoint_OnResetEndpointConfigureCompletion_EpDropped.c)
 * Callees:
 *     memset @ 0x1C0011000 (memset.c)
 */

__int64 __fastcall Endpoint_SetUpConfigureEndpointCommand(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _OWORD *a6,
        int **a7,
        void *a8)
{
  int v9; // ebx
  int *v13; // rdi
  int *v14; // r9
  _OWORD *v15; // rdx
  int *v16; // rcx
  _OWORD *v17; // rdx
  unsigned int v18; // r8d
  unsigned int i; // ecx
  int v20; // r10d
  int v21; // eax
  int v22; // edx
  unsigned int v23; // eax
  __int64 result; // rax

  v9 = *(_DWORD *)(a1 + 144);
  v13 = *(int **)(a5 + 16);
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 104LL) & 4) != 0 )
  {
    memset(v13, 0, 0x40uLL);
    v14 = v13 + 16;
    v15 = *(_OWORD **)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL) + 16LL);
    v16 = &v13[16 * (v9 - 1) + 32];
    *((_OWORD *)v13 + 4) = *v15;
    *((_OWORD *)v13 + 5) = v15[1];
    *((_OWORD *)v13 + 6) = v15[2];
    *((_OWORD *)v13 + 7) = v15[3];
    if ( a6 )
    {
      *(_OWORD *)v16 = *a6;
      *((_OWORD *)v16 + 1) = a6[1];
      *((_OWORD *)v16 + 2) = a6[2];
      *((_OWORD *)v16 + 3) = a6[3];
    }
  }
  else
  {
    memset(v13, 0, 0x20uLL);
    v14 = v13 + 8;
    v17 = *(_OWORD **)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL) + 16LL);
    v16 = &v13[8 * (v9 - 1) + 16];
    *((_OWORD *)v13 + 2) = *v17;
    *((_OWORD *)v13 + 3) = v17[1];
    if ( a6 )
    {
      *(_OWORD *)v16 = *a6;
      *((_OWORD *)v16 + 1) = a6[1];
    }
  }
  if ( a7 )
    *a7 = v16;
  v18 = 0;
  for ( i = 0; i < 0x20; ++i )
  {
    v20 = *(_DWORD *)(*(_QWORD *)(a1 + 16) + 152LL);
    if ( _bittest(&v20, i) )
      v18 = i;
  }
  *v14 = (v18 << 27) | *v14 & 0x7FFFFFF;
  v21 = v13[1] | 1;
  v13[1] = v21;
  switch ( a2 )
  {
    case 0:
      v22 = 1 << v9;
LABEL_18:
      v13[1] = v21 | v22;
      break;
    case 1:
      *v13 |= 1 << v9;
      break;
    case 2:
      v22 = 1 << v9;
      *v13 |= 1 << v9;
      goto LABEL_18;
  }
  memset(a8, 0, 0x50uLL);
  v23 = *((_DWORD *)a8 + 9) & 0xFFFF31FF;
  *((_QWORD *)a8 + 6) = a3;
  *((_QWORD *)a8 + 7) = a4;
  *((_DWORD *)a8 + 9) = v23 | 0x3000;
  *((_BYTE *)a8 + 39) = *(_BYTE *)(*(_QWORD *)(a1 + 16) + 135LL);
  result = *(_QWORD *)(a5 + 24);
  *((_QWORD *)a8 + 3) = result;
  *((_QWORD *)a8 + 5) = v13;
  return result;
}
