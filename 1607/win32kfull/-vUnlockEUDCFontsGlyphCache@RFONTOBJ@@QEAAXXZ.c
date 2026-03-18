/*
 * XREFs of ?vUnlockEUDCFontsGlyphCache@RFONTOBJ@@QEAAXXZ @ 0x1C029B4FC
 * Callers:
 *     ?dtHelper@RFONTOBJ@@QEAAXH@Z @ 0x1C002CCA8 (-dtHelper@RFONTOBJ@@QEAAXH@Z.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C002D6C4 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vReleaseCache@RFONTOBJ@@QEAAXXZ @ 0x1C002D6FC (-vReleaseCache@RFONTOBJ@@QEAAXXZ.c)
 */

void __fastcall RFONTOBJ::vUnlockEUDCFontsGlyphCache(RFONTOBJ *this, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  int v6; // eax
  __int64 i; // rdi
  __int64 v8; // [rsp+30h] [rbp+10h] BYREF

  v4 = *(_QWORD *)this;
  if ( (*(_DWORD *)(v4 + 720) & 0x180) == 0x80 )
  {
    v5 = *(_QWORD *)(v4 + 728);
    if ( v5 )
    {
      if ( (unsigned int)GreIsSemaphoreOwnedByCurrentThread(*(_QWORD *)(v5 + 528)) )
      {
        v8 = *(_QWORD *)(*(_QWORD *)this + 728LL);
        RFONTOBJ::vReleaseCache((RFONTOBJ *)&v8, a2, a3);
        *(_DWORD *)(*(_QWORD *)this + 720LL) &= ~0x80u;
        v8 = 0LL;
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v8);
      }
    }
  }
  if ( (*(_DWORD *)(*(_QWORD *)this + 720LL) & 0x101) == 1 )
  {
    v6 = *(_DWORD *)(*(_QWORD *)this + 848LL) - 1;
    for ( i = v6; i >= 0; --i )
    {
      if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 752LL) + 8 * i) )
      {
        v8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 752LL) + 8 * i);
        RFONTOBJ::vReleaseCache((RFONTOBJ *)&v8, a2, a3);
        v8 = 0LL;
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v8);
      }
    }
    if ( *(_QWORD *)(*(_QWORD *)this + 744LL) )
    {
      v8 = *(_QWORD *)(*(_QWORD *)this + 744LL);
      RFONTOBJ::vReleaseCache((RFONTOBJ *)&v8, a2, a3);
      v8 = 0LL;
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v8);
    }
    if ( *(_QWORD *)(*(_QWORD *)this + 736LL) )
    {
      v8 = *(_QWORD *)(*(_QWORD *)this + 736LL);
      RFONTOBJ::vReleaseCache((RFONTOBJ *)&v8, a2, a3);
      v8 = 0LL;
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v8);
    }
  }
}
