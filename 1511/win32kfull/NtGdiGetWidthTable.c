/*
 * XREFs of NtGdiGetWidthTable @ 0x1C00DDFE0
 * Callers:
 *     <none>
 * Callees:
 *     ?bGetWidthData@RFONTOBJ@@QEAAHPEAU_WIDTHDATA@@AEAVXDCOBJ@@@Z @ 0x1C00229CC (-bGetWidthData@RFONTOBJ@@QEAAHPEAU_WIDTHDATA@@AEAVXDCOBJ@@@Z.c)
 *     ?bGetWidthTable@RFONTOBJ@@QEAAHAEAVXDCOBJ@@KPEAGK1@Z @ 0x1C0022AC0 (-bGetWidthTable@RFONTOBJ@@QEAAHAEAVXDCOBJ@@KPEAGK1@Z.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C0023A60 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0027184 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C002DA80 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C002DBD0 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     memmove @ 0x1C0152980 (memmove.c)
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
  unsigned __int16 *v11; // rbx
  unsigned __int16 *v12; // rdi
  size_t v13; // r8
  FLOATL eXX; // edx
  _BYTE *v15; // rdx
  FLOATL *v16; // rdx
  unsigned __int16 v18; // dx
  __int64 v19; // rcx
  unsigned __int16 *v20; // rdi
  struct _FD_XFORM *v21; // [rsp+30h] [rbp-68h] BYREF
  unsigned __int16 *v22; // [rsp+38h] [rbp-60h]
  unsigned __int16 *v23; // [rsp+40h] [rbp-58h]
  __int64 v24; // [rsp+48h] [rbp-50h] BYREF
  int v25; // [rsp+50h] [rbp-48h]
  int v26; // [rsp+54h] [rbp-44h]
  __int128 v27; // [rsp+58h] [rbp-40h] BYREF
  FLOATL eYX; // [rsp+B8h] [rbp+20h]

  v7 = a4;
  WidthTable = -1;
  eYX = NAN;
  v25 = 0;
  v26 = 0;
  XDCOBJ::vLock((XDCOBJ *)&v24, a1);
  if ( !(_DWORD)v7 || !v24 )
    return WidthTable;
  v11 = 0LL;
  v22 = 0LL;
  v12 = 0LL;
  if ( (unsigned int)v7 <= 0x9C4000 )
  {
    v11 = (unsigned __int16 *)AllocFreeTmpBuffer((unsigned int)(4 * v7));
    v22 = v11;
  }
  if ( v11 )
  {
    v13 = 2 * v7;
    v12 = &v11[v7];
    v23 = v12;
    if ( 2 * v7 )
    {
      if ( ((unsigned __int8)Src & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)&Src[v13] > W32UserProbeAddress || &Src[v13] < Src )
        *W32UserProbeAddress = 0;
    }
    memmove(&v11[v7], Src, v13);
  }
  else
  {
    LODWORD(v7) = 0;
  }
  if ( (_DWORD)v7 )
  {
    if ( (unsigned int)RFONTOBJ::bInit(&v21, (struct XDCOBJ *)&v24, 0, 2u) )
      GreAcquireSemaphore(*(_QWORD *)&v21[33].eXX);
    if ( !v21 )
      goto LABEL_23;
    eYX = v21[30].eYX;
    if ( LODWORD(v21[21].eXX) >= 0xFFF )
      goto LABEL_23;
    eXX = v21[19].eXX;
    if ( eXX == 0.0 )
    {
      WidthTable = RFONTOBJ::bGetWidthTable((RFONTOBJ *)&v21, (struct XDCOBJ *)&v24, a2, v12, v7, v11);
      if ( WidthTable == -1 )
      {
LABEL_23:
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v21);
        goto LABEL_24;
      }
    }
    else
    {
      v18 = 16 * LOWORD(eXX);
      v19 = (unsigned int)v7;
      v20 = v11;
      while ( v19 )
      {
        *v20++ = v18;
        --v19;
      }
      WidthTable = 1;
    }
    if ( !(unsigned int)RFONTOBJ::bGetWidthData((RFONTOBJ *)&v21, (struct _WIDTHDATA *)&v27, (struct XDCOBJ *)&v24) )
      WidthTable = -1;
    goto LABEL_23;
  }
LABEL_24:
  if ( WidthTable != -1 )
  {
    ProbeForWrite(Address, 2LL * (unsigned int)v7, 2u);
    memmove((void *)Address, v11, 2LL * (unsigned int)v7);
    if ( a6 )
    {
      if ( (a6 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v15 = (_BYTE *)a6;
      if ( a6 >= W32UserProbeAddress )
        v15 = (_BYTE *)W32UserProbeAddress;
      *v15 = *v15;
      v15[15] = v15[15];
      *(_OWORD *)a6 = v27;
    }
    v16 = (FLOATL *)a7;
    if ( a7 >= W32UserProbeAddress )
      v16 = (FLOATL *)W32UserProbeAddress;
    *v16 = eYX;
  }
  if ( v11 )
    FreeTmpBuffer(v11);
  XDCOBJ::RestoreAttributes((XDCOBJ *)&v24);
  _InterlockedAdd((volatile signed __int32 *)(v24 + 12), 0xFFFFFFFF);
  return WidthTable;
}
