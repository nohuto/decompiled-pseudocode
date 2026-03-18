/*
 * XREFs of ?AddResponse@CFrameInfo@@QEAAJPEAVCResponseItem@@@Z @ 0x1801173FC
 * Callers:
 *     ?Partition_Synchronize@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_SYNCHRONIZE@@@Z @ 0x18010FD3C (-Partition_Synchronize@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PA.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18009A984 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

__int64 __fastcall CFrameInfo::AddResponse(CFrameInfo *this, struct CResponseItem *a2)
{
  unsigned int v2; // eax
  unsigned int v3; // edx
  int v4; // ebx
  int v5; // eax
  struct CResponseItem *v6; // rax
  struct CResponseItem *v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = a2;
  v2 = *((_DWORD *)this + 326);
  v3 = v2 + 1;
  if ( v2 + 1 >= v2 )
  {
    v4 = 0;
    if ( v3 <= *((_DWORD *)this + 325) )
    {
      *(_QWORD *)(*((_QWORD *)this + 160) + 8LL * *((unsigned int *)this + 326)) = v8;
      *((_DWORD *)this + 326) = v3;
      goto LABEL_8;
    }
    v5 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 1280, 8u, 1, &v8);
    v4 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0xC0u);
  }
  else
  {
    v4 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
  }
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x4Au);
    return (unsigned int)v4;
  }
LABEL_8:
  v6 = v8;
  _InterlockedIncrement((volatile signed __int32 *)v8 + 2);
  ++*((_DWORD *)v6 + 4);
  return (unsigned int)v4;
}
