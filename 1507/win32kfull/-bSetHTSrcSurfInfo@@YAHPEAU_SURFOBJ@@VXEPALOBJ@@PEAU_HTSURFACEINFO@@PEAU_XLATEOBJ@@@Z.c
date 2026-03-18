/*
 * XREFs of ?bSetHTSrcSurfInfo@@YAHPEAU_SURFOBJ@@VXEPALOBJ@@PEAU_HTSURFACEINFO@@PEAU_XLATEOBJ@@@Z @ 0x1C00FCA5C
 * Callers:
 *     EngHTBlt @ 0x1C00A30B4 (EngHTBlt.c)
 * Callees:
 *     ?bIsMonochrome@XEPALOBJ@@QEAAHXZ @ 0x1C0013B04 (-bIsMonochrome@XEPALOBJ@@QEAAHXZ.c)
 *     ?ulGetEntries@XEPALOBJ@@QEAAKKKPEAUtagPALETTEENTRY@@H@Z @ 0x1C0013B24 (-ulGetEntries@XEPALOBJ@@QEAAKKKPEAUtagPALETTEENTRY@@H@Z.c)
 */

__int64 __fastcall bSetHTSrcSurfInfo(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // r14d
  char v8; // si
  unsigned int v9; // ecx
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rbx
  bool v13; // zf
  char v14; // al
  __int64 result; // rax
  __int128 v16; // [rsp+30h] [rbp-30h]
  __int128 v17; // [rsp+40h] [rbp-20h]
  __int64 v18; // [rsp+50h] [rbp-10h]
  __int64 v19; // [rsp+98h] [rbp+38h] BYREF

  v19 = a2;
  v5 = *(_DWORD *)(a2 + 24) & 2;
  switch ( *(_DWORD *)(a1 + 72) )
  {
    case 1:
      v9 = 2;
LABEL_21:
      v8 = 4;
      goto LABEL_7;
    case 2:
      v9 = 16;
      goto LABEL_21;
    case 3:
      v9 = 256;
      goto LABEL_21;
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
    goto LABEL_21;
  }
  v8 = 2;
  v9 = 3;
  v5 = 1;
LABEL_7:
  BYTE10(v16) = *(_BYTE *)(a1 + 72);
  HIDWORD(v16) = *(_DWORD *)(a1 + 32);
  LODWORD(v17) = *(_DWORD *)(a1 + 36);
  DWORD1(v17) = *(_DWORD *)(a1 + 64);
  *((_QWORD *)&v17 + 1) = *(_QWORD *)(a1 + 56);
  *(_QWORD *)&v16 = a1;
  BYTE11(v16) = 4;
  WORD4(v16) = (*(_BYTE *)(a1 + 78) & 1) != 0;
  v10 = 3LL;
  if ( !v5 )
    v10 = *(unsigned int *)(a2 + 28);
  if ( (unsigned int)v10 > v9 )
    v10 = v9;
  if ( 4 * v10 == -24 )
  {
    v11 = 0LL;
    v18 = 0LL;
  }
  else
  {
    v18 = AllocThreadBufferWithTag((unsigned int)(4 * v10 + 24), 1668573255LL, 0LL);
    v11 = v18;
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
  v13 = (*(_BYTE *)(v19 + 24) & 8) == 0;
  v14 = 0;
  *(_BYTE *)(v11 + 2) = v8;
  if ( !v13 )
    v14 = 4;
  *(_BYTE *)(v11 + 3) = v14;
  if ( v5 )
  {
    *(_BYTE *)(v11 + 1) = 0;
    *(_DWORD *)(v11 + 8) = 3;
    if ( (*(_DWORD *)(v19 + 24) & 2) != 0 )
    {
      *(_DWORD *)v12 = **(_DWORD **)(v19 + 128);
      *(_DWORD *)(v11 + 28) = *(_DWORD *)(*(_QWORD *)(v19 + 128) + 4LL);
      *(_DWORD *)(v11 + 32) = *(_DWORD *)(*(_QWORD *)(v19 + 128) + 8LL);
    }
    else
    {
      *(_DWORD *)(v11 + 28) = 65280;
      if ( (*(_DWORD *)(v19 + 24) & 8) != 0 )
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
      if ( (unsigned int)XEPALOBJ::bIsMonochrome((XEPALOBJ *)&v19) && a4 && (*(_DWORD *)(a4 + 76) & 0x100) != 0 )
      {
        *(_DWORD *)v12 = ulColorRefToRGB(*(_QWORD *)(a4 + 48), *(_QWORD *)(a4 + 56), *(unsigned int *)(a4 + 28));
        *(_DWORD *)(v12 + 4) = ulColorRefToRGB(*(_QWORD *)(a4 + 48), *(_QWORD *)(a4 + 56), *(unsigned int *)(a4 + 32));
      }
      else
      {
        XEPALOBJ::ulGetEntries((XEPALOBJ *)&v19, 0, v10, (struct tagPALETTEENTRY *)v12, 0);
      }
    }
  }
  result = 1LL;
  *(_OWORD *)a3 = v16;
  *(_OWORD *)(a3 + 16) = v17;
  *(_QWORD *)(a3 + 32) = v18;
  return result;
}
