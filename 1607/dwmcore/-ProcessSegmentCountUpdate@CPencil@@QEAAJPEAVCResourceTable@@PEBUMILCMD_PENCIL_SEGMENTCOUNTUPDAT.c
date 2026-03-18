/*
 * XREFs of ?ProcessSegmentCountUpdate@CPencil@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PENCIL_SEGMENTCOUNTUPDATE@@@Z @ 0x18010CCE4
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18008E37C (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18009A710 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPencil::ProcessSegmentCountUpdate(
        CPencil *this,
        struct CResourceTable *a2,
        const struct MILCMD_PENCIL_SEGMENTCOUNTUPDATE *a3)
{
  unsigned int v3; // edi
  __int64 v4; // rbx
  int v6; // ebp
  unsigned int v8; // r15d
  unsigned int v9; // r14d
  unsigned int v10; // ebp
  __int64 v11; // r12
  __int64 v12; // rbx
  int v13; // eax
  int v14; // eax

  v3 = 0;
  v4 = 0LL;
  v6 = *((_DWORD *)a3 + 2) - *((_DWORD *)this + 66);
  if ( v6 < 0 )
  {
    v8 = *((_DWORD *)this + 38);
    v9 = 0;
    if ( v8 )
    {
      v10 = *((_DWORD *)this + 66) - *((_DWORD *)a3 + 2);
      v11 = 0LL;
      while ( 1 )
      {
        v12 = *(_QWORD *)(v11 + *((_QWORD *)this + 16));
        (*(void (__fastcall **)(_QWORD, struct CResourceTable *))(**(_QWORD **)(v12 + 104) + 8LL))(
          *(_QWORD *)(v12 + 104),
          a2);
        v4 = *(_QWORD *)(v12 + 104);
        v13 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 72LL))(v4, v10);
        v3 = v13;
        if ( v13 < 0 )
          break;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
        ++v9;
        v11 += 8LL;
        if ( v9 >= v8 )
          goto LABEL_9;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x8Eu);
      goto LABEL_11;
    }
LABEL_9:
    *((_DWORD *)this + 66) = *((_DWORD *)a3 + 2);
    CResource::NotifyOnChanged(this, 0, 0LL);
    return v3;
  }
  v14 = DynArrayImpl<0>::Grow((__int64)this + 240, 0x14u, v6, 0, 0LL);
  v3 = v14;
  if ( v14 >= 0 )
    goto LABEL_9;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x95u);
LABEL_11:
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return v3;
}
