/*
 * XREFs of ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C0070458
 * Callers:
 *     ClientEventCallback @ 0x1C000D754 (ClientEventCallback.c)
 *     SfnINSTRINGNULL @ 0x1C006FAA0 (SfnINSTRINGNULL.c)
 *     SfnINLPCREATESTRUCT @ 0x1C006FE90 (SfnINLPCREATESTRUCT.c)
 *     xxxClientLoadImage @ 0x1C0090238 (xxxClientLoadImage.c)
 *     xxxClientExpandStringW @ 0x1C00904EC (xxxClientExpandStringW.c)
 *     xxxClientLoadMenu @ 0x1C00A99D4 (xxxClientLoadMenu.c)
 *     xxxClientGetTextExtentPointW @ 0x1C00B9374 (xxxClientGetTextExtentPointW.c)
 *     xxxClientAddFontResourceW @ 0x1C00EB084 (xxxClientAddFontResourceW.c)
 *     SfnINDEVICECHANGE @ 0x1C0105D90 (SfnINDEVICECHANGE.c)
 *     ClientLoadLibrary @ 0x1C0109848 (ClientLoadLibrary.c)
 *     fnHkINLPCBTCREATESTRUCT @ 0x1C010FDF0 (fnHkINLPCBTCREATESTRUCT.c)
 *     SfnPOWERBROADCAST @ 0x1C0112E90 (SfnPOWERBROADCAST.c)
 *     SfnCOPYDATA @ 0x1C0114500 (SfnCOPYDATA.c)
 *     SfnINSTRING @ 0x1C0146DF0 (SfnINSTRING.c)
 *     SfnINLPMDICREATESTRUCT @ 0x1C014D360 (SfnINLPMDICREATESTRUCT.c)
 *     xxxClientExtTextOutW @ 0x1C0151798 (xxxClientExtTextOutW.c)
 *     SfnCOPYGLOBALDATA @ 0x1C0205830 (SfnCOPYGLOBALDATA.c)
 *     SfnIMECONTROL @ 0x1C0205E50 (SfnIMECONTROL.c)
 *     SfnINLPHELPINFOSTRUCT @ 0x1C0207B10 (SfnINLPHELPINFOSTRUCT.c)
 *     SfnINLPHLPSTRUCT @ 0x1C0207EA0 (SfnINLPHLPSTRUCT.c)
 *     SfnINLPKDRAWSWITCHWND @ 0x1C0208230 (SfnINLPKDRAWSWITCHWND.c)
 *     SfnINPGESTURENOTIFYSTRUCT @ 0x1C0209470 (SfnINPGESTURENOTIFYSTRUCT.c)
 *     SfnPOPTINLPUINT @ 0x1C020AB30 (SfnPOPTINLPUINT.c)
 *     SfnPOUTLPINT @ 0x1C020AF20 (SfnPOUTLPINT.c)
 *     SfnTOUCHHITTESTING @ 0x1C020BD90 (SfnTOUCHHITTESTING.c)
 *     xxxClientFindMnemChar @ 0x1C020D498 (xxxClientFindMnemChar.c)
 *     xxxClientLpkDrawTextEx @ 0x1C020DA2C (xxxClientLpkDrawTextEx.c)
 *     xxxClientPSMTextOut @ 0x1C020DDD8 (xxxClientPSMTextOut.c)
 * Callees:
 *     memmove @ 0x1C015A040 (memmove.c)
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
