/*
 * XREFs of ?AddResponse@CFrameInfo@@QEAAJPEAVCResponseItem@@@Z @ 0x1800E4108
 * Callers:
 *     ?Partition_Synchronize@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_SYNCHRONIZE@@@Z @ 0x1800E341C (-Partition_Synchronize@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PA.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180040188 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CFrameInfo::AddResponse(CFrameInfo *this, struct CResponseItem *a2)
{
  unsigned int v2; // eax
  unsigned int v3; // edx
  unsigned int v4; // ebx
  struct CResponseItem *v5; // rax
  int v7; // eax
  struct CResponseItem *v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = a2;
  v2 = *((_DWORD *)this + 326);
  v3 = v2 + 1;
  if ( v2 + 1 < v2 )
  {
    v4 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
LABEL_9:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x4Au);
    return v4;
  }
  v4 = 0;
  if ( v3 > *((_DWORD *)this + 325) )
  {
    v7 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 1280, 8u, 1, &v8);
    v4 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0xC0u);
      goto LABEL_9;
    }
  }
  else
  {
    *(_QWORD *)(*((_QWORD *)this + 160) + 8LL * *((unsigned int *)this + 326)) = v8;
    *((_DWORD *)this + 326) = v3;
  }
  v5 = v8;
  _InterlockedIncrement((volatile signed __int32 *)v8 + 2);
  ++*((_DWORD *)v5 + 4);
  return v4;
}
