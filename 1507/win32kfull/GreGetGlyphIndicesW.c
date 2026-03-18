/*
 * XREFs of GreGetGlyphIndicesW @ 0x1C00374E4
 * Callers:
 *     NtGdiGetGlyphIndicesWInternal @ 0x1C00376C0 (NtGdiGetGlyphIndicesWInternal.c)
 *     GreGetCharacterPlacementW @ 0x1C02921F0 (GreGetCharacterPlacementW.c)
 * Callees:
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C002B2F0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ?vXlatGlyphArray@RFONTOBJ@@QEAAXPEAGIPEAKKH@Z @ 0x1C002BF60 (-vXlatGlyphArray@RFONTOBJ@@QEAAXPEAGIPEAKKH@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C002F3C8 (--1RFONTOBJ@@QEAA@XZ.c)
 *     PALLOCMEM2 @ 0x1C0033FC4 (PALLOCMEM2.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025E20C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
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
  int v17; // eax
  unsigned __int64 v18; // rax
  unsigned int v19; // edx
  __int16 v20; // cx
  unsigned __int64 v21; // rcx
  unsigned int *v23; // [rsp+30h] [rbp-78h]
  _QWORD v24[14]; // [rsp+38h] [rbp-70h] BYREF
  struct _FD_XFORM *v26; // [rsp+C8h] [rbp+20h] BYREF

  v7 = a4;
  v8 = -1;
  v9 = (unsigned __int64)&a4[a3];
  DCOBJ::DCOBJ((DCOBJ *)v24, a1);
  v10 = 0LL;
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
              v18 = (v9 - (unsigned __int64)v7 + 1) >> 1;
              if ( (unsigned __int64)v7 > v9 )
                v18 = 0LL;
              if ( v18 )
              {
                v19 = a5;
                do
                {
                  v20 = *(_WORD *)v16;
                  if ( *(_WORD *)v16 != 0xFFFF || v19 != 1 )
                    v20 += v14;
                  *v7 = v20;
                  ++v16;
                  ++v7;
                  ++v10;
                }
                while ( v10 < v18 );
              }
            }
            else
            {
              v21 = (v9 - (unsigned __int64)v7 + 1) >> 1;
              if ( (unsigned __int64)v7 > v9 )
                v21 = 0LL;
              if ( v21 )
              {
                do
                {
                  ++v10;
                  *v7++ = *(_WORD *)v16++;
                }
                while ( v10 < v21 );
              }
            }
            v8 = a3;
          }
          Win32FreePool(v23);
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
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v26);
  }
  DCOBJ::~DCOBJ((DCOBJ *)v24);
  return v8;
}
