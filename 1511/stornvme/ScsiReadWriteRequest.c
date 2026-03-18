/*
 * XREFs of ScsiReadWriteRequest @ 0x1C0007DE0
 * Callers:
 *     ScsiToNVMe @ 0x1C00088F0 (ScsiToNVMe.c)
 * Callees:
 *     BuildReadWriteCommand @ 0x1C0006328 (BuildReadWriteCommand.c)
 *     SrbAssignQueueId @ 0x1C000646C (SrbAssignQueueId.c)
 *     NVMeSetSenseData @ 0x1C000D49C (NVMeSetSenseData.c)
 */

__int64 __fastcall ScsiReadWriteRequest(__int64 a1, __int64 a2, unsigned __int8 *a3, __int64 a4, bool *a5)
{
  int v5; // r14d
  __int64 v6; // rbx
  char v7; // dl
  __int64 v10; // rdi
  __int64 v11; // rcx
  _DWORD *v12; // r8
  __int64 v13; // rcx
  unsigned int v14; // esi
  int v15; // eax
  unsigned int v16; // eax
  unsigned int v17; // eax
  int v18; // edx

  v5 = a4;
  v6 = a2;
  v7 = *(_BYTE *)(a2 + 2);
  if ( v7 == 40 )
    v10 = *(_QWORD *)(v6 + 104);
  else
    v10 = *(_QWORD *)(v6 + 56);
  if ( (v10 & 0xFFF) != 0 )
    v10 = v10 - (v10 & 0xFFF) + 4096;
  if ( v7 == 40 )
    v11 = *(unsigned __int8 *)(*(unsigned int *)(v6 + 52) + v6 + 10);
  else
    v11 = *(unsigned __int8 *)(v6 + 7);
  v12 = (_DWORD *)(v6 + 60);
  if ( v7 != 40 )
    v12 = (_DWORD *)(v6 + 16);
  v13 = *(_QWORD *)(a1 + 8 * v11 + 1176);
  v14 = *(_DWORD *)(v13 + 52);
  if ( v14
    && *(_QWORD *)(v13 + 56)
    && (v7 != 40 ? (v15 = *(_DWORD *)(v6 + 12)) : (v15 = *(_DWORD *)(v6 + 24)),
        (v15 & 0xC0) != 0 && *v12 && ((v14 - 1) & *v12) == 0) )
  {
    *(_WORD *)(v10 + 4166) = 256;
    SrbAssignQueueId(a1, v6);
    BuildReadWriteCommand(a1, v6, a3, v5, v10 + 4096);
    v16 = *(_DWORD *)(a1 + 48);
    if ( v16 < v14 || (v18 = v16 % v14, v17 = v16 / v14, v18) )
    {
      if ( a5 )
        *a5 = 0;
    }
    else if ( a5 )
    {
      *a5 = *(_QWORD *)(v10 + 4136) / (__int64)v17 != (*(_QWORD *)(v10 + 4136)
                                                     + (unsigned int)(unsigned __int16)*(_DWORD *)(v10 + 4144)
                                                     + 1
                                                     - 1LL)
                                                    / v17;
    }
    return 0LL;
  }
  else
  {
    LOBYTE(a4) = 36;
    LOBYTE(a2) = 6;
    NVMeSetSenseData(v6, a2, v12, a4);
    return 3238002694LL;
  }
}
