/*
 * XREFs of GreGetGlyphIndicesW @ 0x1C00EEB70
 * Callers:
 *     NtGdiGetGlyphIndicesWInternal @ 0x1C00EE9D0 (NtGdiGetGlyphIndicesWInternal.c)
 *     GreGetCharacterPlacementW @ 0x1C0291D38 (GreGetCharacterPlacementW.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C001A9C0 (PALLOCMEM2.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C0023A60 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ?vXlatGlyphArray@RFONTOBJ@@QEAAXPEAGIPEAKKH@Z @ 0x1C00246E0 (-vXlatGlyphArray@RFONTOBJ@@QEAAXPEAGIPEAKKH@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0027184 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002DA58 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C002DA80 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 */

__int64 __fastcall GreGetGlyphIndicesW(
        HDC a1,
        unsigned __int16 *a2,
        unsigned int a3,
        _WORD *a4,
        unsigned int a5,
        int a6)
{
  unsigned __int64 v7; // rdi
  _WORD *v8; // r14
  unsigned int v9; // esi
  unsigned __int64 v10; // r12
  int v11; // eax
  struct _FD_XFORM *v12; // rbx
  __int64 v13; // rcx
  __int16 v14; // r13
  unsigned int *v15; // rax
  unsigned int *v16; // r15
  int v17; // eax
  unsigned __int64 v18; // rax
  unsigned int v19; // edx
  __int16 v20; // cx
  unsigned __int64 v22; // rcx
  unsigned int *v23; // [rsp+30h] [rbp-58h]
  _QWORD v24[10]; // [rsp+38h] [rbp-50h] BYREF
  struct _FD_XFORM *v26; // [rsp+A8h] [rbp+20h] BYREF

  v7 = 0LL;
  v8 = a4;
  v24[1] = 0LL;
  v9 = -1;
  v10 = (unsigned __int64)&a4[a3];
  XDCOBJ::vLock((XDCOBJ *)v24, a1);
  if ( v24[0] )
  {
    v11 = RFONTOBJ::bInit(&v26, (struct XDCOBJ *)v24, 0, 2u);
    v12 = v26;
    if ( v11 )
      GreAcquireSemaphore(*(_QWORD *)&v26[33].eXX);
    if ( v12 )
    {
      v13 = *(_QWORD *)(*(_QWORD *)&v12[7].eXX + 32LL);
      v14 = *(unsigned __int8 *)(v13 + 108);
      if ( a3 )
      {
        v15 = (unsigned int *)PALLOCMEM2(4 * a3, 2037147463LL, 1);
        v23 = v15;
        v16 = v15;
        if ( v15 )
        {
          RFONTOBJ::vXlatGlyphArray((RFONTOBJ *)&v26, a2, a3, v15, a5, a6);
          v17 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)&v12[7].eXX + 16LL) + 4LL);
          if ( (v17 & 6) != 0 )
          {
            if ( (v17 & 2) != 0 && v14 )
            {
              v18 = (v10 - (unsigned __int64)v8 + 1) >> 1;
              if ( (unsigned __int64)v8 > v10 )
                v18 = 0LL;
              if ( v18 )
              {
                v19 = a5;
                do
                {
                  v20 = *(_WORD *)v16;
                  if ( *(_WORD *)v16 != 0xFFFF || v19 != 1 )
                    v20 += v14;
                  *v8 = v20;
                  ++v16;
                  ++v8;
                  ++v7;
                }
                while ( v7 < v18 );
              }
            }
            else
            {
              v22 = (v10 - (unsigned __int64)v8 + 1) >> 1;
              if ( (unsigned __int64)v8 > v10 )
                v22 = 0LL;
              if ( v22 )
              {
                do
                {
                  ++v7;
                  *v8++ = *(_WORD *)v16++;
                }
                while ( v7 < v22 );
              }
            }
            v9 = a3;
          }
          Win32FreePool(v23);
        }
      }
      else if ( *(_DWORD *)(v13 + 4) <= 8u )
      {
        v9 = 0;
      }
      else
      {
        v9 = *(_DWORD *)(v13 + 200);
      }
    }
    XDCOBJ::vUnlockFast((XDCOBJ *)v24);
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v26);
  }
  return v9;
}
