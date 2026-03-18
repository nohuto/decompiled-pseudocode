/*
 * XREFs of NtGdiPolyPatBlt @ 0x1400ADE60
 * Callers:
 *     <none>
 * Callees:
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1400800FC (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ??0DWMSCREENREADMODIFYWRITEASSIST@@QEAA@AEAVXDCOBJ@@@Z @ 0x1400ACCB4 (--0DWMSCREENREADMODIFYWRITEASSIST@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     ?GrepPolyPatBlt@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z @ 0x1400AE1E8 (-GrepPolyPatBlt@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400AFE30 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x140114094 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ??_5ERECTL@@QEAAXAEBU_RECTL@@@Z @ 0x1401A8D4C (--_5ERECTL@@QEAAXAEBU_RECTL@@@Z.c)
 *     ?bReadBackRect@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHPEBU_RECTL@@@Z @ 0x140216054 (-bReadBackRect@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHPEBU_RECTL@@@Z.c)
 */

__int64 __fastcall NtGdiPolyPatBlt(HDC a1, unsigned int a2, void *a3, unsigned int a4, unsigned int a5)
{
  unsigned int v8; // ebx
  int v9; // r14d
  __int64 v10; // rax
  __int64 i; // r10
  unsigned int v13; // r8d
  LONG v14; // r9d
  int v15; // edx
  int v16; // r10d
  __int64 v17; // rax
  struct _RECTL v18; // [rsp+60h] [rbp-108h] BYREF
  struct _RECTL v19; // [rsp+70h] [rbp-F8h] BYREF
  _QWORD v20[14]; // [rsp+80h] [rbp-E8h] BYREF
  _BYTE v21[24]; // [rsp+F0h] [rbp-78h] BYREF
  __int64 *v22; // [rsp+108h] [rbp-60h]

  v8 = 1;
  v9 = 0;
  if ( a4 )
  {
    if ( a3 )
    {
      APIDCOBJ::APIDCOBJ((APIDCOBJ *)v20, a1);
      if ( v20[0] )
      {
        if ( a4 > 0xAAAAAAA )
          v8 = 0;
        else
          GreProbeUntrustedVaRange(a3, 0x18uLL, a4, 4uLL);
        if ( v8 )
        {
          if ( ((gajRop3[(unsigned __int8)a2] | gajRop3[BYTE1(a2)]) & 0xB2) != 0 )
          {
            DWMSCREENREADMODIFYWRITEASSIST::DWMSCREENREADMODIFYWRITEASSIST(
              (DWMSCREENREADMODIFYWRITEASSIST *)v21,
              (struct XDCOBJ *)v20);
            v10 = *v22;
            if ( *v22 )
            {
              if ( *(_DWORD *)(v10 + 492) && (*(_DWORD *)(v10 + 36) & 0x4000) != 0 )
              {
                for ( i = 0LL; (unsigned int)i < a4; i = (unsigned int)(v16 + 1) )
                {
                  v13 = *((_DWORD *)a3 + 6 * i + 1);
                  v14 = v13 + *((_DWORD *)a3 + 6 * i + 3);
                  v15 = *((_DWORD *)a3 + 6 * i) + *((_DWORD *)a3 + 6 * i + 2);
                  v18.left = *((_DWORD *)a3 + 6 * i);
                  *(_QWORD *)&v18.top = __PAIR64__(v15, v13);
                  v18.bottom = v14;
                  ERECTL::vOrder((ERECTL *)&v18);
                  if ( v16 )
                    ERECTL::operator|=(&v19, &v18);
                  else
                    v19 = v18;
                }
                if ( !ERECTL::bEmpty((ERECTL *)&v19) )
                  v9 = DWMSCREENREADMODIFYWRITEASSIST::bReadBackRect((DWMSCREENREADMODIFYWRITEASSIST *)v21, &v19);
              }
            }
          }
          v8 = GrepPolyPatBlt(
                 (struct XDCOBJ *)v20,
                 a2,
                 (struct _POLYPATBLT *)a3,
                 a4,
                 a5,
                 *(_DWORD *)(*(_QWORD *)(v20[0] + 976LL) + 184LL),
                 *(_DWORD *)(*(_QWORD *)(v20[0] + 976LL) + 176LL),
                 *(_DWORD *)(*(_QWORD *)(v20[0] + 976LL) + 188LL),
                 *(_DWORD *)(*(_QWORD *)(v20[0] + 976LL) + 180LL));
        }
      }
      else
      {
        v8 = 0;
        EngSetLastError(6u);
      }
      APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v20);
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
