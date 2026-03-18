/*
 * XREFs of ScsiSanitizeRequest @ 0x1C000BE7C
 * Callers:
 *     NVMeHwBuildIo @ 0x1C0001000 (NVMeHwBuildIo.c)
 * Callees:
 *     SrbAssignQueueId @ 0x1C0002B98 (SrbAssignQueueId.c)
 *     GetNamespaceId @ 0x1C0004770 (GetNamespaceId.c)
 *     GetSrbExtension @ 0x1C0004794 (GetSrbExtension.c)
 *     NVMeSetSenseData @ 0x1C000E5FC (NVMeSetSenseData.c)
 */

__int64 __fastcall ScsiSanitizeRequest(__int64 a1, __int64 a2)
{
  __int64 SrbExtension; // rax
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // r10
  __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 v9; // rbp
  char v10; // cl
  char v11; // cl
  unsigned __int8 v12; // r15
  char v13; // di
  int NamespaceId; // eax
  __int16 v15; // dx
  __int64 v16; // rcx
  int v17; // eax
  unsigned int v18; // eax

  SrbExtension = GetSrbExtension(a2);
  v7 = *(_QWORD *)(a1 + 1080);
  v8 = SrbExtension;
  if ( *(_BYTE *)(v6 + 2) == 40 )
  {
    v5 = *(unsigned int *)(v6 + 52);
    v9 = *(unsigned __int8 *)(v5 + v6 + 10);
  }
  else
  {
    v9 = *(unsigned __int8 *)(v6 + 7);
  }
  v10 = *(_BYTE *)(v4 + 1);
  if ( v10 < 0
    || (v11 = v10 & 0x1F, v4 = 1LL, (unsigned __int8)(v11 - 2) > 1u)
    || (*(_BYTE *)(v7 + 256) & 2) == 0
    || *(_DWORD *)(a1 + 148) > 1u && (*(_BYTE *)(v7 + 524) & 2) != 0
    || v11 == 3 && (*(_BYTE *)(v7 + 524) & 4) == 0 )
  {
    LOBYTE(v5) = 36;
    LOBYTE(v7) = 6;
    NVMeSetSenseData(v6, v7, v4, v5);
    return 3238002694LL;
  }
  else
  {
    v12 = *(_BYTE *)(*(_QWORD *)(a1 + 8 * v9 + 1184) + 72LL);
    if ( v11 == 3 )
      v13 = 2;
    else
      v13 = v11 == 2;
    *(_BYTE *)(SrbExtension + 4245) = *(_BYTE *)(SrbExtension + 4245) & 0xFC | 1;
    SrbAssignQueueId(a1, v6);
    NamespaceId = GetNamespaceId(a1, v9);
    v15 = *(_WORD *)(*(_QWORD *)(a1 + 8 * v9 + 1184) + 48LL);
    v16 = *(_QWORD *)(a1 + 1080);
    *(_BYTE *)(v8 + 4096) = 0x80;
    if ( (*(_BYTE *)(v16 + 524) & 2) != 0 )
      NamespaceId = -1;
    *(_DWORD *)(v8 + 4100) = NamespaceId;
    *(_DWORD *)(v8 + 4136) ^= (*(_DWORD *)(v8 + 4136) ^ v12) & 0xF;
    v17 = *(_DWORD *)(v8 + 4136);
    if ( v15 )
      v18 = v17 & 0xFFFFFFEF;
    else
      v18 = v17 | 0x10;
    *(_DWORD *)(v8 + 4136) = v18;
    *(_DWORD *)(v8 + 4136) = v18 & 0xFFFFF01F | ((v13 & 7) << 9);
    return 0LL;
  }
}
