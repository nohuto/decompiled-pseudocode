/*
 * XREFs of ??1MULTISPRITEDDIACCESS@@QEAA@XZ @ 0x1C011C054
 * Callers:
 *     vSpDynamicModeChange @ 0x1C011BCF0 (vSpDynamicModeChange.c)
 * Callees:
 *     ?vSpDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C0055DD8 (-vSpDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z.c)
 */

void __fastcall MULTISPRITEDDIACCESS::~MULTISPRITEDDIACCESS(
        struct _SPRITESTATE **this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // r8
  __int64 v6; // rdx
  __int64 v7; // rbx
  __int64 v8; // rax

  v4 = (__int64)*this;
  if ( *this )
  {
    v6 = *(unsigned int *)(v4 + 68);
    if ( (_DWORD)v6 )
    {
      v7 = 0LL;
      do
      {
        v8 = *(_QWORD *)(*(_QWORD *)(v4 + 72) + 8 * v7);
        if ( *(_DWORD *)(v8 + 192) && (*(_DWORD *)(v8 + 56) & 0x20000) == 0 )
          vSpDirectDriverAccess((struct _SPRITESTATE *)(v8 + 96), 0LL, v4, a4);
        v4 = (__int64)*this;
        v7 = (unsigned int)(v7 + 1);
      }
      while ( (unsigned int)v7 < *((_DWORD *)*this + 17) );
    }
    else if ( *(_DWORD *)(v4 + 96) )
    {
      if ( (*(_DWORD *)(*(_QWORD *)v4 + 56LL) & 0x20000) == 0 )
        vSpDirectDriverAccess(*this, v6, v4, a4);
    }
  }
}
