/*
 * XREFs of ?ProcessSetCallbackId@CNotificationResource@@QEAAJPEAVCResourceTable@@PEBUMILCMD_NOTIFICATIONRESOURCE_SETCALLBACKID@@@Z @ 0x180024218
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?FlushCallbackId@CMessageConversationHost@@QEAAJII@Z @ 0x1800B442C (-FlushCallbackId@CMessageConversationHost@@QEAAJII@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CNotificationResource::ProcessSetCallbackId(
        CNotificationResource *this,
        struct CResourceTable *a2,
        const struct MILCMD_NOTIFICATIONRESOURCE_SETCALLBACKID *a3)
{
  unsigned int v3; // eax
  volatile signed __int32 *v4; // rbx
  __int64 v5; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  unsigned int v11; // edi
  int v12; // ecx
  unsigned int v13; // r8d
  int v14; // eax
  unsigned int v16; // edx

  v3 = *((_DWORD *)a2 + 12);
  v4 = 0LL;
  v5 = *((_QWORD *)this + 2);
  if ( v3 < 0x10000 && v3 < *(_DWORD *)(v5 + 296) && (v8 = v3, v9 = *(_QWORD *)(v5 + 272), *(_QWORD *)(v9 + 8 * v8)) )
  {
    v4 = *(volatile signed __int32 **)(v9 + 8 * v8);
    _InterlockedIncrement(v4 + 2);
    v10 = *((_QWORD *)this + 14);
    v11 = 0;
    if ( v10 )
      v12 = *(_DWORD *)(v10 + 52);
    else
      v12 = 0;
    if ( !v12 || v4 == (volatile signed __int32 *)v10 )
    {
      v13 = *((_DWORD *)this + 30);
      if ( v13 )
      {
        if ( v10 )
          v16 = *(_DWORD *)(v10 + 52);
        else
          v16 = 0;
        CMessageConversationHost::FlushCallbackId(
          *(CMessageConversationHost **)(*((_QWORD *)this + 2) + 1232LL),
          v16,
          v13);
      }
      v14 = *((_DWORD *)a3 + 2);
      *((_DWORD *)this + 30) = v14;
      *((_QWORD *)this + 14) = (unsigned __int64)v4 & -(__int64)(v14 != 0);
    }
    else
    {
      v11 = -2147024891;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024891, 0x51u);
    }
  }
  else
  {
    v11 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0xBE7u);
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x49u);
  }
  if ( v4 && _InterlockedExchangeAdd(v4 + 2, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v4 + 16LL))(v4, 1LL);
  return v11;
}
