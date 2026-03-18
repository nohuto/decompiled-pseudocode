/*
 * XREFs of NtGdiGetWidthTable @ 0x1C002F570
 * Callers:
 *     <none>
 * Callees:
 *     ?bGetWidthTable@RFONTOBJ@@QEAAHAEAVXDCOBJ@@KPEAGK1@Z @ 0x1C002A200 (-bGetWidthTable@RFONTOBJ@@QEAAHAEAVXDCOBJ@@KPEAGK1@Z.c)
 *     ?bGetWidthData@RFONTOBJ@@QEAAHPEAU_WIDTHDATA@@AEAVXDCOBJ@@@Z @ 0x1C002A57C (-bGetWidthData@RFONTOBJ@@QEAAHPEAU_WIDTHDATA@@AEAVXDCOBJ@@@Z.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C002B2F0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C002F3C8 (--1RFONTOBJ@@QEAA@XZ.c)
 *     memmove @ 0x1C015D180 (memmove.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025E20C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall NtGdiGetWidthTable(
        HDC a1,
        unsigned int a2,
        char *Src,
        unsigned int a4,
        volatile void *Address,
        unsigned __int64 a6,
        unsigned __int64 a7)
{
  __int64 v7; // rsi
  unsigned int WidthTable; // r14d
  FLOATL *v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned __int16 *v14; // rbx
  unsigned __int16 *v15; // rdi
  size_t v16; // r8
  FLOATL eXX; // edx
  unsigned __int16 v18; // dx
  __int64 v19; // rcx
  unsigned __int16 *v20; // rdi
  _BYTE *v21; // rdx
  struct _FD_XFORM *v23; // [rsp+30h] [rbp-88h] BYREF
  unsigned __int16 *v24; // [rsp+38h] [rbp-80h]
  unsigned __int16 *v25; // [rsp+40h] [rbp-78h]
  __int128 v26; // [rsp+48h] [rbp-70h] BYREF
  _QWORD v27[7]; // [rsp+58h] [rbp-60h] BYREF
  FLOATL eYX; // [rsp+D8h] [rbp+20h]

  v7 = a4;
  WidthTable = -1;
  eYX = NAN;
  DCOBJ::DCOBJ((DCOBJ *)v27, a1);
  if ( !(_DWORD)v7 || !v27[0] )
    goto LABEL_41;
  v14 = 0LL;
  v24 = 0LL;
  v15 = 0LL;
  if ( (unsigned int)v7 <= 0x9C4000 )
  {
    v14 = (unsigned __int16 *)AllocFreeTmpBuffer((unsigned int)(4 * v7));
    v24 = v14;
  }
  if ( v14 )
  {
    v16 = 2 * v7;
    v15 = &v14[v7];
    v25 = v15;
    if ( 2 * v7 )
    {
      if ( ((unsigned __int8)Src & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)&Src[v16] > W32UserProbeAddress || &Src[v16] < Src )
        *W32UserProbeAddress = 0;
    }
    memmove(&v14[v7], Src, v16);
  }
  else
  {
    LODWORD(v7) = 0;
  }
  if ( (_DWORD)v7 )
  {
    if ( (unsigned int)RFONTOBJ::bInit(&v23, (struct XDCOBJ *)v27, 0, 2u) )
      GreAcquireSemaphore(*(_QWORD *)&v23[33].eXX);
    if ( !v23 )
      goto LABEL_28;
    eYX = v23[30].eYX;
    if ( LODWORD(v23[21].eXX) >= 0xFFF )
      goto LABEL_28;
    eXX = v23[19].eXX;
    if ( eXX == 0.0 )
    {
      WidthTable = RFONTOBJ::bGetWidthTable((RFONTOBJ *)&v23, (struct XDCOBJ *)v27, a2, v15, v7, v14);
      if ( WidthTable == -1 )
      {
LABEL_28:
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v23);
        goto LABEL_29;
      }
    }
    else
    {
      v18 = 16 * LOWORD(eXX);
      v19 = (unsigned int)v7;
      v20 = v14;
      while ( v19 )
      {
        *v20++ = v18;
        --v19;
      }
      WidthTable = 1;
    }
    if ( !(unsigned int)RFONTOBJ::bGetWidthData((RFONTOBJ *)&v23, (struct _WIDTHDATA *)&v26, (struct XDCOBJ *)v27) )
      WidthTable = -1;
    goto LABEL_28;
  }
LABEL_29:
  if ( WidthTable != -1 )
  {
    ProbeForWrite(Address, 2LL * (unsigned int)v7, 2u);
    memmove((void *)Address, v14, 2LL * (unsigned int)v7);
    if ( a6 )
    {
      if ( (a6 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v21 = (_BYTE *)a6;
      if ( a6 >= W32UserProbeAddress )
        v21 = (_BYTE *)W32UserProbeAddress;
      *v21 = *v21;
      v21[15] = v21[15];
      *(_OWORD *)a6 = v26;
    }
    v11 = (FLOATL *)a7;
    if ( a7 >= W32UserProbeAddress )
      v11 = (FLOATL *)W32UserProbeAddress;
    *v11 = eYX;
  }
  if ( v14 )
    FreeTmpBuffer(v14, v11, v12, v13);
LABEL_41:
  DCOBJ::~DCOBJ((DCOBJ *)v27);
  return WidthTable;
}
