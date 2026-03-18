/*
 * XREFs of ?DrawClippedImage@COcclusionContext@@QEAAJPEAVCResource@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x1800116C0
 * Callers:
 *     ?CollectOcclusionHelper@CWindowNode@@AEAAJPEAVCResource@@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@PEAVCOcclusionContext@@PEAVCShape@@_N@Z @ 0x180028358 (-CollectOcclusionHelper@CWindowNode@@AEAAJPEAVCResource@@V-$TMilRect_@HUtagRECT@@UMilPointAndSiz.c)
 *     ?CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x180028480 (-CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionIn.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CollectRectangleForOcclusion@COcclusionContext@@AEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEAV2@@Z @ 0x18005C4C0 (-CollectRectangleForOcclusion@COcclusionContext@@AEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSi.c)
 *     ?DoesImageOcclude@COcclusionContext@@AEAAJPEAUIUnknown@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEA_N@Z @ 0x18005C694 (-DoesImageOcclude@COcclusionContext@@AEAAJPEAUIUnknown@@U-$TMILFlagsEnum@W4FlagsEnum@MilSourceMo.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1800A30EC (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall COcclusionContext::DrawClippedImage(__int64 a1, __int64 a2, float *a3, __int64 a4, unsigned int a5)
{
  unsigned int v5; // ebx
  TemporaryConfiguration *v6; // rdi
  int DoesImageOcclude; // eax
  unsigned int v11; // r14d
  __int64 v12; // rax
  TemporaryConfiguration *v13; // rax
  unsigned int v14; // esi
  float *v15; // rdx
  float v16; // xmm0_4
  float v17; // xmm1_4
  float v18; // xmm1_4
  unsigned int v20; // [rsp+20h] [rbp-38h]
  unsigned __int64 v21[5]; // [rsp+30h] [rbp-28h] BYREF
  char v22; // [rsp+60h] [rbp+8h] BYREF

  v5 = 0;
  v6 = 0LL;
  v22 = 0;
  if ( !*(_DWORD *)(a1 + 892) )
  {
    DoesImageOcclude = COcclusionContext::DoesImageOcclude(a1, a2, a5, &v22);
    v5 = DoesImageOcclude;
    if ( DoesImageOcclude < 0 )
    {
      v20 = 1424;
LABEL_31:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, DoesImageOcclude, v20);
      goto LABEL_25;
    }
    if ( v22
      && (*(unsigned __int8 (__fastcall **)(__int64, unsigned __int64 *))(*(_QWORD *)a4 + 32LL))(a4, v21)
      && LODWORD(v21[0]) )
    {
      v11 = v21[0];
      v12 = 16LL * LODWORD(v21[0]);
      if ( !is_mul_ok(LODWORD(v21[0]), 0x10uLL) )
        v12 = -1LL;
      v13 = (TemporaryConfiguration *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                                 + 8LL))(
                                        WPF::g_pProcessHeap,
                                        v12);
      v6 = v13;
      if ( v13 )
        `vector constructor iterator'(
          v13,
          0x10uLL,
          v11,
          (void *(*)(void *))COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo);
      else
        v6 = 0LL;
      if ( v6 )
      {
        if ( (*(unsigned __int8 (__fastcall **)(__int64, TemporaryConfiguration *, _QWORD))(*(_QWORD *)a4 + 40LL))(
               a4,
               v6,
               LODWORD(v21[0])) )
        {
          v14 = 0;
          if ( LODWORD(v21[0]) )
          {
            while ( 1 )
            {
              v15 = (float *)((char *)v6 + 16 * v14);
              if ( *a3 > *v15 )
                *v15 = *a3;
              v16 = a3[1];
              if ( v16 > v15[1] )
                v15[1] = v16;
              v17 = a3[2];
              if ( v15[2] > v17 )
                v15[2] = v17;
              v18 = a3[3];
              if ( v15[3] > v18 )
                v15[3] = v18;
              if ( v15[2] <= *v15 || v15[3] <= v15[1] )
              {
                v15[3] = 0.0;
                v15[2] = 0.0;
                v15[1] = 0.0;
                *v15 = 0.0;
              }
              DoesImageOcclude = COcclusionContext::CollectRectangleForOcclusion(a1, v15, 0LL, 0LL);
              v5 = DoesImageOcclude;
              if ( DoesImageOcclude < 0 )
                break;
              if ( ++v14 >= LODWORD(v21[0]) )
                goto LABEL_25;
            }
            v20 = 1438;
            goto LABEL_31;
          }
        }
      }
      else
      {
        v5 = -2147024882;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x596u);
      }
    }
  }
LABEL_25:
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, TemporaryConfiguration *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    v6);
  return v5;
}
