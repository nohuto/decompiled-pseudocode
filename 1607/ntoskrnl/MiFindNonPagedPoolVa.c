/*
 * XREFs of MiFindNonPagedPoolVa @ 0x140017940
 * Callers:
 *     ExpAllocateBigPool @ 0x140011650 (ExpAllocateBigPool.c)
 *     MiAllocatePoolPages @ 0x14009D3EC (MiAllocatePoolPages.c)
 * Callees:
 *     MiScanNonPagedPoolVa @ 0x14001A5E0 (MiScanNonPagedPoolVa.c)
 *     MiExpandNonPagedPool @ 0x1400FF5A4 (MiExpandNonPagedPool.c)
 */

unsigned __int64 __fastcall MiFindNonPagedPoolVa(int a1, __int64 a2, unsigned int a3, _DWORD *a4)
{
  unsigned int v5; // ebx
  int v8; // r14d
  unsigned __int16 *v9; // rdi
  unsigned __int16 *v10; // r15
  __int64 v11; // rdx
  _DWORD v13[12]; // [rsp+30h] [rbp-58h] BYREF
  char v14; // [rsp+60h] [rbp-28h]

  v13[0] = 0;
  v14 = 0;
  v5 = a3;
  v8 = a1 & 0x200;
  v9 = (unsigned __int16 *)((char *)qword_1403269E8 + 2 * a3 * (unsigned __int16)KeNumberNodes);
  v10 = &v9[(unsigned __int16)KeNumberNodes];
  while ( 1 )
  {
    if ( v8 )
    {
      v11 = MiScanNonPagedPoolVa(a2, v5, 0LL, v13);
      if ( v11 != -1 )
      {
        *a4 = 0;
        return qword_1403269F0[26 * v5 + 20].Region + (v11 << 12);
      }
    }
    v11 = MiScanNonPagedPoolVa(a2, v5, 1LL, v13);
    if ( v11 != -1 )
    {
      *a4 = 2;
      return qword_1403269F0[26 * v5 + 20].Region + (v11 << 12);
    }
    v11 = MiExpandNonPagedPool(a1, a2, v5, -1, 0, (__int64)a4);
    if ( v11 != -1 )
      return qword_1403269F0[26 * v5 + 20].Region + (v11 << 12);
    if ( ++v9 == v10 )
      break;
    v5 = *v9;
  }
  return 0LL;
}
