/*
 * XREFs of NVMeInitHostMemoryBuffer @ 0x1C0007664
 * Callers:
 *     NVMeControllerInitPart2 @ 0x1C0006E84 (NVMeControllerInitPart2.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0002D40 (__security_check_cookie.c)
 *     memmove @ 0x1C0002E40 (memmove.c)
 *     NVMeZeroMemory @ 0x1C000505C (NVMeZeroMemory.c)
 *     NVMeSetHostMemoryBuffer @ 0x1C000DFF0 (NVMeSetHostMemoryBuffer.c)
 */

__int64 __fastcall NVMeInitHostMemoryBuffer(__int64 a1)
{
  int v1; // esi
  int **v2; // r14
  char v3; // r13
  __int64 v5; // rax
  __int64 v6; // r11
  int v7; // r12d
  __int64 v8; // r8
  unsigned int v9; // eax
  __int64 *v10; // r9
  __int64 v11; // r10
  __int64 v12; // rax
  unsigned int v13; // ebp
  unsigned __int64 v14; // r8
  __int64 v15; // r9
  unsigned int v16; // ecx
  int *v17; // rdx
  size_t Size; // [rsp+28h] [rbp-180h]
  unsigned int v20; // [rsp+64h] [rbp-144h]
  _DWORD v21[2]; // [rsp+68h] [rbp-140h]
  _QWORD Src[16]; // [rsp+70h] [rbp-138h] BYREF
  _QWORD v23[16]; // [rsp+F0h] [rbp-B8h] BYREF

  v1 = 0;
  v2 = (int **)(a1 + 3232);
  v3 = 0;
  if ( *(_QWORD *)(a1 + 3232) )
  {
    v3 = 1;
    goto LABEL_14;
  }
  v5 = *(_QWORD *)(a1 + 1080);
  v6 = 0LL;
  v7 = 0;
  v8 = (unsigned int)(*(_DWORD *)(v5 + 276) << 12);
  if ( *(_DWORD *)(v5 + 272) << 12 && *(_DWORD *)(a1 + 96) )
  {
    v9 = *(_DWORD *)(a1 + 148);
    if ( v9 )
    {
      v10 = (__int64 *)(a1 + 1184);
      v11 = v9;
      do
      {
        v12 = *v10++;
        v6 += *(_QWORD *)(v12 + 64) * *(unsigned int *)(v12 + 52);
        --v11;
      }
      while ( v11 );
    }
    v20 = 1 << (((*(_DWORD *)(*(_QWORD *)(a1 + 112) + 20LL) >> 7) & 0xF) + 12);
    v13 = StorPortExtendedFunction(69LL, a1, v8);
    if ( v13 )
      goto LABEL_17;
    v1 = 8;
    NVMeZeroMemory(Src, 0x80u);
    v14 = 0LL;
    v15 = 8LL;
    do
    {
      v16 = v23[v14 / 2 + 1];
      v7 += v16;
      Src[v14 / 2] = v23[v14 / 2];
      v14 += 4LL;
      v21[v14] = v16 / v20;
      --v15;
    }
    while ( v15 );
    v13 = StorPortExtendedFunction(0LL, a1, 136LL);
    if ( v13 )
      goto LABEL_15;
    **v2 = v7;
    memmove(*v2 + 2, Src, 0x80uLL);
    (*v2)[1] = 128;
LABEL_14:
    v17 = *v2;
    LOBYTE(v17) = 1;
    LODWORD(Size) = (*v2)[1];
    v13 = NVMeSetHostMemoryBuffer(a1, (int)v17, v3, **v2, *v2 + 2, Size);
    if ( !v13 )
      return v13;
LABEL_15:
    if ( v1 )
      StorPortExtendedFunction(70LL, a1, v23);
    goto LABEL_17;
  }
  v13 = -1056964606;
LABEL_17:
  if ( *v2 )
  {
    StorPortExtendedFunction(1LL, a1, *v2);
    *v2 = 0LL;
  }
  return v13;
}
