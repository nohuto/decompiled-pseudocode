/*
 * XREFs of ?SetPointerInfoNodeMessagePosted@PointerFrameList@@YAH_KIH@Z @ 0x1C023004C
 * Callers:
 *     PostInputMessage @ 0x1C008C718 (PostInputMessage.c)
 * Callees:
 *     ?FindFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z @ 0x1C022F1B4 (-FindFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z.c)
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
  int v13; // ecx

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
  v11 = (int *)FrameById[4].Blink + 54 * *((unsigned int *)this + 8);
  if ( v3 )
  {
    v12 = *v11 ^ (*v11 ^ (v10 << 23)) & 0x800000 | 0x400000;
  }
  else
  {
    if ( !v4 )
    {
      if ( v9 )
      {
        v13 = (v10 << 31) | *v11 & 0x3FFFFFFF | 0x40000000;
      }
      else
      {
        if ( v5 )
        {
          v11[1] = v11[1] ^ (v11[1] ^ (8 * v10)) & 8 | 4;
          goto LABEL_22;
        }
        v13 = *v11 ^ (*v11 ^ (v10 << 19)) & 0x80000 | 0x40000;
      }
      *v11 = v13;
      goto LABEL_22;
    }
    v12 = *v11 ^ (*v11 ^ (v10 << 27)) & 0x8000000 | 0x4000000;
  }
  *v11 = v12;
LABEL_22:
  if ( v10 )
    *((_DWORD *)&FrameById[5].Flink[1].Flink + 10 * (unsigned int)v11[2] + 1) |= 8u;
  return v8;
}
