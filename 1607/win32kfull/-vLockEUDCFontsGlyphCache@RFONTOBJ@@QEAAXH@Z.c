/*
 * XREFs of ?vLockEUDCFontsGlyphCache@RFONTOBJ@@QEAAXH@Z @ 0x1C029B258
 * Callers:
 *     ?wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEAG2KPEAHH@Z @ 0x1C002CD50 (-wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEAG2KPEAHH@Z.c)
 *     GreGetGlyphOutlineInternal @ 0x1C0124534 (GreGetGlyphOutlineInternal.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C002D6C4 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vLockSystemTTGlyphCache@RFONTOBJ@@AEAAXXZ @ 0x1C029B40C (-vLockSystemTTGlyphCache@RFONTOBJ@@AEAAXXZ.c)
 */

void __fastcall RFONTOBJ::vLockEUDCFontsGlyphCache(RFONTOBJ *this, int a2)
{
  __int64 v4; // rcx
  unsigned int v5; // eax
  __int64 v6; // r14
  __int64 v7; // r15
  unsigned int v8; // ecx
  unsigned int v9; // edx
  __int64 v10; // rbp
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 i; // rsi
  __int64 v17; // rcx
  __int64 v18; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v19[8]; // [rsp+28h] [rbp-40h]
  __int64 v20; // [rsp+70h] [rbp+8h] BYREF
  __int64 v21; // [rsp+80h] [rbp+18h] BYREF
  __int64 v22; // [rsp+88h] [rbp+20h] BYREF

  v4 = *(_QWORD *)this;
  v5 = *(_DWORD *)(v4 + 848);
  if ( v5 <= 0x20 )
  {
    v19[0] = *(_QWORD *)(v4 + 744);
    v19[1] = *(_QWORD *)(v4 + 736);
    v6 = 0LL;
    v7 = v5 + 2;
    while ( 1 )
    {
      v8 = *(unsigned __int8 *)(v6 + *(_QWORD *)this + 864);
      v9 = *(_DWORD *)(*(_QWORD *)this + 848LL);
      if ( v8 < v9 )
        break;
      v11 = v8 - v9;
      if ( (unsigned int)v11 < 2 )
      {
        _mm_lfence();
        v10 = v19[v11];
LABEL_8:
        if ( v10 )
        {
          if ( a2 )
          {
            v12 = *(_QWORD *)(*(_QWORD *)this + 728LL);
            if ( v12 )
            {
              if ( *(_QWORD *)(v12 + 112) < *(_QWORD *)(v10 + 112) )
                RFONTOBJ::vLockSystemTTGlyphCache(this);
            }
          }
          GreAcquireSemaphore(*(_QWORD *)(v10 + 528));
          v20 = 0LL;
          RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v20);
        }
      }
      ++v6;
      if ( !--v7 )
      {
        if ( a2 )
          RFONTOBJ::vLockSystemTTGlyphCache(this);
        return;
      }
    }
    _mm_lfence();
    v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 752LL) + 8LL * *(unsigned __int8 *)(v6 + *(_QWORD *)this + 864));
    goto LABEL_8;
  }
  if ( a2 )
    RFONTOBJ::vLockSystemTTGlyphCache(this);
  v13 = *(_QWORD *)(*(_QWORD *)this + 736LL);
  if ( v13 )
  {
    GreAcquireSemaphore(*(_QWORD *)(v13 + 528));
    v21 = 0LL;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v21);
  }
  v14 = *(_QWORD *)(*(_QWORD *)this + 744LL);
  if ( v14 )
  {
    GreAcquireSemaphore(*(_QWORD *)(v14 + 528));
    v22 = 0LL;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v22);
  }
  v15 = *(_QWORD *)this;
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(*(_QWORD *)this + 848LL); i = (unsigned int)(i + 1) )
  {
    v17 = *(_QWORD *)(*(_QWORD *)(v15 + 752) + 8 * i);
    if ( v17 )
    {
      GreAcquireSemaphore(*(_QWORD *)(v17 + 528));
      v18 = 0LL;
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v18);
    }
    v15 = *(_QWORD *)this;
  }
}
