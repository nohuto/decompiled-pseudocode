/*
 * XREFs of ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C011D254
 * Callers:
 *     ClientEventCallback @ 0x1C000C424 (ClientEventCallback.c)
 *     xxxClientLoadMenu @ 0x1C00807C4 (xxxClientLoadMenu.c)
 *     xxxClientGetTextExtentPointW @ 0x1C00CCAFC (xxxClientGetTextExtentPointW.c)
 *     xxxClientExpandStringW @ 0x1C00FEC40 (xxxClientExpandStringW.c)
 *     xxxClientAddFontResourceW @ 0x1C0119AB0 (xxxClientAddFontResourceW.c)
 *     SfnINDEVICECHANGE @ 0x1C011B3D0 (SfnINDEVICECHANGE.c)
 *     ClientLoadLibrary @ 0x1C011B6D0 (ClientLoadLibrary.c)
 *     SfnINSTRINGNULL @ 0x1C011C350 (SfnINSTRINGNULL.c)
 *     SfnINLPCREATESTRUCT @ 0x1C011CCC0 (SfnINLPCREATESTRUCT.c)
 *     fnHkINLPCBTCREATESTRUCT @ 0x1C011E51C (fnHkINLPCBTCREATESTRUCT.c)
 *     SfnPOWERBROADCAST @ 0x1C011F250 (SfnPOWERBROADCAST.c)
 *     SfnCOPYDATA @ 0x1C0120000 (SfnCOPYDATA.c)
 *     xxxClientLoadImage @ 0x1C012031C (xxxClientLoadImage.c)
 *     SfnINSTRING @ 0x1C013F760 (SfnINSTRING.c)
 *     SfnINLPMDICREATESTRUCT @ 0x1C0148910 (SfnINLPMDICREATESTRUCT.c)
 *     xxxClientExtTextOutW @ 0x1C014C20C (xxxClientExtTextOutW.c)
 *     SfnCOPYGLOBALDATA @ 0x1C020E4D0 (SfnCOPYGLOBALDATA.c)
 *     SfnIMECONTROL @ 0x1C020EA00 (SfnIMECONTROL.c)
 *     SfnINLPHELPINFOSTRUCT @ 0x1C020FE40 (SfnINLPHELPINFOSTRUCT.c)
 *     SfnINLPHLPSTRUCT @ 0x1C0210150 (SfnINLPHLPSTRUCT.c)
 *     SfnINLPKDRAWSWITCHWND @ 0x1C0210460 (SfnINLPKDRAWSWITCHWND.c)
 *     SfnINPGESTURENOTIFYSTRUCT @ 0x1C02113F0 (SfnINPGESTURENOTIFYSTRUCT.c)
 *     SfnPOPTINLPUINT @ 0x1C02123F0 (SfnPOPTINLPUINT.c)
 *     SfnPOUTLPINT @ 0x1C0212760 (SfnPOUTLPINT.c)
 *     SfnTOUCHHITTESTING @ 0x1C02133B0 (SfnTOUCHHITTESTING.c)
 *     xxxClientFindMnemChar @ 0x1C021475C (xxxClientFindMnemChar.c)
 *     xxxClientLpkDrawTextEx @ 0x1C0214C20 (xxxClientLpkDrawTextEx.c)
 *     xxxClientPSMTextOut @ 0x1C0214F8C (xxxClientPSMTextOut.c)
 * Callees:
 *     memmove @ 0x1C0152980 (memmove.c)
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
