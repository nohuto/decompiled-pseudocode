/*
 * XREFs of ?s_UpdateResourcesForMonitor@CLivePreview@@CAHPEAUHMONITOR__@@PEAUHDC__@@PEAUtagRECT@@_J@Z @ 0x180073A60
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002B384 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 *     memset_0 @ 0x18004FF66 (memset_0.c)
 *     ?_UpdateResourcesForMonitor@CLivePreview@@AEAAJPEAULivePreviewResource@@@Z @ 0x180073240 (-_UpdateResourcesForMonitor@CLivePreview@@AEAAJPEAULivePreviewResource@@@Z.c)
 */

__int64 __fastcall CLivePreview::s_UpdateResourcesForMonitor(HMONITOR a1, HDC a2, const RECT *a3, __int64 a4)
{
  unsigned int v5; // edi
  int updated; // eax
  int v8; // ebx
  __int64 v9; // rax
  unsigned int v10; // edx
  __int64 v11; // rcx
  unsigned int v13; // [rsp+20h] [rbp-B8h]
  _OWORD v14[7]; // [rsp+30h] [rbp-A8h] BYREF
  struct tagRECT rcDst; // [rsp+A0h] [rbp-38h] BYREF
  __int64 v16; // [rsp+B0h] [rbp-28h]

  v5 = 0;
  LODWORD(v14[0]) = 0;
  memset_0((char *)v14 + 4, 0, 0x84uLL);
  CopyRect(&rcDst, a3);
  updated = CLivePreview::_UpdateResourcesForMonitor((CLivePreview *)a4, (struct LivePreviewResource *)v14);
  v8 = updated;
  if ( updated < 0 )
  {
    v13 = 1405;
LABEL_9:
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, updated, v13);
    goto LABEL_10;
  }
  v9 = *(unsigned int *)(a4 + 376);
  v10 = v9 + 1;
  if ( (int)v9 + 1 >= (unsigned int)v9 )
  {
    if ( v10 > *(_DWORD *)(a4 + 372) )
    {
      updated = DynArrayImpl<0>::AddMultipleAndSet(a4 + 352, 0x88u, 1, v14);
      if ( updated < 0 )
      {
        v13 = 192;
        goto LABEL_9;
      }
    }
    else
    {
      v11 = *(_QWORD *)(a4 + 352) + 136 * v9;
      *(_OWORD *)v11 = v14[0];
      *(_OWORD *)(v11 + 16) = v14[1];
      *(_OWORD *)(v11 + 32) = v14[2];
      *(_OWORD *)(v11 + 48) = v14[3];
      *(_OWORD *)(v11 + 64) = v14[4];
      *(_OWORD *)(v11 + 80) = v14[5];
      *(_OWORD *)(v11 + 96) = v14[6];
      *(struct tagRECT *)(v11 + 112) = rcDst;
      *(_QWORD *)(v11 + 128) = v16;
      *(_DWORD *)(a4 + 376) = v10;
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
  }
LABEL_10:
  LOBYTE(v5) = v8 >= 0;
  return v5;
}
