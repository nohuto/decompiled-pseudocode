/*
 * XREFs of NtGdiPolyPatBlt @ 0x1C0086690
 * Callers:
 *     <none>
 * Callees:
 *     ?GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z @ 0x1C0086C10 (-GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z.c)
 *     ?bDWMDesktop@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHXZ @ 0x1C0087320 (-bDWMDesktop@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHXZ.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C009DA98 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ??_5ERECTL@@QEAAXAEAU_RECTL@@@Z @ 0x1C009DBE0 (--_5ERECTL@@QEAAXAEAU_RECTL@@@Z.c)
 *     ?bReadBackRect@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHPEBU_RECTL@@@Z @ 0x1C010577C (-bReadBackRect@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHPEBU_RECTL@@@Z.c)
 *     ??0DWMSCREENREADMODIFYWRITEASSIST@@QEAA@AEAVXDCOBJ@@@Z @ 0x1C015BB6C (--0DWMSCREENREADMODIFYWRITEASSIST@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025E20C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C025E4BC (-bEmpty@ERECTL@@QEAAHXZ.c)
 */

__int64 __fastcall NtGdiPolyPatBlt(HDC a1, unsigned int a2, struct _POLYPATBLT *a3, unsigned int a4, unsigned int a5)
{
  __int64 v5; // rsi
  unsigned int v8; // ebx
  int v9; // r14d
  char *v10; // rcx
  __int64 i; // r10
  LONG v12; // r9d
  LONG v13; // r8d
  int v14; // ecx
  int v15; // r10d
  __int64 v16; // rax
  struct _RECTL v18; // [rsp+60h] [rbp-C8h] BYREF
  struct _RECTL v19; // [rsp+70h] [rbp-B8h] BYREF
  _QWORD v20[6]; // [rsp+80h] [rbp-A8h] BYREF
  _BYTE v21[120]; // [rsp+B0h] [rbp-78h] BYREF

  v5 = a4;
  v8 = 1;
  v9 = 0;
  if ( a4 )
  {
    if ( a3 )
    {
      DCOBJ::DCOBJ((DCOBJ *)v20, a1);
      if ( v20[0] )
      {
        if ( (unsigned int)v5 > 0xAAAAAAA )
        {
          v8 = 0;
        }
        else if ( 24 * v5 )
        {
          if ( ((unsigned __int8)a3 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          v10 = (char *)a3 + 24 * v5;
          if ( (unsigned __int64)v10 > W32UserProbeAddress || v10 < (char *)a3 )
            *W32UserProbeAddress = 0;
        }
        if ( v8 )
        {
          if ( ((gajRop3[(unsigned __int8)a2] | gajRop3[BYTE1(a2)]) & 0xB2) != 0 )
          {
            DWMSCREENREADMODIFYWRITEASSIST::DWMSCREENREADMODIFYWRITEASSIST(
              (DWMSCREENREADMODIFYWRITEASSIST *)v21,
              (struct XDCOBJ *)v20);
            if ( (unsigned int)DWMSCREENREADMODIFYWRITEASSIST::bDWMDesktop((DWMSCREENREADMODIFYWRITEASSIST *)v21) )
            {
              for ( i = 0LL; (unsigned int)i < (unsigned int)v5; i = (unsigned int)(v15 + 1) )
              {
                v12 = *((_DWORD *)a3 + 6 * i + 1);
                v13 = v12 + *((_DWORD *)a3 + 6 * i + 3);
                v14 = *((_DWORD *)a3 + 6 * i + 2);
                v18.left = *((_DWORD *)a3 + 6 * i);
                v18.top = v12;
                v18.right = v18.left + v14;
                v18.bottom = v13;
                ERECTL::vOrder((ERECTL *)&v18);
                if ( v15 )
                  ERECTL::operator|=(&v19, &v18);
                else
                  v19 = v18;
              }
              if ( !(unsigned int)ERECTL::bEmpty((ERECTL *)&v19) )
                v9 = DWMSCREENREADMODIFYWRITEASSIST::bReadBackRect((DWMSCREENREADMODIFYWRITEASSIST *)v21, &v19);
            }
          }
          v8 = GrePolyPatBltInternal(
                 (struct XDCOBJ *)v20,
                 a2,
                 a3,
                 v5,
                 a5,
                 *(_DWORD *)(*(_QWORD *)(v20[0] + 80LL) + 40LL),
                 *(_DWORD *)(*(_QWORD *)(v20[0] + 80LL) + 32LL),
                 *(_DWORD *)(*(_QWORD *)(v20[0] + 80LL) + 44LL),
                 *(_DWORD *)(*(_QWORD *)(v20[0] + 80LL) + 36LL));
        }
      }
      else
      {
        v8 = 0;
        EngSetLastError(6u);
      }
      DCOBJ::~DCOBJ((DCOBJ *)v20);
    }
    else
    {
      v8 = 0;
    }
  }
  if ( v9 )
  {
    v16 = UserReferenceDwmApiPort(a1);
    DwmSyncFlushAndWaitForBatch(v16);
  }
  return v8;
}
