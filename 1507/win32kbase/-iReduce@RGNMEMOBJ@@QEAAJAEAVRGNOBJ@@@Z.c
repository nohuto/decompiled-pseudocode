/*
 * XREFs of ?iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z @ 0x1C00B1130
 * Callers:
 *     GreExtCreateRegion @ 0x1C0055450 (GreExtCreateRegion.c)
 * Callees:
 *     ?iComplexity@RGNOBJ@@QEAAJXZ @ 0x1C003E0B0 (-iComplexity@RGNOBJ@@QEAAJXZ.c)
 *     ?bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z @ 0x1C003EE60 (-bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C0040180 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0049F40 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0049FFC (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 */

__int64 __fastcall RGNMEMOBJ::iReduce(RGNMEMOBJ *this, struct RGNOBJ *a2)
{
  unsigned int v4; // ebx
  __int64 v5; // r8
  struct _RECTL v7; // [rsp+20h] [rbp-28h] BYREF
  __int16 *v8[3]; // [rsp+30h] [rbp-18h] BYREF

  RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v8);
  v4 = 0;
  v7.left = -134217728;
  v7.right = 0x7FFFFFF;
  v7.top = -134217728;
  v7.bottom = 0x7FFFFFF;
  if ( v8[0]
    && (RGNOBJ::vSet((RGNOBJ *)v8, &v7),
        *(_DWORD *)(*(_QWORD *)this + 88LL) = 0x7FFFFFFF,
        *(_DWORD *)(*(_QWORD *)this + 92LL) = 0x7FFFFFFF,
        *(_DWORD *)(*(_QWORD *)this + 96LL) = 0x80000000,
        *(_DWORD *)(*(_QWORD *)this + 100LL) = 0x80000000,
        (unsigned int)RGNOBJ::bMerge(this, (struct RGNOBJ *)v8, a2, byte_1C00FF3F9)) )
  {
    v4 = RGNOBJ::iComplexity(this);
  }
  else
  {
    v5 = *(_QWORD *)this;
    *(_DWORD *)(v5 + 80) = 120;
    *(_QWORD *)(v5 + 84) = 1LL;
    *(_QWORD *)(v5 + 92) = 0LL;
    *(_DWORD *)(v5 + 100) = 0;
    *(_DWORD *)(v5 + 104) = 0;
    *(_DWORD *)(v5 + 108) = 0x80000000;
    *(_QWORD *)(v5 + 112) = 0x7FFFFFFFLL;
    *(_QWORD *)(v5 + 40) = v5 + 104 + (unsigned int)(4 * *(_DWORD *)(v5 + 104) + 16);
  }
  RGNMEMOBJTMP::~RGNMEMOBJTMP(v8);
  return v4;
}
