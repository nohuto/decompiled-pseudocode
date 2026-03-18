/*
 * XREFs of ?bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z @ 0x1C00294B0
 * Callers:
 *     ?bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z @ 0x1C00294B0 (-bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z.c)
 *     GreExtCreateRegion @ 0x1C0074050 (GreExtCreateRegion.c)
 * Callees:
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C001F318 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C001F3CC (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C0028890 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     ?bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z @ 0x1C00294B0 (-bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z.c)
 *     ?bSwap@RGNOBJ@@QEAAHPEAV1@@Z @ 0x1C00299E0 (-bSwap@RGNOBJ@@QEAAHPEAV1@@Z.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C0029EE0 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 */

__int64 __fastcall RGNOBJ::bSet(RGNOBJ *this, unsigned int a2, struct _RECTL *a3)
{
  __int16 *v3; // rbx
  unsigned int v5; // edi
  int v6; // r8d
  LONG *p_top; // rsi
  int v8; // ecx
  struct _RECTL *v9; // rdx
  int v10; // eax
  int v11; // r10d
  unsigned int v13; // esi
  unsigned int v14; // ebx
  __int16 *v15[2]; // [rsp+20h] [rbp-30h] BYREF
  __int16 *v16[2]; // [rsp+30h] [rbp-20h] BYREF
  __int16 *v17[2]; // [rsp+40h] [rbp-10h] BYREF
  int v20; // [rsp+88h] [rbp+38h]

  v3 = (__int16 *)a2;
  RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v17);
  RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v16);
  if ( !v17[0] || !v16[0] )
    goto LABEL_22;
  v5 = 1;
  if ( (unsigned int)v3 >= 0x14 )
  {
    RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v15);
    v13 = (unsigned int)v3 >> 1;
    v14 = (_DWORD)v3 - ((unsigned int)v3 >> 1);
    if ( v15[0]
      && (unsigned int)RGNOBJ::bSet((RGNOBJ *)v17, v13, a3)
      && (unsigned int)RGNOBJ::bSet((RGNOBJ *)v16, v14, &a3[v13]) )
    {
      RGNOBJ::iCombine((RGNOBJ *)v15, (struct RGNOBJ *)v16, (struct RGNOBJ *)v17, 2);
      RGNOBJ::bSwap(this, (struct RGNOBJ *)v15);
      RGNMEMOBJTMP::~RGNMEMOBJTMP(v15);
      goto LABEL_15;
    }
    RGNMEMOBJTMP::~RGNMEMOBJTMP(v15);
LABEL_22:
    v5 = 0;
    goto LABEL_15;
  }
  v6 = 0;
  v20 = 0;
  if ( (_DWORD)v3 )
  {
    v15[0] = v3;
    p_top = &a3->top;
    do
    {
      v8 = p_top[1];
      v9 = (struct _RECTL *)(p_top - 1);
      v10 = *(p_top - 1);
      if ( v10 < v8 )
      {
        v11 = p_top[2];
        if ( *p_top < v11 && v10 >= -134217728 && v8 <= 0x7FFFFFF && *p_top >= -134217728 && v11 <= 0x7FFFFFF )
        {
          if ( v6 )
          {
            RGNOBJ::vSet((RGNOBJ *)v17, v9);
            RGNOBJ::iCombine((RGNOBJ *)v16, this, (struct RGNOBJ *)v17, 2);
            RGNOBJ::bSwap(this, (struct RGNOBJ *)v16);
            v6 = v20;
          }
          else
          {
            RGNOBJ::vSet(this, v9);
            v6 = 1;
            v20 = 1;
          }
        }
      }
      p_top += 4;
      --v15[0];
    }
    while ( v15[0] );
  }
LABEL_15:
  RGNMEMOBJTMP::~RGNMEMOBJTMP(v16);
  RGNMEMOBJTMP::~RGNMEMOBJTMP(v17);
  return v5;
}
