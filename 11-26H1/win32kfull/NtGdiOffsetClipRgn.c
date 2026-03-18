/*
 * XREFs of NtGdiOffsetClipRgn @ 0x140236900
 * Callers:
 *     <none>
 * Callees:
 *     ?bTightenRao@DC@@QEAAHXZ @ 0x14006CBDC (-bTightenRao@DC@@QEAAHXZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x14006DAC0 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14006EFE0 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?get_sizeScan@REGION_CORE@@IEBAKXZ @ 0x1400AC7D8 (-get_sizeScan@REGION_CORE@@IEBAKXZ.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1400ADDB8 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400AFE30 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ?prgnVisSnap@DC@@QEBAPEAVREGION@@XZ @ 0x1400BB96C (-prgnVisSnap@DC@@QEBAPEAVREGION@@XZ.c)
 */

__int64 __fastcall NtGdiOffsetClipRgn(HDC a1, LONG a2, LONG a3)
{
  unsigned int v5; // ebx
  DC *v7; // rax
  __int64 v8; // rcx
  struct REGION *v9; // rax
  unsigned int sizeScan; // eax
  struct _POINTL v11; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v12; // [rsp+30h] [rbp-D8h] BYREF
  _QWORD v13[2]; // [rsp+38h] [rbp-D0h] BYREF
  DC *v14[14]; // [rsp+48h] [rbp-C0h] BYREF
  _BYTE v15[160]; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v16; // [rsp+180h] [rbp+78h] BYREF

  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v14, a1);
  v5 = 0;
  if ( v14[0] )
  {
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v15);
    if ( !DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v15, (struct XDCOBJ *)v14, 1) )
    {
LABEL_3:
      DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v15);
      APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v14);
      return v5;
    }
    v7 = v14[0];
    v8 = *((_QWORD *)v14[0] + 20);
    v12 = v8;
    if ( !v8 )
    {
      v5 = 2;
      goto LABEL_3;
    }
    if ( *(_DWORD *)(v8 + 76) > 1u )
    {
      sizeScan = REGION_CORE::get_sizeScan((REGION_CORE *)(v8 + 24));
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v16, sizeScan);
      if ( !v16 )
      {
        EngSetLastError(8u);
        goto LABEL_3;
      }
      RGNOBJ::vCopy((RGNOBJ *)&v16, (struct RGNOBJ *)&v12);
      ++*(_DWORD *)(v16 + 76);
      --*(_DWORD *)(v12 + 76);
      *((_QWORD *)v14[0] + 20) = v16;
      v7 = v14[0];
    }
    v11.x = a2;
    v11.y = a3;
    DC::QuickInitXform(v7, v13, 2147484164LL);
    if ( ((*(_DWORD *)(v13[0] + 32LL) & 2) != 0
       || EXFORMOBJ::bXform((EXFORMOBJ *)v13, (const struct _VECTORL *)&v11, (struct _VECTORL *)&v11, 1uLL))
      && RGNOBJ::bOffset((RGNOBJ *)&v12, &v11) )
    {
      DC::bTightenRao(v14[0]);
      v9 = DC::prgnVisSnap(v14[0]);
      DC::vUpdate_VisRect(v14[0], v14[2], v9);
      v5 = RGNOBJ::iComplexity((RGNOBJ *)&v12);
      goto LABEL_3;
    }
    EngSetLastError(0x3EBu);
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v15);
  }
  else
  {
    EngSetLastError(6u);
  }
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v14);
  return 0LL;
}
