/*
 * XREFs of ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C011D2F0
 * Callers:
 *     ClientEventCallback @ 0x1C000C424 (ClientEventCallback.c)
 *     xxxClientLoadMenu @ 0x1C00807C4 (xxxClientLoadMenu.c)
 *     xxxClientGetTextExtentPointW @ 0x1C00CCAFC (xxxClientGetTextExtentPointW.c)
 *     SfnGETDBCSTEXTLENGTHS @ 0x1C00E5330 (SfnGETDBCSTEXTLENGTHS.c)
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
 *     SfnINCNTOUTSTRING @ 0x1C0122410 (SfnINCNTOUTSTRING.c)
 *     xxxClientLoadStringW @ 0x1C0122FD8 (xxxClientLoadStringW.c)
 *     SfnINSTRING @ 0x1C013F760 (SfnINSTRING.c)
 *     ClientGetListboxString @ 0x1C0143E80 (ClientGetListboxString.c)
 *     SfnINLPMDICREATESTRUCT @ 0x1C0148910 (SfnINLPMDICREATESTRUCT.c)
 *     xxxClientExtTextOutW @ 0x1C014C20C (xxxClientExtTextOutW.c)
 *     SfnCOPYGLOBALDATA @ 0x1C020E4D0 (SfnCOPYGLOBALDATA.c)
 *     SfnIMECONTROL @ 0x1C020EA00 (SfnIMECONTROL.c)
 *     SfnINCNTOUTSTRINGNULL @ 0x1C020F330 (SfnINCNTOUTSTRINGNULL.c)
 *     SfnINLPHELPINFOSTRUCT @ 0x1C020FE40 (SfnINLPHELPINFOSTRUCT.c)
 *     SfnINLPHLPSTRUCT @ 0x1C0210150 (SfnINLPHLPSTRUCT.c)
 *     SfnINLPKDRAWSWITCHWND @ 0x1C0210460 (SfnINLPKDRAWSWITCHWND.c)
 *     SfnINPGESTURENOTIFYSTRUCT @ 0x1C02113F0 (SfnINPGESTURENOTIFYSTRUCT.c)
 *     SfnPOPTINLPUINT @ 0x1C02123F0 (SfnPOPTINLPUINT.c)
 *     SfnPOUTLPINT @ 0x1C0212760 (SfnPOUTLPINT.c)
 *     SfnTOUCHHITTESTING @ 0x1C02133B0 (SfnTOUCHHITTESTING.c)
 *     xxxClientCallManipulationThread @ 0x1C0213CD4 (xxxClientCallManipulationThread.c)
 *     xxxClientFindMnemChar @ 0x1C021475C (xxxClientFindMnemChar.c)
 *     xxxClientLpkDrawTextEx @ 0x1C0214C20 (xxxClientLpkDrawTextEx.c)
 *     xxxClientPSMTextOut @ 0x1C0214F8C (xxxClientPSMTextOut.c)
 * Callees:
 *     memset @ 0x1C0152CC0 (memset.c)
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
          goto LABEL_13;
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
LABEL_13:
        *(_DWORD *)v6 = v10;
        goto LABEL_7;
      }
    }
  }
  return 0LL;
}
