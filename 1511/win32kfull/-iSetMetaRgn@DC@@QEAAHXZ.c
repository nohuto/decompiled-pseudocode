/*
 * XREFs of ?iSetMetaRgn@DC@@QEAAHXZ @ 0x1C0027A68
 * Callers:
 *     NtGdiSetMetaRgn @ 0x1C00F9B80 (NtGdiSetMetaRgn.c)
 * Callees:
 *     ?iComplexity@RGNOBJ@@QEAAJXZ @ 0x1C00368B0 (-iComplexity@RGNOBJ@@QEAAJXZ.c)
 */

__int64 __fastcall DC::iSetMetaRgn(DC *this)
{
  unsigned int v1; // ebx
  __int64 result; // rax
  __int64 v4; // r8
  unsigned int v5; // esi
  __int64 v6; // rax
  __int64 v7; // [rsp+20h] [rbp-10h] BYREF
  int v8; // [rsp+28h] [rbp-8h]
  __int64 v9; // [rsp+50h] [rbp+20h] BYREF
  __int64 v10; // [rsp+58h] [rbp+28h] BYREF

  v1 = 0;
  if ( !*((_QWORD *)this + 29) )
  {
    if ( !*((_QWORD *)this + 28) )
      return 2LL;
    v9 = *((_QWORD *)this + 28);
    result = RGNOBJ::iComplexity((RGNOBJ *)&v9);
    *((_QWORD *)this + 29) = v4;
    *((_QWORD *)this + 28) = 0LL;
    return result;
  }
  v9 = *((_QWORD *)this + 29);
  if ( !*((_QWORD *)this + 28) )
    return (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&v9);
  v10 = *((_QWORD *)this + 28);
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v7);
  if ( !v7 )
  {
    if ( v8 == 1 )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v7);
    return v1;
  }
  v5 = RGNOBJ::iCombine((RGNOBJ *)&v7, (struct RGNOBJ *)&v9, (struct RGNOBJ *)&v10, 1);
  if ( v5 )
  {
    ++*(_DWORD *)(v7 + 32);
    *((_QWORD *)this + 29) = v7;
    if ( !--*(_DWORD *)(v9 + 32) )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v9);
    v6 = v10;
    *((_QWORD *)this + 28) = 0LL;
    --*(_DWORD *)(v6 + 32);
    if ( !*(_DWORD *)(v10 + 32) )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v10);
    DC::vReleaseRao(this);
  }
  else
  {
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v7);
  }
  if ( v8 == 1 )
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v7);
  return v5;
}
