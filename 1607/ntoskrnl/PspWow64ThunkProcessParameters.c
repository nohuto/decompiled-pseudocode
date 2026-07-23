/*
 * XREFs of PspWow64ThunkProcessParameters @ 0x1400A9FB8
 * Callers:
 *     PspWow64SetupUserProcessAddressSpace @ 0x1400F5128 (PspWow64SetupUserProcessAddressSpace.c)
 * Callees:
 *     PspWow64CopyUnicodeString @ 0x1400AA428 (PspWow64CopyUnicodeString.c)
 *     ZwAllocateVirtualMemory @ 0x14015A4F0 (ZwAllocateVirtualMemory.c)
 *     memmove @ 0x140171780 (memmove.c)
 */

NTSTATUS __fastcall PspWow64ThunkProcessParameters(__int64 a1, unsigned int *a2, _DWORD *a3)
{
  _DWORD *v3; // r14
  __int64 v5; // r13
  __int64 v6; // r12
  ULONG_PTR v7; // rsi
  unsigned __int64 v8; // rbx
  NTSTATUS result; // eax
  char *v10; // r12
  char *v11; // r14
  unsigned __int16 v12; // r15
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // rax
  const void *v15; // rdx
  unsigned __int16 v16; // r15
  _DWORD *v17; // rdx
  char *v18; // rcx
  int v19; // eax
  ULONG_PTR v20; // [rsp+30h] [rbp-68h] BYREF
  char *v21; // [rsp+38h] [rbp-60h]
  _DWORD *v22; // [rsp+40h] [rbp-58h]
  unsigned __int64 v23; // [rsp+48h] [rbp-50h]
  unsigned __int64 v24; // [rsp+50h] [rbp-48h]
  _DWORD *v26; // [rsp+A8h] [rbp+10h] BYREF
  _DWORD *v27; // [rsp+B0h] [rbp+18h]
  void *v28; // [rsp+B8h] [rbp+20h] BYREF

  v27 = a3;
  v3 = a3;
  v5 = a1;
  v6 = *a2 - 364LL;
  v7 = *((_QWORD *)a2 + 126) + v6;
  v8 = 0LL;
  v26 = 0LL;
  v20 = v7;
  result = ZwAllocateVirtualMemory(
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             (PVOID *)&v26,
             KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[18] - 1,
             &v20,
             0x3000u,
             4u);
  if ( result >= 0 )
  {
    v28 = v26 + 169;
    v10 = (char *)v26 + v6;
    *v26 = v7;
    v26[1] = v7;
    v26[2] = a2[2];
    v26[3] = a2[3];
    v26[4] = a2[4];
    v26[5] = a2[6];
    v26[6] = a2[8];
    v26[7] = a2[10];
    v26[8] = a2[12];
    v26[19] = a2[34];
    v26[20] = a2[35];
    v26[21] = a2[36];
    v26[22] = a2[37];
    v26[23] = a2[38];
    v26[24] = a2[39];
    v26[25] = a2[40];
    v26[26] = a2[41];
    v26[27] = a2[42];
    v26[168] = a2[259];
    PspWow64CopyUnicodeString(&v28, v26 + 9, a2 + 14);
    v26[11] = a2[18];
    PspWow64CopyUnicodeString(&v28, v26 + 12, a2 + 20);
    PspWow64CopyUnicodeString(&v28, v26 + 14, a2 + 24);
    PspWow64CopyUnicodeString(&v28, v26 + 16, a2 + 28);
    PspWow64CopyUnicodeString(&v28, v26 + 28, a2 + 44);
    PspWow64CopyUnicodeString(&v28, v26 + 30, a2 + 48);
    PspWow64CopyUnicodeString(&v28, v26 + 32, a2 + 52);
    if ( *((_WORD *)a2 + 112) && *((_QWORD *)a2 + 29) )
    {
      v11 = (char *)v28;
      v26[35] = (_DWORD)v28;
      v12 = *((_WORD *)a2 + 112);
      if ( v12 < 4u )
        v13 = 0LL;
      else
        v13 = **((unsigned int **)a2 + 29);
      v14 = v13 + 8 * v13 + 4;
      v24 = v14;
      v15 = (const void *)*((_QWORD *)a2 + 29);
      if ( v12 >= v14 )
      {
        v16 = v12 - v14;
        memmove(v11, v15, v13 + 4);
        v17 = (_DWORD *)(v13 + *((_QWORD *)a2 + 29) + 4LL);
        v22 = v17;
        v18 = &v11[v13 + 4];
        v21 = v18;
        while ( 1 )
        {
          v23 = v8;
          if ( v8 >= v13 )
            break;
          *(_DWORD *)v18 = *v17;
          v18 += 4;
          v21 = v18;
          v17 += 2;
          v22 = v17;
          ++v8;
        }
        memmove(v18, v17, v16);
        *((_WORD *)v26 + 68) = v16 + v13 + 4 * (v13 + 1);
        v5 = a1;
      }
      else
      {
        memmove(v11, v15, v12);
        *((_WORD *)v26 + 68) = *((_WORD *)a2 + 112);
      }
      *((_WORD *)v26 + 69) = *((_WORD *)v26 + 68);
      v28 = &v11[*((unsigned __int16 *)v26 + 68)];
      v3 = v27;
    }
    v26[18] = (_DWORD)v10;
    v26[164] = a2[252];
    v26[165] = a2[254];
    memmove(v10, *((const void **)a2 + 16), (unsigned int)v26[164]);
    v26[167] = a2[258];
    v19 = (int)v26;
    *(_DWORD *)(v5 + 16) = (_DWORD)v26;
    *v3 = v19;
    return 0;
  }
  return result;
}
