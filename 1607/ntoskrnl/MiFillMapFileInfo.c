/*
 * XREFs of MiFillMapFileInfo @ 0x140657048
 * Callers:
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x1404294F0 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     MiLogMapFileEvent @ 0x140657214 (MiLogMapFileEvent.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x140024B6C (MmGetSessionIdEx.c)
 *     MiDereferenceControlAreaFile @ 0x1400261C0 (MiDereferenceControlAreaFile.c)
 *     MiReferenceControlAreaFile @ 0x140026210 (MiReferenceControlAreaFile.c)
 *     MiStartingOffset @ 0x1400318C0 (MiStartingOffset.c)
 *     MiGetProtoPteAddress @ 0x140041FE0 (MiGetProtoPteAddress.c)
 */

int __fastcall MiFillMapFileInfo(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  int v5; // ebp
  __int64 v6; // r15
  unsigned __int64 v7; // r14
  __int64 v8; // rax
  __int64 v9; // rsi
  ULONG_PTR v10; // rax
  unsigned int SessionId; // eax
  __int64 v12; // rcx
  unsigned __int64 v13; // rcx
  __int64 v14; // rax
  unsigned __int64 v15; // rcx
  __int64 v16; // rax
  __int64 *v18; // [rsp+40h] [rbp+8h] BYREF

  v3 = *(unsigned __int8 *)(a1 + 32);
  v5 = *(_DWORD *)(a1 + 48) & 7;
  v6 = **(_QWORD **)(a1 + 72);
  v7 = *(_QWORD *)(a1 + 112) & 0xFFFFFFFFFFFFFFFEuLL;
  v8 = *(unsigned int *)(a1 + 24);
  *(_QWORD *)(a2 + 16) = 0LL;
  v9 = v8 | (v3 << 32);
  if ( *(_QWORD *)(v6 + 64) )
  {
    v10 = MiReferenceControlAreaFile(v6);
    *(_QWORD *)(a2 + 8) = *(_QWORD *)(v10 + 24);
    MiDereferenceControlAreaFile(v6, v10);
    MiGetProtoPteAddress(a1, v9, 0, &v18);
    SessionId = MmGetSessionIdEx((struct _KPROCESS *)v7);
    *(_QWORD *)(a2 + 16) ^= (MiStartingOffset(v18, *(_QWORD *)(a1 + 80), SessionId) ^ *(_QWORD *)(a2 + 16)) & 0xFFFFFFFFFFFFLL;
    v12 = *(_QWORD *)(a2 + 16);
    if ( v5 == 2 )
    {
      if ( (*(_BYTE *)(a1 + 48) & 0xF8) == 0x38 )
      {
        v13 = v12 & 0xFF7FFFFFFFFFFFFFuLL;
        v14 = 0x40000000000000LL;
      }
      else
      {
        v13 = v12 & 0xFFBFFFFFFFFFFFFFuLL;
        v14 = 0x80000000000000LL;
      }
      v15 = v14 | v13;
    }
    else
    {
      v15 = v12 & 0xFF3FFFFFFFFFFFFFuLL;
    }
    *(_QWORD *)(a2 + 16) = v15;
  }
  else
  {
    *(_QWORD *)(a2 + 8) = *(_QWORD *)(a1 + 80);
    *(_QWORD *)(a2 + 16) = 0xC0000000000000LL;
  }
  *(_QWORD *)(a2 + 16) ^= (*(_QWORD *)(a2 + 16) ^ ((unsigned __int64)*(unsigned int *)(a1 + 64) << 29)) & 0x20000000000000LL;
  *(_DWORD *)(a2 + 40) = *(_DWORD *)(v7 + 744);
  *(_QWORD *)a2 = v9 << 12;
  *(_QWORD *)(a2 + 24) = ((*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32))
                        - (*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32))
                        + 1) << 12;
  *(_QWORD *)(a2 + 16) ^= (*(_QWORD *)(a2 + 16) ^ ((unsigned __int64)*(unsigned int *)(a1 + 48) << 45)) & 0x1F000000000000LL;
  v16 = *(unsigned int *)(a1 + 52);
  LODWORD(v16) = v16 & 0x7FFFFFFF;
  *(_QWORD *)(a2 + 32) = (v16 | ((unsigned __int64)*(unsigned __int8 *)(a1 + 34) << 31)) << 12;
  return v16;
}
