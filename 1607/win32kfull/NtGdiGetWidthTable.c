/*
 * XREFs of NtGdiGetWidthTable @ 0x1C0109C80
 * Callers:
 *     <none>
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C002D6C4 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?bGetWidthData@RFONTOBJ@@QEAAHPEAU_WIDTHDATA@@AEAVXDCOBJ@@@Z @ 0x1C002DA64 (-bGetWidthData@RFONTOBJ@@QEAAHPEAU_WIDTHDATA@@AEAVXDCOBJ@@@Z.c)
 *     ?bGetWidthTable@RFONTOBJ@@QEAAHAEAVXDCOBJ@@KPEAGK1@Z @ 0x1C002DB58 (-bGetWidthTable@RFONTOBJ@@QEAAHAEAVXDCOBJ@@KPEAGK1@Z.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C002EAC0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004A058 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C004A0A0 (--1DCOBJ@@QEAA@XZ.c)
 *     memmove @ 0x1C015A040 (memmove.c)
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
  struct ESTROBJ *v11; // rbx
  unsigned __int16 *v12; // rdi
  size_t v13; // r8
  FLOATL eXX; // edx
  __int16 v15; // dx
  __int64 v16; // rcx
  struct ESTROBJ *v17; // rdi
  _BYTE *v18; // rdx
  FLOATL *v19; // rdx
  struct _FD_XFORM *v21; // [rsp+30h] [rbp-88h] BYREF
  struct ESTROBJ *v22; // [rsp+38h] [rbp-80h]
  unsigned __int16 *v23; // [rsp+40h] [rbp-78h]
  __int128 v24; // [rsp+48h] [rbp-70h] BYREF
  _QWORD v25[7]; // [rsp+58h] [rbp-60h] BYREF
  FLOATL eYX; // [rsp+D8h] [rbp+20h]

  v7 = a4;
  WidthTable = -1;
  eYX = NAN;
  DCOBJ::DCOBJ((DCOBJ *)v25, a1);
  if ( !(_DWORD)v7 || !v25[0] )
    goto LABEL_41;
  v11 = 0LL;
  v22 = 0LL;
  v12 = 0LL;
  if ( (unsigned int)v7 <= 0x9C4000 )
  {
    v11 = (struct ESTROBJ *)AllocFreeTmpBuffer((unsigned int)(4 * v7));
    v22 = v11;
  }
  if ( v11 )
  {
    v13 = 2 * v7;
    v12 = (unsigned __int16 *)((char *)v11 + 2 * v7);
    v23 = v12;
    if ( 2 * v7 )
    {
      if ( ((unsigned __int8)Src & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)&Src[v13] > W32UserProbeAddress || &Src[v13] < Src )
        *W32UserProbeAddress = 0;
    }
    memmove((char *)v11 + 2 * v7, Src, v13);
  }
  else
  {
    LODWORD(v7) = 0;
  }
  if ( (_DWORD)v7 )
  {
    if ( (unsigned int)RFONTOBJ::bInit(&v21, (struct XDCOBJ *)v25, 0, 2u) )
      GreAcquireSemaphore(*(_QWORD *)&v21[33].eXX);
    if ( !v21 )
      goto LABEL_28;
    eYX = v21[30].eYX;
    if ( LODWORD(v21[21].eXX) >= 0xFFF )
      goto LABEL_28;
    eXX = v21[19].eXX;
    if ( eXX == 0.0 )
    {
      WidthTable = RFONTOBJ::bGetWidthTable((RFONTOBJ *)&v21, (struct XDCOBJ *)v25, a2, v12, v7, v11);
      if ( WidthTable == -1 )
      {
LABEL_28:
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v21);
        goto LABEL_29;
      }
    }
    else
    {
      v15 = 16 * LOWORD(eXX);
      v16 = (unsigned int)v7;
      v17 = v11;
      while ( v16 )
      {
        *(_WORD *)v17 = v15;
        v17 = (struct ESTROBJ *)((char *)v17 + 2);
        --v16;
      }
      WidthTable = 1;
    }
    if ( !(unsigned int)RFONTOBJ::bGetWidthData((RFONTOBJ *)&v21, (struct _WIDTHDATA *)&v24, (struct XDCOBJ *)v25) )
      WidthTable = -1;
    goto LABEL_28;
  }
LABEL_29:
  if ( WidthTable != -1 )
  {
    ProbeForWrite(Address, 2LL * (unsigned int)v7, 2u);
    memmove((void *)Address, v11, 2LL * (unsigned int)v7);
    if ( a6 )
    {
      if ( (a6 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v18 = (_BYTE *)a6;
      if ( a6 >= W32UserProbeAddress )
        v18 = (_BYTE *)W32UserProbeAddress;
      *v18 = *v18;
      v18[15] = v18[15];
      *(_OWORD *)a6 = v24;
    }
    v19 = (FLOATL *)a7;
    if ( a7 >= W32UserProbeAddress )
      v19 = (FLOATL *)W32UserProbeAddress;
    *v19 = eYX;
  }
  if ( v11 )
    FreeTmpBuffer(v11);
LABEL_41:
  DCOBJ::~DCOBJ((DCOBJ *)v25);
  return WidthTable;
}
