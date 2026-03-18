/*
 * XREFs of ?bSetHTSrcSurfInfo@@YAHPEAU_SURFOBJ@@VXEPALOBJ@@PEAU_HTSURFACEINFO@@PEAU_XLATEOBJ@@@Z @ 0x1C00F0FD8
 * Callers:
 *     EngHTBlt @ 0x1C00F2408 (EngHTBlt.c)
 * Callees:
 *     ?bIsMonochrome@XEPALOBJ@@QEAAHXZ @ 0x1C003A79C (-bIsMonochrome@XEPALOBJ@@QEAAHXZ.c)
 *     ?ulGetEntries@XEPALOBJ@@QEAAKKKPEAUtagPALETTEENTRY@@H@Z @ 0x1C003A7BC (-ulGetEntries@XEPALOBJ@@QEAAKKKPEAUtagPALETTEENTRY@@H@Z.c)
 */

__int64 __fastcall bSetHTSrcSurfInfo(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // r14d
  char v8; // si
  unsigned int v9; // ecx
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rbx
  char v13; // al
  __int64 result; // rax
  __int128 v15; // [rsp+30h] [rbp-30h]
  __int128 v16; // [rsp+40h] [rbp-20h]
  __int64 v17; // [rsp+50h] [rbp-10h]
  __int64 v18; // [rsp+98h] [rbp+38h] BYREF

  v18 = a2;
  v5 = *(_DWORD *)(a2 + 24) & 2;
  switch ( *(_DWORD *)(a1 + 72) )
  {
    case 1:
      v9 = 2;
LABEL_20:
      v8 = 4;
      goto LABEL_7;
    case 2:
      v9 = 16;
      goto LABEL_20;
    case 3:
      v9 = 256;
      goto LABEL_20;
  }
  if ( *(_DWORD *)(a1 + 72) != 4 )
  {
    if ( *(_DWORD *)(a1 + 72) == 5 )
    {
      v8 = 3;
      v9 = 0;
      goto LABEL_7;
    }
    if ( *(_DWORD *)(a1 + 72) != 6 )
      return 0LL;
    v9 = 3;
    v5 = 1;
    goto LABEL_20;
  }
  v8 = 2;
  v9 = 3;
  v5 = 1;
LABEL_7:
  BYTE10(v15) = *(_BYTE *)(a1 + 72);
  HIDWORD(v15) = *(_DWORD *)(a1 + 32);
  LODWORD(v16) = *(_DWORD *)(a1 + 36);
  DWORD1(v16) = *(_DWORD *)(a1 + 64);
  *((_QWORD *)&v16 + 1) = *(_QWORD *)(a1 + 56);
  *(_QWORD *)&v15 = a1;
  BYTE11(v15) = 4;
  WORD4(v15) = (*(_BYTE *)(a1 + 78) & 1) != 0;
  v10 = 3LL;
  if ( !v5 )
    v10 = *(unsigned int *)(a2 + 28);
  if ( (unsigned int)v10 > v9 )
    v10 = v9;
  if ( 4 * v10 == -24 )
  {
    v11 = 0LL;
    v17 = 0LL;
  }
  else
  {
    v17 = AllocThreadBufferWithTag((unsigned int)(4 * v10 + 24), 1668573255LL, 0LL);
    v11 = v17;
  }
  if ( !v11 )
  {
    EngSetLastError(8u);
    return 0LL;
  }
  *(_BYTE *)(v11 + 3) = 0;
  v12 = v11 + 24;
  *(_QWORD *)(v11 + 16) = v11 + 24;
  *(_BYTE *)v11 = 0;
  *(_DWORD *)(v11 + 4) = 0;
  v13 = 0;
  if ( (*(_BYTE *)(v18 + 24) & 8) != 0 )
    v13 = 4;
  *(_BYTE *)(v11 + 2) = v8;
  *(_BYTE *)(v11 + 3) = v13;
  if ( v5 )
  {
    *(_BYTE *)(v11 + 1) = 0;
    *(_DWORD *)(v11 + 8) = 3;
    if ( (*(_DWORD *)(v18 + 24) & 2) != 0 )
    {
      *(_DWORD *)v12 = **(_DWORD **)(v18 + 120);
      *(_DWORD *)(v11 + 28) = *(_DWORD *)(*(_QWORD *)(v18 + 120) + 4LL);
      *(_DWORD *)(v11 + 32) = *(_DWORD *)(*(_QWORD *)(v18 + 120) + 8LL);
    }
    else
    {
      *(_DWORD *)(v11 + 28) = 65280;
      if ( (*(_DWORD *)(v18 + 24) & 8) != 0 )
      {
        *(_DWORD *)v12 = 16711680;
        *(_DWORD *)(v11 + 32) = 255;
      }
      else
      {
        *(_DWORD *)v12 = 255;
        *(_DWORD *)(v11 + 32) = 16711680;
      }
    }
  }
  else
  {
    *(_BYTE *)(v11 + 1) = 1;
    *(_DWORD *)(v11 + 8) = v10;
    *(_DWORD *)(v11 + 4) = 255;
    if ( (_DWORD)v10 )
    {
      if ( (unsigned int)XEPALOBJ::bIsMonochrome((XEPALOBJ *)&v18) && a4 && (*(_DWORD *)(a4 + 76) & 0x100) != 0 )
      {
        *(_DWORD *)v12 = ulColorRefToRGB(*(_QWORD *)(a4 + 48), *(_QWORD *)(a4 + 56), *(unsigned int *)(a4 + 28));
        *(_DWORD *)(v12 + 4) = ulColorRefToRGB(*(_QWORD *)(a4 + 48), *(_QWORD *)(a4 + 56), *(unsigned int *)(a4 + 32));
      }
      else
      {
        XEPALOBJ::ulGetEntries((XEPALOBJ *)&v18, 0, v10, (struct tagPALETTEENTRY *)v12, 0);
      }
    }
  }
  result = 1LL;
  *(_OWORD *)a3 = v15;
  *(_OWORD *)(a3 + 16) = v16;
  *(_QWORD *)(a3 + 32) = v17;
  return result;
}
