/*
 * XREFs of HeadlessInit @ 0x14077250C
 * Callers:
 *     InitBootProcessor @ 0x140763EA0 (InitBootProcessor.c)
 * Callees:
 *     xKdEnumerateDebuggingDevices @ 0x140142AF0 (xKdEnumerateDebuggingDevices.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     MmLockPagableDataSection @ 0x1403CF528 (MmLockPagableDataSection.c)
 *     HdlspEnableTerminal @ 0x1406D738C (HdlspEnableTerminal.c)
 */

void __fastcall HeadlessInit(__int64 a1)
{
  __int64 v1; // rdi
  char *PoolWithTag; // rax
  char *v3; // rbx
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  char v8; // cl
  char v9; // dl
  int v10; // edx
  PVOID v11; // rax
  PVOID v12; // rax
  PVOID v13; // rax
  PVOID v14; // rax
  void *v15; // rcx
  void *v16; // rcx
  void *v17; // rcx
  _DWORD v18[62]; // [rsp+20h] [rbp-118h] BYREF

  v1 = *(_QWORD *)(*(_QWORD *)(a1 + 240) + 48LL);
  if ( v1 && (*(_DWORD *)(v1 + 8) <= 4u || *(_BYTE *)v1) )
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x88uLL, 0x736C6448u);
    v3 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x88uLL);
      *(_QWORD *)v3 = 0LL;
      v4 = *((_DWORD *)v3 + 12) ^ (*((_DWORD *)v3 + 12) ^ (*(_DWORD *)(v1 + 8) << 9)) & 0xE00;
      *((_DWORD *)v3 + 12) = v4;
      *((_QWORD *)v3 + 8) = *(_QWORD *)(v1 + 16);
      *((_DWORD *)v3 + 13) = *(_DWORD *)(v1 + 4);
      v5 = ((unsigned __int8)v4 ^ (unsigned __int8)(*(_BYTE *)(v1 + 3) << 7)) & 0x80 ^ v4;
      *((_DWORD *)v3 + 12) = v5;
      v6 = ((unsigned __int16)v5 ^ (unsigned __int16)(*(unsigned __int8 *)(v1 + 2) << 8)) & 0x100 ^ v5;
      *((_DWORD *)v3 + 12) = v6;
      v7 = ((unsigned __int8)v6 ^ (unsigned __int8)(8 * *(_BYTE *)v1)) & 8 ^ v6;
      *((_DWORD *)v3 + 12) = v7;
      v8 = *(_BYTE *)(v1 + 56);
      v3[116] = v8;
      v3[117] = 0;
      v3[84] = *(_BYTE *)(v1 + 57);
      v3[85] = *(_BYTE *)(v1 + 58);
      v3[86] = *(_BYTE *)(v1 + 59);
      *(_OWORD *)(v3 + 100) = *(_OWORD *)(v1 + 40);
      if ( v8 )
        *((_DWORD *)v3 + 12) = v7 | 0x1000;
      v3[118] = 1;
      v3[119] = *(_BYTE *)(v1 + 36) & 1;
      *((_WORD *)v3 + 60) = *(_WORD *)(v1 + 26);
      *((_WORD *)v3 + 61) = *(_WORD *)(v1 + 24);
      *((_WORD *)v3 + 62) = *(_WORD *)(v1 + 30);
      v3[126] = *(_BYTE *)(v1 + 28);
      v3[127] = *(_BYTE *)(v1 + 32);
      v3[128] = *(_BYTE *)(v1 + 33);
      if ( (unsigned __int16)(*(_WORD *)(v1 + 24) - 1) <= 0xFFFDu
        && (unsigned __int16)(*(_WORD *)(v1 + 26) - 1) <= 0xFFFDu )
      {
        *((_DWORD *)v3 + 12) |= 0x1000u;
        if ( (*(_DWORD *)(v1 + 36) & 1) == 0 )
        {
          memset(v18, 0, sizeof(v18));
          v9 = *(_BYTE *)(v1 + 33);
          HIBYTE(v18[4]) = *(_BYTE *)v1;
          LOWORD(v18[3]) = *(_WORD *)(v1 + 24);
          HIWORD(v18[2]) = *(_WORD *)(v1 + 26);
          v18[0] = *(unsigned __int8 *)(v1 + 28);
          LOWORD(v18[2]) = *(_WORD *)(v1 + 30);
          v10 = *(_BYTE *)(v1 + 32) & 0x1F | (32 * (v9 & 7));
          HIWORD(v18[3]) = -1;
          v18[1] = v10;
          LOBYTE(v18[4]) = -1;
          off_1402D2668();
        }
      }
      v11 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x3800uLL, 0x736C6448u);
      *((_QWORD *)v3 + 2) = v11;
      if ( v11
        && (*((_DWORD *)v3 + 24) = -1,
            v12 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x50uLL, 0x736C6448u),
            (*((_QWORD *)v3 + 3) = v12) != 0LL)
        && (v13 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x50uLL, 0x736C6448u), (*((_QWORD *)v3 + 4) = v13) != 0LL)
        && (v14 = MmLockPagableDataSection(HdlspDispatch), (*((_QWORD *)v3 + 1) = v14) != 0LL) )
      {
        if ( *((_DWORD *)v3 + 13) == 9600 )
        {
          *((_DWORD *)v3 + 19) = -1;
          *((_DWORD *)v3 + 20) = 1301;
          *((_DWORD *)v3 + 18) = -13010;
        }
        HeadlessGlobals = (PKSPIN_LOCK)v3;
        HdlspEnableTerminal(1);
      }
      else
      {
        v15 = (void *)*((_QWORD *)v3 + 2);
        if ( v15 )
          ExFreePoolWithTag(v15, 0);
        v16 = (void *)*((_QWORD *)v3 + 3);
        if ( v16 )
          ExFreePoolWithTag(v16, 0);
        v17 = (void *)*((_QWORD *)v3 + 4);
        if ( v17 )
          ExFreePoolWithTag(v17, 0);
        ExFreePoolWithTag(v3, 0);
      }
    }
  }
}
