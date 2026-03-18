/*
 * XREFs of ?AddEntry@DXGADAPTERSOURCEHASH@@AEAAPEAUADAPTERSOURCEHASH_ENTRY@1@PEAU_LUID@@IH@Z @ 0x1C00D1904
 * Callers:
 *     ?Initialize@ADAPTER_DISPLAY@@QEAAJXZ @ 0x1C00CF474 (-Initialize@ADAPTER_DISPLAY@@QEAAJXZ.c)
 *     ?FindHashForAdapterAndSource@DXGADAPTERSOURCEHASH@@QEAAJPEAU_LUID@@IPEAI@Z @ 0x1C013F618 (-FindHashForAdapterAndSource@DXGADAPTERSOURCEHASH@@QEAAJPEAU_LUID@@IPEAI@Z.c)
 * Callees:
 *     ?CalcCurrentTableSize@DXGADAPTERSOURCEHASH@@AEAAIXZ @ 0x1C000A9C8 (-CalcCurrentTableSize@DXGADAPTERSOURCEHASH@@AEAAIXZ.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x1C00D2128 (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 *     ?FindEntry@DXGADAPTERSOURCEHASH@@AEAAPEAUADAPTERSOURCEHASH_ENTRY@1@IHPEAU_LUID@@PEAI@Z @ 0x1C013F534 (-FindEntry@DXGADAPTERSOURCEHASH@@AEAAPEAUADAPTERSOURCEHASH_ENTRY@1@IHPEAU_LUID@@PEAI@Z.c)
 */

struct DXGADAPTERSOURCEHASH::ADAPTERSOURCEHASH_ENTRY *__fastcall DXGADAPTERSOURCEHASH::AddEntry(
        DXGADAPTERSOURCEHASH *this,
        struct _LUID *a2,
        int a3,
        int a4)
{
  _DWORD *Buffer; // rax
  unsigned int v9; // eax
  int v10; // ebp
  __int64 v11; // rsi
  char *v12; // rdi
  struct DXGADAPTERSOURCEHASH::ADAPTERSOURCEHASH_ENTRY *Entry; // rdi
  int v14; // eax
  struct DXGADAPTERSOURCEHASH::ADAPTERSOURCEHASH_ENTRY *result; // rax

  if ( !*(_QWORD *)((char *)this + 52) )
  {
    Buffer = AUTOEXPANDALLOCATION::GetBuffer((DXGADAPTERSOURCEHASH *)((char *)this + 40), 0x80u, 0);
    if ( !Buffer )
      return 0LL;
    Buffer[1] = -1;
    *Buffer = -1;
    Buffer[2] = -1;
    Buffer[3] = Buffer[3] & 0xFFFFFFFC | 1;
    *((_DWORD *)this + 14) = 1;
    memset(Buffer + 4, 0, 0x70uLL);
  }
  v9 = DXGADAPTERSOURCEHASH::CalcCurrentTableSize(this);
  v10 = 16;
  v11 = v9;
  if ( v9 != 16 )
  {
    if ( *((_DWORD *)this + 14) == v9 )
    {
      if ( v9 + 8 < 0x10 )
        v10 = v9 + 8;
      v12 = (char *)AUTOEXPANDALLOCATION::GetBuffer((DXGADAPTERSOURCEHASH *)((char *)this + 40), 16 * v10, 1);
      memset(&v12[16 * v11 + 16], 0, 16LL * (unsigned int)(v10 - v11 - 1));
    }
    else
    {
      v12 = (char *)*((_QWORD *)this + 5);
    }
    Entry = (struct DXGADAPTERSOURCEHASH::ADAPTERSOURCEHASH_ENTRY *)&v12[16 * *((unsigned int *)this + 14)];
    goto LABEL_8;
  }
  Entry = DXGADAPTERSOURCEHASH::FindEntry(this, *((_DWORD *)this + 14) & 0xF, 0, 0LL, 0LL);
  if ( Entry )
  {
LABEL_8:
    *((_DWORD *)Entry + 3) |= 1u;
    *(struct _LUID *)Entry = *a2;
    v14 = (*((_DWORD *)Entry + 3) ^ (2 * a4)) & 2;
    *((_DWORD *)Entry + 2) = a3;
    *((_DWORD *)Entry + 3) ^= v14;
    result = Entry;
    ++*((_DWORD *)this + 14);
    return result;
  }
  return 0LL;
}
