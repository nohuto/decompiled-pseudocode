/*
 * XREFs of HeadlessInit @ 0x1407BD2D8
 * Callers:
 *     InitBootProcessor @ 0x1407937C4 (InitBootProcessor.c)
 * Callees:
 *     xKdEnumerateDebuggingDevices @ 0x14014CF94 (xKdEnumerateDebuggingDevices.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     MmLockPagableDataSection @ 0x140481DFC (MmLockPagableDataSection.c)
 *     HdlspEnableTerminal @ 0x14072338C (HdlspEnableTerminal.c)
 */

void __fastcall HeadlessInit(__int64 a1)
{
  char *v1; // rdi
  char *PoolWithTag; // rax
  char *v3; // rbx
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  char v8; // cl
  char v9; // al
  char v10; // dl
  int v11; // edx
  PVOID v12; // rax
  PVOID v13; // rax
  PVOID v14; // rax
  PVOID v15; // rax
  void *v16; // rcx
  void *v17; // rcx
  void *v18; // rcx
  _DWORD v19[62]; // [rsp+20h] [rbp-118h] BYREF

  v1 = *(char **)(*(_QWORD *)(a1 + 240) + 48LL);
  if ( v1 && (*((_DWORD *)v1 + 2) <= 4u || *v1) )
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x88uLL, 0x736C6448u);
    v3 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x88uLL);
      *(_QWORD *)v3 = 0LL;
      v4 = *((_DWORD *)v3 + 12) ^ (*((_DWORD *)v3 + 12) ^ (*((_DWORD *)v1 + 2) << 9)) & 0xE00;
      *((_DWORD *)v3 + 12) = v4;
      *((_QWORD *)v3 + 8) = *((_QWORD *)v1 + 2);
      *((_DWORD *)v3 + 13) = *((_DWORD *)v1 + 1);
      v5 = ((unsigned __int8)v4 ^ (unsigned __int8)(v1[3] << 7)) & 0x80 ^ v4;
      *((_DWORD *)v3 + 12) = v5;
      v6 = ((unsigned __int16)v5 ^ (unsigned __int16)((unsigned __int8)v1[2] << 8)) & 0x100 ^ v5;
      *((_DWORD *)v3 + 12) = v6;
      v7 = ((unsigned __int8)v6 ^ (unsigned __int8)(8 * *v1)) & 8 ^ v6;
      *((_DWORD *)v3 + 12) = v7;
      v8 = v1[56];
      v3[116] = v8;
      v3[117] = 0;
      v3[84] = v1[57];
      v3[85] = v1[58];
      v3[86] = v1[59];
      *(_OWORD *)(v3 + 100) = *(_OWORD *)(v1 + 40);
      if ( v8 )
        *((_DWORD *)v3 + 12) = v7 | 0x1000;
      v3[118] = 1;
      v3[119] = v1[36] & 1;
      *((_WORD *)v3 + 60) = *((_WORD *)v1 + 13);
      *((_WORD *)v3 + 61) = *((_WORD *)v1 + 12);
      *((_WORD *)v3 + 62) = *((_WORD *)v1 + 15);
      v3[126] = v1[28];
      v3[127] = v1[32];
      v3[128] = v1[33];
      if ( (unsigned __int16)(*((_WORD *)v1 + 12) - 1) <= 0xFFFDu
        && (unsigned __int16)(*((_WORD *)v1 + 13) - 1) <= 0xFFFDu )
      {
        *((_DWORD *)v3 + 12) |= 0x1000u;
        if ( (*((_DWORD *)v1 + 9) & 1) == 0 )
        {
          memset(v19, 0, sizeof(v19));
          v9 = *v1;
          v10 = v1[33];
          HIWORD(v19[3]) = -1;
          HIBYTE(v19[4]) = v9;
          LOWORD(v19[3]) = *((_WORD *)v1 + 12);
          HIWORD(v19[2]) = *((_WORD *)v1 + 13);
          v19[0] = (unsigned __int8)v1[28];
          LOWORD(v19[2]) = *((_WORD *)v1 + 15);
          v11 = v1[32] & 0x1F | (32 * (v10 & 7));
          LOBYTE(v19[4]) = -1;
          v19[1] = v11;
          off_1402F2308();
        }
      }
      v12 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x3800uLL, 0x736C6448u);
      *((_QWORD *)v3 + 2) = v12;
      if ( v12
        && (*((_DWORD *)v3 + 24) = -1,
            v13 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x50uLL, 0x736C6448u),
            (*((_QWORD *)v3 + 3) = v13) != 0LL)
        && (v14 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x50uLL, 0x736C6448u), (*((_QWORD *)v3 + 4) = v14) != 0LL)
        && (v15 = MmLockPagableDataSection(HdlspDispatch), (*((_QWORD *)v3 + 1) = v15) != 0LL) )
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
        v16 = (void *)*((_QWORD *)v3 + 2);
        if ( v16 )
          ExFreePoolWithTag(v16, 0);
        v17 = (void *)*((_QWORD *)v3 + 3);
        if ( v17 )
          ExFreePoolWithTag(v17, 0);
        v18 = (void *)*((_QWORD *)v3 + 4);
        if ( v18 )
          ExFreePoolWithTag(v18, 0);
        ExFreePoolWithTag(v3, 0);
      }
    }
  }
}
