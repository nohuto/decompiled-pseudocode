/*
 * XREFs of ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C00704F4
 * Callers:
 *     ClientEventCallback @ 0x1C000D754 (ClientEventCallback.c)
 *     SfnINSTRINGNULL @ 0x1C006FAA0 (SfnINSTRINGNULL.c)
 *     SfnINLPCREATESTRUCT @ 0x1C006FE90 (SfnINLPCREATESTRUCT.c)
 *     xxxClientLoadImage @ 0x1C0090238 (xxxClientLoadImage.c)
 *     xxxClientExpandStringW @ 0x1C00904EC (xxxClientExpandStringW.c)
 *     xxxClientLoadStringW @ 0x1C0090818 (xxxClientLoadStringW.c)
 *     xxxClientLoadMenu @ 0x1C00A99D4 (xxxClientLoadMenu.c)
 *     xxxClientGetTextExtentPointW @ 0x1C00B9374 (xxxClientGetTextExtentPointW.c)
 *     xxxClientAddFontResourceW @ 0x1C00EB084 (xxxClientAddFontResourceW.c)
 *     SfnINDEVICECHANGE @ 0x1C0105D90 (SfnINDEVICECHANGE.c)
 *     SfnGETDBCSTEXTLENGTHS @ 0x1C0108910 (SfnGETDBCSTEXTLENGTHS.c)
 *     ClientLoadLibrary @ 0x1C0109848 (ClientLoadLibrary.c)
 *     fnHkINLPCBTCREATESTRUCT @ 0x1C010FDF0 (fnHkINLPCBTCREATESTRUCT.c)
 *     SfnPOWERBROADCAST @ 0x1C0112E90 (SfnPOWERBROADCAST.c)
 *     SfnCOPYDATA @ 0x1C0114500 (SfnCOPYDATA.c)
 *     SfnINSTRING @ 0x1C0146DF0 (SfnINSTRING.c)
 *     ClientGetListboxString @ 0x1C014A8B0 (ClientGetListboxString.c)
 *     SfnINLPMDICREATESTRUCT @ 0x1C014D360 (SfnINLPMDICREATESTRUCT.c)
 *     xxxClientExtTextOutW @ 0x1C0151798 (xxxClientExtTextOutW.c)
 *     SfnCOPYGLOBALDATA @ 0x1C0205830 (SfnCOPYGLOBALDATA.c)
 *     SfnIMECONTROL @ 0x1C0205E50 (SfnIMECONTROL.c)
 *     SfnINCNTOUTSTRING @ 0x1C02068D0 (SfnINCNTOUTSTRING.c)
 *     SfnINCNTOUTSTRINGNULL @ 0x1C0206DF0 (SfnINCNTOUTSTRINGNULL.c)
 *     SfnINLPHELPINFOSTRUCT @ 0x1C0207B10 (SfnINLPHELPINFOSTRUCT.c)
 *     SfnINLPHLPSTRUCT @ 0x1C0207EA0 (SfnINLPHLPSTRUCT.c)
 *     SfnINLPKDRAWSWITCHWND @ 0x1C0208230 (SfnINLPKDRAWSWITCHWND.c)
 *     SfnINPGESTURENOTIFYSTRUCT @ 0x1C0209470 (SfnINPGESTURENOTIFYSTRUCT.c)
 *     SfnPOPTINLPUINT @ 0x1C020AB30 (SfnPOPTINLPUINT.c)
 *     SfnPOUTLPINT @ 0x1C020AF20 (SfnPOUTLPINT.c)
 *     SfnTOUCHHITTESTING @ 0x1C020BD90 (SfnTOUCHHITTESTING.c)
 *     xxxClientCallManipulationThread @ 0x1C020C898 (xxxClientCallManipulationThread.c)
 *     xxxClientFindMnemChar @ 0x1C020D498 (xxxClientFindMnemChar.c)
 *     xxxClientLpkDrawTextEx @ 0x1C020DA2C (xxxClientLpkDrawTextEx.c)
 *     xxxClientPSMTextOut @ 0x1C020DDD8 (xxxClientPSMTextOut.c)
 * Callees:
 *     memset @ 0x1C015A380 (memset.c)
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
  __int64 v16; // rdx
  __int64 v17; // r8
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
          goto LABEL_10;
        }
        Win32FreePool(v6, v16, v17);
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
LABEL_10:
        *(_DWORD *)v6 = v10;
        goto LABEL_7;
      }
    }
  }
  return 0LL;
}
