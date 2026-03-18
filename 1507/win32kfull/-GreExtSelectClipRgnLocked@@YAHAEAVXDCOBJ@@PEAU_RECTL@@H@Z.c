/*
 * XREFs of ?GreExtSelectClipRgnLocked@@YAHAEAVXDCOBJ@@PEAU_RECTL@@H@Z @ 0x1C0012BB8
 * Callers:
 *     NtGdiFlushUserBatch @ 0x1C001BF90 (NtGdiFlushUserBatch.c)
 * Callees:
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0012B5C (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?iComplexity@RGNOBJ@@QEAAJXZ @ 0x1C001617C (-iComplexity@RGNOBJ@@QEAAJXZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C0019EA4 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?iSelectTightenRao@DC@@QEAAHPEAVREGION@@H@Z @ 0x1C001D324 (-iSelectTightenRao@DC@@QEAAHPEAVREGION@@H@Z.c)
 *     ?bTightenRao@DC@@QEAAHXZ @ 0x1C001D448 (-bTightenRao@DC@@QEAAHXZ.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C00918C4 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 */

__int64 __fastcall GreExtSelectClipRgnLocked(DC **this, struct tagRECT *a2, int a3)
{
  unsigned int v4; // r14d
  unsigned int v5; // ebx
  DC *v7; // rcx
  ULONG v8; // ecx
  __int64 v9; // rax
  __int128 v10; // xmm0
  __int64 v11; // rax
  struct REGION *v12; // rax
  __int64 v14; // rax
  struct REGION *v15[2]; // [rsp+20h] [rbp-10h] BYREF
  struct REGION *v16; // [rsp+68h] [rbp+38h] BYREF

  v4 = a3 & 0xF7FFFFFF;
  v5 = 0;
  if ( (a3 & 0xF7FFFFFF) - 1 > 4 )
  {
    v8 = 87;
    goto LABEL_29;
  }
  v7 = *this;
  if ( !v7 )
  {
    v8 = 6;
LABEL_29:
    EngSetLastError(v8);
    return v5;
  }
  if ( (a3 & 0x8000000) != 0 )
  {
    if ( v4 == 5 )
    {
      v5 = DC::iSelectTightenRao(v7, 0LL, 5);
      DC::bTightenRao(*this);
      if ( v5 )
      {
        v14 = *((_QWORD *)*this + 193);
        if ( *(_DWORD *)(v14 + 84) == 1 )
          return 1;
        else
          return (unsigned int)(*(_DWORD *)(v14 + 80) > 0xA0u) + 2;
      }
    }
  }
  else
  {
    v9 = *((_QWORD *)v7 + 28);
    if ( v9
      && *(_DWORD *)(v9 + 80) == 160
      && (v10 = *(_OWORD *)(v9 + 88), v11 = *(_QWORD *)(v9 + 88), *(_OWORD *)v15 = v10, a2->left == (_DWORD)v11)
      && *(_QWORD *)&a2->top == __PAIR64__((unsigned int)v15[1], HIDWORD(v11))
      && a2->bottom == HIDWORD(v15[1]) )
    {
      v16 = XDCOBJ::prgnEffRao((XDCOBJ *)this);
      return (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&v16);
    }
    else
    {
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v15, 0, 1);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v15);
      if ( v15[0] )
      {
        if ( (((a2->left & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
          || (((a2->bottom & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
          || (((a2->right & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
          || (((a2->top & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
          || (unsigned int)IsRectEmptyInl(a2) )
        {
          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v15);
          return 0LL;
        }
        RGNOBJ::vSet((RGNOBJ *)v15, (struct _RECTL *)a2);
        v5 = DC::iSelectTightenRao(*this, v15[0], v4);
        DC::bTightenRao(*this);
        if ( v5 )
        {
          v12 = (struct REGION *)*((_QWORD *)*this + 194);
          if ( !v12 )
            v12 = (struct REGION *)*((_QWORD *)*this + 193);
          v16 = v12;
          v5 = RGNOBJ::iComplexity((RGNOBJ *)&v16);
        }
      }
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v15);
    }
  }
  return v5;
}
