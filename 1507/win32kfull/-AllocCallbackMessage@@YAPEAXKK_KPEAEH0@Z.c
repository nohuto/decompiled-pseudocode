/*
 * XREFs of ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C005AE6C
 * Callers:
 *     ClientLoadLibrary @ 0x1C0058508 (ClientLoadLibrary.c)
 *     SfnINDEVICECHANGE @ 0x1C0058740 (SfnINDEVICECHANGE.c)
 *     SfnINSTRINGNULL @ 0x1C0059F90 (SfnINSTRINGNULL.c)
 *     SfnOUTSTRING @ 0x1C005A340 (SfnOUTSTRING.c)
 *     SfnINLPCREATESTRUCT @ 0x1C005A840 (SfnINLPCREATESTRUCT.c)
 *     xxxClientLoadMenu @ 0x1C007E4F8 (xxxClientLoadMenu.c)
 *     SfnGETDBCSTEXTLENGTHS @ 0x1C00E2BA0 (SfnGETDBCSTEXTLENGTHS.c)
 *     fnHkINLPCBTCREATESTRUCT @ 0x1C00E8704 (fnHkINLPCBTCREATESTRUCT.c)
 *     SfnPOWERBROADCAST @ 0x1C00EE930 (SfnPOWERBROADCAST.c)
 *     SfnINCNTOUTSTRING @ 0x1C00F0960 (SfnINCNTOUTSTRING.c)
 *     SfnCOPYDATA @ 0x1C00F1580 (SfnCOPYDATA.c)
 *     SfnINSTRING @ 0x1C0115880 (SfnINSTRING.c)
 *     ClientGetListboxString @ 0x1C0118DA0 (ClientGetListboxString.c)
 *     SfnINLPMDICREATESTRUCT @ 0x1C011EC40 (SfnINLPMDICREATESTRUCT.c)
 *     xxxClientExtTextOutW @ 0x1C0123184 (xxxClientExtTextOutW.c)
 *     xxxClientGetTextExtentPointW @ 0x1C0126A38 (xxxClientGetTextExtentPointW.c)
 *     xxxClientLoadImage @ 0x1C0136A30 (xxxClientLoadImage.c)
 *     xxxClientExpandStringW @ 0x1C0136CC0 (xxxClientExpandStringW.c)
 *     xxxClientLoadStringW @ 0x1C0137008 (xxxClientLoadStringW.c)
 *     xxxClientAddFontResourceW @ 0x1C013B7E4 (xxxClientAddFontResourceW.c)
 *     ClientEventCallback @ 0x1C020DC44 (ClientEventCallback.c)
 *     SfnCOPYGLOBALDATA @ 0x1C020E100 (SfnCOPYGLOBALDATA.c)
 *     SfnIMECONTROL @ 0x1C020E620 (SfnIMECONTROL.c)
 *     SfnINCNTOUTSTRINGNULL @ 0x1C020EF40 (SfnINCNTOUTSTRINGNULL.c)
 *     SfnINLPHELPINFOSTRUCT @ 0x1C020FA50 (SfnINLPHELPINFOSTRUCT.c)
 *     SfnINLPHLPSTRUCT @ 0x1C020FD60 (SfnINLPHLPSTRUCT.c)
 *     SfnINLPKDRAWSWITCHWND @ 0x1C0210070 (SfnINLPKDRAWSWITCHWND.c)
 *     SfnINPGESTURENOTIFYSTRUCT @ 0x1C0211000 (SfnINPGESTURENOTIFYSTRUCT.c)
 *     SfnPOPTINLPUINT @ 0x1C0212320 (SfnPOPTINLPUINT.c)
 *     SfnPOUTLPINT @ 0x1C0212680 (SfnPOUTLPINT.c)
 *     SfnTOUCHHITTESTING @ 0x1C0213540 (SfnTOUCHHITTESTING.c)
 *     xxxClientCallManipulationThread @ 0x1C0213E2C (xxxClientCallManipulationThread.c)
 *     xxxClientFindMnemChar @ 0x1C02148B4 (xxxClientFindMnemChar.c)
 *     xxxClientLpkDrawTextEx @ 0x1C0214D78 (xxxClientLpkDrawTextEx.c)
 *     xxxClientPSMTextOut @ 0x1C02150E4 (xxxClientPSMTextOut.c)
 * Callees:
 *     memset @ 0x1C015D4C0 (memset.c)
 */

unsigned __int8 *__fastcall AllocCallbackMessage(
        int a1,
        unsigned int a2,
        __int64 a3,
        unsigned __int8 *a4,
        int a5,
        size_t Size)
{
  unsigned __int8 *v6; // rbx
  int v7; // edi
  int v8; // ebp
  ULONG_PTR v9; // rcx
  __int64 v10; // rdi
  bool v11; // zf
  int v12; // eax
  __int64 v14; // rax
  _QWORD *v15; // rsi
  ULONG_PTR RegionSize; // [rsp+50h] [rbp+18h] BYREF

  v6 = a4;
  if ( a2 )
  {
    v7 = a1 + 7;
    v8 = 8 * a2;
    v9 = (a3 + 7LL * a2) & 0xFFFFFFFFFFFFFFF8uLL;
    v10 = 8 * a2 + (v7 & 0xFFFFFFF8);
    RegionSize = v9;
    if ( v9 > 0x800 )
    {
      v14 = Win32AllocPoolWithQuotaZInit((unsigned int)v10, 1667461973LL);
      v6 = (unsigned __int8 *)v14;
      if ( v14 )
      {
        v15 = (_QWORD *)(v14 + 32);
        *(_QWORD *)(v14 + 32) = 0LL;
        if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)(v14 + 32), 0LL, &RegionSize, 0x1000u, 4u) >= 0 )
        {
          *((_QWORD *)v6 + 2) = *v15;
          goto LABEL_11;
        }
        Win32FreePool(v6);
      }
    }
    else
    {
      if ( v10 + v9 <= Size )
      {
        memset(a4, 0, Size);
        goto LABEL_5;
      }
      v6 = (unsigned __int8 *)Win32AllocPoolWithQuotaZInit((unsigned int)(v10 + v9), 1667461973LL);
      if ( v6 )
      {
LABEL_5:
        *((_QWORD *)v6 + 4) = 0LL;
        v11 = a5 == 0;
        *((_QWORD *)v6 + 2) = &v6[v10];
        if ( !v11 )
        {
          *(_DWORD *)v6 = v10 + RegionSize;
LABEL_7:
          v12 = RegionSize;
          *((_DWORD *)v6 + 2) = 0;
          *((_DWORD *)v6 + 1) = v12;
          *((_DWORD *)v6 + 6) = v10 - v8;
          return v6;
        }
LABEL_11:
        *(_DWORD *)v6 = v10;
        goto LABEL_7;
      }
    }
  }
  return 0LL;
}
