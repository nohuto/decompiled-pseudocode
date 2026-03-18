/*
 * XREFs of ?ProcessStartPointUpdate@CPencil@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PENCIL_STARTPOINTUPDATE@@@Z @ 0x18010CC18
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18008E37C (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPencil::ProcessStartPointUpdate(
        CPencil *this,
        struct CResourceTable *a2,
        const struct MILCMD_PENCIL_STARTPOINTUPDATE *a3)
{
  char *v3; // r14
  __int64 v4; // rsi
  unsigned int v6; // eax
  __int64 v7; // rbp
  __int64 v8; // rbx
  __int64 v9; // rbx

  v3 = (char *)this + 272;
  *((_DWORD *)this + 70) = *((_DWORD *)a3 + 4);
  v4 = 0LL;
  *((_DWORD *)this + 68) = *((_DWORD *)a3 + 2);
  *((_DWORD *)this + 69) = *((_DWORD *)a3 + 3);
  v6 = *((_DWORD *)this + 38);
  if ( v6 )
  {
    v7 = v6;
    do
    {
      v8 = *(_QWORD *)(v4 + *((_QWORD *)this + 16));
      (*(void (__fastcall **)(_QWORD, struct CResourceTable *))(**(_QWORD **)(v8 + 104) + 8LL))(
        *(_QWORD *)(v8 + 104),
        a2);
      v9 = *(_QWORD *)(v8 + 104);
      (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v9 + 32LL))(v9, v3);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      v4 += 8LL;
      --v7;
    }
    while ( v7 );
  }
  CResource::NotifyOnChanged(this, 0, 0LL);
  return 0LL;
}
