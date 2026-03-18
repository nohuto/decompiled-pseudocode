/*
 * XREFs of HeadlessInit @ 0x1407E9094
 * Callers:
 *     InitBootProcessor @ 0x1407D089C (InitBootProcessor.c)
 * Callees:
 *     xKdEnumerateDebuggingDevices @ 0x140170968 (xKdEnumerateDebuggingDevices.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     MmLockPagableDataSection @ 0x14052F798 (MmLockPagableDataSection.c)
 *     HdlspEnableTerminal @ 0x14075A430 (HdlspEnableTerminal.c)
 */

void __fastcall HeadlessInit(__int64 a1)
{
  __int64 v1; // rdi
  PVOID PoolWithTag; // rax
  __int64 v3; // rbx
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
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x88uLL, 0x736C6448u);
    v3 = (__int64)PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x88uLL);
      *(_QWORD *)v3 = 0LL;
      v4 = *(_DWORD *)(v3 + 48) ^ (*(_DWORD *)(v3 + 48) ^ (*(_DWORD *)(v1 + 8) << 9)) & 0xE00;
      *(_DWORD *)(v3 + 48) = v4;
      *(_QWORD *)(v3 + 64) = *(_QWORD *)(v1 + 16);
      *(_DWORD *)(v3 + 52) = *(_DWORD *)(v1 + 4);
      v5 = ((unsigned __int8)v4 ^ (unsigned __int8)(*(_BYTE *)(v1 + 3) << 7)) & 0x80 ^ v4;
      *(_DWORD *)(v3 + 48) = v5;
      v6 = ((unsigned __int16)v5 ^ (unsigned __int16)(*(unsigned __int8 *)(v1 + 2) << 8)) & 0x100 ^ v5;
      *(_DWORD *)(v3 + 48) = v6;
      v7 = ((unsigned __int8)v6 ^ (unsigned __int8)(8 * *(_BYTE *)v1)) & 8 ^ v6;
      *(_DWORD *)(v3 + 48) = v7;
      v8 = *(_BYTE *)(v1 + 56);
      *(_BYTE *)(v3 + 116) = v8;
      *(_BYTE *)(v3 + 117) = 0;
      *(_BYTE *)(v3 + 84) = *(_BYTE *)(v1 + 57);
      *(_BYTE *)(v3 + 85) = *(_BYTE *)(v1 + 58);
      *(_BYTE *)(v3 + 86) = *(_BYTE *)(v1 + 59);
      *(_OWORD *)(v3 + 100) = *(_OWORD *)(v1 + 40);
      if ( v8 )
        *(_DWORD *)(v3 + 48) = v7 | 0x1000;
      *(_BYTE *)(v3 + 118) = 1;
      *(_BYTE *)(v3 + 119) = *(_BYTE *)(v1 + 36) & 1;
      *(_WORD *)(v3 + 120) = *(_WORD *)(v1 + 26);
      *(_WORD *)(v3 + 122) = *(_WORD *)(v1 + 24);
      *(_WORD *)(v3 + 124) = *(_WORD *)(v1 + 30);
      *(_BYTE *)(v3 + 126) = *(_BYTE *)(v1 + 28);
      *(_BYTE *)(v3 + 127) = *(_BYTE *)(v1 + 32);
      *(_BYTE *)(v3 + 128) = *(_BYTE *)(v1 + 33);
      if ( (unsigned __int16)(*(_WORD *)(v1 + 24) - 1) <= 0xFFFDu
        && (unsigned __int16)(*(_WORD *)(v1 + 26) - 1) <= 0xFFFDu )
      {
        *(_DWORD *)(v3 + 48) |= 0x1000u;
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
          off_1403217B8();
        }
      }
      v11 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x3800uLL, 0x736C6448u);
      *(_QWORD *)(v3 + 16) = v11;
      if ( v11
        && (*(_DWORD *)(v3 + 96) = -1,
            v12 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x50uLL, 0x736C6448u),
            (*(_QWORD *)(v3 + 24) = v12) != 0LL)
        && (v13 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x50uLL, 0x736C6448u), (*(_QWORD *)(v3 + 32) = v13) != 0LL)
        && (v14 = MmLockPagableDataSection(HdlspDispatch), (*(_QWORD *)(v3 + 8) = v14) != 0LL) )
      {
        if ( *(_DWORD *)(v3 + 52) == 9600 )
        {
          *(_DWORD *)(v3 + 76) = -1;
          *(_DWORD *)(v3 + 80) = 1301;
          *(_DWORD *)(v3 + 72) = -13010;
        }
        HeadlessGlobals = v3;
        HdlspEnableTerminal(1);
      }
      else
      {
        v15 = *(void **)(v3 + 16);
        if ( v15 )
          ExFreePoolWithTag(v15, 0);
        v16 = *(void **)(v3 + 24);
        if ( v16 )
          ExFreePoolWithTag(v16, 0);
        v17 = *(void **)(v3 + 32);
        if ( v17 )
          ExFreePoolWithTag(v17, 0);
        ExFreePoolWithTag((PVOID)v3, 0);
      }
    }
  }
}
