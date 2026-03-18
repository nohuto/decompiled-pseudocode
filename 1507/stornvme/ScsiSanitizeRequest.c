/*
 * XREFs of ScsiSanitizeRequest @ 0x1C0008324
 * Callers:
 *     ScsiToNVMe @ 0x1C00087C0 (ScsiToNVMe.c)
 * Callees:
 *     SrbAssignQueueId @ 0x1C0006344 (SrbAssignQueueId.c)
 *     NVMeSetSenseData @ 0x1C000D36C (NVMeSetSenseData.c)
 */

__int64 __fastcall ScsiSanitizeRequest(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  char v5; // dl
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // r8
  char v10; // dl
  char v11; // dl
  char v12; // r14
  char v13; // si
  __int64 v14; // rax
  int v15; // eax

  v3 = a2;
  v5 = *(_BYTE *)(a2 + 2);
  if ( v5 == 40 )
    v7 = *(_QWORD *)(v3 + 104);
  else
    v7 = *(_QWORD *)(v3 + 56);
  if ( (v7 & 0xFFF) != 0 )
    v7 = v7 - (v7 & 0xFFF) + 4096;
  v8 = *(_QWORD *)(a1 + 1072);
  if ( v5 == 40 )
    v9 = *(unsigned __int8 *)(*(unsigned int *)(v3 + 52) + v3 + 10);
  else
    v9 = *(unsigned __int8 *)(v3 + 7);
  v10 = *(_BYTE *)(a3 + 1);
  if ( v10 < 0
    || (v11 = v10 & 0x1F, a3 = 1LL, (unsigned __int8)(v11 - 2) > 1u)
    || (*(_BYTE *)(v8 + 256) & 2) == 0
    || *(_DWORD *)(a1 + 140) > 1u && (*(_BYTE *)(v8 + 524) & 2) != 0
    || v11 == 3 && (*(_BYTE *)(v8 + 524) & 4) == 0 )
  {
    LOBYTE(a3) = 36;
    LOBYTE(a2) = 6;
    NVMeSetSenseData(v3, a2, v9, a3);
    return 3238002694LL;
  }
  else
  {
    v12 = *(_BYTE *)(*(_QWORD *)(a1 + 8 * v9 + 1168) + 64LL);
    if ( v11 == 3 )
      v13 = 2;
    else
      v13 = v11 == 2;
    *(_BYTE *)(v7 + 4166) = 1;
    *(_BYTE *)(v7 + 4167) = 0;
    SrbAssignQueueId(a1, v3);
    v14 = *(_QWORD *)(a1 + 1072);
    *(_BYTE *)(v7 + 4096) = 0x80;
    if ( (*(_BYTE *)(v14 + 524) & 2) != 0 )
    {
      *(_DWORD *)(v7 + 4100) = -1;
    }
    else
    {
      if ( *(_BYTE *)(v3 + 2) == 40 )
        v15 = *(unsigned __int8 *)(*(unsigned int *)(v3 + 52) + v3 + 10);
      else
        v15 = *(unsigned __int8 *)(v3 + 7);
      *(_DWORD *)(v7 + 4100) = v15 + 1;
    }
    *(_DWORD *)(v7 + 4136) = *(_DWORD *)(v7 + 4136) & 0xFFFFF000 | v12 & 0xF | ((v13 & 7) << 9);
    return 0LL;
  }
}
