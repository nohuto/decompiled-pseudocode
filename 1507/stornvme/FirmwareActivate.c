/*
 * XREFs of FirmwareActivate @ 0x1C00092C4
 * Callers:
 *     IoctlToNVMe @ 0x1C000A180 (IoctlToNVMe.c)
 * Callees:
 *     SrbAssignQueueId @ 0x1C0006344 (SrbAssignQueueId.c)
 */

__int64 __fastcall FirmwareActivate(__int64 a1, __int64 a2)
{
  char v2; // r8
  __int64 v4; // rdi
  __int64 v5; // rax
  _DWORD *v6; // rcx
  char *v7; // rsi
  char v8; // r8
  int v9; // ebx
  int v10; // eax
  int v11; // eax
  unsigned int v12; // eax
  __int64 result; // rax

  v2 = *(_BYTE *)(a2 + 2);
  if ( v2 == 40 )
    v4 = *(_QWORD *)(a2 + 104);
  else
    v4 = *(_QWORD *)(a2 + 56);
  if ( (v4 & 0xFFF) != 0 )
    v4 = v4 - (v4 & 0xFFF) + 4096;
  v5 = *(_QWORD *)(a1 + 1072);
  if ( v2 == 40 )
    v6 = *(_DWORD **)(a2 + 64);
  else
    v6 = *(_DWORD **)(a2 + 24);
  v7 = (char *)v6 + (unsigned int)v6[11];
  if ( v6[12] >= 0xCu && (v8 = v7[8]) != 0 && (unsigned __int8)v8 <= (unsigned __int8)((*(_BYTE *)(v5 + 260) >> 1) & 7) )
  {
    v9 = v6[10] >> 31;
    *(_WORD *)(v4 + 4166) = 1;
    SrbAssignQueueId(a1, a2);
    v10 = (*(_DWORD *)(v4 + 4136) ^ (unsigned __int8)v7[8]) & 7;
    *(_BYTE *)(v4 + 4096) = 16;
    *(_DWORD *)(v4 + 4136) ^= v10;
    v11 = *(_DWORD *)(v4 + 4136);
    if ( (v9 & 1) != 0 )
      v12 = v11 & 0xFFFFFFE7 | 0x10;
    else
      v12 = v11 & 0xFFFFFFE7 | 8;
    *(_DWORD *)(v4 + 4136) = v12;
    *(_QWORD *)(v4 + 4216) = NVMeFirmwareActivateCompletion;
    return 0LL;
  }
  else
  {
    v6[5] = 3;
    result = 3238002694LL;
    *(_BYTE *)(a2 + 3) = 21;
  }
  return result;
}
