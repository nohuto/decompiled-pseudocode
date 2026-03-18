/*
 * XREFs of GreGetGlyphIndicesW @ 0x1C0117730
 * Callers:
 *     NtGdiGetGlyphIndicesWInternal @ 0x1C0117590 (NtGdiGetGlyphIndicesWInternal.c)
 *     GreGetCharacterPlacementW @ 0x1C0290D00 (GreGetCharacterPlacementW.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C002D6C4 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C002EAC0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ?vXlatGlyphArray@RFONTOBJ@@QEAAXPEAGIPEAKKH@Z @ 0x1C002F568 (-vXlatGlyphArray@RFONTOBJ@@QEAAXPEAGIPEAKKH@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004A058 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C004A0A0 (--1DCOBJ@@QEAA@XZ.c)
 *     PALLOCMEM2 @ 0x1C0060508 (PALLOCMEM2.c)
 */

__int64 __fastcall GreGetGlyphIndicesW(
        HDC a1,
        unsigned __int16 *a2,
        unsigned int a3,
        _WORD *a4,
        unsigned int a5,
        int a6)
{
  _WORD *v7; // r14
  unsigned int v8; // esi
  unsigned __int64 v9; // r12
  unsigned __int64 v10; // rdi
  int v11; // eax
  struct _FD_XFORM *v12; // rbx
  __int64 v13; // rcx
  __int16 v14; // r13
  unsigned int *v15; // rax
  unsigned int *v16; // r15
  __int64 v17; // rdx
  __int64 v18; // r8
  int v19; // eax
  unsigned __int64 v20; // rax
  __int16 v21; // cx
  unsigned __int64 v22; // rcx
  unsigned int *v24; // [rsp+30h] [rbp-78h]
  _QWORD v25[14]; // [rsp+38h] [rbp-70h] BYREF
  struct _FD_XFORM *v27; // [rsp+C8h] [rbp+20h] BYREF

  v7 = a4;
  v8 = -1;
  v9 = (unsigned __int64)&a4[a3];
  DCOBJ::DCOBJ((DCOBJ *)v25, a1);
  v10 = 0LL;
  if ( v25[0] )
  {
    v11 = RFONTOBJ::bInit(&v27, (struct XDCOBJ *)v25, 0, 2u);
    v12 = v27;
    if ( v11 )
      GreAcquireSemaphore(*(_QWORD *)&v27[33].eXX);
    if ( v12 )
    {
      v13 = *(_QWORD *)(*(_QWORD *)&v12[7].eXX + 32LL);
      v14 = *(unsigned __int8 *)(v13 + 108);
      if ( a3 )
      {
        v15 = (unsigned int *)PALLOCMEM2(4 * a3, 2037147463LL, 1);
        v24 = v15;
        v16 = v15;
        if ( v15 )
        {
          RFONTOBJ::vXlatGlyphArray((RFONTOBJ *)&v27, a2, a3, v15, a5, a6);
          v19 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)&v12[7].eXX + 16LL) + 4LL);
          if ( (v19 & 6) != 0 )
          {
            if ( (v19 & 2) != 0 && v14 )
            {
              v20 = (v9 - (unsigned __int64)v7 + 1) >> 1;
              if ( (unsigned __int64)v7 > v9 )
                v20 = 0LL;
              if ( v20 )
              {
                v17 = a5;
                do
                {
                  v21 = *(_WORD *)v16;
                  v18 = 0xFFFFLL;
                  if ( *(_WORD *)v16 != 0xFFFF || (_DWORD)v17 != 1 )
                    v21 += v14;
                  *v7 = v21;
                  ++v16;
                  ++v7;
                  ++v10;
                }
                while ( v10 < v20 );
              }
            }
            else
            {
              v22 = (v9 - (unsigned __int64)v7 + 1) >> 1;
              if ( (unsigned __int64)v7 > v9 )
                v22 = 0LL;
              if ( v22 )
              {
                do
                {
                  ++v10;
                  *v7++ = *(_WORD *)v16++;
                }
                while ( v10 < v22 );
              }
            }
            v8 = a3;
          }
          Win32FreePool(v24, v17, v18);
        }
      }
      else if ( *(_DWORD *)(v13 + 4) <= 8u )
      {
        v8 = 0;
      }
      else
      {
        v8 = *(_DWORD *)(v13 + 200);
      }
    }
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v27);
  }
  DCOBJ::~DCOBJ((DCOBJ *)v25);
  return v8;
}
