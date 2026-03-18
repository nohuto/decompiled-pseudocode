/*
 * XREFs of ?Partition_RegisterForNotifications@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_REGISTERFORNOTIFICATIONS@@@Z @ 0x180095844
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x180096A00 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180030E80 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?NotifyHelper@CComposition@@QEAAJPEAUMIL_MESSAGE@@@Z @ 0x180094B10 (-NotifyHelper@CComposition@@QEAAJPEAUMIL_MESSAGE@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$00@@IEAAJIIPEBX@Z @ 0x1800A19F4 (-AddMultipleAndSet@-$DynArrayImpl@$00@@IEAAJIIPEBX@Z.c)
 *     ?Remove@?$DynArray@PEAVCChannelContext@@$00@@QEAAHAEBQEAVCChannelContext@@@Z @ 0x1800B16F4 (-Remove@-$DynArray@PEAVCChannelContext@@$00@@QEAAHAEBQEAVCChannelContext@@@Z.c)
 */

__int64 __fastcall CComposition::Partition_RegisterForNotifications(
        CComposition *this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct MILCMD_PARTITION_REGISTERFORNOTIFICATIONS *a4)
{
  unsigned int v4; // eax
  char *v7; // r8
  struct CChannelContext **v8; // rcx
  unsigned int v9; // eax
  unsigned int v10; // edx
  int v11; // eax
  int v12; // ebx
  char *v14; // rcx
  struct CChannelContext **v15; // rdx
  int v16; // [rsp+30h] [rbp-20h] BYREF
  __int64 v17; // [rsp+34h] [rbp-1Ch]
  __int64 v18; // [rsp+3Ch] [rbp-14h]
  __int64 v19; // [rsp+44h] [rbp-Ch]
  CMILRefCountBase *v20; // [rsp+68h] [rbp+18h] BYREF

  v20 = a2;
  v4 = 0;
  if ( *((_DWORD *)a4 + 1) )
  {
    v7 = (char *)this + 408;
    v8 = (struct CChannelContext **)*((_QWORD *)this + 51);
    if ( *((_DWORD *)v7 + 6) )
    {
      do
      {
        if ( a2 == *v8 )
          break;
        ++v4;
        ++v8;
      }
      while ( v4 < *((_DWORD *)v7 + 6) );
    }
    if ( v4 == *((_DWORD *)this + 108) )
    {
      v9 = *((_DWORD *)v7 + 6);
      v10 = v9 + 1;
      if ( v9 + 1 < v9 )
      {
        v12 = -2147024362;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      }
      else
      {
        if ( v10 <= *((_DWORD *)v7 + 5) )
        {
          *(_QWORD *)(*(_QWORD *)v7 + 8LL * *((unsigned int *)v7 + 6)) = v20;
          *((_DWORD *)v7 + 6) = v10;
          goto LABEL_9;
        }
        v11 = DynArrayImpl<1>::AddMultipleAndSet(v7, 8LL, v7, &v20);
        v12 = v11;
        if ( v11 >= 0 )
        {
LABEL_9:
          _InterlockedIncrement((volatile signed __int32 *)v20 + 2);
          v16 = 5;
          v17 = 0LL;
          v18 = 0LL;
          v19 = 0LL;
          HIDWORD(v17) = *((_DWORD *)this + 84);
          LODWORD(v18) = HIDWORD(v17);
          CComposition::NotifyHelper(this, (struct MIL_MESSAGE *)&v16);
          return 0LL;
        }
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0xC0u);
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x752u);
    }
  }
  else
  {
    v14 = (char *)this + 408;
    v15 = *(struct CChannelContext ***)v14;
    if ( *((_DWORD *)v14 + 6) )
    {
      do
      {
        if ( a2 == *v15 )
          break;
        ++v4;
        ++v15;
      }
      while ( v4 < *((_DWORD *)v14 + 6) );
    }
    if ( v4 < *((_DWORD *)this + 108) && (unsigned int)DynArray<CChannelContext *,1>::Remove(v14, &v20) )
      CMILRefCountBase::Release(v20);
  }
  return 0LL;
}
