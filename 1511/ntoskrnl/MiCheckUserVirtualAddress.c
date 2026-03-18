/*
 * XREFs of MiCheckUserVirtualAddress @ 0x14001D660
 * Callers:
 *     MiActOnPte @ 0x14001C9B4 (MiActOnPte.c)
 *     MiCheckVirtualAddress @ 0x14001D4E0 (MiCheckVirtualAddress.c)
 * Callees:
 *     MiGetProtoPteAddress @ 0x14004B0A0 (MiGetProtoPteAddress.c)
 *     MiLocateVadEvent @ 0x1400B8A24 (MiLocateVadEvent.c)
 */

__int64 __fastcall MiCheckUserVirtualAddress(unsigned __int64 a1, int *a2, __int64 a3, unsigned int a4)
{
  unsigned int v4; // r11d
  int v8; // r8d
  int v9; // r9d
  int v10; // r8d
  unsigned __int64 v11; // rdi
  __int64 ProtoPteAddress; // rdx
  _QWORD *v13; // r8
  __int64 result; // rax
  __int64 VadEvent; // rax
  char v16; // [rsp+30h] [rbp+8h] BYREF

  v4 = a4;
  if ( (a1 & 0xFFFFFFFFFFFFF000uLL) == 0x7FFE0000
    && (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].SwapListEntry.Next) & 1) == 0 )
  {
    result = qword_1402FE6A8;
    *a2 = 1;
    return result;
  }
  v8 = *(_DWORD *)(a3 + 48);
  v9 = v8 & 7;
  if ( v9 == 2
    && (*(_DWORD *)(a3 + 64) & 0x20000000) != 0
    && (VadEvent = MiLocateVadEvent(a3, 32LL), VadEvent && *(struct _KTHREAD **)(VadEvent + 16) != KeGetCurrentThread())
    || (v8 & 0x80000) != 0
    || v9 == 1 )
  {
LABEL_19:
    *a2 = 24;
    return 0LL;
  }
  if ( (v8 & 0x8000) != 0 )
  {
    if ( v9 != 3 && v9 != 5 && *(int *)(a3 + 52) < 0 )
    {
      *a2 = (unsigned __int8)v8 >> 3;
      return 0LL;
    }
    goto LABEL_19;
  }
  if ( (*(_BYTE *)(a3 + 67) & 1) != 0 )
    goto LABEL_19;
  v10 = (unsigned __int8)v8 >> 3;
  *a2 = v10;
  if ( v10 == 7 && v9 == 2 )
    *a2 = 256;
  v11 = a1 >> 12;
  ProtoPteAddress = MiGetProtoPteAddress(a3, v11, v4, &v16);
  if ( !ProtoPteAddress )
    *a2 = 24;
  v13 = *(_QWORD **)(a3 + 120);
  if ( (__int64)v13 < 0
    && v11 - (*(unsigned int *)(a3 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a3 + 32) << 32)) > (unsigned __int64)(*v13 - 1LL) >> 12 )
  {
    *a2 = 24;
  }
  return ProtoPteAddress;
}
