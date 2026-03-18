/*
 * XREFs of ?CombineRegions@CDwmMetaRegion@@SAJPEAUHRGN__@@0PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801313FC
 * Callers:
 *     ?CombineMove@CDrawingContext@@QEAAJPEAUMoveOptimizationInfo@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180121810 (-CombineMove@CDrawingContext@@QEAAJPEAUMoveOptimizationInfo@@PEBV-$TMilRect_@MUMilRectF@@UMilPoi.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z @ 0x18009BAEC (-HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?CheckGUIHandleQuota@@YAJKJJ@Z @ 0x180169220 (-CheckGUIHandleQuota@@YAJKJJ@Z.c)
 */

__int64 __fastcall CDwmMetaRegion::CombineRegions(HRGN hrgnSrc1, HRGN hrgnSrc2, float *a3)
{
  struct _RGNDATA *v4; // rdi
  signed int v7; // ebx
  HRGN RectRgn; // rsi
  signed int v9; // eax
  int v10; // edx
  unsigned int v11; // ecx
  int v12; // r8d
  int v13; // eax
  unsigned int *v14; // r8
  signed int LastError; // eax
  int v16; // edx
  unsigned int v17; // ecx
  int v18; // r8d
  int v19; // eax
  DWORD nCount; // eax
  int v21; // r9d
  struct _RGNDATA *v22; // rcx
  __int64 v23; // r8
  __int128 v25; // [rsp+30h] [rbp-28h]
  struct _RGNDATA *v26; // [rsp+78h] [rbp+20h] BYREF

  v4 = 0LL;
  v26 = 0LL;
  v7 = 0;
  SetLastError(0);
  RectRgn = CreateRectRgn(0, 0, 0, 0);
  if ( RectRgn )
  {
    SetLastError(0);
    v13 = CombineRgn(RectRgn, hrgnSrc1, hrgnSrc2, 2);
    if ( v13 )
    {
      if ( v13 != 1 )
      {
        v19 = HrgnToRgnData(RectRgn, &v26, v14);
        v7 = v19;
        if ( v19 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0x3A5u);
          v4 = v26;
        }
        else
        {
          v4 = v26;
          if ( v26 )
          {
            nCount = v26->rdh.nCount;
            if ( nCount )
            {
              v21 = 0;
              v25 = *(_OWORD *)v26->Buffer;
              v22 = v26 + 1;
              v23 = nCount;
              do
              {
                if ( (signed int)((v22->rdh.iType - *(_DWORD *)v22[-1].Buffer) * (v22->rdh.nCount - v22->rdh.dwSize)) > v21 )
                {
                  v21 = (v22->rdh.iType - *(_DWORD *)v22[-1].Buffer) * (v22->rdh.nCount - v22->rdh.dwSize);
                  v25 = *(_OWORD *)v22[-1].Buffer;
                }
                v22 = (struct _RGNDATA *)((char *)v22 + 16);
                --v23;
              }
              while ( v23 );
              *a3 = (float)(int)v25;
              a3[1] = (float)SDWORD1(v25);
              a3[2] = (float)SDWORD2(v25);
              a3[3] = (float)SHIDWORD(v25);
            }
          }
        }
      }
    }
    else
    {
      LastError = GetLastError();
      v7 = LastError;
      if ( LastError > 0 )
        v7 = (unsigned __int16)LastError | 0x80070000;
      if ( v7 >= 0 )
        v7 = CheckGUIHandleQuota(v17, v16, v18);
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x39Du);
    }
    DeleteObject(RectRgn);
    if ( v4 )
      (*(void (__fastcall **)(WPF::ProcessHeapImpl *, struct _RGNDATA *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        v4);
  }
  else
  {
    v9 = GetLastError();
    v7 = v9;
    if ( v9 > 0 )
      v7 = (unsigned __int16)v9 | 0x80070000;
    if ( v7 >= 0 )
      v7 = CheckGUIHandleQuota(v11, v10, v12);
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x398u);
  }
  return (unsigned int)v7;
}
