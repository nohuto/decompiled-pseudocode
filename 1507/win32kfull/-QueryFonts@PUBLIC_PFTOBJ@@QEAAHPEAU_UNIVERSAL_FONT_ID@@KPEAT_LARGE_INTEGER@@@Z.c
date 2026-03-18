/*
 * XREFs of ?QueryFonts@PUBLIC_PFTOBJ@@QEAAHPEAU_UNIVERSAL_FONT_ID@@KPEAT_LARGE_INTEGER@@@Z @ 0x1C025CFD8
 * Callers:
 *     GreQueryFonts @ 0x1C026AA20 (GreQueryFonts.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00D6F48 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z @ 0x1C025D318 (-SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z.c)
 */

__int64 __fastcall PUBLIC_PFTOBJ::QueryFonts(
        PUBLIC_PFTOBJ *this,
        struct _UNIVERSAL_FONT_ID *a2,
        unsigned int a3,
        union _LARGE_INTEGER *a4)
{
  int v4; // edi
  unsigned int v8; // ebx
  struct PFF **i; // rsi
  struct PFF *j; // rcx
  __int64 v11; // rcx
  struct PFF *v12; // rax
  __int64 v14; // [rsp+48h] [rbp+10h] BYREF

  v4 = 0;
  *a4 = PFTOBJ::FontChangeTime;
  v8 = 0;
  if ( a2 && a3 )
  {
    v14 = ghsemPublicPFT;
    GreAcquireSemaphore(ghsemPublicPFT);
    if ( (_DWORD)gufiLocalType1Rasterizer == 2 )
    {
      *(_QWORD *)a2 = gufiLocalType1Rasterizer;
      v8 = 1;
    }
    for ( i = (struct PFF **)(*(_QWORD *)this + 32LL);
          (unsigned __int64)i < *(_QWORD *)this + 8 * (unsigned __int64)*(unsigned int *)(*(_QWORD *)this + 24LL) + 32;
          ++i )
    {
      if ( v8 >= a3 )
        break;
      for ( j = *i; ; j = (struct PFF *)*((_QWORD *)v12 + 1) )
      {
        v12 = SkipInvalidPff(j);
        if ( !v12 || v8 >= a3 )
          break;
        if ( (*((_DWORD *)v12 + 13) & 0x20) == 0 )
        {
          v11 = v8++;
          *((_DWORD *)a2 + 2 * v11 + 1) = 1;
          *((_DWORD *)a2 + 2 * v11) = *((_DWORD *)v12 + 34);
        }
      }
    }
    SEMOBJ::vUnlock((SEMOBJ *)&v14);
    return v8;
  }
  else
  {
    LOBYTE(v4) = (_DWORD)gufiLocalType1Rasterizer == 2;
    return (unsigned int)(v4 + *(_DWORD *)(*(_QWORD *)this + 28LL));
  }
}
