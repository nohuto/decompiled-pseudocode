/*
 * XREFs of xxxWrapSendMessageBSM @ 0x1402A1BF0
 * Callers:
 *     <none>
 * Callees:
 *     xxxSendMessageBSM @ 0x140004CE0 (xxxSendMessageBSM.c)
 *     Feature_IsPrivilegedEx__private_IsEnabledDeviceUsageNoInline @ 0x140250434 (Feature_IsPrivilegedEx__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x14034FD00 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall xxxWrapSendMessageBSM(
        struct tagWND *a1,
        unsigned int a2,
        unsigned __int64 a3,
        __int64 a4,
        volatile void *Address)
{
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // eax
  __int64 UserSessionState; // rax
  int v13; // eax
  __int64 v14; // rsi
  _OWORD Src[2]; // [rsp+70h] [rbp-68h] BYREF
  __int64 v17; // [rsp+90h] [rbp-48h]

  memset(Src, 0, sizeof(Src));
  v17 = 0LL;
  ProbeForWrite(Address, 0x28uLL, 1u);
  RtlCopyVolatileMemory(Src, (const void *)Address, 0x28uLL);
  if ( (Src[0] & 0x10) != 0 )
  {
    if ( (unsigned int)Feature_IsPrivilegedEx__private_IsEnabledDeviceUsageNoInline() )
    {
      LOBYTE(v11) = HasTcbPrivilege();
    }
    else
    {
      UserSessionState = W32GetUserSessionState(v10, v9);
      v11 = IsPrivileged(UserSessionState + 42568);
      if ( v11 )
        goto LABEL_7;
    }
    if ( !(_BYTE)v11 )
    {
      LODWORD(Src[0]) &= ~0x10u;
      RtlCopyVolatileMemory((void *)Address, Src, 0x28uLL);
    }
  }
LABEL_7:
  v13 = xxxSendMessageBSM(a1, a2, a3, a4, (struct tagBROADCASTSYSTEMMSGPARAMS *)Src, 0);
  v14 = v13;
  if ( !v13 && (BYTE4(Src[0]) & 1) != 0 )
    RtlCopyVolatileMemory((void *)Address, Src, 0x28uLL);
  return v14;
}
