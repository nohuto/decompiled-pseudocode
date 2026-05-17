/*
 * XREFs of LdrpCorFixupImage @ 0x1800908B0
 * Callers:
 *     LdrpMapImage @ 0x18002F44C (LdrpMapImage.c)
 *     LdrpInitializeProcess @ 0x180091E34 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x180031B00 (RtlImageDirectoryEntryToData.c)
 *     RtlImageNtHeader @ 0x180031C20 (RtlImageNtHeader.c)
 *     ZwProtectVirtualMemory @ 0x1800A6E20 (ZwProtectVirtualMemory.c)
 *     memmove @ 0x1800AC980 (memmove.c)
 */

__int64 __fastcall LdrpCorFixupImage(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  _QWORD *v3; // r14
  __int64 v4; // rsi
  __int64 result; // rax
  unsigned int v6; // edi
  int v7; // eax
  unsigned __int16 v8; // ax
  unsigned __int64 v9; // [rsp+70h] [rbp+40h] BYREF
  unsigned int v10; // [rsp+78h] [rbp+48h] BYREF
  int v11; // [rsp+80h] [rbp+50h] BYREF
  __int64 v12; // [rsp+88h] [rbp+58h] BYREF

  v9 = a1;
  v1 = RtlImageNtHeader(a1);
  v2 = RtlImageDirectoryEntryToData(v9, 1, 0xEu, &v11);
  if ( *(_WORD *)(v1 + 24) != 267 || *(_WORD *)(v1 + 4) != 332 || (*(_BYTE *)(v2 + 16) & 2) != 0 )
  {
    v8 = *(_WORD *)(v1 + 4);
    if ( v8 < MEMORY[0x7FFE002C] || v8 > MEMORY[0x7FFE002E] )
      return (unsigned int)-1073741701;
    else
      return 0;
  }
  v3 = (_QWORD *)(v1 + 120);
  v4 = v1
     + *(unsigned __int16 *)(v1 + 20)
     + 8 * (*(unsigned __int16 *)(v1 + 6) + 4LL * *(unsigned __int16 *)(v1 + 6) + 3);
  v12 = 4096LL;
  if ( v4 - v9 + 16 > 0x1000 )
    return 3221225595LL;
  result = ZwProtectVirtualMemory(-1LL, &v9, &v12, 4LL, &v10);
  v6 = result;
  if ( (int)result >= 0 )
  {
    memmove((void *)(v1 + 136), (const void *)(v1 + 120), v4 - (_QWORD)v3);
    v7 = *(_DWORD *)(v1 + 116);
    *(_WORD *)(v1 + 20) += 16;
    *(_DWORD *)(v1 + 132) = v7;
    *(_DWORD *)(v1 + 128) = *(_DWORD *)(v1 + 112);
    *v3 = *(unsigned int *)(v1 + 108);
    *(_QWORD *)(v1 + 112) = *(unsigned int *)(v1 + 104);
    *(_QWORD *)(v1 + 104) = *(unsigned int *)(v1 + 100);
    *(_QWORD *)(v1 + 96) = *(unsigned int *)(v1 + 96);
    *(_QWORD *)(v1 + 48) = *(unsigned int *)(v1 + 52);
    *(_WORD *)(v1 + 24) = 523;
    ZwProtectVirtualMemory(-1LL, &v9, &v12, v10, &v10);
    return v6;
  }
  return result;
}
