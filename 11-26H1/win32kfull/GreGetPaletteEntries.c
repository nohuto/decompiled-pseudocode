/*
 * XREFs of GreGetPaletteEntries @ 0x1401801A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1EPALOBJ@@QEAA@XZ @ 0x14017EDC0 (--1EPALOBJ@@QEAA@XZ.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1401807C4 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 */

__int64 __fastcall GreGetPaletteEntries(HPALETTE a1, unsigned int a2, unsigned int a3, void *a4)
{
  __int64 v4; // rsi
  Gre::Base *v7; // rcx
  __int64 v8; // rbx
  unsigned int v9; // edi
  unsigned int v10; // eax
  unsigned int v11; // eax
  struct Gre::Base::SESSION_GLOBALS *v12; // rax
  _QWORD v14[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = a2;
  EPALOBJ::EPALOBJ((EPALOBJ *)v14, a1);
  v8 = v14[0];
  v9 = 0;
  if ( v14[0] )
  {
    if ( a4 )
    {
      v10 = *(_DWORD *)(v14[0] + 28LL);
      if ( (unsigned int)v4 < v10 )
      {
        v11 = v10 - v4;
        if ( a3 > v11 )
          a3 = v11;
        memmove(a4, (const void *)(*(_QWORD *)(v14[0] + 112LL) + 4 * v4), 4LL * a3);
        v9 = a3;
      }
    }
    else
    {
      v9 = *(_DWORD *)(v14[0] + 28LL);
    }
    v12 = Gre::Base::Globals(v7);
    DEC_SHARE_REF_CNT(v12, v8);
    return v9;
  }
  else
  {
    EngSetLastError(6u);
    EPALOBJ::~EPALOBJ((EPALOBJ *)v14);
    return 0LL;
  }
}
