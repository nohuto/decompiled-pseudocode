/*
 * XREFs of ?SetPointerInfoNodeMessagePosted@PointerFrameList@@YAH_KIH@Z @ 0x1C01C185C
 * Callers:
 *     PostInputMessage @ 0x1C005816C (PostInputMessage.c)
 * Callees:
 *     ?FindFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z @ 0x1C01C0A54 (-FindFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z.c)
 */

__int64 __fastcall PointerFrameList::SetPointerInfoNodeMessagePosted(PointerFrameList *this, int a2)
{
  int v3; // ebp
  int v4; // ebx
  int v5; // edi
  struct _LIST_ENTRY *FrameById; // r8
  unsigned int v8; // r9d
  int v9; // r10d
  int v10; // r11d
  int *v11; // rdx
  int v12; // eax
  int v13; // eax

  if ( a2 == 585 )
  {
    v3 = 1;
    v4 = 0;
  }
  else
  {
    v3 = 0;
    if ( a2 == 586 )
    {
      v4 = 1;
    }
    else
    {
      v4 = 0;
      if ( a2 == 594 )
      {
        v5 = 1;
        goto LABEL_4;
      }
    }
  }
  v5 = 0;
LABEL_4:
  if ( !this )
    return 0LL;
  FrameById = FindFrameById(*((_DWORD *)this + 7));
  if ( !FrameById )
    return 0LL;
  v11 = (int *)FrameById[5].Blink + 54 * *((unsigned int *)this + 8);
  if ( v3 )
  {
    v12 = *v11 ^ (*v11 ^ (v10 << 24)) & 0x1000000 | 0x800000;
LABEL_15:
    *v11 = v12;
    goto LABEL_21;
  }
  if ( v4 )
  {
    v12 = *v11 ^ (*v11 ^ (v10 << 28)) & 0x10000000 | 0x8000000;
    goto LABEL_15;
  }
  if ( v9 )
  {
    v13 = v11[1];
    *v11 |= 0x80000000;
    v11[1] ^= v8 & (v10 ^ v13);
  }
  else if ( v5 )
  {
    v11[1] = v11[1] ^ (v11[1] ^ (16 * v10)) & 0x10 | 8;
  }
  else
  {
    *v11 = *v11 ^ (*v11 ^ (v10 << 20)) & 0x100000 | 0x80000;
  }
LABEL_21:
  if ( v10 )
    *((_DWORD *)&FrameById[6].Flink[1].Flink + 10 * (unsigned int)v11[2] + 1) |= 8u;
  return v8;
}
