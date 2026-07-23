/*
 * XREFs of MiCheckUserVirtualAddress @ 0x14001EA50
 * Callers:
 *     MiCheckVirtualAddress @ 0x14001E978 (MiCheckVirtualAddress.c)
 *     MiResolveDemandZeroFault @ 0x14003A610 (MiResolveDemandZeroFault.c)
 *     MiResolvePageTablePage @ 0x14003F890 (MiResolvePageTablePage.c)
 *     MiActOnPte @ 0x1400B9B18 (MiActOnPte.c)
 * Callees:
 *     MiLocateVadEvent @ 0x1400150E4 (MiLocateVadEvent.c)
 *     MiGetProtoPteAddress @ 0x140041FE0 (MiGetProtoPteAddress.c)
 */

__int64 __fastcall MiCheckUserVirtualAddress(unsigned __int64 a1, int *a2, __int64 a3, unsigned int a4)
{
  unsigned int v4; // r11d
  unsigned __int64 v8; // rax
  int v10; // r8d
  int v11; // r9d
  __int64 *VadEvent; // rax
  int v13; // r8d
  unsigned __int64 v14; // rsi
  __int64 ProtoPteAddress; // r8
  _QWORD *v16; // rdx
  _BYTE v17[24]; // [rsp+20h] [rbp-18h] BYREF

  v4 = a4;
  if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000LL) == 0 )
  {
    v8 = a1 & 0xFFFFFFFFFFFFF000uLL;
    if ( (a1 & 0xFFFFFFFFFFFFF000uLL) == 0x7FFE0000 )
    {
      *a2 = 1;
      return qword_1403269C8;
    }
    if ( v8 == qword_1403269D8 && v8 )
    {
      *a2 = 1;
      return qword_1403269D0;
    }
  }
  v10 = *(_DWORD *)(a3 + 48);
  v11 = v10 & 7;
  if ( v11 == 2 && (*(_DWORD *)(a3 + 64) & 0x10000000) != 0 )
  {
    VadEvent = MiLocateVadEvent(a3, 32);
    if ( VadEvent )
    {
      if ( (struct _KTHREAD *)VadEvent[2] != KeGetCurrentThread() )
        goto LABEL_11;
    }
  }
  if ( (v10 & 0x80000) != 0 || v11 == 1 )
    goto LABEL_11;
  if ( (v10 & 0x8000) != 0 )
  {
    if ( v11 != 3 && v11 != 5 && *(int *)(a3 + 52) < 0 )
    {
      *a2 = (unsigned __int8)v10 >> 3;
      return 0LL;
    }
LABEL_11:
    *a2 = 24;
    return 0LL;
  }
  if ( (*(_BYTE *)(a3 + 67) & 1) != 0 )
    goto LABEL_11;
  v13 = (unsigned __int8)v10 >> 3;
  *a2 = v13;
  if ( v13 == 7 )
  {
    if ( v11 == 2 )
      v13 = 256;
    *a2 = v13;
  }
  v14 = a1 >> 12;
  ProtoPteAddress = MiGetProtoPteAddress(a3, v14, v4, v17);
  if ( !ProtoPteAddress )
    *a2 = 24;
  v16 = *(_QWORD **)(a3 + 120);
  if ( (__int64)v16 < 0
    && v14 - (*(unsigned int *)(a3 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a3 + 32) << 32)) > (unsigned __int64)(*v16 - 1LL) >> 12 )
  {
    *a2 = 24;
  }
  return ProtoPteAddress;
}
