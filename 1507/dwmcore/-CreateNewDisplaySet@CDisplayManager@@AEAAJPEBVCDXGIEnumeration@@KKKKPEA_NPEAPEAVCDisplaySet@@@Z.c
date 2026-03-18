/*
 * XREFs of ?CreateNewDisplaySet@CDisplayManager@@AEAAJPEBVCDXGIEnumeration@@KKKKPEA_NPEAPEAVCDisplaySet@@@Z @ 0x1800543E8
 * Callers:
 *     ?DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAPEAVCDisplaySet@@PEAW4Enum@DisplayStateComparison@@_N@Z @ 0x1800545A4 (-DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAPEAVCDisplaySet@@PEAW4Enum@DisplayStateCompari.c)
 * Callees:
 *     ?TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180042CF0 (-TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?Init@CDisplaySet@@AEAAJPEBVCDXGIEnumeration@@@Z @ 0x1800556B4 (-Init@CDisplaySet@@AEAAJPEBVCDXGIEnumeration@@@Z.c)
 *     ?Release@CDisplaySet@@QEBAXXZ @ 0x1800557B8 (-Release@CDisplaySet@@QEBAXXZ.c)
 *     ?IsUpToDate@CDXGIEnumeration@@QEBA_NXZ @ 0x1800563AC (-IsUpToDate@CDXGIEnumeration@@QEBA_NXZ.c)
 *     ??2CDisplaySet@@SAPEAX_K00@Z @ 0x180059398 (--2CDisplaySet@@SAPEAX_K00@Z.c)
 *     _TlgWrite @ 0x1800636A0 (_TlgWrite.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     memset_0 @ 0x180099BC6 (memset_0.c)
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
    if ( dword_180190A30 > 5u
      && (qword_180190A40 & 0x400000000000LL) != 0
      && (qword_180190A48 & 0x400000000000LL) == qword_180190A48 )
    {
      v27 = 0;
      v25 = &gDwmCoreTelemetryActivityId;
      v26 = 16;
      TlgWrite((TraceLoggingHProvider)&dword_180190A30, &unk_18016EBEC, v11, v12, 3u, &pData);
    }
    v15 = -2003304291;
    cData = 801;
    goto LABEL_16;
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
        MilInstrumentationCheckHR(0x14u, &dword_1801663C0, 2u, v17, 0x33Au);
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
LABEL_16:
    v20 = v15;
    MilInstrumentationCheckHR(0x14u, &dword_1801663C0, 2u, v15, cData);
    goto LABEL_13;
  }
  MilInstrumentationCheckHR(0x14u, &dword_1801663C0, 2u, v15, 0x327u);
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
  TranslateDXGIorD3DErrorInContext(v15, 5, &v20);
  return v20;
}
