/*
 * XREFs of Crashdump_Endpoint_Initialize @ 0x1C0034A18
 * Callers:
 *     Crashdump_InitializeDeviceContext @ 0x1C00322AC (Crashdump_InitializeDeviceContext.c)
 * Callees:
 *     Crashdump_CommonBufferAcquire @ 0x1C0031D3C (Crashdump_CommonBufferAcquire.c)
 */

__int64 __fastcall Crashdump_Endpoint_Initialize(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        unsigned int a5,
        __int64 a6)
{
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  int v12; // edi
  int v13; // edi
  int v14; // edx
  __int64 v15; // rcx

  *(_DWORD *)(a1 + 192) = 0;
  *(_QWORD *)(a1 + 16) = a2 + 328;
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 24) = a3;
  *(_DWORD *)(a1 + 32) = a4;
  *(_QWORD *)(a1 + 200) = 1LL;
  v7 = (unsigned int)(a4 - 1);
  if ( (*(_DWORD *)(*(_QWORD *)a2 + 104LL) & 4) != 0 )
    v8 = (v7 + 1) << 6;
  else
    v8 = 32 * (v7 + 1);
  *(_QWORD *)(a1 + 40) = a6 + v8;
  v9 = (unsigned int)(a4 - 1) + 1LL;
  if ( (*(_DWORD *)(*(_QWORD *)a2 + 104LL) & 4) != 0 )
  {
    v10 = v9 << 6;
    *(_OWORD *)(a1 + 48) = *(_OWORD *)(v10 + a6);
    *(_OWORD *)(a1 + 64) = *(_OWORD *)(v10 + a6 + 16);
    *(_OWORD *)(a1 + 80) = *(_OWORD *)(v10 + a6 + 32);
    *(_OWORD *)(a1 + 96) = *(_OWORD *)(v10 + a6 + 48);
  }
  else
  {
    v11 = 32 * v9;
    *(_OWORD *)(a1 + 48) = *(_OWORD *)(v11 + a6);
    *(_OWORD *)(a1 + 64) = *(_OWORD *)(v11 + a6 + 16);
  }
  if ( a4 == 1 )
    v12 = 5;
  else
    v12 = (((unsigned __int64)a5 + 8190) >> 12) + 2;
  v13 = 16 * v12;
  v14 = Crashdump_CommonBufferAcquire(a2, v13, a1 + 112);
  if ( v14 >= 0 )
  {
    v14 = Crashdump_CommonBufferAcquire(*(_QWORD *)a1, v13, a1 + 136);
    if ( v14 >= 0 && (*(_DWORD *)(a1 + 48) & 0x7C00) != 0 )
    {
      v15 = *(_QWORD *)a1;
      *(_BYTE *)(a1 + 160) = 1;
      v14 = Crashdump_CommonBufferAcquire(v15, 64, a1 + 168);
      if ( v14 >= 0 )
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL) = *(_QWORD *)(a1 + 112) & 0xFFFFFFFFFFFFFFF0uLL | 3;
    }
  }
  return (unsigned int)v14;
}
