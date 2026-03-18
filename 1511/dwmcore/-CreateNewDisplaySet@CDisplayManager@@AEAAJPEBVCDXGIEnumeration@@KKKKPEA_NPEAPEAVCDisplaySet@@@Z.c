/*
 * XREFs of ?CreateNewDisplaySet@CDisplayManager@@AEAAJPEBVCDXGIEnumeration@@KKKKPEA_NPEAPEAVCDisplaySet@@@Z @ 0x18006EE64
 * Callers:
 *     ?DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAPEAVCDisplaySet@@PEAW4Enum@DisplayStateComparison@@_N@Z @ 0x18006F0C8 (-DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAPEAVCDisplaySet@@PEAW4Enum@DisplayStateCompari.c)
 * Callees:
 *     _TlgWrite @ 0x18001D460 (_TlgWrite.c)
 *     ?IsUpToDate@CDXGIEnumeration@@QEBA_NXZ @ 0x18006B81C (-IsUpToDate@CDXGIEnumeration@@QEBA_NXZ.c)
 *     ?Release@CDisplaySet@@QEBAXXZ @ 0x18006F924 (-Release@CDisplaySet@@QEBAXXZ.c)
 *     ?Init@CDisplaySet@@AEAAJPEBVCDXGIEnumeration@@@Z @ 0x1800702C4 (-Init@CDisplaySet@@AEAAJPEBVCDXGIEnumeration@@@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180074880 (-TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??2CDisplaySet@@SAPEAX_K00@Z @ 0x1800A8918 (--2CDisplaySet@@SAPEAX_K00@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     memset_0 @ 0x1800BC8D2 (memset_0.c)
 */

__int64 __fastcall CDisplayManager::CreateNewDisplaySet(
        CDisplayManager *this,
        const struct CDXGIEnumeration *a2,
        int a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        bool *a7,
        struct CDisplaySet **a8)
{
  CDisplaySet *v8; // rdi
  const GUID *v11; // r8
  const GUID *v12; // r9
  LONG DisplayConfigBufferSizes; // eax
  unsigned __int64 v14; // rcx
  signed int v15; // ebx
  char *v16; // rax
  int v17; // eax
  UINT32 cData; // [rsp+20h] [rbp-60h]
  unsigned int v20; // [rsp+30h] [rbp-50h] BYREF
  UINT32 numPathArrayElements; // [rsp+34h] [rbp-4Ch] BYREF
  int v22; // [rsp+38h] [rbp-48h]
  UINT32 numModeInfoArrayElements; // [rsp+3Ch] [rbp-44h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-40h] BYREF
  GUID *v25; // [rsp+60h] [rbp-20h]
  int v26; // [rsp+68h] [rbp-18h]
  int v27; // [rsp+6Ch] [rbp-14h]

  v8 = 0LL;
  v22 = a3;
  *a7 = 0;
  if ( !CDXGIEnumeration::IsUpToDate(a2) )
  {
    if ( dword_18019E8C0 > 5u
      && (qword_18019E8D0 & 0x400000000000LL) != 0
      && (qword_18019E8D8 & 0x400000000000LL) == qword_18019E8D8 )
    {
      v27 = 0;
      v25 = &gDwmCoreTelemetryActivityId;
      v26 = 16;
      TlgWrite((TraceLoggingHProvider)&dword_18019E8C0, &unk_18017DDD8, v11, v12, 3u, &pData);
    }
    v15 = -2003304291;
    cData = 801;
    goto LABEL_17;
  }
  DisplayConfigBufferSizes = GetDisplayConfigBufferSizes(2u, &numPathArrayElements, &numModeInfoArrayElements);
  v15 = DisplayConfigBufferSizes;
  if ( DisplayConfigBufferSizes <= 0 )
  {
    v20 = DisplayConfigBufferSizes;
  }
  else
  {
    v15 = (unsigned __int16)DisplayConfigBufferSizes | 0x80070000;
    v20 = v15;
  }
  if ( v15 >= 0 )
  {
    v16 = (char *)CDisplaySet::operator new(v14, numPathArrayElements, numModeInfoArrayElements);
    v8 = (CDisplaySet *)v16;
    if ( v16 )
    {
      *(_DWORD *)v16 = 1;
      *((_DWORD *)v16 + 1) = v22;
      *((_DWORD *)v16 + 3) = a6;
      *((_DWORD *)v16 + 2) = a4;
      *((_QWORD *)v16 + 2) = 0LL;
      *(_QWORD *)(v16 + 36) = 0LL;
      *((_QWORD *)v16 + 6) = v16 + 80;
      *((_QWORD *)v16 + 7) = v16 + 80;
      *((_DWORD *)v16 + 16) = 4;
      *(_QWORD *)(v16 + 68) = 4LL;
      v16[112] = 0;
      *((_QWORD *)v16 + 66) = 0LL;
      *((_QWORD *)v16 + 67) = 0LL;
      v16[544] = 0;
      *(_QWORD *)(v16 + 28) = 0LL;
      *((_DWORD *)v16 + 6) = 0;
      memset_0(v16 + 120, 0, 0x68uLL);
    }
    else
    {
      v8 = 0LL;
    }
    if ( v8 )
    {
      v17 = CDisplaySet::Init(v8, a2);
      v20 = v17;
      v15 = v17;
      if ( v17 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, &dword_180174090, 2u, v17, 0x33Au);
      }
      else
      {
        *a8 = v8;
        v8 = 0LL;
      }
      goto LABEL_10;
    }
    v15 = -2147024882;
    cData = 815;
LABEL_17:
    v20 = v15;
    MilInstrumentationCheckHR(0x14u, &dword_180174090, 2u, v15, cData);
    goto LABEL_13;
  }
  MilInstrumentationCheckHR(0x14u, &dword_180174090, 2u, v15, 0x327u);
LABEL_10:
  if ( v15 < 0 )
  {
    if ( !v8 )
      goto LABEL_13;
    *a7 = *((_BYTE *)v8 + 112);
  }
  if ( v8 )
    CDisplaySet::Release(v8);
LABEL_13:
  TranslateDXGIorD3DErrorInContext((unsigned int)v15, 5LL, &v20);
  return v20;
}
