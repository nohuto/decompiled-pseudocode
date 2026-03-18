/*
 * XREFs of MiFindNonPagedPoolVa @ 0x1400B34D0
 * Callers:
 *     MiAllocatePoolPages @ 0x140040F90 (MiAllocatePoolPages.c)
 * Callees:
 *     MiExpandNonPagedPool @ 0x1400168DC (MiExpandNonPagedPool.c)
 *     MiScanNonPagedPoolVa @ 0x1400B35F0 (MiScanNonPagedPoolVa.c)
 */

unsigned __int64 __fastcall MiFindNonPagedPoolVa(__int16 a1, __int64 a2, unsigned int a3, _DWORD *a4)
{
  unsigned int v5; // ebx
  int v8; // r14d
  unsigned __int16 *v9; // rdi
  unsigned __int16 *v10; // r15
  __int64 v11; // rdx
  _DWORD *v13; // [rsp+20h] [rbp-68h]
  _DWORD v14[12]; // [rsp+30h] [rbp-58h] BYREF
  char v15; // [rsp+60h] [rbp-28h]

  v14[0] = 0;
  v15 = 0;
  v5 = a3;
  v8 = a1 & 0x200;
  v9 = (unsigned __int16 *)((char *)qword_1402FE6B8 + 2 * a3 * (unsigned __int16)KeNumberNodes);
  v10 = &v9[(unsigned __int16)KeNumberNodes];
  while ( 1 )
  {
    if ( v8 )
    {
      v11 = MiScanNonPagedPoolVa(a2, v5, 0LL, v14);
      if ( v11 != -1 )
      {
        ++dword_1402E17B8;
        *a4 = 0;
        return qword_1402FE6C0[26 * v5 + 20].Region + (v11 << 12);
      }
    }
    v11 = MiScanNonPagedPoolVa(a2, v5, 1LL, v14);
    if ( v11 != -1 )
    {
      ++dword_1402E17BC;
      *a4 = 2;
      return qword_1402FE6C0[26 * v5 + 20].Region + (v11 << 12);
    }
    LODWORD(v13) = 0;
    v11 = MiExpandNonPagedPool(a1, a2, v5, -1, v13, (unsigned __int64)a4);
    if ( v11 != -1 )
    {
      ++dword_1402E17C0;
      return qword_1402FE6C0[26 * v5 + 20].Region + (v11 << 12);
    }
    if ( ++v9 == v10 )
      break;
    v5 = *v9;
    ++dword_1402E17CC;
  }
  ++dword_1402E17C8;
  return 0LL;
}
