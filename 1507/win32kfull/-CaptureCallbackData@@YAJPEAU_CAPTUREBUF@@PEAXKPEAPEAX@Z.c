/*
 * XREFs of ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C005ADD0
 * Callers:
 *     ClientLoadLibrary @ 0x1C0058508 (ClientLoadLibrary.c)
 *     SfnINDEVICECHANGE @ 0x1C0058740 (SfnINDEVICECHANGE.c)
 *     SfnINSTRINGNULL @ 0x1C0059F90 (SfnINSTRINGNULL.c)
 *     SfnINLPCREATESTRUCT @ 0x1C005A840 (SfnINLPCREATESTRUCT.c)
 *     xxxClientLoadMenu @ 0x1C007E4F8 (xxxClientLoadMenu.c)
 *     fnHkINLPCBTCREATESTRUCT @ 0x1C00E8704 (fnHkINLPCBTCREATESTRUCT.c)
 *     SfnPOWERBROADCAST @ 0x1C00EE930 (SfnPOWERBROADCAST.c)
 *     SfnCOPYDATA @ 0x1C00F1580 (SfnCOPYDATA.c)
 *     SfnINSTRING @ 0x1C0115880 (SfnINSTRING.c)
 *     SfnINLPMDICREATESTRUCT @ 0x1C011EC40 (SfnINLPMDICREATESTRUCT.c)
 *     xxxClientExtTextOutW @ 0x1C0123184 (xxxClientExtTextOutW.c)
 *     xxxClientGetTextExtentPointW @ 0x1C0126A38 (xxxClientGetTextExtentPointW.c)
 *     xxxClientLoadImage @ 0x1C0136A30 (xxxClientLoadImage.c)
 *     xxxClientExpandStringW @ 0x1C0136CC0 (xxxClientExpandStringW.c)
 *     xxxClientAddFontResourceW @ 0x1C013B7E4 (xxxClientAddFontResourceW.c)
 *     ClientEventCallback @ 0x1C020DC44 (ClientEventCallback.c)
 *     SfnCOPYGLOBALDATA @ 0x1C020E100 (SfnCOPYGLOBALDATA.c)
 *     SfnIMECONTROL @ 0x1C020E620 (SfnIMECONTROL.c)
 *     SfnINLPHELPINFOSTRUCT @ 0x1C020FA50 (SfnINLPHELPINFOSTRUCT.c)
 *     SfnINLPHLPSTRUCT @ 0x1C020FD60 (SfnINLPHLPSTRUCT.c)
 *     SfnINLPKDRAWSWITCHWND @ 0x1C0210070 (SfnINLPKDRAWSWITCHWND.c)
 *     SfnINPGESTURENOTIFYSTRUCT @ 0x1C0211000 (SfnINPGESTURENOTIFYSTRUCT.c)
 *     SfnPOPTINLPUINT @ 0x1C0212320 (SfnPOPTINLPUINT.c)
 *     SfnPOUTLPINT @ 0x1C0212680 (SfnPOUTLPINT.c)
 *     SfnTOUCHHITTESTING @ 0x1C0213540 (SfnTOUCHHITTESTING.c)
 *     xxxClientFindMnemChar @ 0x1C02148B4 (xxxClientFindMnemChar.c)
 *     xxxClientLpkDrawTextEx @ 0x1C0214D78 (xxxClientLpkDrawTextEx.c)
 *     xxxClientPSMTextOut @ 0x1C02150E4 (xxxClientPSMTextOut.c)
 * Callees:
 *     memmove @ 0x1C015D180 (memmove.c)
 */

__int64 __fastcall CaptureCallbackData(struct _CAPTUREBUF *a1, char *a2, unsigned int a3, void **a4)
{
  size_t v5; // r10
  char *v8; // rdi
  char *v10; // r8
  char *v11; // rdx

  v5 = a3;
  if ( !a2 )
  {
    *a4 = 0LL;
    return 0LL;
  }
  if ( a3 > *((_DWORD *)a1 + 1) )
    return 2147483653LL;
  v8 = (char *)*((_QWORD *)a1 + 2);
  if ( !*((_QWORD *)a1 + 4) )
    goto LABEL_4;
  v10 = (char *)*((_QWORD *)a1 + 2);
  if ( a2 > v8 )
    v10 = a2;
  v11 = &v8[v5];
  if ( &a2[v5] < &v8[v5] )
    v11 = &a2[v5];
  if ( v10 >= v11 )
  {
LABEL_4:
    *((_QWORD *)a1 + 2) = &v8[(v5 + 7) & 0xFFFFFFFFFFFFFFF8uLL];
    memmove(v8, a2, v5);
    if ( *((_QWORD *)a1 + 4) )
    {
      *a4 = v8;
    }
    else
    {
      *a4 = (void *)(v8 - (char *)a1);
      *(_DWORD *)((char *)a1 + 4 * (*((_DWORD *)a1 + 2))++ + *((unsigned int *)a1 + 6)) = (_DWORD)a4 - (_DWORD)a1;
    }
    return 0LL;
  }
  return 3221225496LL;
}
