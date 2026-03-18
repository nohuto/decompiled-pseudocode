/*
 * XREFs of NtGdiPolyPatBlt @ 0x1C003CC00
 * Callers:
 *     <none>
 * Callees:
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C002DA80 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C002DBD0 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ?bDWMDesktop@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHXZ @ 0x1C003CBD8 (-bDWMDesktop@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHXZ.c)
 *     ?GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z @ 0x1C0040258 (-GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C0041DE4 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ??_5ERECTL@@QEAAXAEAU_RECTL@@@Z @ 0x1C0041E20 (--_5ERECTL@@QEAAXAEAU_RECTL@@@Z.c)
 *     ?bReadBackRect@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHPEBU_RECTL@@@Z @ 0x1C0130704 (-bReadBackRect@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHPEBU_RECTL@@@Z.c)
 *     ??0DWMSCREENREADMODIFYWRITEASSIST@@QEAA@AEAVXDCOBJ@@@Z @ 0x1C01512B4 (--0DWMSCREENREADMODIFYWRITEASSIST@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C025DDE4 (-bEmpty@ERECTL@@QEAAHXZ.c)
 */

__int64 __fastcall NtGdiPolyPatBlt(HDC a1, unsigned int a2, struct _POLYPATBLT *a3, unsigned int a4, unsigned int a5)
{
  __int64 v5; // rsi
  unsigned int v8; // ebx
  int v9; // r14d
  char *v10; // rcx
  __int64 i; // r10
  LONG v13; // r9d
  LONG v14; // r8d
  int v15; // ecx
  int v16; // r10d
  __int64 v17; // rax
  HDC v18; // [rsp+58h] [rbp-B0h] BYREF
  int v19; // [rsp+60h] [rbp-A8h]
  int v20; // [rsp+64h] [rbp-A4h]
  int v21; // [rsp+68h] [rbp-A0h]
  struct _RECTL v22; // [rsp+70h] [rbp-98h] BYREF
  struct _RECTL v23; // [rsp+80h] [rbp-88h] BYREF
  _BYTE v24[120]; // [rsp+90h] [rbp-78h] BYREF

  v5 = a4;
  v8 = 1;
  v9 = 0;
  if ( a4 )
  {
    if ( a3 )
    {
      v19 = 0;
      v20 = 0;
      XDCOBJ::vLock((XDCOBJ *)&v18, a1);
      if ( v18 )
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
              (DWMSCREENREADMODIFYWRITEASSIST *)v24,
              (struct XDCOBJ *)&v18);
            if ( (unsigned int)DWMSCREENREADMODIFYWRITEASSIST::bDWMDesktop((DWMSCREENREADMODIFYWRITEASSIST *)v24) )
            {
              for ( i = 0LL; ; i = (unsigned int)(v16 + 1) )
              {
                v21 = i;
                if ( (unsigned int)i >= (unsigned int)v5 )
                  break;
                v13 = *((_DWORD *)a3 + 6 * i + 1);
                v14 = v13 + *((_DWORD *)a3 + 6 * i + 3);
                v15 = *((_DWORD *)a3 + 6 * i + 2);
                v22.left = *((_DWORD *)a3 + 6 * i);
                v22.top = v13;
                v22.right = v22.left + v15;
                v22.bottom = v14;
                ERECTL::vOrder((ERECTL *)&v22);
                if ( v16 )
                  ERECTL::operator|=(&v23, &v22);
                else
                  v23 = v22;
              }
              if ( !(unsigned int)ERECTL::bEmpty((ERECTL *)&v23) )
                v9 = DWMSCREENREADMODIFYWRITEASSIST::bReadBackRect((DWMSCREENREADMODIFYWRITEASSIST *)v24, &v23);
            }
          }
          v8 = GrePolyPatBltInternal(
                 (struct XDCOBJ *)&v18,
                 a2,
                 a3,
                 v5,
                 a5,
                 *(_DWORD *)(*((_QWORD *)v18 + 10) + 40LL),
                 *(_DWORD *)(*((_QWORD *)v18 + 10) + 32LL),
                 *(_DWORD *)(*((_QWORD *)v18 + 10) + 44LL),
                 *(_DWORD *)(*((_QWORD *)v18 + 10) + 36LL));
        }
        XDCOBJ::RestoreAttributes((XDCOBJ *)&v18);
        a1 = v18;
        _InterlockedDecrement((volatile signed __int32 *)v18 + 3);
      }
      else
      {
        v8 = 0;
        EngSetLastError(6u);
      }
    }
    else
    {
      v8 = 0;
    }
  }
  if ( v9 )
  {
    v17 = UserReferenceDwmApiPort(a1);
    DwmSyncFlushAndWaitForBatch(v17);
  }
  return v8;
}
