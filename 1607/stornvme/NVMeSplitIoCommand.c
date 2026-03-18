/*
 * XREFs of NVMeSplitIoCommand @ 0x1C0001C40
 * Callers:
 *     NVMeHwBuildIo @ 0x1C0001000 (NVMeHwBuildIo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NVMeSplitIoCommand(__int64 a1, __int64 a2)
{
  char v2; // r9
  __int64 v4; // r8
  __int64 v5; // rcx
  __int64 v6; // rcx
  unsigned int v7; // r10d
  unsigned int v8; // eax
  int v9; // r9d
  __int64 v10; // rax
  unsigned __int64 v11; // rdx
  __int64 v13; // [rsp+10h] [rbp+10h]

  v2 = *(_BYTE *)(a2 + 2);
  if ( v2 == 40 )
    v4 = *(_QWORD *)(a2 + 104);
  else
    v4 = *(_QWORD *)(a2 + 56);
  if ( (v4 & 0xFFF) != 0 )
    v4 = v4 - (v4 & 0xFFF) + 4096;
  if ( (*(_BYTE *)(v4 + 4245) & 2) != 0 )
  {
    if ( v2 == 40 )
      v5 = *(unsigned __int8 *)(*(unsigned int *)(a2 + 52) + a2 + 10);
    else
      v5 = *(unsigned __int8 *)(a2 + 7);
    v6 = *(_QWORD *)(a1 + 8 * v5 + 1184);
    v13 = *(_QWORD *)(v4 + 4136);
    v7 = *(_DWORD *)(v6 + 52);
    v8 = *(_DWORD *)(a1 + 48);
    ++*(_DWORD *)(v6 + 36);
    v9 = v8 / v7 - v13 % (v8 / v7);
    v10 = *(_DWORD *)(v4 + 4120) & 0xFFF;
    *(_WORD *)(v4 + 4144) = v9 - 1;
    v11 = (v10 + (unsigned __int64)(v7 * v9) + 4095) >> 12;
    if ( (_DWORD)v11 == 1 )
    {
      *(_QWORD *)(v4 + 4128) = 0LL;
    }
    else if ( (_DWORD)v11 == 2 )
    {
      *(_QWORD *)(v4 + 4128) = *(_QWORD *)v4;
    }
    *(_QWORD *)(v4 + 4216) = NVMeSplitIoCommandCompletion;
  }
  return 0LL;
}
