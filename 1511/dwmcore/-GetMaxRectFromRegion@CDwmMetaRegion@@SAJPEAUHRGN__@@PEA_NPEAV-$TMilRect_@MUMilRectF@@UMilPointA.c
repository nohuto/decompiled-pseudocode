/*
 * XREFs of ?GetMaxRectFromRegion@CDwmMetaRegion@@SAJPEAUHRGN__@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180117570
 * Callers:
 *     ?RecordWindowMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEAUHWND__@@PEA_N@Z @ 0x18003C848 (-RecordWindowMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEAUHWND__@@PEA_N@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z @ 0x180070DEC (-HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CDwmMetaRegion::GetMaxRectFromRegion(HRGN a1, _BYTE *a2, __int64 a3)
{
  int v5; // eax
  struct _RGNDATA *v6; // rsi
  unsigned int v7; // ebp
  DWORD nCount; // eax
  int v9; // r9d
  struct _RGNDATA *v10; // rcx
  __int64 v11; // r8
  __int128 v13; // [rsp+30h] [rbp-18h]
  struct _RGNDATA *v14; // [rsp+58h] [rbp+10h] BYREF

  v14 = 0LL;
  *a2 = 0;
  v5 = HrgnToRgnData(a1, &v14, (unsigned int *)a3);
  v6 = v14;
  v7 = v5;
  if ( v5 >= 0 )
  {
    if ( !v14 )
      return v7;
    nCount = v14->rdh.nCount;
    if ( nCount )
    {
      v9 = 0;
      v13 = *(_OWORD *)v14->Buffer;
      v10 = v14 + 1;
      v11 = nCount;
      do
      {
        if ( (signed int)((v10->rdh.iType - *(_DWORD *)v10[-1].Buffer) * (v10->rdh.nCount - v10->rdh.dwSize)) > v9 )
        {
          v9 = (v10->rdh.iType - *(_DWORD *)v10[-1].Buffer) * (v10->rdh.nCount - v10->rdh.dwSize);
          v13 = *(_OWORD *)v10[-1].Buffer;
        }
        v10 = (struct _RGNDATA *)((char *)v10 + 16);
        --v11;
      }
      while ( v11 );
      *a2 = 1;
      *(float *)a3 = (float)(int)v13;
      *(float *)(a3 + 4) = (float)SDWORD1(v13);
      *(float *)(a3 + 8) = (float)SDWORD2(v13);
      *(float *)(a3 + 12) = (float)SHIDWORD(v13);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x292u);
  }
  if ( v6 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, struct _RGNDATA *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      v6);
  return v7;
}
