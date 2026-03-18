/*
 * XREFs of ?vFindExtent@FLOODBM@@QEAAXJAEAJ0@Z @ 0x1C012DB6C
 * Callers:
 *     ?bSearchAllSpans@FLOODBM@@QEAAHJJAEAJ0PEAEAEAVSTACKOBJ@@PEAVSCANLINE@@@Z @ 0x1C012DE38 (-bSearchAllSpans@FLOODBM@@QEAAHJJAEAJ0PEAEAEAVSTACKOBJ@@PEAVSCANLINE@@@Z.c)
 *     NtGdiExtFloodFill @ 0x1C012E0C0 (NtGdiExtFloodFill.c)
 * Callees:
 *     ?iColorGet@FLOODBM@@QEAAKJ@Z @ 0x1C012E05C (-iColorGet@FLOODBM@@QEAAKJ@Z.c)
 */

void __fastcall FLOODBM::vFindExtent(FLOODBM *this, int a2, int *a3, int *a4)
{
  int v4; // ebx
  int v5; // edi
  int v6; // r11d
  FLOODBM *v9; // r10
  int v10; // esi
  int v11; // r8d
  int v12; // edi
  int v13; // r9d
  int v14; // edx
  int v15; // esi
  int v16; // edi
  int v17; // esi
  int v18; // edx
  unsigned int v19; // edx

  v4 = a2 - 1;
  v5 = *((_DWORD *)this + 1);
  v6 = a2 + 1;
  v9 = this;
  if ( *((_DWORD *)this + 6) )
  {
    if ( v4 >= v5 )
    {
      v10 = *((_DWORD *)this + 5);
      do
      {
        if ( FLOODBM::iColorGet(v9, v4) != v10 )
          break;
        --v4;
      }
      while ( v4 >= v5 );
    }
    v11 = *((_DWORD *)v9 + 3);
    if ( v6 < v11 )
    {
      v12 = *(_DWORD *)v9;
      v13 = 3 * v6;
      while ( 1 )
      {
        switch ( v12 )
        {
          case 1:
            v14 = (*(unsigned __int8 *)(((__int64)v6 >> 3) + *((_QWORD *)v9 + 4)) >> (7 - (v6 & 7))) & 1;
            break;
          case 2:
            v19 = *(unsigned __int8 *)(((__int64)v6 >> 1) + *((_QWORD *)v9 + 4));
            if ( (v6 & 1) != 0 )
              v14 = v19 & 0xF;
            else
              v14 = v19 >> 4;
            break;
          case 3:
            v14 = *(unsigned __int8 *)(v6 + *((_QWORD *)v9 + 4));
            break;
          default:
            switch ( v12 )
            {
              case 4:
                v18 = *(unsigned __int16 *)(2 * v6 + *((_QWORD *)v9 + 4));
                break;
              case 5:
                v14 = *(unsigned __int8 *)(*((_QWORD *)v9 + 4) + v13) | (*(unsigned __int16 *)(*((_QWORD *)v9 + 4)
                                                                                             + v13
                                                                                             + 1LL) << 8);
                goto LABEL_13;
              case 6:
                v18 = *(_DWORD *)(4 * v6 + *((_QWORD *)v9 + 4));
                break;
              default:
                v14 = 0;
                goto LABEL_13;
            }
            v14 = *((_DWORD *)v9 + 10) & v18;
            break;
        }
LABEL_13:
        if ( v14 == *((_DWORD *)v9 + 5) )
        {
          ++v6;
          v13 += 3;
          if ( v6 < v11 )
            continue;
        }
        break;
      }
    }
  }
  else
  {
    if ( v4 >= v5 )
    {
      v15 = *((_DWORD *)this + 5);
      do
      {
        if ( FLOODBM::iColorGet(v9, v4) == v15 )
          break;
        --v4;
      }
      while ( v4 >= v5 );
    }
    v16 = *((_DWORD *)v9 + 3);
    if ( v6 < v16 )
    {
      v17 = *((_DWORD *)v9 + 5);
      do
      {
        if ( FLOODBM::iColorGet(v9, v6) == v17 )
          break;
        ++v6;
      }
      while ( v6 < v16 );
    }
  }
  *a3 = v4 + 1;
  *a4 = v6;
}
